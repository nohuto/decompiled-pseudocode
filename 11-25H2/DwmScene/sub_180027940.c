/*
 * XREFs of sub_180027940 @ 0x180027940
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800265E8 @ 0x1800265E8 (sub_1800265E8.c)
 */

LPVOID __fastcall sub_180027940(LPVOID lpMem, char a2)
{
  sub_1800265E8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
