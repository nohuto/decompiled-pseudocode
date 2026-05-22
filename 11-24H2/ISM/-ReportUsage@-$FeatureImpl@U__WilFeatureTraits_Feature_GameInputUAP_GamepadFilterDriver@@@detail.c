/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameInputUAP_GamepadFilterDriver@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CE680
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GameInputUAP_GamepadFilterDriver@@@details@wil@@QEAA_NXZ @ 0x1800CE858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GameInputUAP_GamepadFilterDriver@.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18005FFBC (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GameInputUAP_GamepadFilterDriver@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800CDC44 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GameInputUAP_GamepadFilt.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameInputUAP_GamepadFilterDriver>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r8
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  v5 = a2;
  LODWORD(v6) = *(_DWORD *)Feature_GameInputUAP_GamepadFilterDriver__descriptor;
  if ( (*(_DWORD *)Feature_GameInputUAP_GamepadFilterDriver__descriptor & 4) == 0 )
  {
    v6 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameInputUAP_GamepadFilterDriver>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            v7);
    v10 = v6;
  }
  v8 = 0;
  v9 = 1;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 8),
    0x36397B8u,
    ((unsigned int)v6 >> 10) & 1,
    ((unsigned int)v6 >> 11) & 1,
    (__int64)&v8,
    v5,
    3);
}
