/*
 * XREFs of RtlpFcInitializeDelayedFeatureUsageDataBuffer @ 0x1404B48E0
 * Callers:
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A8D96C (CmFcpManagerPublishFeatureUsageData.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeDelayedFeatureUsageDataBuffer(void *a1, size_t a2)
{
  return memset_0(a1, 0, a2);
}
