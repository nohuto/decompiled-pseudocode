/*
 * XREFs of SymCryptFdefIntGetValueLsbits32 @ 0x140522AE4
 * Callers:
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptIntGetValueLsbits32 @ 0x140523940 (SymCryptIntGetValueLsbits32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntGetValueLsbits32(__int64 a1)
{
  return *(unsigned int *)(a1 + 32);
}
