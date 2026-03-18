/*
 * XREFs of SymCryptInverseMod2e64 @ 0x1405376E0
 * Callers:
 *     SymCryptFdefIntToModulus @ 0x140535894 (SymCryptFdefIntToModulus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptInverseMod2e64(__int64 a1)
{
  int v1; // r8d
  int v2; // r8d

  v1 = a1 ^ (6 * (_BYTE)a1 - 6) & 8;
  v2 = (2 - (2 - v1 * a1) * v1 * a1) * (2 - v1 * a1) * v1;
  return (2 - a1 * (unsigned int)(v2 * (2 - v2 * a1))) * (unsigned int)(v2 * (2 - v2 * a1));
}
