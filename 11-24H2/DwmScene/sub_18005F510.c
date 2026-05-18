/*
 * XREFs of sub_18005F510 @ 0x18005F510
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18005EBE0 @ 0x18005EBE0 (sub_18005EBE0.c)
 */

LPVOID __fastcall sub_18005F510(LPVOID lpMem, char a2)
{
  sub_18005EBE0((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
