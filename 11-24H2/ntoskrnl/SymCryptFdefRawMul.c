/*
 * XREFs of SymCryptFdefRawMul @ 0x140529B0C
 * Callers:
 *     SymCryptFdefIntMulMixedSize @ 0x14052947C (SymCryptFdefIntMulMixedSize.c)
 *     SymCryptFdefModMulGeneric @ 0x140530990 (SymCryptFdefModMulGeneric.c)
 *     SymCryptFdefModMulMontgomery @ 0x140530A50 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x140530CD0 (SymCryptFdefModSetPostMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404881BC (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawMulMulx @ 0x140529DE0 (SymCryptFdefRawMulMulx.c)
 *     SymCryptFdefRawMulAsm @ 0x140532220 (SymCryptFdefRawMulAsm.c)
 */

__int64 __fastcall SymCryptFdefRawMul(int a1, int a2, int a3, int a4, __int64 a5)
{
  if ( (((unsigned __int16)g_SymCryptCpuFeaturesNotPresent | (unsigned __int16)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawMulAsm(a1, a2, a3, a4, a5);
  else
    return SymCryptFdefRawMulMulx(a1, a2, a3, a4, a5);
}
