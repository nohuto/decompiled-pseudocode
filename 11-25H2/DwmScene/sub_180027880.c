/*
 * XREFs of sub_180027880 @ 0x180027880
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18002655C @ 0x18002655C (sub_18002655C.c)
 */

LPVOID __fastcall sub_180027880(LPVOID lpMem, char a2)
{
  sub_18002655C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
