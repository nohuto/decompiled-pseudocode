/*
 * XREFs of ?UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18023F420
 * Callers:
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18023E5D8 (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e75a8851595db8237201f9332f154f2___::Run @ 0x180359B00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2e75a8851595db8237201f9332f154f2___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE34 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x18035FEC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprove_ea_18035FEC0.c)
 *     ?UpdateConfigurationValues@GamepadButtonTracker@@QEAAXV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@00@Z @ 0x18036AF88 (-UpdateConfigurationValues@GamepadButtonTracker@@QEAAXV-$duration@_JU-$ratio@$00$0DOI@@std@@@chr.c)
 */

void __fastcall GamingOverlayExperienceManager::UpdateGamepadIntervalValues(GamingOverlayExperienceManager *this)
{
  unsigned int ValueW; // eax
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // r12
  __int64 i; // r14
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-40h]
  unsigned int v14; // [rsp+20h] [rbp-40h]
  unsigned int v15; // [rsp+20h] [rbp-40h]
  unsigned int pvData; // [rsp+40h] [rbp-20h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v18; // [rsp+48h] [rbp-18h] BYREF
  DWORD v19; // [rsp+4Ch] [rbp-14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  pvData = 500;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\GameBar",
             L"GamepadShortPressIntervalMs",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  if ( ValueW != 2 && ValueW )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x1368,
      (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)ValueW,
      v13);
  v3 = pvData;
  pvData = 0;
  *((_QWORD *)this + 48) = v3;
  pcbData = 4;
  v4 = RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\GameBar",
         L"GamepadDoublePressIntervalMs",
         0x10u,
         0LL,
         &pvData,
         &pcbData);
  if ( v4 != 2 && v4 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x137B,
      (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)v4,
      v14);
  *((_QWORD *)this + 49) = pvData;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
  {
    v18 = 100;
    v19 = 4;
    v5 = RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\GameBar",
           L"GamepadLongPressRumbleDurationMs",
           0x10u,
           0LL,
           &v18,
           &v19);
    if ( v5 != 2 && v5 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x1390,
        (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)v5,
        v15);
    *((_QWORD *)this + 50) = v18;
    v6 = *((_QWORD *)this + 46);
    for ( i = *((_QWORD *)this + 45); i != v6; i += 64LL )
    {
      v8 = *(_QWORD *)(i + 32);
      v9 = *((_QWORD *)this + 50);
      v10 = *((_QWORD *)this + 49);
      v11 = *((_QWORD *)this + 48);
      if ( v8 )
        GamepadButtonTracker::UpdateConfigurationValues(
          v8,
          *((_QWORD *)this + 48),
          *((_QWORD *)this + 49),
          *((_QWORD *)this + 50));
      v12 = *(_QWORD *)(i + 48);
      if ( v12 )
        GamepadButtonTracker::UpdateConfigurationValues(v12, v11, v10, v9);
    }
  }
}
