/*
 * XREFs of ComposeHangulLVT @ 0x1405ECB28
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x140786414 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     IsHangulLV @ 0x1405ECB60 (IsHangulLV.c)
 */

__int64 __fastcall ComposeHangulLVT(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // r8d
  int v4; // r9d

  if ( (unsigned int)(a2 - 4520) > 0x1A )
    return 0LL;
  v2 = IsHangulLV(a1, a2, (unsigned int)a1);
  return (v4 + v3) & (unsigned int)-(v2 != 0);
}
