/*
 * XREFs of SymCryptFdefModElementConditionalSwap @ 0x140530064
 * Callers:
 *     SymCryptModElementConditionalSwap @ 0x1405214C0 (SymCryptModElementConditionalSwap.c)
 * Callees:
 *     SymCryptFdefConditionalSwap @ 0x140531410 (SymCryptFdefConditionalSwap.c)
 */

__int64 __fastcall SymCryptFdefModElementConditionalSwap(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefConditionalSwap(a2, a3, *(unsigned int *)(a1 + 4));
}
