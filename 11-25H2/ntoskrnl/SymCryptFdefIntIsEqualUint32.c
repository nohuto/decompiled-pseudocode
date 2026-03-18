/*
 * XREFs of SymCryptFdefIntIsEqualUint32 @ 0x140534C6C
 * Callers:
 *     SymCryptIntIsEqualUint32 @ 0x140521204 (SymCryptIntIsEqualUint32.c)
 * Callees:
 *     SymCryptFdefRawIsEqualUint32 @ 0x140534E1C (SymCryptFdefRawIsEqualUint32.c)
 */

__int64 __fastcall SymCryptFdefIntIsEqualUint32(__int64 a1, unsigned int a2)
{
  return SymCryptFdefRawIsEqualUint32(a1 + 32, *(unsigned int *)(a1 + 4), a2);
}
