/*
 * XREFs of IsHangulLV @ 0x1405ECB60
 * Callers:
 *     CanComposeHangul @ 0x1405ECAB4 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1405ECB28 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x140786414 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
