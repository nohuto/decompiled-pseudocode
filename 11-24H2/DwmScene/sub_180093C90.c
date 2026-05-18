/*
 * XREFs of sub_180093C90 @ 0x180093C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180093C38 @ 0x180093C38 (sub_180093C38.c)
 */

_QWORD *__fastcall sub_180093C90(_QWORD *lpMem, char a2)
{
  sub_180093C38(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
