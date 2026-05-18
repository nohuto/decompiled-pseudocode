/*
 * XREFs of sub_180093E30 @ 0x180093E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180093D1C @ 0x180093D1C (sub_180093D1C.c)
 */

_QWORD *__fastcall sub_180093E30(_QWORD *lpMem, char a2)
{
  sub_180093D1C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
