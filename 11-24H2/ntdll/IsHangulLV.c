/*
 * XREFs of IsHangulLV @ 0x1800BE388
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800BD13C (Normalization__NormalizeCharacter.c)
 *     ComposeHangulLVT @ 0x1800BE3C4 (ComposeHangulLVT.c)
 *     CanComposeHangul @ 0x1800BE5AC (CanComposeHangul.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  return (unsigned int)(a1 - 44032) <= 0x2BA3 && a1 - 44032 == 28 * ((a1 - 44032) / 28);
}
