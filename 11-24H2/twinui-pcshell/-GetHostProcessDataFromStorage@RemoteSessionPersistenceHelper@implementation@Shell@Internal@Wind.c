/*
 * XREFs of ?GetHostProcessDataFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBI@Z @ 0x180663474
 * Callers:
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________ @ 0x180661960 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hstring_std--uno.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________ @ 0x180661CB8 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hst_ea_180661CB8.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802973D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE34 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x180361AC4 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180650484 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@.c)
 *     _lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___ @ 0x1806618B4 (_lambda_38c2e9ac3688a7625bc550deaa567694_--operator()_unsigned_short_const___int_unsigned_long__.c)
 *     ??$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEBIUhstring@6@U76@AEAKAEAKAEAKAEAKAEAKAEAKAEAK@std@@YA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@0@AEBI$$QEAUhstring@winrt@@1AEAK222222@Z @ 0x180662BC0 (--$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEBIUhstring@6@U76@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180663928 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_.c)
 */

// Hidden C++ exception states: #wind=2
const unsigned __int16 *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetHostProcessDataFromStorage(
        __int64 a1,
        volatile signed __int32 *a2,
        HKEY *a3,
        const unsigned int *a4)
{
  winrt::impl *v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rdx
  const char *v10; // r9
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  winrt::hstring *v19; // rbx
  winrt::hstring *v20; // rax
  const unsigned __int16 *v22; // rax
  DWORD v23; // [rsp+60h] [rbp-4A8h] BYREF
  const unsigned __int16 *v24; // [rsp+68h] [rbp-4A0h] BYREF
  HKEY *v25; // [rsp+70h] [rbp-498h] BYREF
  int v26; // [rsp+78h] [rbp-490h] BYREF
  int v27; // [rsp+7Ch] [rbp-48Ch] BYREF
  int v28; // [rsp+80h] [rbp-488h] BYREF
  int v29; // [rsp+84h] [rbp-484h] BYREF
  int v30; // [rsp+88h] [rbp-480h] BYREF
  int v31; // [rsp+8Ch] [rbp-47Ch] BYREF
  int v32; // [rsp+90h] [rbp-478h] BYREF
  int v33; // [rsp+98h] [rbp-470h]
  __int128 v34; // [rsp+A0h] [rbp-468h]
  unsigned __int16 v35[264]; // [rsp+C0h] [rbp-448h] BYREF
  unsigned __int16 v36[264]; // [rsp+2D0h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+508h] [rbp+0h]

  v24 = (const unsigned __int16 *)a2;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  v33 = 0;
  v34 = 0LL;
  v23 = 2;
  v6 = (winrt::impl *)(unsigned int)lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
                                      &v25,
                                      (LPCWSTR *)off_18075D6C8,
                                      &v23,
                                      v36);
  try
  {
    winrt::check_win32<unsigned long>(v6);
    v33 = 0;
    v34 = 0LL;
    v23 = 2;
    v7 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
           &v25,
           (LPCWSTR *)off_18075D6C0,
           &v23,
           v35);
    winrt::check_win32<unsigned long>((winrt::impl *)v7);
    v33 = 0;
    v34 = 0LL;
    v23 = 16;
    v8 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
           &v25,
           (LPCWSTR *)off_18075D6B8,
           &v23,
           &v32);
    winrt::check_win32<unsigned long>((winrt::impl *)v8);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xDE,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      v10);
    v22 = v24;
    *(_QWORD *)v24 = 0LL;
    *((_QWORD *)v22 + 1) = 0LL;
    return v24;
  }
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes>::GetImpl'::`2'::impl,
    v9);
  v23 = 16;
  v11 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
          &v25,
          (LPCWSTR *)off_18075D6B0,
          &v23,
          &v31);
  if ( v11 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      235LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v11);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
    1u,
    v12,
    v13);
  v23 = 16;
  v24 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSoundSettings);
  v14 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
          &v25,
          &v24,
          &v23,
          &v30);
  if ( v14 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      244LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v14);
  v23 = 16;
  v24 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemDisplaySettings);
  v15 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
          &v25,
          &v24,
          &v23,
          &v29);
  if ( v15 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      245LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v15);
  v23 = 16;
  v24 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSettings);
  v16 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
          &v25,
          &v24,
          &v23,
          &v28);
  if ( v16 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      246LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v16);
  v23 = 16;
  v24 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemAccountSettings);
  v17 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
          &v25,
          &v24,
          &v23,
          &v27);
  if ( v17 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      247LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v17);
  v23 = 16;
  v24 = winrt::hstring::c_str((winrt::hstring *)&c_supportBlendedDisplaySettings);
  v18 = lambda_38c2e9ac3688a7625bc550deaa567694_::operator()_unsigned_short_const___int_unsigned_long___(
          &v25,
          &v24,
          &v23,
          &v26);
  if ( v18 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      250LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v18);
  v19 = winrt::hstring::hstring((winrt::hstring *)&v25, v35);
  v20 = winrt::hstring::hstring((winrt::hstring *)&v24, v36);
  std::make_shared<winrt::Windows::Internal::Shell::implementation::HostProcessData,unsigned int const &,winrt::hstring,winrt::hstring,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(
    a2,
    a4,
    v20,
    v19,
    &v32,
    &v31,
    &v30,
    &v29,
    &v28,
    &v27,
    &v26);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v24);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v25);
  return (const unsigned __int16 *)a2;
}
