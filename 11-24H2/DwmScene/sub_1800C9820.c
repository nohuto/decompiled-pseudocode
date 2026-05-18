/*
 * XREFs of sub_1800C9820 @ 0x1800C9820
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800C97F0 @ 0x1800C97F0 (sub_1800C97F0.c)
 */

_QWORD *__fastcall sub_1800C9820(_QWORD *lpMem, char a2)
{
  sub_1800C97F0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
