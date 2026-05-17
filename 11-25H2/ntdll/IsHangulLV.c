/*
 * XREFs of IsHangulLV @ 0x1800C33E8
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800C219C (Normalization__NormalizeCharacter.c)
 *     ComposeHangulLVT @ 0x1800C3424 (ComposeHangulLVT.c)
 *     CanComposeHangul @ 0x1800C360C (CanComposeHangul.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
