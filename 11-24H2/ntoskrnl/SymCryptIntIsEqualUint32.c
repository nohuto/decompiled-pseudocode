/*
 * XREFs of SymCryptIntIsEqualUint32 @ 0x140523988
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14052158C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptEcurveInitialize @ 0x140522450 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140522DF8 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x140524044 (SymCryptEcDsaSignEx.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140528C20 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x140529024 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140529D00 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x14052A210 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x140536010 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntIsEqualUint32 @ 0x14053741C (SymCryptFdefIntIsEqualUint32.c)
 */

__int64 SymCryptIntIsEqualUint32()
{
  return SymCryptFdefIntIsEqualUint32();
}
