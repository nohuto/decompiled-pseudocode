/*
 * XREFs of sub_1800C9F30 @ 0x1800C9F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800C9EF4 @ 0x1800C9EF4 (sub_1800C9EF4.c)
 */

_QWORD *__fastcall sub_1800C9F30(_QWORD *lpMem, char a2)
{
  sub_1800C9EF4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
