/*
 * XREFs of SymCryptFdefIntConditionalCopy @ 0x140537184
 * Callers:
 *     SymCryptIntConditionalCopy @ 0x1405237E4 (SymCryptIntConditionalCopy.c)
 * Callees:
 *     SymCryptFdefMaskedCopyAsm @ 0x140537D20 (SymCryptFdefMaskedCopyAsm.c)
 */

__int64 __fastcall SymCryptFdefIntConditionalCopy(__int64 a1, __int64 a2, unsigned int a3)
{
  return SymCryptFdefMaskedCopyAsm(a1 + 32, a2 + 32, *(unsigned int *)(a1 + 4), (unsigned __int64)-(__int64)a3 >> 32);
}
