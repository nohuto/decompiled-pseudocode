/*
 * XREFs of Feature_WordStormingArm64Fix__private_IsEnabledDeviceUsageNoInline @ 0x180098FA8
 * Callers:
 *     SdbpGetVelocityState @ 0x18009B2D0 (SdbpGetVelocityState.c)
 * Callees:
 *     <none>
 */

__int64 Feature_WordStormingArm64Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WordStormingArm64Fix__private_featureState & 0x10) != 0 )
    return Feature_WordStormingArm64Fix__private_featureState & 1;
  else
    return Feature_WordStormingArm64Fix__private_IsEnabledFallback(
             (unsigned int)Feature_WordStormingArm64Fix__private_featureState,
             3LL);
}
