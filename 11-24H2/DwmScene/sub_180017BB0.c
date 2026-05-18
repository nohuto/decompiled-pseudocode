/*
 * XREFs of sub_180017BB0 @ 0x180017BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18001ABFC @ 0x18001ABFC (sub_18001ABFC.c)
 */

LPVOID __fastcall sub_180017BB0(LPVOID lpMem, char a2)
{
  sub_18001ABFC();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
