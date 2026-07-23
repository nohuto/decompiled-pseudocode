/*
 * XREFs of RtlpFcSizeOfFeatureUsageDataBuffer @ 0x1405F00C4
 * Callers:
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A8CF00 (CmFcpManagerPublishFeatureUsageData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcSizeOfFeatureUsageDataBuffer(unsigned int a1)
{
  return 8LL * a1 + 32;
}
