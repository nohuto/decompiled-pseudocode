/*
 * XREFs of sub_180020A60 @ 0x180020A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180020920 @ 0x180020920 (sub_180020920.c)
 */

LPVOID __fastcall sub_180020A60(LPVOID lpMem, char a2)
{
  sub_180020920((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
