/*
 * XREFs of sub_1800BEE20 @ 0x1800BEE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800BED78 @ 0x1800BED78 (sub_1800BED78.c)
 */

_QWORD *__fastcall sub_1800BEE20(_QWORD *lpMem, char a2)
{
  sub_1800BED78(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
