/*
 * XREFs of SymCryptEcpointAddDiffNonZero @ 0x14052BF2C
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A60 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptPrecomputation @ 0x1405280F0 (SymCryptPrecomputation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointAddDiffNonZero(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_140006CA8[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(
           a1,
           a2);
}
