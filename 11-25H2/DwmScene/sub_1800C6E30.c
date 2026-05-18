/*
 * XREFs of sub_1800C6E30 @ 0x1800C6E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800C6DF4 @ 0x1800C6DF4 (sub_1800C6DF4.c)
 */

_QWORD *__fastcall sub_1800C6E30(_QWORD *lpMem, char a2)
{
  sub_1800C6DF4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
