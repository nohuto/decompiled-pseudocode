/*
 * XREFs of ComposeHangulLVT @ 0x1800BE3C4
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800BD13C (Normalization__NormalizeCharacter.c)
 * Callees:
 *     IsHangulLV @ 0x1800BE388 (IsHangulLV.c)
 */

__int64 __fastcall ComposeHangulLVT(int a1, int a2)
{
  bool v3; // al
  int v4; // r8d
  int v5; // r9d

  if ( (unsigned int)(a2 - 4520) > 0x1A )
    return 0LL;
  v3 = IsHangulLV(a1);
  return (v5 + v4) & (unsigned int)-v3;
}
