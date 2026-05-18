/*
 * XREFs of sub_180093480 @ 0x180093480
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800933F0 @ 0x1800933F0 (sub_1800933F0.c)
 */

_QWORD *__fastcall sub_180093480(_QWORD *lpMem, char a2)
{
  sub_1800933F0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
