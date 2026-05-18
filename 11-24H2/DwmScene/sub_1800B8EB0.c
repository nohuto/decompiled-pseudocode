/*
 * XREFs of sub_1800B8EB0 @ 0x1800B8EB0
 * Callers:
 *     sub_1800BB710 @ 0x1800BB710 (sub_1800BB710.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800B87E8 @ 0x1800B87E8 (sub_1800B87E8.c)
 */

_QWORD *__fastcall sub_1800B8EB0(_QWORD *lpMem, char a2)
{
  sub_1800B87E8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
