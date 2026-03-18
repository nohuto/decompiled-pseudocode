/*
 * XREFs of Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledDeviceUsageNoInline @ 0x14008BEA8
 * Callers:
 *     DpiDxgkDdiDisplayMuxGetDriverSupportLevel @ 0x14008B218 (DpiDxgkDdiDisplayMuxGetDriverSupportLevel.c)
 * Callees:
 *     Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledFallback @ 0x14008BEE0 (Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisplayMux_ForceDriverFullSupport__private_featureState & 0x10) != 0 )
    return Feature_DisplayMux_ForceDriverFullSupport__private_featureState & 1;
  else
    return Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledFallback(
             (unsigned int)Feature_DisplayMux_ForceDriverFullSupport__private_featureState,
             3LL);
}
