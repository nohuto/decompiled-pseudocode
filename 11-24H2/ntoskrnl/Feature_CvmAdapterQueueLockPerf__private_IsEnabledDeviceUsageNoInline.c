/*
 * XREFs of Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline @ 0x14053C12C
 * Callers:
 *     HalpDmaDequeueAdapter @ 0x140390CA0 (HalpDmaDequeueAdapter.c)
 *     HalpDmaQueueAdapter @ 0x1404D9E04 (HalpDmaQueueAdapter.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x14053C744 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C10B98 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     Feature_CvmAdapterQueueLockPerf__private_IsEnabledFallback @ 0x14053C164 (Feature_CvmAdapterQueueLockPerf__private_IsEnabledFallback.c)
 */

__int64 Feature_CvmAdapterQueueLockPerf__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CvmAdapterQueueLockPerf__private_featureState & 0x10) != 0 )
    return Feature_CvmAdapterQueueLockPerf__private_featureState & 1;
  else
    return Feature_CvmAdapterQueueLockPerf__private_IsEnabledFallback(
             (unsigned int)Feature_CvmAdapterQueueLockPerf__private_featureState,
             3LL);
}
