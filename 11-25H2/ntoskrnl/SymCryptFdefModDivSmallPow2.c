/*
 * XREFs of SymCryptFdefModDivSmallPow2 @ 0x1405332C8
 * Callers:
 *     SymCryptFdefModDivPow2 @ 0x140533248 (SymCryptFdefModDivPow2.c)
 *     SymCryptFdefModInvGeneric @ 0x140533860 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14048E708 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefModDivSmallPow2Mulx @ 0x14052EF80 (SymCryptFdefModDivSmallPow2Mulx.c)
 *     SymCryptFdefModDivSmallPow2Generic @ 0x140533330 (SymCryptFdefModDivSmallPow2Generic.c)
 */

__int64 __fastcall SymCryptFdefModDivSmallPow2(__int64 a1, _QWORD *a2, unsigned int a3, _QWORD *a4)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefModDivSmallPow2Generic(a1, a2, a3, a4);
  else
    return SymCryptFdefModDivSmallPow2Mulx(a1, a2, a3, a4);
}
