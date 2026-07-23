/*
 * XREFs of SymCryptEckeyFree @ 0x1405206E8
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140526EB4 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052704C (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x14083044C (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyWipe @ 0x140520CE8 (SymCryptEckeyWipe.c)
 *     SymCryptCallbackFree @ 0x1406A6848 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeyFree(__int64 a1)
{
  SymCryptEckeyWipe();
  return SymCryptCallbackFree(a1);
}
