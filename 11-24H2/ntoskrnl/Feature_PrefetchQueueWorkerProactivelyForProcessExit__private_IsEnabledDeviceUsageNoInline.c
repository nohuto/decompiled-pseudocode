/*
 * XREFs of Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline @ 0x140245E80
 * Callers:
 *     MiQueuePageAccessLog @ 0x140244A68 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x14047E840 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14047E990 (MiAllocatePfnRepurposeLogDispatch.c)
 * Callees:
 *     Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledFallback @ 0x1404FB558 (Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledFallback.c)
 */

__int64 Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_featureState & 0x10) != 0 )
    return Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_featureState & 1;
  else
    return Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledFallback(
             (unsigned int)Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_featureState,
             3LL);
}
