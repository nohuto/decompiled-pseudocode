/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_23_01_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800644D8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_23_02_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800622E4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_23_02_Non.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180036B20 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_23_01_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005FA0C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Dcr_23_01_NonS.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Dcr_23_01_NonSec>::ReportUsage(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile unsigned __int32 v4; // r8d
  signed __int32 v6[6]; // [rsp+40h] [rbp-18h] BYREF
  int v7; // [rsp+60h] [rbp+8h] BYREF
  char v8; // [rsp+64h] [rbp+Ch]
  __int64 v9; // [rsp+78h] [rbp+20h]

  v9 = a4;
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v9 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Dcr_23_01_NonSec>::GetCachedFeatureEnabledState(
                      a1,
                      v6);
    v4 = v9;
  }
  v8 = 3;
  v7 = 0;
  wil::details::ReportUsageToService((__int64)(a1 + 2), 0x2AF2C78u, (v4 >> 10) & 1, (v4 >> 11) & 1, (__int64)&v7, 1u, 0);
}
