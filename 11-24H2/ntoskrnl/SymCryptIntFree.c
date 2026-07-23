/*
 * XREFs of SymCryptIntFree @ 0x1405211B8
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x14052704C (SymCryptEcDsaSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x1406A6848 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptIntFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 8));
  return SymCryptCallbackFree(a1);
}
