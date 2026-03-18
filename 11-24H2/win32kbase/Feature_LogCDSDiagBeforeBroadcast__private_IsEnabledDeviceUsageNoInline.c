/*
 * XREFs of Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledDeviceUsageNoInline @ 0x1401AB9A4
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledFallback @ 0x1401AB9DC (Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledFallback.c)
 */

__int64 Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_LogCDSDiagBeforeBroadcast__private_featureState & 0x10) != 0 )
    return Feature_LogCDSDiagBeforeBroadcast__private_featureState & 1;
  else
    return Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledFallback(
             (unsigned int)Feature_LogCDSDiagBeforeBroadcast__private_featureState,
             3LL);
}
