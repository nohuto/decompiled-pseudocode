/*
 * XREFs of wil_RtlStagingConfig_RecordFeatureUsage @ 0x1800773FC
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x180058F30 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180061360 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     wil_details_RtlNotifyFeatureUsage @ 0x1800776EC (wil_details_RtlNotifyFeatureUsage.c)
 */

__int64 __fastcall wil_RtlStagingConfig_RecordFeatureUsage(int a1, __int16 a2, int a3)
{
  int v4; // [rsp+48h] [rbp+20h] BYREF
  __int16 v5; // [rsp+4Ch] [rbp+24h]
  __int16 v6; // [rsp+4Eh] [rbp+26h]

  v6 = 0;
  v4 = a1;
  v5 = a2;
  if ( a3 )
    v6 |= 1u;
  return wil_details_RtlNotifyFeatureUsage(&v4);
}
