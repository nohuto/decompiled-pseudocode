/*
 * XREFs of SymCryptIntAllocate @ 0x1405210B4
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x14052704C (SymCryptEcDsaSelftest.c)
 * Callees:
 *     SymCryptFdefIntAllocate @ 0x14053153C (SymCryptFdefIntAllocate.c)
 */

__int64 SymCryptIntAllocate()
{
  return SymCryptFdefIntAllocate();
}
