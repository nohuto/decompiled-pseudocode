/*
 * XREFs of Feature_MouseHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140212698
 * Callers:
 *     InputHapticsTrigger @ 0x140212DF0 (InputHapticsTrigger.c)
 * Callees:
 *     Feature_MouseHaptics__private_IsEnabledFallback @ 0x1402126D0 (Feature_MouseHaptics__private_IsEnabledFallback.c)
 */

__int64 Feature_MouseHaptics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MouseHaptics__private_featureState & 0x10) != 0 )
    return Feature_MouseHaptics__private_featureState & 1;
  else
    return Feature_MouseHaptics__private_IsEnabledFallback(
             (unsigned int)Feature_MouseHaptics__private_featureState,
             3LL);
}
