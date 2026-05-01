/*
 * XREFs of ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180019D6C
 * Callers:
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x18004CBE8 (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator().c)
 *     ?IsUwpWindowEventDispatcherDisabled@@YA_NXZ @ 0x18021F630 (-IsUwpWindowEventDispatcherDisabled@@YA_NXZ.c)
 *     ?IsUwpWindowEventDispatcherEnabled@@YA_NXZ @ 0x1802CE4D0 (-IsUwpWindowEventDispatcherEnabled@@YA_NXZ.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802FCC30 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x180351180 (-GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Int.c)
 * Callees:
 *     ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18001AB60 (-IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18001AD78 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesk.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007F3A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802C3AEC (-IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationActivationWatcher@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802F8094 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationActivationWat.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RequestFromAppModelWatcher@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802F8180 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RequestFromAppModelWatch.c)
 *     ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1802F8910 (-IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 */

char __fastcall Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(
        Windows::Internal::ApplicationModel::WindowManagement *this)
{
  Windows::Internal::ApplicationModel::WindowManagement *v1; // rcx
  bool IsIDKOnXboxEnabled; // al
  Windows::Internal::ApplicationModel::WindowManagement *v3; // rcx
  char v4; // bl
  bool v5; // di
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  _BYTE v9[8]; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v10[8]; // [rsp+48h] [rbp-8h] BYREF
  Windows::Internal::ApplicationModel::WindowManagement *v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  __int16 v14; // [rsp+84h] [rbp+34h]
  __int64 v15; // [rsp+88h] [rbp+38h]

  LODWORD(v11) = 17;
  RtlGetDeviceFamilyInfoEnum(0LL, &v11, 0LL);
  IsIDKOnXboxEnabled = Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnXboxEnabled(v1);
  v3 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v11;
  v4 = 0;
  v5 = IsIDKOnXboxEnabled;
  if ( (_DWORD)v11 == 16 )
  {
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsMinShellPresent((Windows::Internal::ApplicationModel::WindowManagement *)0x10) )
      goto LABEL_8;
    v3 = (Windows::Internal::ApplicationModel::WindowManagement *)(unsigned int)v11;
  }
  if ( (_DWORD)v3 == 5 && v5 || (_DWORD)v3 == 11 && v5 || (_DWORD)v3 == 12 && v5 )
    goto LABEL_8;
  if ( (_DWORD)v3 == 10 )
  {
    if ( Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnHoloEnabled(v3) )
      goto LABEL_8;
    LODWORD(v3) = (_DWORD)v11;
  }
  if ( (_DWORD)v3 != 3 && (_DWORD)v3 != 9 )
    return v4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::GetImpl'::`2'::impl);
LABEL_8:
  v6 = `wil::Feature<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v15 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::GetImpl'::`2'::impl,
                       v9);
    v6 = v15;
  }
  LODWORD(v12) = 0;
  WORD2(v12) = 3;
  wil::details::ReportUsageToService(&unk_1808C9E88, 21726163LL, (v6 >> 10) & 1, (v6 >> 11) & 1, &v12, 1, 3);
  v7 = `wil::Feature<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetImpl'::`2'::impl,
                       v10);
    v7 = v12;
  }
  v13 = 0;
  v14 = 3;
  wil::details::ReportUsageToService(&unk_1808C9E68, 20819441LL, (v7 >> 10) & 1, (v7 >> 11) & 1, &v13, 1, 3);
  return 1;
}
