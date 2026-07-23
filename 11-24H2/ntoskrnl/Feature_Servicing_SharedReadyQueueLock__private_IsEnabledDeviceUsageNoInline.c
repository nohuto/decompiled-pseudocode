/*
 * XREFs of Feature_Servicing_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline @ 0x1405B23AC
 * Callers:
 *     KiInitializeVelocity @ 0x140C2A6C8 (KiInitializeVelocity.c)
 * Callees:
 *     Feature_Servicing_SharedReadyQueueLock__private_IsEnabledFallback @ 0x1405B23E4 (Feature_Servicing_SharedReadyQueueLock__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_SharedReadyQueueLock__private_featureState & 0x10) != 0 )
    return Feature_Servicing_SharedReadyQueueLock__private_featureState & 1;
  else
    return Feature_Servicing_SharedReadyQueueLock__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_SharedReadyQueueLock__private_featureState,
             3LL);
}
