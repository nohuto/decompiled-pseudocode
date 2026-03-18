/*
 * XREFs of Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1400721B8
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledFallback @ 0x1400721F0 (Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_BasicDisplayDeviceEscape_Fix__private_featureState & 0x10) != 0 )
    return Feature_BasicDisplayDeviceEscape_Fix__private_featureState & 1;
  else
    return Feature_BasicDisplayDeviceEscape_Fix__private_IsEnabledFallback(
             (unsigned int)Feature_BasicDisplayDeviceEscape_Fix__private_featureState,
             3LL);
}
