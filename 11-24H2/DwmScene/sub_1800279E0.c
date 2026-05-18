/*
 * XREFs of sub_1800279E0 @ 0x1800279E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800266BC @ 0x1800266BC (sub_1800266BC.c)
 */

LPVOID __fastcall sub_1800279E0(LPVOID lpMem, char a2)
{
  sub_1800266BC((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
