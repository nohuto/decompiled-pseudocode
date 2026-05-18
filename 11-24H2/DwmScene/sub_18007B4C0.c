/*
 * XREFs of sub_18007B4C0 @ 0x18007B4C0
 * Callers:
 *     sub_18007CBD0 @ 0x18007CBD0 (sub_18007CBD0.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18007B2BC @ 0x18007B2BC (sub_18007B2BC.c)
 */

LPVOID __fastcall sub_18007B4C0(LPVOID lpMem, char a2)
{
  sub_18007B2BC((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
