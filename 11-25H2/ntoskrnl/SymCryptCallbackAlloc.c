/*
 * XREFs of SymCryptCallbackAlloc @ 0x14069A5E0
 * Callers:
 *     SymCryptRsakeyAllocate @ 0x14051E894 (SymCryptRsakeyAllocate.c)
 *     SymCryptRsakeySetValueInternal @ 0x14051F3F0 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveAllocate @ 0x14051FBA0 (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyAllocate @ 0x140520568 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521F1C (SymCryptEcDsaVerify.c)
 *     SymCryptRsaPkcs1Sign @ 0x140522CBC (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x140522E18 (SymCryptRsaPkcs1Verify.c)
 *     SymCryptRsaSelftest @ 0x140527154 (SymCryptRsaSelftest.c)
 *     SymCryptRsaSignVerifyPct @ 0x140527360 (SymCryptRsaSignVerifyPct.c)
 *     SymCryptFdefIntAllocate @ 0x1405348EC (SymCryptFdefIntAllocate.c)
 *     SymCryptEcDhSecretAgreement @ 0x140536738 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     MincryptAlloc @ 0x140818B88 (MincryptAlloc.c)
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
