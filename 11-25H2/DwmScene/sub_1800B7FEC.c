/*
 * XREFs of sub_1800B7FEC @ 0x1800B7FEC
 * Callers:
 *     sub_1800B7F4C @ 0x1800B7F4C (sub_1800B7F4C.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1800B7FEC(_WORD *a1, unsigned int a2)
{
  do
  {
    *--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
