/*
 * XREFs of sub_180017A70 @ 0x180017A70
 * Callers:
 *     sub_18001A9C0 @ 0x18001A9C0 (sub_18001A9C0.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800504FC @ 0x1800504FC (sub_1800504FC.c)
 */

LPVOID __fastcall sub_180017A70(LPVOID lpMem, char a2)
{
  sub_1800504FC();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
