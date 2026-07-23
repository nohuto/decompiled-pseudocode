/*
 * XREFs of SymCryptFdefIntNeg @ 0x14052951C
 * Callers:
 *     SymCryptIntNeg @ 0x140521308 (SymCryptIntNeg.c)
 * Callees:
 *     SymCryptFdefRawNeg @ 0x140529C18 (SymCryptFdefRawNeg.c)
 */

__int64 __fastcall SymCryptFdefIntNeg(__int64 a1, __int64 a2)
{
  return SymCryptFdefRawNeg(a1 + 32, 0LL, a2 + 32, *(unsigned int *)(a2 + 4));
}
