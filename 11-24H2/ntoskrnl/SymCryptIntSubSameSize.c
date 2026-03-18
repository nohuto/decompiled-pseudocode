/*
 * XREFs of SymCryptIntSubSameSize @ 0x140523A80
 * Callers:
 *     SymCryptIntExtendedGcd @ 0x140529024 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x14052A210 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x140536010 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntSubSameSize @ 0x14052F200 (SymCryptFdefIntSubSameSize.c)
 */

__int64 SymCryptIntSubSameSize()
{
  return SymCryptFdefIntSubSameSize();
}
