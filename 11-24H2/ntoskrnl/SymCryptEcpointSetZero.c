/*
 * XREFs of SymCryptEcpointSetZero @ 0x14052E918
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140529D00 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x14052A210 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointSetZero(__int64 a1)
{
  return ((__int64 (*)(void))SymCryptEcurveDispatchTable[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])();
}
