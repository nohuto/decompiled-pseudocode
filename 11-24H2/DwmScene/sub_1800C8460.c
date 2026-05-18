/*
 * XREFs of sub_1800C8460 @ 0x1800C8460
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800C81A8 @ 0x1800C81A8 (sub_1800C81A8.c)
 */

_QWORD *__fastcall sub_1800C8460(_QWORD *lpMem, char a2)
{
  sub_1800C81A8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
