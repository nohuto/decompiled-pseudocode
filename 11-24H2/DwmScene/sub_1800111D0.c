/*
 * XREFs of sub_1800111D0 @ 0x1800111D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180011084 @ 0x180011084 (sub_180011084.c)
 */

LPVOID __fastcall sub_1800111D0(LPVOID lpMem, char a2)
{
  sub_180011084((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
