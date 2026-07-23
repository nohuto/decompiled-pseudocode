/*
 * XREFs of SymCryptCallbackFree @ 0x1406A6848
 * Callers:
 *     SymCryptRsakeyFree @ 0x14051F434 (SymCryptRsakeyFree.c)
 *     SymCryptRsakeySetValueInternal @ 0x14051F4C4 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveAllocate @ 0x14051FC64 (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x14051FD6C (SymCryptEcurveFree.c)
 *     SymCryptEckeyFree @ 0x1405206E8 (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptIntFree @ 0x1405211B8 (SymCryptIntFree.c)
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521FF0 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaPkcs1Sign @ 0x140522D90 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x140522EEC (SymCryptRsaPkcs1Verify.c)
 *     SymCryptRsaSelftest @ 0x140527228 (SymCryptRsaSelftest.c)
 *     SymCryptEcDhSecretAgreement @ 0x140533388 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     MincryptFree @ 0x140829170 (MincryptFree.c)
 */

__int64 __fastcall SymCryptCallbackFree(__int64 a1)
{
  return MincryptFree(a1 - *(unsigned int *)(a1 - 4));
}
