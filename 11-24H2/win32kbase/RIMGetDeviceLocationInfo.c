/*
 * XREFs of RIMGetDeviceLocationInfo @ 0x1400A5D6C
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1401D7170 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetContainerId @ 0x1400A789C (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1400A7B30 (RIMGetPanelId.c)
 */

__int64 __fastcall RIMGetDeviceLocationInfo(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 16) = 2;
  RIMGetContainerId();
  return RIMGetPanelId(a1, a2 + 20);
}
