/*
 * XREFs of sub_1800412D0 @ 0x1800412D0
 * Callers:
 *     sub_180041F10 @ 0x180041F10 (sub_180041F10.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180040FB0 @ 0x180040FB0 (sub_180040FB0.c)
 */

LPVOID __fastcall sub_1800412D0(LPVOID lpMem, char a2)
{
  sub_180040FB0((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
