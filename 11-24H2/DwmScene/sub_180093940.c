/*
 * XREFs of sub_180093940 @ 0x180093940
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18009385C @ 0x18009385C (sub_18009385C.c)
 */

_QWORD *__fastcall sub_180093940(_QWORD *lpMem, char a2)
{
  sub_18009385C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
