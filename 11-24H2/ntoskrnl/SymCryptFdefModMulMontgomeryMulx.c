/*
 * XREFs of SymCryptFdefModMulMontgomeryMulx @ 0x140536610
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawMulMulx @ 0x14052F940 (SymCryptFdefRawMulMulx.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x140530A30 (SymCryptFdefMontgomeryReduceMulx.c)
 */

__int64 __fastcall SymCryptFdefModMulMontgomeryMulx(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __m128i *a4,
        __m128i *a5)
{
  SymCryptFdefRawMulMulx(a2, *(_DWORD *)(a1 + 4), a3, *(unsigned int *)(a1 + 4), a5);
  return SymCryptFdefMontgomeryReduceMulx(a1, a5, a4);
}
