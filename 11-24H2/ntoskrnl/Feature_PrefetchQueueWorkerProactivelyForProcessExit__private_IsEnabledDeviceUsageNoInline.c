/*
 * XREFs of Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline @ 0x14020EFA8
 * Callers:
 *     MiQueuePageAccessLog @ 0x14020D250 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x140479740 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140479890 (MiAllocatePfnRepurposeLogDispatch.c)
 * Callees:
 *     Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledFallback @ 0x1404F8E1C (Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledFallback.c)
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
