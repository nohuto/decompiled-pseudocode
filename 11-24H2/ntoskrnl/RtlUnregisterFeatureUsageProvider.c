/*
 * XREFs of RtlUnregisterFeatureUsageProvider @ 0x140781DC0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x1406F768C (CmFcManagerUnregisterFeatureUsageProvider.c)
 */

void __fastcall RtlUnregisterFeatureUsageProvider(int *a1)
{
  CmFcManagerUnregisterFeatureUsageProvider((__int64)a1, a1);
}
