/*
 * XREFs of Feature_CompatPreallocatedVelocity55922055__private_IsEnabledDeviceUsageNoInline @ 0x14069589C
 * Callers:
 *     SdbpGetVelocityState @ 0x140804D88 (SdbpGetVelocityState.c)
 * Callees:
 *     Feature_CompatPreallocatedVelocity55922055__private_IsEnabledFallback @ 0x1406958D4 (Feature_CompatPreallocatedVelocity55922055__private_IsEnabledFallback.c)
 */

__int64 Feature_CompatPreallocatedVelocity55922055__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompatPreallocatedVelocity55922055__private_featureState & 0x10) != 0 )
    return Feature_CompatPreallocatedVelocity55922055__private_featureState & 1;
  else
    return Feature_CompatPreallocatedVelocity55922055__private_IsEnabledFallback(
             (unsigned int)Feature_CompatPreallocatedVelocity55922055__private_featureState,
             3LL);
}
