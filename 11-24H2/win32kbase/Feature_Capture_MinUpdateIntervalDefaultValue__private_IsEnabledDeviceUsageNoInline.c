/*
 * XREFs of Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline @ 0x140237E10
 * Callers:
 *     ?Initialize@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJXZ @ 0x140196D30 (-Initialize@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x140237D10 (-SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledFallback @ 0x140237E48 (Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledFallback.c)
 */

__int64 Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Capture_MinUpdateIntervalDefaultValue__private_featureState & 0x10) != 0 )
    return Feature_Capture_MinUpdateIntervalDefaultValue__private_featureState & 1;
  else
    return Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledFallback(
             (unsigned int)Feature_Capture_MinUpdateIntervalDefaultValue__private_featureState,
             3LL);
}
