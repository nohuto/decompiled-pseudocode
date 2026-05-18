/*
 * XREFs of sub_18005F4D0 @ 0x18005F4D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18005EB98 @ 0x18005EB98 (sub_18005EB98.c)
 */

LPVOID __fastcall sub_18005F4D0(LPVOID lpMem, char a2)
{
  sub_18005EB98((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
