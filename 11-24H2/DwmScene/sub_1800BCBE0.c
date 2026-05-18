/*
 * XREFs of sub_1800BCBE0 @ 0x1800BCBE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800BCB30 @ 0x1800BCB30 (sub_1800BCB30.c)
 */

LPVOID __fastcall sub_1800BCBE0(LPVOID lpMem, char a2)
{
  sub_1800BCB30((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
