/*
 * XREFs of Feature_CompatPreallocatedVelocity55922065__private_IsEnabledDeviceUsageNoInline @ 0x140696C60
 * Callers:
 *     SdbpGetVelocityState @ 0x1408054C8 (SdbpGetVelocityState.c)
 * Callees:
 *     Feature_CompatPreallocatedVelocity55922065__private_IsEnabledFallback @ 0x140696C98 (Feature_CompatPreallocatedVelocity55922065__private_IsEnabledFallback.c)
 */

__int64 Feature_CompatPreallocatedVelocity55922065__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompatPreallocatedVelocity55922065__private_featureState & 0x10) != 0 )
    return Feature_CompatPreallocatedVelocity55922065__private_featureState & 1;
  else
    return Feature_CompatPreallocatedVelocity55922065__private_IsEnabledFallback(
             (unsigned int)Feature_CompatPreallocatedVelocity55922065__private_featureState,
             3LL);
}
