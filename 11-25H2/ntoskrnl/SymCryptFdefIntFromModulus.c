/*
 * XREFs of SymCryptFdefIntFromModulus @ 0x140533040
 * Callers:
 *     SymCryptIntFromModulus @ 0x14052115C (SymCryptIntFromModulus.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x14052C6C8 (SymCryptFdefIntFromDivisor.c)
 */

__int64 __fastcall SymCryptFdefIntFromModulus(__int64 a1)
{
  return SymCryptFdefIntFromDivisor(a1 + 64);
}
