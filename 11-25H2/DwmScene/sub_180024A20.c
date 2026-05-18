/*
 * XREFs of sub_180024A20 @ 0x180024A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800246E0 @ 0x1800246E0 (sub_1800246E0.c)
 */

LPVOID __fastcall sub_180024A20(LPVOID lpMem, char a2)
{
  sub_1800246E0((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
