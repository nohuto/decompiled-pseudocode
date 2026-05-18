/*
 * XREFs of sub_180030AD0 @ 0x180030AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18003001C @ 0x18003001C (sub_18003001C.c)
 */

LPVOID __fastcall sub_180030AD0(LPVOID lpMem, char a2)
{
  sub_18003001C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
