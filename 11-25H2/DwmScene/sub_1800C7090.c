/*
 * XREFs of sub_1800C7090 @ 0x1800C7090
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800C7050 @ 0x1800C7050 (sub_1800C7050.c)
 */

_QWORD *__fastcall sub_1800C7090(_QWORD *lpMem, char a2)
{
  sub_1800C7050(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
