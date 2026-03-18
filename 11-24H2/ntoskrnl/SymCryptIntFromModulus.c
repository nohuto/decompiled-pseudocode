/*
 * XREFs of SymCryptIntFromModulus @ 0x1405238E0
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14052158C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeySetValueInternal @ 0x140521B70 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x140522450 (SymCryptEcurveInitialize.c)
 *     SymCryptEcurveIsSame @ 0x140522A18 (SymCryptEcurveIsSame.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140522DF8 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x140524044 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1405253B4 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140528C20 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptCrtSolve @ 0x140528E24 (SymCryptCrtSolve.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x14052A210 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x14052ABC0 (SymCryptEcpointSetValue.c)
 *     SymCryptFdefModInvGeneric @ 0x140536010 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntFromModulus @ 0x1405357F0 (SymCryptFdefIntFromModulus.c)
 */

__int64 SymCryptIntFromModulus()
{
  return SymCryptFdefIntFromModulus();
}
