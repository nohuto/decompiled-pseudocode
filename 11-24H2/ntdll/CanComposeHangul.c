/*
 * XREFs of CanComposeHangul @ 0x1800B636C
 * Callers:
 *     Normalization__IsNormalized @ 0x1800B4174 (Normalization__IsNormalized.c)
 * Callees:
 *     IsHangulLV @ 0x1800B6148 (IsHangulLV.c)
 */

char __fastcall CanComposeHangul(int a1, int a2)
{
  bool v2; // al
  int v3; // r8d
  char v4; // cl

  if ( (unsigned int)(a1 - 4352) <= 0x12 && (unsigned int)(a2 - 4449) <= 0x14 )
    return 1;
  v2 = IsHangulLV(a1);
  v4 = 0;
  if ( v2 && (unsigned int)(v3 - 4520) <= 0x1A )
    return 1;
  return v4;
}
