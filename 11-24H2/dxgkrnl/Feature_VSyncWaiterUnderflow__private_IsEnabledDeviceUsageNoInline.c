/*
 * XREFs of Feature_VSyncWaiterUnderflow__private_IsEnabledDeviceUsageNoInline @ 0x14006B558
 * Callers:
 *     DxgkModifyVSyncWaiterInternal @ 0x1401ADA80 (DxgkModifyVSyncWaiterInternal.c)
 * Callees:
 *     Feature_VSyncWaiterUnderflow__private_IsEnabledFallback @ 0x14006B590 (Feature_VSyncWaiterUnderflow__private_IsEnabledFallback.c)
 */

__int64 Feature_VSyncWaiterUnderflow__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_VSyncWaiterUnderflow__private_featureState & 0x10) != 0 )
    return Feature_VSyncWaiterUnderflow__private_featureState & 1;
  else
    return Feature_VSyncWaiterUnderflow__private_IsEnabledFallback(
             (unsigned int)Feature_VSyncWaiterUnderflow__private_featureState,
             3LL);
}
