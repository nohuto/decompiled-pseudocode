/*
 * XREFs of sub_18005F3B0 @ 0x18005F3B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18005EA80 @ 0x18005EA80 (sub_18005EA80.c)
 */

LPVOID __fastcall sub_18005F3B0(LPVOID lpMem, char a2)
{
  sub_18005EA80((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
