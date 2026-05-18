/*
 * XREFs of sub_180093F90 @ 0x180093F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180093E7C @ 0x180093E7C (sub_180093E7C.c)
 */

_QWORD *__fastcall sub_180093F90(_QWORD *lpMem, char a2)
{
  sub_180093E7C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
