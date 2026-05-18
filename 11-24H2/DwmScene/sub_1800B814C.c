/*
 * XREFs of sub_1800B814C @ 0x1800B814C
 * Callers:
 *     sub_1800B80AC @ 0x1800B80AC (sub_1800B80AC.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1800B814C(_WORD *a1, unsigned int a2)
{
  do
  {
    *--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
