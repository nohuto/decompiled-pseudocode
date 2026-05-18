/*
 * XREFs of sub_1800B8DD0 @ 0x1800B8DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800B8700 @ 0x1800B8700 (sub_1800B8700.c)
 */

LPVOID __fastcall sub_1800B8DD0(LPVOID lpMem, char a2)
{
  sub_1800B8700((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
