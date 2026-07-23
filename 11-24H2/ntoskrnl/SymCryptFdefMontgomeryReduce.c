/*
 * XREFs of SymCryptFdefMontgomeryReduce @ 0x1405312C0
 * Callers:
 *     SymCryptFdefModInvMontgomery @ 0x140530830 (SymCryptFdefModInvMontgomery.c)
 *     SymCryptFdefModMulMontgomery @ 0x140530A50 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModPreGetMontgomery @ 0x140530C10 (SymCryptFdefModPreGetMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x140530CD0 (SymCryptFdefModSetPostMontgomery.c)
 *     SymCryptFdefModSquareMontgomery @ 0x140530F50 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404881BC (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x14052AED0 (SymCryptFdefMontgomeryReduceMulx.c)
 *     SymCryptFdefMontgomeryReduceAsm @ 0x140532810 (SymCryptFdefMontgomeryReduceAsm.c)
 */

__int64 __fastcall SymCryptFdefMontgomeryReduce(__int64 a1, __m128i *a2, __m128i *a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefMontgomeryReduceAsm(a1, a2, a3);
  else
    return SymCryptFdefMontgomeryReduceMulx(a1, a2, a3);
}
