/*
 * XREFs of SymCryptFdefRawSquare @ 0x14052F7B0
 * Callers:
 *     SymCryptFdefModSquareGeneric @ 0x140536A10 (SymCryptFdefModSquareGeneric.c)
 *     SymCryptFdefModSquareMontgomery @ 0x140536AB0 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14048D93C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawSquareMulx @ 0x14052FF80 (SymCryptFdefRawSquareMulx.c)
 *     SymCryptFdefRawSquareAsm @ 0x140537FB0 (SymCryptFdefRawSquareAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSquare(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawSquareAsm(a1, a2, a3);
  else
    return SymCryptFdefRawSquareMulx(a1, a2, a3);
}
