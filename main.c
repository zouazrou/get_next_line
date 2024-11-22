#include "get_next_line.h"
#include <fcntl.h>
int main(void)
{
    int     fd;
    char    *line;

    fd = open("file.txt", O_RDONLY);
    if (fd < 0)
    {
        printf("something is wrong !\n");
        return (0);
    }
    // line (1)
    line = get_next_line(fd);
    printf("%s", line);
    free(line);
    // line (2)
    line = get_next_line(fd);
    printf("%s", line);
    free(line);
    // line (3)
    line = get_next_line(fd);
    printf("%s", line);
    free(line);
    // line (4)
    line = get_next_line(fd);
    printf("%s", line);
    free(line);

    line = get_next_line(fd);
    printf("%s", line);
    free(line);
    // line = get_next_line(fd);
    // printf("%s", line);
    // free(line);
    printf("<%d>", BUFFER_SIZE);
    close(fd);
    return (0);
}
