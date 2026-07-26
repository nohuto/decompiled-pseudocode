/*
 * XREFs of netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x140143FDC
 * Callers:
 *     Ndis::BindRegistry::ReadNetworkInterfaces @ 0x1401443A8 (Ndis--BindRegistry--ReadNetworkInterfaces.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140051410 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140052980 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1401424B8 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x140144134 (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x14014F894 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

__int64 __fastcall netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d_(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  ULONG i; // edi
  NTSTATUS SubkeyName; // eax
  NTSTATUS v7; // esi
  unsigned int v8; // esi
  PCUNICODE_STRING GuidString; // [rsp+20h] [rbp-E0h] BYREF
  KRegKey v11; // [rsp+28h] [rbp-D8h] BYREF
  GUID Guid; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t pszSrc[256]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+280h] [rbp+180h] BYREF

  v14 = a3;
  v3 = 0;
  v11.m_ptr = 0LL;
  netsetupBuildStorePath(2LL, a2, pszSrc);
  v4 = KRegKey::Open(&v11, 8u, pszSrc, 0LL);
  if ( v4 == -1073741772 )
    goto LABEL_12;
  if ( v4 )
  {
    v3 = v4;
LABEL_12:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v11.m_ptr);
    return v3;
  }
  for ( i = 0; ; ++i )
  {
    GuidString = 0LL;
    SubkeyName = KRegKey::GetSubkeyName(&v11.m_ptr, i, (void **)&GuidString);
    v7 = SubkeyName;
    if ( SubkeyName == -2147483622 )
      break;
    if ( SubkeyName )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&GuidString, 0LL);
      v3 = v7;
      goto LABEL_12;
    }
    Guid = 0LL;
    if ( !RtlGUIDFromString(GuidString, &Guid) )
    {
      v8 = lambda_3ed15a572a362cb111cc1d3010d8268d_::operator()(&v14, &Guid);
      if ( v8 )
      {
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&GuidString, 0LL);
        wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v11.m_ptr);
        return v8;
      }
    }
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&GuidString, 0LL);
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&GuidString, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v11.m_ptr);
  return 0LL;
}
