/*
 * XREFs of SymCryptCallbackFree @ 0x14069A618
 * Callers:
 *     SymCryptRsakeyFree @ 0x14051F360 (SymCryptRsakeyFree.c)
 *     SymCryptRsakeySetValueInternal @ 0x14051F3F0 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveAllocate @ 0x14051FBA0 (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x14051FCA8 (SymCryptEcurveFree.c)
 *     SymCryptEckeyFree @ 0x140520654 (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptIntFree @ 0x14052111C (SymCryptIntFree.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521F1C (SymCryptEcDsaVerify.c)
 *     SymCryptRsaPkcs1Sign @ 0x140522CBC (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x140522E18 (SymCryptRsaPkcs1Verify.c)
 *     SymCryptRsaSelftest @ 0x140527154 (SymCryptRsaSelftest.c)
 *     SymCryptRsaSignVerifyPct @ 0x140527360 (SymCryptRsaSignVerifyPct.c)
 *     SymCryptEcDhSecretAgreement @ 0x140536738 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     MincryptFree @ 0x140818BAC (MincryptFree.c)
 */

__int64 __fastcall SymCryptCallbackFree(__int64 a1)
{
  return MincryptFree(a1 - *(unsigned int *)(a1 - 4));
}
