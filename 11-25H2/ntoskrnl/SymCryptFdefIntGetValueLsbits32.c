/*
 * XREFs of SymCryptFdefIntGetValueLsbits32 @ 0x140520364
 * Callers:
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptIntGetValueLsbits32 @ 0x1405211BC (SymCryptIntGetValueLsbits32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntGetValueLsbits32(__int64 a1)
{
  return *(unsigned int *)(a1 + 32);
}
