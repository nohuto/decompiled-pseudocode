/*
 * XREFs of Feature_CompatPreallocatedVelocity55922054__private_IsEnabledDeviceUsageNoInline @ 0x140695848
 * Callers:
 *     SdbpGetVelocityState @ 0x140804D88 (SdbpGetVelocityState.c)
 * Callees:
 *     Feature_CompatPreallocatedVelocity55922054__private_IsEnabledFallback @ 0x140695880 (Feature_CompatPreallocatedVelocity55922054__private_IsEnabledFallback.c)
 */

__int64 Feature_CompatPreallocatedVelocity55922054__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompatPreallocatedVelocity55922054__private_featureState & 0x10) != 0 )
    return Feature_CompatPreallocatedVelocity55922054__private_featureState & 1;
  else
    return Feature_CompatPreallocatedVelocity55922054__private_IsEnabledFallback(
             (unsigned int)Feature_CompatPreallocatedVelocity55922054__private_featureState,
             3LL);
}
