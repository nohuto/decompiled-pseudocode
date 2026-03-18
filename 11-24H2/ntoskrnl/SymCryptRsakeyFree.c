/*
 * XREFs of SymCryptRsakeyFree @ 0x140521AE0
 * Callers:
 *     SymCryptRsaSelftest @ 0x140529908 (SymCryptRsaSelftest.c)
 * Callees:
 *     SymCryptWipe @ 0x14051DC34 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x1406A5848 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptRsakeyFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 4));
  return SymCryptCallbackFree(a1);
}
