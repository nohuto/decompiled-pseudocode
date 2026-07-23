/*
 * XREFs of RtlUnregisterFeatureUsageProvider @ 0x140781CF0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x1406F568C (CmFcManagerUnregisterFeatureUsageProvider.c)
 */

void __fastcall RtlUnregisterFeatureUsageProvider(int *a1)
{
  CmFcManagerUnregisterFeatureUsageProvider((__int64)a1, a1);
}
