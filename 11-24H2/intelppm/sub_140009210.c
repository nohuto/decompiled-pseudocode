/*
 * XREFs of sub_140009210 @ 0x140009210
 * Callers:
 *     <none>
 * Callees:
 *     sub_140008ECC @ 0x140008ECC (sub_140008ECC.c)
 */

__int64 __fastcall sub_140009210(__int64 *a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  while ( a2 > 0x7F )
  {
    ++v2;
    a2 /= 0xAu;
  }
  return sub_140008ECC(*a1, (char *)(a1[18] + 392), a2 & 0x7F | (unsigned __int64)((unsigned __int8)(v2 & 7) << 7));
}
