/*
 * XREFs of SymCryptEcpointNegate @ 0x14052C080
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140527550 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A60 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointNegate(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))qword_140006CB8[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(a1);
}
