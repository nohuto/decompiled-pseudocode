/*
 * XREFs of SymCryptIntAllocate @ 0x14052379C
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x14052972C (SymCryptEcDsaSelftest.c)
 * Callees:
 *     SymCryptFdefIntAllocate @ 0x14053709C (SymCryptFdefIntAllocate.c)
 */

__int64 SymCryptIntAllocate()
{
  return SymCryptFdefIntAllocate();
}
