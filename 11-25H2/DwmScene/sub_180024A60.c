/*
 * XREFs of sub_180024A60 @ 0x180024A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180024714 @ 0x180024714 (sub_180024714.c)
 */

LPVOID __fastcall sub_180024A60(LPVOID lpMem, char a2)
{
  sub_180024714((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
