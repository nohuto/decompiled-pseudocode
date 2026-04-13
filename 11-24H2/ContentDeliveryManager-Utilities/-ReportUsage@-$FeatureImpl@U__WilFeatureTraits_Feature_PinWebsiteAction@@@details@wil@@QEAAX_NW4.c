/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009044C
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@SA_NXZ @ 0x180090330 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@SA_NXZ.c)
 *     ?Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ @ 0x18009CE10 (-Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18009D0E0 (-MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Act.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180039BA4 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180090114 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@detai.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v6; // r8d
  unsigned int v7; // esi
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int16 v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *(_DWORD *)a1;
  v7 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v12 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::GetCachedFeatureEnabledState(a1, v9);
    v6 = v12;
  }
  v10 = 1;
  v11 = 3;
  return wil::details::ReportUsageToService(
           (__int64)a1 + 8,
           0xB3E9A6u,
           (v6 >> 10) & 1,
           (v6 >> 11) & 1,
           (__int64)&v10,
           v7,
           v4);
}
