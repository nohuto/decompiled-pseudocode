/*
 * XREFs of _strset @ 0x1404FBAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strset(char *Dest, int Value)
{
  char *result; // rax

  result = Dest;
  while ( *Dest )
    *Dest++ = Value;
  return result;
}
