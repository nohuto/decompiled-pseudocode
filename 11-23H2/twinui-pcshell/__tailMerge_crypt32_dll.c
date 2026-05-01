/*
 * XREFs of __tailMerge_crypt32_dll @ 0x1801C896B
 * Callers:
 *     __imp_load_CertCloseStore @ 0x1801C895F (__imp_load_CertCloseStore.c)
 *     __imp_load_CryptQueryObject @ 0x1801C8A75 (__imp_load_CryptQueryObject.c)
 *     __imp_load_CryptMsgGetParam @ 0x1801C8A87 (__imp_load_CryptMsgGetParam.c)
 *     __imp_load_CertFindCertificateInStore @ 0x1801C8A99 (__imp_load_CertFindCertificateInStore.c)
 *     __imp_load_CertGetNameStringW @ 0x1801C8AAB (__imp_load_CertGetNameStringW.c)
 *     __imp_load_CryptMsgClose @ 0x1801C8B17 (__imp_load_CryptMsgClose.c)
 *     __imp_load_CertFreeCertificateContext @ 0x1801C8B29 (__imp_load_CertFreeCertificateContext.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801865D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_crypt32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_crypt32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
