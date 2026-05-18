/*
 * XREFs of sub_1800179E0 @ 0x1800179E0
 * Callers:
 *     sub_18001A9A0 @ 0x18001A9A0 (sub_18001A9A0.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180044F98 @ 0x180044F98 (sub_180044F98.c)
 */

LPVOID __fastcall sub_1800179E0(LPVOID lpMem, char a2)
{
  sub_180044F98();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
