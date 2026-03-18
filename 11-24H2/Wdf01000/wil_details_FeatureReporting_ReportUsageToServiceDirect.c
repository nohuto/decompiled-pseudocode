/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14008AB9C
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14008AB18 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x14008A994 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        const wil_details_FeatureDescriptor *descriptor,
        wil_details_FeatureStateCache currentState,
        unsigned __int32 kind,
        unsigned __int64 a4)
{
  __int16 exchange64; // bx
  unsigned int v7; // edi
  unsigned int featureId; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+34h] [rbp-64h]
  wil_details_RecordUsageResult v11; // [rsp+38h] [rbp-60h] BYREF
  wil_details_RecordUsageResult result; // [rsp+50h] [rbp-48h] BYREF

  exchange64 = currentState.exchange64;
  v7 = 0;
  result = *wil_details_FeatureReporting_RecordUsageInCache(
              &v11,
              descriptor->featureReportingCache,
              kind,
              currentState.payloadId);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(
      descriptor->featureId,
      (wil_details_ServiceReportingKind)kind,
      1u,
      descriptor->featureReportingCache,
      &result);
  if ( (exchange64 & 0x400) != 0 && kind != 254 )
  {
    featureId = descriptor->featureId;
    v10 = (unsigned __int16)kind;
    if ( (exchange64 & 0x800) != 0 )
      HIWORD(v10) |= 1u;
    RtlNotifyFeatureUsage(&featureId);
  }
  LOBYTE(v7) = result.ignoredUse == 0;
  return v7;
}
