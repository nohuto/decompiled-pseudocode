/*
 * XREFs of Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledDeviceUsageNoInline @ 0x14068ABD8
 * Callers:
 *     SdbpGetVelocityState @ 0x1407F5134 (SdbpGetVelocityState.c)
 * Callees:
 *     Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledFallback @ 0x14068AC10 (Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FoxitScreenRecorderArm64Fix__private_featureState & 0x10) != 0 )
    return Feature_FoxitScreenRecorderArm64Fix__private_featureState & 1;
  else
    return Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledFallback(
             (unsigned int)Feature_FoxitScreenRecorderArm64Fix__private_featureState,
             3LL);
}
