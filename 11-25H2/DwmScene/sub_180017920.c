/*
 * XREFs of sub_180017920 @ 0x180017920
 * Callers:
 *     sub_18001A8E0 @ 0x18001A8E0 (sub_18001A8E0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180044E38 @ 0x180044E38 (sub_180044E38.c)
 */

LPVOID __fastcall sub_180017920(LPVOID lpMem, char a2)
{
  sub_180044E38();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
