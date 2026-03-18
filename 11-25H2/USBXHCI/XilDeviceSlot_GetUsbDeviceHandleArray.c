/*
 * XREFs of XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1400243D0
 * Callers:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x140024378 (DeviceSlot_DisableAllDeviceSlots.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x14002C4C8 (XilDeviceSlot_SetDeviceContext.c)
 *     Controller_InitiateRecovery @ 0x1400409DC (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x14004592C (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_LocateDeviceByPortPath @ 0x1400459C0 (DeviceSlot_LocateDeviceByPortPath.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 *     Controller_TelemetryAddControllerData @ 0x140078F88 (Controller_TelemetryAddControllerData.c)
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
