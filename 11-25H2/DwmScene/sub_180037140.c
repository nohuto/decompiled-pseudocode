/*
 * XREFs of sub_180037140 @ 0x180037140
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800370B0 @ 0x1800370B0 (sub_1800370B0.c)
 */

_QWORD *__fastcall sub_180037140(_QWORD *lpMem, char a2)
{
  sub_1800370B0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
