/*
 * XREFs of RtlpFcInitializeDelayedFeatureUsageDataBuffer @ 0x1404B41F0
 * Callers:
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A90804 (CmFcpManagerPublishFeatureUsageData.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeDelayedFeatureUsageDataBuffer(void *a1, size_t a2)
{
  return memset_0(a1, 0, a2);
}
