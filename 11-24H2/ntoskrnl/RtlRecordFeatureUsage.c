/*
 * XREFs of RtlRecordFeatureUsage @ 0x1403A7560
 * Callers:
 *     wil_details_RecordCachedUsage @ 0x1404D0CE4 (wil_details_RecordCachedUsage.c)
 *     wil_details_RecordFeatureUsageReporting @ 0x140667E50 (wil_details_RecordFeatureUsageReporting.c)
 * Callees:
 *     CmFcManagerRecordFeatureUsage @ 0x1403A6974 (CmFcManagerRecordFeatureUsage.c)
 */

void __fastcall RtlRecordFeatureUsage(__int64 a1, __int64 a2)
{
  if ( a2 )
    CmFcManagerRecordFeatureUsage(a1, a1, a2);
}
