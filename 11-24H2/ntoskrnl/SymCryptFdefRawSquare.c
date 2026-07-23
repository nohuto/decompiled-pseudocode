/*
 * XREFs of SymCryptFdefRawSquare @ 0x140529C58
 * Callers:
 *     SymCryptFdefModSquareGeneric @ 0x140530EB0 (SymCryptFdefModSquareGeneric.c)
 *     SymCryptFdefModSquareMontgomery @ 0x140530F50 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404881BC (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawSquareMulx @ 0x14052A420 (SymCryptFdefRawSquareMulx.c)
 *     SymCryptFdefRawSquareAsm @ 0x140532450 (SymCryptFdefRawSquareAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSquare(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawSquareAsm(a1, a2, a3);
  else
    return SymCryptFdefRawSquareMulx(a1, a2, a3);
}
