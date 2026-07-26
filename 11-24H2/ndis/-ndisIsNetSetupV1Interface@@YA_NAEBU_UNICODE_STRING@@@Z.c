/*
 * XREFs of ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x140136CE4
 * Callers:
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401655B0 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140052980 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x140069B30 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

bool __fastcall ndisIsNetSetupV1Interface(const struct _UNICODE_STRING *a1)
{
  bool v3; // bl
  KRegKey v4; // [rsp+20h] [rbp-228h] BYREF
  wchar_t pszSrc[256]; // [rsp+30h] [rbp-218h] BYREF

  memset(pszSrc, 0, 0x100uLL);
  if ( (int)RtlStringCchPrintfW(
              pszSrc,
              256LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup\\Interfaces\\%wZ",
              a1) < 0 )
    return 0;
  v4.m_ptr = 0LL;
  v3 = (int)KRegKey::Open(&v4, 1u, pszSrc, 0LL) >= 0;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v4.m_ptr);
  return v3;
}
