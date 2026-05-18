/*
 * XREFs of sub_180092DF0 @ 0x180092DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180092D00 @ 0x180092D00 (sub_180092D00.c)
 */

_QWORD *__fastcall sub_180092DF0(_QWORD *lpMem, char a2)
{
  sub_180092D00(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
