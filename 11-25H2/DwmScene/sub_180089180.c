/*
 * XREFs of sub_180089180 @ 0x180089180
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800890DC @ 0x1800890DC (sub_1800890DC.c)
 */

_QWORD *__fastcall sub_180089180(_QWORD *lpMem, char a2)
{
  sub_1800890DC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
