/*
 * XREFs of ?TryOpenTrackedIdsKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@AEB_N@Z @ 0x180285268
 * Callers:
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________ @ 0x180661960 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hstring_std--uno.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________ @ 0x180661CB8 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hst_ea_180661CB8.c)
 *     ?DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXAEB_KAEBUhstring@6@AEB_N@Z @ 0x18066308C (-DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F2248 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?GetKeyPathForSystem@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBUhstring@6@AEB_N@Z @ 0x1801BBC80 (-GetKeyPathForSystem@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802973D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE34 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::TryOpenTrackedIdsKey(
        __int64 a1,
        _QWORD *a2,
        winrt::hstring *a3,
        _BYTE *a4)
{
  HKEY *v8; // rbp
  _OWORD *KeyPathForSystem; // rax
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int phkResult; // [rsp+20h] [rbp-78h]
  HKEY v15[2]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v15[0] = 0LL;
  v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(v15);
  KeyPathForSystem = winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetKeyPathForSystem(
                       a1,
                       v16,
                       a3,
                       a4);
  if ( *((_QWORD *)KeyPathForSystem + 3) > 7uLL )
    KeyPathForSystem = *(_OWORD **)KeyPathForSystem;
  v10 = RegOpenKeyExW(HKEY_CURRENT_USER, (LPCWSTR)KeyPathForSystem, 1u, 0xF003Fu, v8);
  std::wstring::_Tidy_deallocate((void **)v16);
  LOBYTE(v11) = 3;
  LOBYTE(v12) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    v12,
    v11);
  if ( v10 == 2 )
    goto LABEL_7;
  if ( v10 )
  {
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x1CE,
      (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v10,
      phkResult);
LABEL_7:
    *a2 = 0LL;
    *a2 = 0LL;
    goto LABEL_8;
  }
  *a2 = v15[0];
  v15[0] = 0LL;
LABEL_8:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(v15);
  return a2;
}
