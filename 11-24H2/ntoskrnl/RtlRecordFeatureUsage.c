/*
 * XREFs of RtlRecordFeatureUsage @ 0x14048C600
 * Callers:
 *     wil_details_RecordCachedUsage @ 0x1404C9D24 (wil_details_RecordCachedUsage.c)
 *     wil_details_RecordFeatureUsageReporting @ 0x140666790 (wil_details_RecordFeatureUsageReporting.c)
 * Callees:
 *     CmFcManagerRecordFeatureUsage @ 0x14048C624 (CmFcManagerRecordFeatureUsage.c)
 */

__int64 __fastcall RtlRecordFeatureUsage(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return CmFcManagerRecordFeatureUsage(a1, a1, a2);
  return result;
}
