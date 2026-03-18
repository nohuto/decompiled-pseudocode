/*
 * XREFs of Feature_CompatPreallocatedVelocity55922060__private_IsEnabledDeviceUsageNoInline @ 0x14068A548
 * Callers:
 *     SdbpGetVelocityState @ 0x1407F5134 (SdbpGetVelocityState.c)
 * Callees:
 *     Feature_CompatPreallocatedVelocity55922060__private_IsEnabledFallback @ 0x14068A580 (Feature_CompatPreallocatedVelocity55922060__private_IsEnabledFallback.c)
 */

__int64 Feature_CompatPreallocatedVelocity55922060__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompatPreallocatedVelocity55922060__private_featureState & 0x10) != 0 )
    return Feature_CompatPreallocatedVelocity55922060__private_featureState & 1;
  else
    return Feature_CompatPreallocatedVelocity55922060__private_IsEnabledFallback(
             (unsigned int)Feature_CompatPreallocatedVelocity55922060__private_featureState,
             3LL);
}
