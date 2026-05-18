/*
 * XREFs of sub_1800411F0 @ 0x1800411F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180040E9C @ 0x180040E9C (sub_180040E9C.c)
 */

_QWORD *__fastcall sub_1800411F0(_QWORD *lpMem, char a2)
{
  sub_180040E9C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
