/*
 * XREFs of wil_details_RecordFeatureUsageCallback @ 0x1400D92E4
 * Callers:
 *     wil_details_RecordCachedUsage @ 0x140085F20 (wil_details_RecordCachedUsage.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_RecordFeatureUsageCallback(
        __WIL_RTL_FEATURE_USAGE_DATA *reports,
        unsigned __int64 reportsCount,
        __int64 a3,
        __int64 a4)
{
  RtlRecordFeatureUsage(reports, reportsCount, a3, a4);
}
