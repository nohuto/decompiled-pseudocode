/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UxLabTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C424
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UxLabTest@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18002D75C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UxLabTest@@@details@wil@@QEAA_NW4.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxLabTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18002986C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UxLabTest@@@details@wil@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002C52C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxLabTest>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int16 v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v4 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_UxLabTest>::GetCachedFeatureEnabledState(a1, v8);
    v11 = v4;
  }
  v10 = 1;
  v9 = 0;
  return wil::details::ReportUsageToService(
           (char *)a1 + 8,
           57048218LL,
           ((unsigned int)v4 >> 10) & 1,
           ((unsigned int)v4 >> 11) & 1,
           &v9,
           v6,
           0);
}
