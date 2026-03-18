/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x14008AB18
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x14008AF60 (wil_details_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14008AB9C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x14008AFF4 (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        const wil_details_FeatureDescriptor *descriptor,
        wil_details_FeatureStateCache observedState,
        wil_ReportingKind kindParam,
        unsigned __int64 a4)
{
  int v5; // edi
  wil_details_ServiceReportingKind v6; // eax
  wil_details_FeatureStateCache v7; // r9
  wil_ReportingKind v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = kindParam;
  v5 = observedState.exchange64 & 1;
  v6 = wil_details_MapReportingKind(kindParam, v5);
  if ( wil_details_FeatureReporting_ReportUsageToServiceDirect(descriptor, v7, v6, v7.exchange64) )
  {
    if ( WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink )
      ((void (__fastcall *)(unsigned int, const FEATURE_LOGGED_TRAITS *, const FEATURE_ERROR *, int, const wil_ReportingKind *, const wil_VariantReportingKind *, unsigned __int8, unsigned __int64))WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink)(
        descriptor->featureId,
        descriptor->featureLoggedTraits,
        0LL,
        v5,
        &v8,
        0LL,
        0,
        1uLL);
  }
}
