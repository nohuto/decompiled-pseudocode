/*
 * XREFs of sub_1800C7C20 @ 0x1800C7C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800C7BD8 @ 0x1800C7BD8 (sub_1800C7BD8.c)
 */

_QWORD *__fastcall sub_1800C7C20(_QWORD *lpMem, char a2)
{
  sub_1800C7BD8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
