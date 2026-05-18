/*
 * XREFs of sub_180030C70 @ 0x180030C70
 * Callers:
 *     sub_180036400 @ 0x180036400 (sub_180036400.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800304C8 @ 0x1800304C8 (sub_1800304C8.c)
 */

_QWORD *__fastcall sub_180030C70(_QWORD *lpMem, char a2)
{
  sub_1800304C8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
