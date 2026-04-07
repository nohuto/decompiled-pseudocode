/*
 * XREFs of ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000890C
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000889C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180036BE0 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     wil_details_RecordCachedUsage @ 0x18005EC30 (wil_details_RecordCachedUsage.c)
 *     ?RecordSRUMFeatureUsage@details@wil@@YAXIII@Z @ 0x18009C6C0 (-RecordSRUMFeatureUsage@details@wil@@YAXIII@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApi_RecordFeatureUsage(wil::details *this)
{
  if ( g_wil_details_internalRecordFeatureUsage )
  {
    g_wil_details_internalRecordFeatureUsage(this);
  }
  else if ( g_wil_details_apiRecordFeatureUsage )
  {
    g_wil_details_apiRecordFeatureUsage(this);
  }
}
