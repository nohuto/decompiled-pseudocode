/*
 * XREFs of SymCryptFdefModSquareMontgomeryMulx @ 0x140530FA0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawSquareMulx @ 0x14052A420 (SymCryptFdefRawSquareMulx.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x14052AED0 (SymCryptFdefMontgomeryReduceMulx.c)
 */

__int64 __fastcall SymCryptFdefModSquareMontgomeryMulx(__int64 a1, __int64 a2, __m128i *a3, __m128i *a4)
{
  SymCryptFdefRawSquareMulx(a2, *(unsigned int *)(a1 + 4), a4->m128i_i64);
  return SymCryptFdefMontgomeryReduceMulx(a1, a4, a3);
}
