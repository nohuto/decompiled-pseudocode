/*
 * XREFs of sub_18003DC24 @ 0x18003DC24
 * Callers:
 *     sub_18003D938 @ 0x18003D938 (sub_18003D938.c)
 *     sub_180040090 @ 0x180040090 (sub_180040090.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18003DA84 @ 0x18003DA84 (sub_18003DA84.c)
 */

LPVOID __fastcall sub_18003DC24(LPVOID lpMem)
{
  sub_18003DA84((__int64)lpMem);
  sub_18000BB4C(lpMem);
  return lpMem;
}
