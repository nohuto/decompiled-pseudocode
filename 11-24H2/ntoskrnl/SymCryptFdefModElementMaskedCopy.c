/*
 * XREFs of SymCryptFdefModElementMaskedCopy @ 0x140530200
 * Callers:
 *     SymCryptModElementMaskedCopy @ 0x14052156C (SymCryptModElementMaskedCopy.c)
 * Callees:
 *     SymCryptFdefMaskedCopy @ 0x1405319A4 (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptFdefModElementMaskedCopy(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefMaskedCopy(a2, a3, *(unsigned int *)(a1 + 4));
}
