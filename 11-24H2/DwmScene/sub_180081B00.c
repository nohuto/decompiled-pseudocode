/*
 * XREFs of sub_180081B00 @ 0x180081B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180081AC8 @ 0x180081AC8 (sub_180081AC8.c)
 */

_QWORD *__fastcall sub_180081B00(_QWORD *lpMem, char a2)
{
  sub_180081AC8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
