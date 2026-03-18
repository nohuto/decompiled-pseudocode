/*
 * XREFs of UserGetIsSwitchInProgress @ 0x1401BE980
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x14004C930 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6978 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall UserGetIsSwitchInProgress(__int64 a1)
{
  return *(_DWORD *)(W32GetUserGdiSessionState(a1) + 36) != 0;
}
