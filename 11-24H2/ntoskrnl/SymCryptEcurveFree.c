/*
 * XREFs of SymCryptEcurveFree @ 0x14051FD6C
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140526EB4 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052704C (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x14083044C (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x1406A6848 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEcurveFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 40));
  return SymCryptCallbackFree(a1);
}
