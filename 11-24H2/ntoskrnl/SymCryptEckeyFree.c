/*
 * XREFs of SymCryptEckeyFree @ 0x140522DD4
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140529594 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052972C (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x14082FC54 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyWipe @ 0x1405233D0 (SymCryptEckeyWipe.c)
 *     SymCryptCallbackFree @ 0x1406A5848 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeyFree(__int64 a1)
{
  SymCryptEckeyWipe();
  return SymCryptCallbackFree(a1);
}
