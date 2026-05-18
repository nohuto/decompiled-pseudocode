/*
 * XREFs of sub_180039400 @ 0x180039400
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18003905C @ 0x18003905C (sub_18003905C.c)
 */

LPVOID __fastcall sub_180039400(LPVOID lpMem, char a2)
{
  sub_18003905C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
