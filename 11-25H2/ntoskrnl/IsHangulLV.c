/*
 * XREFs of IsHangulLV @ 0x1405E326C
 * Callers:
 *     CanComposeHangul @ 0x1405E31C0 (CanComposeHangul.c)
 *     ComposeHangulLVT @ 0x1405E3234 (ComposeHangulLVT.c)
 *     Normalization__NormalizeCharacter @ 0x140777294 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHangulLV(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 - 44032;
  return v1 <= 0x2BA3 && v1 == 28 * ((int)v1 / 28);
}
