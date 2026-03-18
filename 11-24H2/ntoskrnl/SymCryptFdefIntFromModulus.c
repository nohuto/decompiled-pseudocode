/*
 * XREFs of SymCryptFdefIntFromModulus @ 0x1405357F0
 * Callers:
 *     SymCryptIntFromModulus @ 0x1405238E0 (SymCryptIntFromModulus.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x14052EE78 (SymCryptFdefIntFromDivisor.c)
 */

__int64 __fastcall SymCryptFdefIntFromModulus(__int64 a1)
{
  return SymCryptFdefIntFromDivisor(a1 + 64);
}
