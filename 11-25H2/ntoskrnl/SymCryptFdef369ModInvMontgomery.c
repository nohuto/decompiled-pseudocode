/*
 * XREFs of SymCryptFdef369ModInvMontgomery @ 0x140536410
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipe @ 0x14051B4B4 (SymCryptWipe.c)
 *     SymCryptFdefModInvGeneric @ 0x140533860 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFdef369MontgomeryReduceAsm @ 0x1405372F0 (SymCryptFdef369MontgomeryReduceAsm.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall SymCryptFdef369ModInvMontgomery(
        __int64 a1,
        const void *a2,
        __int64 a3,
        char a4,
        void *a5,
        __int64 a6)
{
  size_t v9; // rdi

  v9 = (unsigned int)(24 * (*(_DWORD *)(a1 + 4) + 1));
  memmove(a5, a2, v9);
  SymCryptWipe((__int64)a5 + v9, (unsigned int)v9);
  SymCryptFdef369MontgomeryReduceAsm(a1, a5, a5);
  SymCryptWipe((__int64)a5 + v9, (unsigned int)v9);
  SymCryptFdef369MontgomeryReduceAsm(a1, a5, a3);
  return SymCryptFdefModInvGeneric(a1, a3, a3, a4, (__int64)a5, a6);
}
