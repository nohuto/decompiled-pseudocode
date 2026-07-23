/*
 * XREFs of SymCryptIntCopy @ 0x14052112C
 * Callers:
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140527510 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140527A20 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x1405304B0 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntCopy @ 0x140531678 (SymCryptFdefIntCopy.c)
 */

__int64 SymCryptIntCopy()
{
  return SymCryptFdefIntCopy();
}
