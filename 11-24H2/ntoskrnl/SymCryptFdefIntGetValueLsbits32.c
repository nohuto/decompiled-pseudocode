/*
 * XREFs of SymCryptFdefIntGetValueLsbits32 @ 0x1405203F8
 * Callers:
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptIntGetValueLsbits32 @ 0x140521258 (SymCryptIntGetValueLsbits32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntGetValueLsbits32(__int64 a1)
{
  return *(unsigned int *)(a1 + 32);
}
