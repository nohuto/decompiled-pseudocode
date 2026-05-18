/*
 * XREFs of sub_1800932B0 @ 0x1800932B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800931C8 @ 0x1800931C8 (sub_1800931C8.c)
 */

_QWORD *__fastcall sub_1800932B0(_QWORD *lpMem, char a2)
{
  sub_1800931C8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
