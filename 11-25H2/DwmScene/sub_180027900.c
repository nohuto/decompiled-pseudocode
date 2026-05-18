/*
 * XREFs of sub_180027900 @ 0x180027900
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800277F8 @ 0x1800277F8 (sub_1800277F8.c)
 */

LPVOID __fastcall sub_180027900(LPVOID lpMem, char a2)
{
  sub_1800277F8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
