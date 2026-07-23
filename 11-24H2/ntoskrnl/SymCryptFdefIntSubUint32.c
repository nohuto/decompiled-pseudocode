/*
 * XREFs of SymCryptFdefIntSubUint32 @ 0x1405296D0
 * Callers:
 *     SymCryptIntSubUint32 @ 0x1405213B0 (SymCryptIntSubUint32.c)
 * Callees:
 *     SymCryptFdefRawSubUint32 @ 0x140529CC4 (SymCryptFdefRawSubUint32.c)
 */

__int64 __fastcall SymCryptFdefIntSubUint32(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefRawSubUint32(a1 + 32, a2, a3 + 32, *(unsigned int *)(a3 + 4));
}
