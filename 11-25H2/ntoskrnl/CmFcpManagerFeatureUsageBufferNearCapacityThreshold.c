/*
 * XREFs of CmFcpManagerFeatureUsageBufferNearCapacityThreshold @ 0x1404BD078
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1407D5078 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmFcpManagerFeatureUsageBufferNearCapacityThreshold(unsigned int a1)
{
  return (a1 >> 1) + (a1 >> 2);
}
