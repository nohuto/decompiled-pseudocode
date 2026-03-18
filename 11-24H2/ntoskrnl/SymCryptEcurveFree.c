/*
 * XREFs of SymCryptEcurveFree @ 0x140522428
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140529594 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052972C (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x14082FC54 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x14051DC34 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x1406A5848 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEcurveFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 40));
  return SymCryptCallbackFree(a1);
}
