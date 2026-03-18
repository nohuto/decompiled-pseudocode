/*
 * XREFs of SymCryptEckeyAllocate @ 0x140520568
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140526DE4 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140526F7C (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x14081FF14 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyCreate @ 0x1405205BC (SymCryptEckeyCreate.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x140520C7C (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptCallbackAlloc @ 0x14069A5E0 (SymCryptCallbackAlloc.c)
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
