/*
 * XREFs of ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800A0EEC
 * Callers:
 *     ?Invoke@LaunchCortanaService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800A0EE0 (-Invoke@LaunchCortanaService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x180022931 (memset_0.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AD80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005BF0C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x180088240 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18008DD8C (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 *     ??$ActivateInstance@UILockScreenRegistrySettingProvider@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UILockScreenRegistrySettingProvider@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800A0AEC (--$ActivateInstance@UILockScreenRegistrySettingProvider@ContentManagement@@@wil@@YA-AV-$com_ptr_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A12A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A132C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
void __fastcall CreativeFramework::Actions::LaunchCortanaService::LaunchCortana(
        CreativeFramework::Actions::LaunchCortanaService *this)
{
  int v1; // eax
  LSTATUS ValueW; // eax
  bool v3; // sf
  __int64 v4; // rax
  __int64 v5; // rdx
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int LockAppHost; // eax
  struct ILockAppHost *v12; // rbx
  __int64 (__fastcall *v13)(struct ILockAppHost *, GUID *, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, GUID *, GUID *, __int64 *); // rdi
  int v17; // eax
  _QWORD *v18; // r8
  int v19; // eax
  int pdwType; // [rsp+20h] [rbp-2A8h]
  char v21; // [rsp+40h] [rbp-288h] BYREF
  _BYTE v22[3]; // [rsp+41h] [rbp-287h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-284h] BYREF
  struct ILockAppHost *v24; // [rsp+48h] [rbp-280h] BYREF
  __int64 v25; // [rsp+50h] [rbp-278h] BYREF
  __int64 v26; // [rsp+58h] [rbp-270h] BYREF
  _QWORD v27[4]; // [rsp+60h] [rbp-268h] BYREF
  _QWORD v28[4]; // [rsp+80h] [rbp-248h] BYREF
  _WORD pvData[264]; // [rsp+A0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  std::wstring::wstring((__int64)v27);
  try
  {
    std::wstring::wstring((__int64)v28);
    wil::ActivateInstance<ContentManagement::ILockScreenRegistrySettingProvider>((__int64)&v24);
    v21 = 0;
    v22[0] = 0;
    v1 = (*(__int64 (__fastcall **)(struct ILockAppHost *, char *, _BYTE *))(*(_QWORD *)v24 + 48LL))(v24, &v21, v22);
    if ( v1 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
        (const char *)(unsigned int)v1,
        pdwType);
    if ( v21 )
    {
      std::wstring::append(v28, L"LaunchFromSpotlight");
    }
    else
    {
      memset_0(pvData, 0, 0x208uLL);
      pcbData = 520;
      ValueW = RegGetValueW(
                 HKEY_CURRENT_USER,
                 L"Software\\Microsoft\\Speech_OneCore\\Preferences",
                 L"Id",
                 2u,
                 0LL,
                 pvData,
                 &pcbData);
      v3 = ValueW < 0;
      if ( ValueW )
      {
        pvData[0] = 0;
        if ( ValueW > 0 )
          v3 = 1;
      }
      if ( !v3 )
      {
        v4 = -1LL;
        do
          ++v4;
        while ( pvData[v4] );
        if ( v4 )
          std::wstring::append(v28, pvData);
      }
    }
    std::wstring::append(v27, v28, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v24);
    std::wstring::_Tidy(v28, 1, 0LL);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x41,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      v6);
  }
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
    v5);
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
    v7);
  v24 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  LockAppHost = GetLockAppHost(&v24, v8, v9, v10);
  if ( LockAppHost < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)LockAppHost,
      pdwType);
  v12 = v24;
  v13 = **(__int64 (__fastcall ***)(struct ILockAppHost *, GUID *, __int64 *))v24;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  v14 = v13(v12, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v26);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v14,
      pdwType);
  v15 = v26;
  v16 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v26 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  v17 = v16(v15, &IID_IAboveLockActivationManager, &GUID_f50a27f7_82b6_4711_be12_9becff694462, &v25);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v17,
      pdwType);
  pcbData = 0;
  v18 = v27;
  if ( v27[3] >= 8uLL )
    v18 = (_QWORD *)v27[0];
  v19 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD *, DWORD *))(*(_QWORD *)v25 + 24LL))(
          v25,
          L"Microsoft.549981C3F5F10_8wekyb3d8bbwe!App",
          v18,
          &pcbData);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v19,
      pdwType);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  std::wstring::_Tidy(v27, 1, 0LL);
}
