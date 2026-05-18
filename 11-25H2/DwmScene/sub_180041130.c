/*
 * XREFs of sub_180041130 @ 0x180041130
 * Callers:
 *     sub_18005C2C0 @ 0x18005C2C0 (sub_18005C2C0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180040DC4 @ 0x180040DC4 (sub_180040DC4.c)
 */

LPVOID __fastcall sub_180041130(LPVOID lpMem, char a2)
{
  sub_180040DC4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
