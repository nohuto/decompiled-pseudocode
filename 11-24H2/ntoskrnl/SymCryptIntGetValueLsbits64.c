/*
 * XREFs of SymCryptIntGetValueLsbits64 @ 0x140523958
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptFdefIntToModulus @ 0x140535894 (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptFdefIntGetValueLsbits64 @ 0x140537334 (SymCryptFdefIntGetValueLsbits64.c)
 */

__int64 SymCryptIntGetValueLsbits64()
{
  return SymCryptFdefIntGetValueLsbits64();
}
