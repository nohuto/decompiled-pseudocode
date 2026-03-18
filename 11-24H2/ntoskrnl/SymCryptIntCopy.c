/*
 * XREFs of SymCryptIntCopy @ 0x140523814
 * Callers:
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x140524044 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140529D00 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x14052A210 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x140536010 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntCopy @ 0x1405371D8 (SymCryptFdefIntCopy.c)
 */

__int64 SymCryptIntCopy()
{
  return SymCryptFdefIntCopy();
}
