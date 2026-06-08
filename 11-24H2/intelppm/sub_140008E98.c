/*
 * XREFs of sub_140008E98 @ 0x140008E98
 * Callers:
 *     sub_140008ECC @ 0x140008ECC (sub_140008ECC.c)
 *     sub_140009400 @ 0x140009400 (sub_140009400.c)
 * Callees:
 *     sub_14000170C @ 0x14000170C (sub_14000170C.c)
 *     sub_140008DF8 @ 0x140008DF8 (sub_140008DF8.c)
 */

__int64 __fastcall sub_140008E98(unsigned int a1, char *a2, __int64 a3)
{
  char v4; // dl

  v4 = *a2;
  if ( v4 == 1 || v4 == 127 )
    return sub_140008DF8(a1, a2, a3);
  else
    return sub_14000170C(a2, a3);
}
