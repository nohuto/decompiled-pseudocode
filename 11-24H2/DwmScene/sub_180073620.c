/*
 * XREFs of sub_180073620 @ 0x180073620
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800735B4 @ 0x1800735B4 (sub_1800735B4.c)
 */

LPVOID __fastcall sub_180073620(LPVOID lpMem, char a2)
{
  sub_1800735B4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
