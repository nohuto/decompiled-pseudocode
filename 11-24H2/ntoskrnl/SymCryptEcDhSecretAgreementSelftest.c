/*
 * XREFs of SymCryptEcDhSecretAgreementSelftest @ 0x140526EB4
 * Callers:
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 * Callees:
 *     SymCryptRestoreXmm @ 0x140494460 (SymCryptRestoreXmm.c)
 *     SymCryptEcurveAllocate @ 0x14051FC64 (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x14051FD6C (SymCryptEcurveFree.c)
 *     SymCryptEckeyAllocate @ 0x1405205FC (SymCryptEckeyAllocate.c)
 *     SymCryptEckeyFree @ 0x1405206E8 (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptEcDhSecretAgreement @ 0x140533388 (SymCryptEcDhSecretAgreement.c)
 *     SymCryptFatal @ 0x1405AE400 (SymCryptFatal.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

__int64 SymCryptEcDhSecretAgreementSelftest()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  _BYTE Buf1[32]; // [rsp+40h] [rbp-48h] BYREF

  v0 = SymCryptEcurveAllocate((__int64)SymCryptEcurveParamsNistP256, 0);
  v1 = v0;
  if ( !v0 )
    SymCryptFatal(1179209811LL);
  v2 = SymCryptEckeyAllocate(v0);
  v3 = v2;
  if ( !v2 )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptEckeySetValue((__int64)qword_140020440, 32LL, (__int64)eckey1, 64LL, 2u, 2, 8448, v2) )
    SymCryptFatal(1179209811LL);
  v4 = SymCryptEckeyAllocate(v1);
  v5 = v4;
  if ( !v4 )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptEckeySetValue((__int64)qword_1400206F0, 32LL, (__int64)eckey2, 64LL, 2u, 2, 8448, v4) )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptEcDhSecretAgreement(v3, v5, 2, 0, Buf1, 32LL) )
    SymCryptFatal(1179209811LL);
  SymCryptRestoreXmm();
  if ( memcmp(Buf1, rgbEcdhKnownSecret, 0x20uLL) )
    SymCryptFatal(1179209811LL);
  SymCryptEckeyFree(v5);
  SymCryptEckeyFree(v3);
  return SymCryptEcurveFree(v1);
}
