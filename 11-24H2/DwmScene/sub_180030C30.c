/*
 * XREFs of sub_180030C30 @ 0x180030C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18003017C @ 0x18003017C (sub_18003017C.c)
 */

LPVOID __fastcall sub_180030C30(LPVOID lpMem, char a2)
{
  sub_18003017C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
