/*
 * XREFs of sub_18002A010 @ 0x18002A010
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180029D70 @ 0x180029D70 (sub_180029D70.c)
 */

_QWORD *__fastcall sub_18002A010(_QWORD *lpMem, char a2)
{
  sub_180029D70(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
