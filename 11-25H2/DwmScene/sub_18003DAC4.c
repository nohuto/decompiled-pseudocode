/*
 * XREFs of sub_18003DAC4 @ 0x18003DAC4
 * Callers:
 *     sub_18003D7D8 @ 0x18003D7D8 (sub_18003D7D8.c)
 *     sub_18003FF30 @ 0x18003FF30 (sub_18003FF30.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18003D924 @ 0x18003D924 (sub_18003D924.c)
 */

LPVOID __fastcall sub_18003DAC4(LPVOID lpMem)
{
  sub_18003D924((__int64)lpMem);
  sub_18000B77C(lpMem);
  return lpMem;
}
