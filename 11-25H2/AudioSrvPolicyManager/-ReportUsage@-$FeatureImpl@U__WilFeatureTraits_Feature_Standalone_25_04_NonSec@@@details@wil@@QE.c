/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_04_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C0B0
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18002A19C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestGateImp@@@details@w.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_04_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180029038 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_04_NonSec@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002C52C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_04_NonSec>::ReportUsage(
        wil::details *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r8d
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  v4 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v10 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_04_NonSec>::GetCachedFeatureEnabledState(
             a1,
             v7);
    v4 = v10;
  }
  v9 = 3;
  v8 = 0;
  return wil::details::ReportUsageToService((char *)a1 + 8, 45036776LL, (v4 >> 10) & 1, (v4 >> 11) & 1, &v8, 1, 0);
}
