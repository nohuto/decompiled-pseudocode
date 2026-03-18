/*
 * XREFs of Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x1401CD2A4
 * Callers:
 *     NtHWCursorUpdatePointer @ 0x140179790 (NtHWCursorUpdatePointer.c)
 *     ?SetFloatProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140196840 (-SetFloatProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140235A70 (-SetFloatProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     Feature_DesktopDWMCursor__private_IsEnabledFallback @ 0x1401CD2DC (Feature_DesktopDWMCursor__private_IsEnabledFallback.c)
 */

__int64 Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DesktopDWMCursor__private_featureState & 0x10) != 0 )
    return Feature_DesktopDWMCursor__private_featureState & 1;
  else
    return Feature_DesktopDWMCursor__private_IsEnabledFallback(
             (unsigned int)Feature_DesktopDWMCursor__private_featureState,
             3LL);
}
