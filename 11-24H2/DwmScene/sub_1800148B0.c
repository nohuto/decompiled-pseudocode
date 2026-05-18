/*
 * XREFs of sub_1800148B0 @ 0x1800148B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18001485C @ 0x18001485C (sub_18001485C.c)
 */

LPVOID __fastcall sub_1800148B0(LPVOID lpMem, char a2)
{
  sub_18001485C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
