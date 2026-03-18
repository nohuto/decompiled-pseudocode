/*
 * XREFs of SymCryptIntSetValue @ 0x140523A08
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeySetValueInternal @ 0x140521B70 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x140522450 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x140524604 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x140524C9C (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1405253B4 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptEcDsaSelftest @ 0x14052972C (SymCryptEcDsaSelftest.c)
 *     SymCryptEcpointSetValue @ 0x14052ABC0 (SymCryptEcpointSetValue.c)
 *     HashpVerifyPkcs1Signature @ 0x14082FD90 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntSetValue @ 0x140537464 (SymCryptFdefIntSetValue.c)
 */

__int64 SymCryptIntSetValue()
{
  return SymCryptFdefIntSetValue();
}
