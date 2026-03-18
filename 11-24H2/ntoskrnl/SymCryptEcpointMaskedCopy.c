/*
 * XREFs of SymCryptEcpointMaskedCopy @ 0x14052AB88
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x14052A210 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptShortWeierstrassAdd @ 0x14052CBB0 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     SymCryptFdefMaskedCopy @ 0x140537504 (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptEcpointMaskedCopy(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  *a3 &= *a2;
  return SymCryptFdefMaskedCopy(a2 + 32, a3 + 32, *(_DWORD *)(a1 + 16) * (*(_DWORD *)(a1 + 8) & 0xFu));
}
