/*
 * XREFs of Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledDeviceUsageNoInline @ 0x14008CE68
 * Callers:
 *     DpiDxgkDdiDisplayMuxGetDriverSupportLevel @ 0x14008C1D8 (DpiDxgkDdiDisplayMuxGetDriverSupportLevel.c)
 * Callees:
 *     Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledFallback @ 0x14008CEA0 (Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledFallback.c)
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
