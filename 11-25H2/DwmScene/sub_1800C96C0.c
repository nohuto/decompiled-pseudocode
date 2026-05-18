/*
 * XREFs of sub_1800C96C0 @ 0x1800C96C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800C9690 @ 0x1800C9690 (sub_1800C9690.c)
 */

_QWORD *__fastcall sub_1800C96C0(_QWORD *lpMem, char a2)
{
  sub_1800C9690(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
