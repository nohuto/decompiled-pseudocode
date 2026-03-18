/*
 * XREFs of DrvDisplayConfigGetDeviceInfo @ 0x1C00C5450
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0014230 (DrvSetDisplayConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01907BC (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0015D50 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfo(struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1)
{
  return DrvDisplayConfigGetDeviceInfoInternal(a1, 0);
}
