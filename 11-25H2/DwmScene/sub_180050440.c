/*
 * XREFs of sub_180050440 @ 0x180050440
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180050358 @ 0x180050358 (sub_180050358.c)
 */

_QWORD *__fastcall sub_180050440(_QWORD *lpMem, char a2)
{
  sub_180050358(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
