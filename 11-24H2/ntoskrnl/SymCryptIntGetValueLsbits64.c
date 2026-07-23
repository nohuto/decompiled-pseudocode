/*
 * XREFs of SymCryptIntGetValueLsbits64 @ 0x140521270
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptFdefIntToModulus @ 0x14052FD34 (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptFdefIntGetValueLsbits64 @ 0x1405317D4 (SymCryptFdefIntGetValueLsbits64.c)
 */

__int64 SymCryptIntGetValueLsbits64()
{
  return SymCryptFdefIntGetValueLsbits64();
}
