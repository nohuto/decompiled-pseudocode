/*
 * XREFs of RIMGetDeviceLocationInfo @ 0x1C0188EF0
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C0177150 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0187030 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0194448 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetContainerId @ 0x1C006D15C (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1C006D320 (RIMGetPanelId.c)
 */

__int64 __fastcall RIMGetDeviceLocationInfo(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  ULONG v4; // r8d

  *(_DWORD *)(a2 + 16) = 2;
  RIMGetContainerId(a1, (void *)a2, (_DWORD *)(a2 + 16));
  return RIMGetPanelId(a1, (_WORD *)(a2 + 20), v4);
}
