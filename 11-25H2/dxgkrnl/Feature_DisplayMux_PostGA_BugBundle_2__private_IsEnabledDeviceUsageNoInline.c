/*
 * XREFs of Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x14007D618
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledFallback @ 0x14007D650 (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledFallback.c)
 */

__int64 Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisplayMux_PostGA_BugBundle_2__private_featureState & 0x10) != 0 )
    return Feature_DisplayMux_PostGA_BugBundle_2__private_featureState & 1;
  else
    return Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledFallback(
             (unsigned int)Feature_DisplayMux_PostGA_BugBundle_2__private_featureState,
             3LL);
}
