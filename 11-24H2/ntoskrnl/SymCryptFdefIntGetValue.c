/*
 * XREFs of SymCryptFdefIntGetValue @ 0x1405317A8
 * Callers:
 *     SymCryptIntGetValue @ 0x140521240 (SymCryptIntGetValue.c)
 * Callees:
 *     SymCryptFdefRawGetValue @ 0x1405319BC (SymCryptFdefRawGetValue.c)
 */

__int64 __fastcall SymCryptFdefIntGetValue(__int64 a1, int a2, int a3, int a4)
{
  return SymCryptFdefRawGetValue((int)a1 + 32, *(_DWORD *)(a1 + 4), a2, a3, a4);
}
