/*
 * XREFs of SymCryptEcpointAdd @ 0x140528B04
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140527510 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A20 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointAdd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, __int64, __int64))qword_140006CC0[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
