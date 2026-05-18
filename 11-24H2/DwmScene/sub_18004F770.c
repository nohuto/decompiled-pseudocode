/*
 * XREFs of sub_18004F770 @ 0x18004F770
 * Callers:
 *     sub_18004FBD0 @ 0x18004FBD0 (sub_18004FBD0.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180081FB4 @ 0x180081FB4 (sub_180081FB4.c)
 */

LPVOID __fastcall sub_18004F770(LPVOID lpMem, char a2)
{
  sub_180081FB4();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
