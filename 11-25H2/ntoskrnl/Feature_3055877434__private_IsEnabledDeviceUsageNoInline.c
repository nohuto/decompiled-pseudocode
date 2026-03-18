/*
 * XREFs of Feature_3055877434__private_IsEnabledDeviceUsageNoInline @ 0x1406412FC
 * Callers:
 *     EtwpValidateFlagExtension @ 0x140A387D0 (EtwpValidateFlagExtension.c)
 * Callees:
 *     Feature_3055877434__private_IsEnabledFallback @ 0x140641334 (Feature_3055877434__private_IsEnabledFallback.c)
 */

__int64 Feature_3055877434__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3055877434__private_featureState & 0x10) != 0 )
    return Feature_3055877434__private_featureState & 1;
  else
    return Feature_3055877434__private_IsEnabledFallback((unsigned int)Feature_3055877434__private_featureState, 3LL);
}
