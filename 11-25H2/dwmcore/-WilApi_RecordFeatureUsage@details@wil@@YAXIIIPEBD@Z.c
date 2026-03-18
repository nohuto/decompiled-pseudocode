/*
 * XREFs of ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18022DAEC
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800C865C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800C8870 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800C8A90 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18022B670 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@QEAA_NXZ @ 0x180247DA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x18024839C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowTimeTravel@@@details@wil@@QEAA_NXZ @ 0x180249DB0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowTimeTravel@@@details@wil@@QE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectHash@@@details@wil@@QEAA_NXZ @ 0x18024A934 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectHash@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x18024B1A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QEAA_NXZ @ 0x18024B7E4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QE.c)
 *     ?RecordSRUMFeatureUsage@details@wil@@YAXIII@Z @ 0x18025FB10 (-RecordSRUMFeatureUsage@details@wil@@YAXIII@Z.c)
 *     ?WilApi_RecordFeatureUsageReports@details@wil@@YAXPEAU__WIL_RTL_FEATURE_USAGE_DATA@@_K@Z @ 0x180260608 (-WilApi_RecordFeatureUsageReports@details@wil@@YAXPEAU__WIL_RTL_FEATURE_USAGE_DATA@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::WilApi_RecordFeatureUsage(wil::details *this, __int64 a2, __int64 a3)
{
  void (__fastcall *v3)(wil::details *, __int64, __int64, _QWORD); // rax

  v3 = (void (__fastcall *)(wil::details *, __int64, __int64, _QWORD))g_wil_details_internalRecordFeatureUsage;
  if ( g_wil_details_internalRecordFeatureUsage
    || (v3 = (void (__fastcall *)(wil::details *, __int64, __int64, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
  {
    v3(this, a2, a3, 0LL);
  }
}
