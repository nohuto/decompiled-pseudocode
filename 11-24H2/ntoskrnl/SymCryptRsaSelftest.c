/*
 * XREFs of SymCryptRsaSelftest @ 0x140529908
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x140521B70 (SymCryptRsakeySetValueInternal.c)
 * Callees:
 *     SymCryptRestoreXmm @ 0x1404999F8 (SymCryptRestoreXmm.c)
 *     SymCryptWipe @ 0x14051DC34 (SymCryptWipe.c)
 *     SymCryptRsakeyAllocate @ 0x140521014 (SymCryptRsakeyAllocate.c)
 *     SymCryptRsakeyFree @ 0x140521AE0 (SymCryptRsakeyFree.c)
 *     SymCryptRsakeySetValue @ 0x140521B08 (SymCryptRsakeySetValue.c)
 *     SymCryptRsaPkcs1Sign @ 0x140525478 (SymCryptRsaPkcs1Sign.c)
 *     SymCryptRsaPkcs1Verify @ 0x1405255D4 (SymCryptRsaPkcs1Verify.c)
 *     SymCryptFatal @ 0x1405B1490 (SymCryptFatal.c)
 *     SymCryptCallbackAlloc @ 0x1406A5810 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x1406A5848 (SymCryptCallbackFree.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

__int64 SymCryptRsaSelftest()
{
  const void *v0; // rbx
  __int64 v1; // rax
  _DWORD *v2; // rdi
  unsigned __int64 v4; // [rsp+58h] [rbp+7h] BYREF
  _DWORD v5[4]; // [rsp+60h] [rbp+Fh] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+1Fh] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp+2Fh] BYREF

  v4 = 256LL;
  v0 = (const void *)SymCryptCallbackAlloc(256LL);
  if ( !v0 )
    SymCryptFatal(1179209811LL);
  v5[0] = 1;
  v7[0] = qword_1400201E8;
  v5[1] = 2048;
  v7[1] = qword_140020268;
  v5[2] = 2;
  v5[3] = 1;
  v6[0] = 128LL;
  v6[1] = 128LL;
  v1 = SymCryptRsakeyAllocate((__int64)v5);
  v2 = (_DWORD *)v1;
  if ( !v1 )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptRsakeySetValue(
                       (int)qword_1400200E8,
                       256,
                       (int)&rsakey,
                       1,
                       (__int64)v7,
                       (__int64)v6,
                       2,
                       2,
                       4352,
                       v1) )
    SymCryptFatal(1179209811LL);
  if ( (unsigned int)SymCryptRsaPkcs1Sign(
                       (__int64)v2,
                       rgbSha256Hash,
                       0x20uLL,
                       (int *)&SymCryptSha256OidList,
                       2,
                       0,
                       2,
                       (__int64)v0,
                       v4,
                       &v4) )
    SymCryptFatal(1179209811LL);
  if ( memcmp(v0, rgbRsaPkcs1Sig, 0x100uLL) )
    SymCryptFatal(1179209811LL);
  SymCryptRestoreXmm();
  if ( (unsigned int)SymCryptRsaPkcs1Verify(
                       v2,
                       rgbSha256Hash,
                       0x20uLL,
                       (int)v0,
                       v4,
                       2,
                       (__int64)&SymCryptSha256OidList,
                       2uLL,
                       0) )
    SymCryptFatal(1179209811LL);
  SymCryptRsakeyFree((__int64)v2);
  SymCryptWipe((__int64)v0, v4);
  return SymCryptCallbackFree(v0);
}
