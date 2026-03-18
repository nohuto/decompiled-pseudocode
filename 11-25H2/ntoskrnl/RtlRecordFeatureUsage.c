/*
 * XREFs of RtlRecordFeatureUsage @ 0x1403BA010
 * Callers:
 *     wil_details_RecordCachedUsage @ 0x1404D0C14 (wil_details_RecordCachedUsage.c)
 *     wil_details_RecordFeatureUsageReporting @ 0x14065C550 (wil_details_RecordFeatureUsageReporting.c)
 * Callees:
 *     CmFcManagerRecordFeatureUsage @ 0x1403B8E68 (CmFcManagerRecordFeatureUsage.c)
 */

void __fastcall RtlRecordFeatureUsage(__int64 a1, __int64 a2)
{
  if ( a2 )
    CmFcManagerRecordFeatureUsage(a1, a1, a2);
}
