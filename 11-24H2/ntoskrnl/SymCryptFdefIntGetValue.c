/*
 * XREFs of SymCryptFdefIntGetValue @ 0x140537308
 * Callers:
 *     SymCryptIntGetValue @ 0x140523928 (SymCryptIntGetValue.c)
 * Callees:
 *     SymCryptFdefRawGetValue @ 0x14053751C (SymCryptFdefRawGetValue.c)
 */

__int64 __fastcall SymCryptFdefIntGetValue(__int64 a1, int a2, int a3, int a4)
{
  return SymCryptFdefRawGetValue((int)a1 + 32, *(_DWORD *)(a1 + 4), a2, a3, a4);
}
