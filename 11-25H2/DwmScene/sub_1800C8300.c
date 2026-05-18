/*
 * XREFs of sub_1800C8300 @ 0x1800C8300
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800C8048 @ 0x1800C8048 (sub_1800C8048.c)
 */

_QWORD *__fastcall sub_1800C8300(_QWORD *lpMem, char a2)
{
  sub_1800C8048(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
