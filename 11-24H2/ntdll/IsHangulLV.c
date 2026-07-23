/*
 * XREFs of IsHangulLV @ 0x1800B6148
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800B4EFC (Normalization__NormalizeCharacter.c)
 *     ComposeHangulLVT @ 0x1800B6184 (ComposeHangulLVT.c)
 *     CanComposeHangul @ 0x1800B636C (CanComposeHangul.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
