/*
 * XREFs of SymCryptFdefIntConditionalSwap @ 0x1405371B4
 * Callers:
 *     SymCryptIntConditionalSwap @ 0x1405237FC (SymCryptIntConditionalSwap.c)
 * Callees:
 *     SymCryptFdefConditionalSwapC @ 0x140536F88 (SymCryptFdefConditionalSwapC.c)
 */

void __fastcall SymCryptFdefIntConditionalSwap(__int64 a1, __int64 a2, char a3)
{
  SymCryptFdefConditionalSwapC(a1 + 32, a2 + 32, *(_DWORD *)(a1 + 4), a3);
}
