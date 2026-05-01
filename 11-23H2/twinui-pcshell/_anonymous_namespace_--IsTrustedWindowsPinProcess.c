/*
 * XREFs of _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x180085ECC
 * Callers:
 *     ?CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x180084B6C (-CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV-$tip_te.c)
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1806A1BAC (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A4550 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 * Callees:
 *     ??$TaskbarPinTrustedProcessChecked@PEAG_N@PinManagerTelemetry@@SAX$$QEAPEAG$$QEA_N@Z @ 0x180084CF8 (--$TaskbarPinTrustedProcessChecked@PEAG_N@PinManagerTelemetry@@SAX$$QEAPEAG$$QEA_N@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800860F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180086364 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180086894 (-reset@-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@.c)
 *     ?Release@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x1800868B8 (-Release@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180086920 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?TryGetProcessImagePath@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x180086DB0 (-TryGetProcessImagePath@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ??$ExpandEnvironmentStringsW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG@Z @ 0x180086E1C (--$ExpandEnvironmentStringsW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start@@@details@wil@@QEAA_NXZ @ 0x1801D6830 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFull_ea_1801D6830.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall anonymous_namespace_::IsTrustedWindowsPinProcess(__int64 a1, __int64 a2)
{
  char v3; // al
  const WCHAR *v4; // rbx
  const WCHAR *FileNameW; // r12
  __int64 v6; // r14
  WCHAR *v7; // rdi
  char v8; // si
  bool v9; // zf
  __int64 *v10; // rdi
  __int64 *v12; // rdi
  char v13[8]; // [rsp+30h] [rbp-40h] BYREF
  LPCWCH lpString1; // [rsp+38h] [rbp-38h] BYREF
  LPCWSTR pszPath; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16[2]; // [rsp+48h] [rbp-28h] BYREF
  const wchar_t *v17; // [rsp+58h] [rbp-18h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h] BYREF

  pszPath = 0LL;
  TryGetProcessImagePath(&pszPath, a1);
  v3 = wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&pszPath);
  v4 = pszPath;
  if ( v3 )
  {
    FileNameW = PathFindFileNameW(pszPath);
    v6 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(a2);
    v7 = (WCHAR *)v6;
    lpString1 = (LPCWCH)v6;
    v8 = 1;
    if ( v6 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 1328), 1u);
      v4 = pszPath;
      v7 = (WCHAR *)lpString1;
    }
    tip2::details::shared_data<0,0,1>::begin_update(v6 + 8);
    StrCpyNW((PWSTR)(v6 + 788), FileNameW, 260);
    if ( v6 )
    {
      tip2::details::shared_data<0,0,0>::end_update(v6 + 8);
      wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&lpString1);
      v7 = (WCHAR *)lpString1;
    }
    if ( v7 )
      tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release(v7);
    v9 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start>::GetImpl'::`2'::impl) == 0;
    v16[0] = (__int64)L"%windir%\\explorer.exe";
    v16[1] = (__int64)L"%windir%\\system32\\RuntimeBroker.exe";
    if ( v9 )
    {
      v12 = v16;
      while ( 1 )
      {
        lpString1 = 0LL;
        wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
          &lpString1,
          *v12);
        if ( CompareStringOrdinal(lpString1, -1, v4, -1, 1) == 2 )
          break;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&lpString1);
        if ( ++v12 == (__int64 *)&v17 )
          goto LABEL_12;
      }
    }
    else
    {
      v17 = L"%windir%\\SystemApps\\Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy\\StartMenuExperienceHost.exe";
      v10 = v16;
      while ( 1 )
      {
        lpString1 = 0LL;
        wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
          &lpString1,
          *v10);
        if ( CompareStringOrdinal(lpString1, -1, v4, -1, 1) == 2 )
          break;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&lpString1);
        if ( ++v10 == &v18 )
          goto LABEL_12;
      }
    }
    v13[0] = 1;
    v16[0] = (__int64)v4;
    PinManagerTelemetry::TaskbarPinTrustedProcessChecked<unsigned short *,bool>(v16, v13);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&lpString1);
  }
  else
  {
LABEL_12:
    v13[0] = 0;
    v16[0] = (__int64)v4;
    PinManagerTelemetry::TaskbarPinTrustedProcessChecked<unsigned short *,bool>(v16, v13);
    v8 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pszPath);
  return v8;
}
