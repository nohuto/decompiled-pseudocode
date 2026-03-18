/*
 * XREFs of Feature_DisplayMux_ForceMuxFullSupport__private_IsEnabledDeviceUsageNoInline @ 0x140089D18
 * Callers:
 *     ?Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140084D78 (-Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     Feature_DisplayMux_ForceMuxFullSupport__private_IsEnabledFallback @ 0x140089D50 (Feature_DisplayMux_ForceMuxFullSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_DisplayMux_ForceMuxFullSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisplayMux_ForceMuxFullSupport__private_featureState & 0x10) != 0 )
    return Feature_DisplayMux_ForceMuxFullSupport__private_featureState & 1;
  else
    return Feature_DisplayMux_ForceMuxFullSupport__private_IsEnabledFallback(
             (unsigned int)Feature_DisplayMux_ForceMuxFullSupport__private_featureState,
             3LL);
}
