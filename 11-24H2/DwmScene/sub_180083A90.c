/*
 * XREFs of sub_180083A90 @ 0x180083A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800839EC @ 0x1800839EC (sub_1800839EC.c)
 */

_QWORD *__fastcall sub_180083A90(_QWORD *lpMem, char a2)
{
  sub_1800839EC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
