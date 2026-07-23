/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker @ 0x1407E5620
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1407E54B8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 */

void __fastcall CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker(__int64 a1, __int64 a2)
{
  _InterlockedAnd((volatile signed __int32 *)(a2 + 1868), 0xFFFFFFFE);
  CmFcpManagerPublishFeatureUsageDataIfNearCapacity(a2);
}
