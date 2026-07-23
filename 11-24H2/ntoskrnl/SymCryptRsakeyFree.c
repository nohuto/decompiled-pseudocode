/*
 * XREFs of SymCryptRsakeyFree @ 0x14051F434
 * Callers:
 *     SymCryptRsaSelftest @ 0x140527228 (SymCryptRsaSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x1406A6848 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptRsakeyFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 4));
  return SymCryptCallbackFree(a1);
}
