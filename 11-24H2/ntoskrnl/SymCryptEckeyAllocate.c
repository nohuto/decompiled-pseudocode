/*
 * XREFs of SymCryptEckeyAllocate @ 0x140522CE8
 * Callers:
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140529594 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052972C (SymCryptEcDsaSelftest.c)
 *     HashpVerifyEcdsaSignature @ 0x14082FC54 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyCreate @ 0x140522D3C (SymCryptEckeyCreate.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1405233FC (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptCallbackAlloc @ 0x1406A5810 (SymCryptCallbackAlloc.c)
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
