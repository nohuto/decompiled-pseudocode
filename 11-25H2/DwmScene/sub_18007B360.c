/*
 * XREFs of sub_18007B360 @ 0x18007B360
 * Callers:
 *     sub_18007CA70 @ 0x18007CA70 (sub_18007CA70.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18007B15C @ 0x18007B15C (sub_18007B15C.c)
 */

LPVOID __fastcall sub_18007B360(LPVOID lpMem, char a2)
{
  sub_18007B15C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
