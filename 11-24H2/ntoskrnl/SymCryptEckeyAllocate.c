/*
 * XREFs of SymCryptEckeyAllocate @ 0x1405205FC
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140526EB4 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052704C (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x14083044C (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyCreate @ 0x140520650 (SymCryptEckeyCreate.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x140520D14 (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptCallbackAlloc @ 0x1406A6810 (SymCryptCallbackAlloc.c)
 */

__int64 __fastcall SymCryptEckeyAllocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rax

  v2 = 0LL;
  v3 = (unsigned int)SymCryptSizeofEckeyFromCurve();
  v4 = SymCryptCallbackAlloc(v3);
  if ( v4 )
    return SymCryptEckeyCreate(v4, (unsigned int)v3, a1);
  return v2;
}
