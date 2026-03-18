/*
 * XREFs of SymCryptEckeyFree @ 0x140520654
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140526DE4 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140526F7C (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x14081FF14 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyWipe @ 0x140520C50 (SymCryptEckeyWipe.c)
 *     SymCryptCallbackFree @ 0x14069A618 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeyFree(__int64 a1)
{
  SymCryptEckeyWipe();
  return SymCryptCallbackFree(a1);
}
