/*
 * XREFs of SymCryptEcpointDouble @ 0x14052BF6C
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140527550 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A60 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptPrecomputation @ 0x1405280F0 (SymCryptPrecomputation.c)
 *     SymCryptShortWeierstrassAdd @ 0x14052A400 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointDouble(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_140006CB0[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(
           a1,
           a2);
}
