/*
 * XREFs of SymCryptCallbackAlloc @ 0x1406A6810
 * Callers:
 *     SymCryptRsakeyAllocate @ 0x14051E8E4 (SymCryptRsakeyAllocate.c)
 *     SymCryptRsakeySetValueInternal @ 0x14051F4C4 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveAllocate @ 0x14051FC64 (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyAllocate @ 0x1405205FC (SymCryptEckeyAllocate.c)
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521FF0 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaPkcs1Sign @ 0x140522D90 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x140522EEC (SymCryptRsaPkcs1Verify.c)
 *     SymCryptRsaSelftest @ 0x140527228 (SymCryptRsaSelftest.c)
 *     SymCryptFdefIntAllocate @ 0x14053153C (SymCryptFdefIntAllocate.c)
 *     SymCryptEcDhSecretAgreement @ 0x140533388 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     MincryptAlloc @ 0x14082914C (MincryptAlloc.c)
 */

unsigned __int64 __fastcall SymCryptCallbackAlloc(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax

  v1 = 0LL;
  v2 = MincryptAlloc(a1 + 36);
  if ( v2 )
  {
    v1 = (v2 + 35) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_DWORD *)(v1 - 4) = ((v2 + 35) & 0xFFFFFFE0) - v2;
  }
  return v1;
}
