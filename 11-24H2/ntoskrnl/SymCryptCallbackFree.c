/*
 * XREFs of SymCryptCallbackFree @ 0x1406A5848
 * Callers:
 *     SymCryptRsakeyFree @ 0x140521AE0 (SymCryptRsakeyFree.c)
 *     SymCryptRsakeySetValueInternal @ 0x140521B70 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveAllocate @ 0x140522320 (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x140522428 (SymCryptEcurveFree.c)
 *     SymCryptEckeyFree @ 0x140522DD4 (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptIntFree @ 0x1405238A0 (SymCryptIntFree.c)
 *     SymCryptEcDsaSignEx @ 0x140524044 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaPkcs1Sign @ 0x140525478 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x1405255D4 (SymCryptRsaPkcs1Verify.c)
 *     SymCryptRsaSelftest @ 0x140529908 (SymCryptRsaSelftest.c)
 *     SymCryptRsaSignVerifyPct @ 0x140529B14 (SymCryptRsaSignVerifyPct.c)
 *     SymCryptEcDhSecretAgreement @ 0x140538EE8 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     MincryptFree @ 0x1408289A0 (MincryptFree.c)
 */

__int64 __fastcall SymCryptCallbackFree(__int64 a1)
{
  return MincryptFree(a1 - *(unsigned int *)(a1 - 4));
}
