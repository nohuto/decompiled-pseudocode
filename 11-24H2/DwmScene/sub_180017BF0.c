/*
 * XREFs of sub_180017BF0 @ 0x180017BF0
 * Callers:
 *     sub_18001A9E0 @ 0x18001A9E0 (sub_18001A9E0.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18005157C @ 0x18005157C (sub_18005157C.c)
 */

LPVOID __fastcall sub_180017BF0(LPVOID lpMem, char a2)
{
  sub_18005157C();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
