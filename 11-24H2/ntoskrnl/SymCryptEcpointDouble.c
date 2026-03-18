/*
 * XREFs of SymCryptEcpointDouble @ 0x14052E71C
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140529D00 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x14052A210 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptPrecomputation @ 0x14052A8A0 (SymCryptPrecomputation.c)
 *     SymCryptShortWeierstrassAdd @ 0x14052CBB0 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointDouble(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_140006CD0[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(
           a1,
           a2);
}
