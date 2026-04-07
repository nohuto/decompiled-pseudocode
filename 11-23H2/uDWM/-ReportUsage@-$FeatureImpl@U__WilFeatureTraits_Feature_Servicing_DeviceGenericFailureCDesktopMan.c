/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F01C
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException@@@details@wil@@QEAA_NXZ @ 0x18005F0A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDe.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180036B20 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005EE38 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DeviceGenericF.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  signed __int32 v7[6]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DeviceGenericFailureCDesktopManagerException>::GetCachedFeatureEnabledState(
                      a1,
                      v7);
    v10 = v4;
  }
  v8 = 0;
  v9 = 2;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x3759E28u,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v8,
    v6,
    3u);
}
