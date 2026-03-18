/*
 * XREFs of XilDeviceSlot_GetUsbDeviceHandleArray @ 0x140018FE0
 * Callers:
 *     XilDeviceSlot_SetDeviceContext @ 0x140001348 (XilDeviceSlot_SetDeviceContext.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x140018F90 (DeviceSlot_DisableAllDeviceSlots.c)
 *     Controller_InitiateRecovery @ 0x14004032C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x140045C3C (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_LocateDeviceByPortPath @ 0x140045CD0 (DeviceSlot_LocateDeviceByPortPath.c)
 *     Controller_TelemetryAddControllerData @ 0x140078C9C (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetUsbDeviceHandleArray(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 80) )
    return *(_QWORD *)(a1 + 24);
  else
    return *(_QWORD *)(a1 + 72);
}
