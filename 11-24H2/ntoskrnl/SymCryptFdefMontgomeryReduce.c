/*
 * XREFs of SymCryptFdefMontgomeryReduce @ 0x140536E20
 * Callers:
 *     SymCryptFdefModInvMontgomery @ 0x140536390 (SymCryptFdefModInvMontgomery.c)
 *     SymCryptFdefModMulMontgomery @ 0x1405365B0 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModPreGetMontgomery @ 0x140536770 (SymCryptFdefModPreGetMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x140536830 (SymCryptFdefModSetPostMontgomery.c)
 *     SymCryptFdefModSquareMontgomery @ 0x140536AB0 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14048D93C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x140530A30 (SymCryptFdefMontgomeryReduceMulx.c)
 *     SymCryptFdefMontgomeryReduceAsm @ 0x140538370 (SymCryptFdefMontgomeryReduceAsm.c)
 */

__int64 __fastcall SymCryptFdefMontgomeryReduce(__int64 a1, __m128i *a2, __m128i *a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefMontgomeryReduceAsm(a1, a2, a3);
  else
    return SymCryptFdefMontgomeryReduceMulx(a1, a2, a3);
}
