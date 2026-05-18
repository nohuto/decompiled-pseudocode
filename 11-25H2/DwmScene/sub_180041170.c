/*
 * XREFs of sub_180041170 @ 0x180041170
 * Callers:
 *     sub_180041DB0 @ 0x180041DB0 (sub_180041DB0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180040E50 @ 0x180040E50 (sub_180040E50.c)
 */

LPVOID __fastcall sub_180041170(LPVOID lpMem, char a2)
{
  sub_180040E50((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
