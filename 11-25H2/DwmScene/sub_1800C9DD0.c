/*
 * XREFs of sub_1800C9DD0 @ 0x1800C9DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800C9D94 @ 0x1800C9D94 (sub_1800C9D94.c)
 */

_QWORD *__fastcall sub_1800C9DD0(_QWORD *lpMem, char a2)
{
  sub_1800C9D94(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
