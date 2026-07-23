/*
 * XREFs of SymCryptEcpointNegate @ 0x140528CAC
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140527510 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A20 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointNegate(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))qword_140006CD8[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(a1);
}
