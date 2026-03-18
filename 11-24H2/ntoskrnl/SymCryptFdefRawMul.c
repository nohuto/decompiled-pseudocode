/*
 * XREFs of SymCryptFdefRawMul @ 0x14052F664
 * Callers:
 *     SymCryptFdefIntMulMixedSize @ 0x14052EFD4 (SymCryptFdefIntMulMixedSize.c)
 *     SymCryptFdefModMulGeneric @ 0x1405364F0 (SymCryptFdefModMulGeneric.c)
 *     SymCryptFdefModMulMontgomery @ 0x1405365B0 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x140536830 (SymCryptFdefModSetPostMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14048D93C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawMulMulx @ 0x14052F940 (SymCryptFdefRawMulMulx.c)
 *     SymCryptFdefRawMulAsm @ 0x140537D80 (SymCryptFdefRawMulAsm.c)
 */

__int64 __fastcall SymCryptFdefRawMul(int a1, int a2, int a3, int a4, __int64 a5)
{
  if ( (((unsigned __int16)g_SymCryptCpuFeaturesNotPresent | (unsigned __int16)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawMulAsm(a1, a2, a3, a4, a5);
  else
    return SymCryptFdefRawMulMulx(a1, a2, a3, a4, a5);
}
