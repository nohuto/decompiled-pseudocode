/*
 * XREFs of RtlUnregisterFeatureUsageProvider @ 0x140772B70
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x1406EBE28 (CmFcManagerUnregisterFeatureUsageProvider.c)
 */

void __fastcall RtlUnregisterFeatureUsageProvider(int *a1)
{
  CmFcManagerUnregisterFeatureUsageProvider((__int64)a1, a1);
}
