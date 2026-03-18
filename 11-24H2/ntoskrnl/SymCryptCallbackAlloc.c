/*
 * XREFs of SymCryptCallbackAlloc @ 0x1406A5810
 * Callers:
 *     SymCryptRsakeyAllocate @ 0x140521014 (SymCryptRsakeyAllocate.c)
 *     SymCryptRsakeySetValueInternal @ 0x140521B70 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveAllocate @ 0x140522320 (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyAllocate @ 0x140522CE8 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x140524044 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaPkcs1Sign @ 0x140525478 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x1405255D4 (SymCryptRsaPkcs1Verify.c)
 *     SymCryptRsaSelftest @ 0x140529908 (SymCryptRsaSelftest.c)
 *     SymCryptRsaSignVerifyPct @ 0x140529B14 (SymCryptRsaSignVerifyPct.c)
 *     SymCryptFdefIntAllocate @ 0x14053709C (SymCryptFdefIntAllocate.c)
 *     SymCryptEcDhSecretAgreement @ 0x140538EE8 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     MincryptAlloc @ 0x14082897C (MincryptAlloc.c)
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
