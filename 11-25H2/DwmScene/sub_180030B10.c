/*
 * XREFs of sub_180030B10 @ 0x180030B10
 * Callers:
 *     sub_1800362A0 @ 0x1800362A0 (sub_1800362A0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180030368 @ 0x180030368 (sub_180030368.c)
 */

_QWORD *__fastcall sub_180030B10(_QWORD *lpMem, char a2)
{
  sub_180030368(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
