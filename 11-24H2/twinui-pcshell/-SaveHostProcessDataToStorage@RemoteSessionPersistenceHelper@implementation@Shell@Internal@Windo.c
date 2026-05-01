/*
 * XREFs of ?SaveHostProcessDataToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1806639B0
 * Callers:
 *     ?SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180663FE8 (-SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802973D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCCommon_v3@@@details@wil@@QEAAX_NW4.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE34 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x180361AC4 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180650484 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180663928 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_.c)
 *     ?CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x1806676AC (-CorrelationId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@XZ.c)
 *     ?IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4LocalCapabilities@3456@@Z @ 0x1806676D4 (-IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4L.c)
 *     ?RemoteDesktopId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x180667724 (-RemoteDesktopId@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@X.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveHostProcessDataToStorage(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *a1,
        unsigned int **a2,
        HKEY *a3)
{
  unsigned int *v5; // rcx
  const BYTE *lpData; // rax
  DWORD cbData; // edx
  winrt::impl *v8; // rcx
  const BYTE *v9; // rax
  DWORD v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // r8
  const char *v14; // r9
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v18; // rcx
  winrt::Windows::Internal::Shell::implementation::HostProcessData *v19; // rcx
  const WCHAR *v20; // rax
  unsigned int v21; // eax
  const WCHAR *v22; // rax
  unsigned int v23; // eax
  const WCHAR *v24; // rax
  unsigned int v25; // eax
  const WCHAR *v26; // rax
  unsigned int v27; // eax
  const WCHAR *v28; // rax
  unsigned int v29; // eax
  std::_Ref_count_base *v30; // rcx
  volatile signed __int32 *v31; // [rsp+30h] [rbp-68h] BYREF
  volatile signed __int32 *v32; // [rsp+38h] [rbp-60h] BYREF
  BYTE Data[4]; // [rsp+40h] [rbp-58h] BYREF
  BYTE v34[4]; // [rsp+44h] [rbp-54h] BYREF
  BYTE v35[4]; // [rsp+48h] [rbp-50h] BYREF
  BYTE v36[4]; // [rsp+4Ch] [rbp-4Ch] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-48h] BYREF
  BYTE v38[8]; // [rsp+58h] [rbp-40h] BYREF
  int v39; // [rsp+60h] [rbp-38h]
  __int128 v40; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int **v43; // [rsp+A8h] [rbp+10h] BYREF
  BOOL IsCapabilitySupported; // [rsp+B8h] [rbp+20h] BYREF

  v43 = a2;
  winrt::Windows::Internal::Shell::implementation::HostProcessData::RemoteDesktopId(*a2, &v31);
  winrt::Windows::Internal::Shell::implementation::HostProcessData::CorrelationId(*a2, &v32);
  v5 = *a2;
  *(_DWORD *)Data = (*a2)[6];
  *(_DWORD *)v34 = *((_BYTE *)v5 + 28) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCCommon_v3>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CloudPCCommon_v3>::GetImpl'::`2'::impl,
    1u,
    3u);
  v39 = 0;
  v40 = 0LL;
  lpData = (const BYTE *)winrt::hstring::c_str((winrt::hstring *)&v31);
  v8 = (winrt::impl *)(unsigned int)RegSetValueExW(*a3, L"remoteDesktopId", 0, 1u, lpData, cbData);
  try
  {
    winrt::check_win32<unsigned long>(v8);
    v39 = 0;
    v40 = 0LL;
    v9 = (const BYTE *)winrt::hstring::c_str((winrt::hstring *)&v32);
    v11 = RegSetValueExW(*a3, L"correlationId", 0, 1u, v9, v10);
    winrt::check_win32<unsigned long>((winrt::impl *)v11);
    v39 = 0;
    v40 = 0LL;
    v12 = RegSetValueExW(*a3, L"cloudPCMode", 0, 4u, Data, 4u);
    winrt::check_win32<unsigned long>((winrt::impl *)v12);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x88,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      v14);
    LOBYTE(IsCapabilitySupported) = 1;
    v37 = **v43;
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteIdFromStorage(
      a1,
      &v37,
      (const struct winrt::hstring *)&v31,
      (bool *)&IsCapabilitySupported);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
    v30 = (std::_Ref_count_base *)v43[1];
    goto LABEL_15;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BluetoothSupportForB2CAndSwitch_BugFixes>::GetImpl'::`2'::impl,
    1u,
    v13,
    (__int64)v14);
  v15 = RegSetValueExW(*a3, L"supportBluetoothSettings", 0, 4u, v34, 4u);
  if ( v15 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      154LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v15);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_ManagedPCSettings>::GetImpl'::`2'::impl,
    1u,
    v16,
    v17);
  LODWORD(v43) = 1;
  IsCapabilitySupported = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                            (winrt::Windows::Internal::Shell::implementation::HostProcessData *)*a2,
                            (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
  LODWORD(v43) = 2;
  *(_DWORD *)v35 = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                     (winrt::Windows::Internal::Shell::implementation::HostProcessData *)*a2,
                     (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
  LODWORD(v43) = 4;
  *(_DWORD *)v36 = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                     v18,
                     (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
  LODWORD(v43) = 3;
  LODWORD(v37) = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                   v19,
                   (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
  v20 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSoundSettings);
  v21 = RegSetValueExW(*a3, v20, 0, 4u, (const BYTE *)&IsCapabilitySupported, 4u);
  if ( v21 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      169LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v21);
  v22 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemDisplaySettings);
  v23 = RegSetValueExW(*a3, v22, 0, 4u, v35, 4u);
  if ( v23 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      171LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v23);
  v24 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemSettings);
  v25 = RegSetValueExW(*a3, v24, 0, 4u, v36, 4u);
  if ( v25 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      173LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v25);
  v26 = winrt::hstring::c_str((winrt::hstring *)&c_supportSystemAccountSettings);
  v27 = RegSetValueExW(*a3, v26, 0, 4u, (const BYTE *)&v37, 4u);
  if ( v27 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      175LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v27);
  LODWORD(v43) = 5;
  *(_DWORD *)v38 = winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
                     (winrt::Windows::Internal::Shell::implementation::HostProcessData *)*a2,
                     (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v43);
  v28 = winrt::hstring::c_str((winrt::hstring *)&c_supportBlendedDisplaySettings);
  v29 = RegSetValueExW(*a3, v28, 0, 4u, v38, 4u);
  if ( v29 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      180LL,
      (__int64)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
      (const char *)v29);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
  v30 = (std::_Ref_count_base *)a2[1];
LABEL_15:
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
}
