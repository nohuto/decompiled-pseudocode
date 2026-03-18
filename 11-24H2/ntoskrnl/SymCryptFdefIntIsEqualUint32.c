/*
 * XREFs of SymCryptFdefIntIsEqualUint32 @ 0x14053741C
 * Callers:
 *     SymCryptIntIsEqualUint32 @ 0x140523988 (SymCryptIntIsEqualUint32.c)
 * Callees:
 *     SymCryptFdefRawIsEqualUint32 @ 0x1405375CC (SymCryptFdefRawIsEqualUint32.c)
 */

__int64 __fastcall SymCryptFdefIntIsEqualUint32(__int64 a1, unsigned int a2)
{
  return SymCryptFdefRawIsEqualUint32(a1 + 32, *(unsigned int *)(a1 + 4), a2);
}
