/*
 * XREFs of SymCryptFdefModElementMaskedCopy @ 0x140535D60
 * Callers:
 *     SymCryptModElementMaskedCopy @ 0x140523C54 (SymCryptModElementMaskedCopy.c)
 * Callees:
 *     SymCryptFdefMaskedCopy @ 0x140537504 (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptFdefModElementMaskedCopy(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefMaskedCopy(a2, a3, *(unsigned int *)(a1 + 4));
}
