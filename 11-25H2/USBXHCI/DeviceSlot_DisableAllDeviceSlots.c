/*
 * XREFs of DeviceSlot_DisableAllDeviceSlots @ 0x140024378
 * Callers:
 *     DeviceSlot_D0EntryCleanupState @ 0x1400242D4 (DeviceSlot_D0EntryCleanupState.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400382B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x14004592C (DeviceSlot_ControllerResetPostReset.c)
 * Callees:
 *     UsbDevice_SetDeviceDisabled @ 0x14000E7F4 (UsbDevice_SetDeviceDisabled.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1400243D0 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 */

void __fastcall DeviceSlot_DisableAllDeviceSlots(__int64 a1)
{
  unsigned int i; // ebx
  __int64 v3; // rcx

  for ( i = 1; i <= *(_DWORD *)(a1 + 96); ++i )
  {
    v3 = *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(a1) + 8LL * i);
    if ( v3 )
      UsbDevice_SetDeviceDisabled(v3, i);
  }
}
