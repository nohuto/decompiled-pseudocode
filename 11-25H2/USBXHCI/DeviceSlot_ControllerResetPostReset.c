/*
 * XREFs of DeviceSlot_ControllerResetPostReset @ 0x14004592C
 * Callers:
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 * Callees:
 *     DeviceSlot_Initialize @ 0x14000D658 (DeviceSlot_Initialize.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x140024378 (DeviceSlot_DisableAllDeviceSlots.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1400243D0 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x140045FA8 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     UsbDevice_ControllerResetPostReset @ 0x14004E16C (UsbDevice_ControllerResetPostReset.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall DeviceSlot_ControllerResetPostReset(__int64 a1)
{
  unsigned int i; // ebx
  __int64 *j; // rbx

  for ( i = 1; i <= *(_DWORD *)(a1 + 96); ++i )
  {
    if ( *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(a1) + 8LL * i) )
      UsbDevice_ControllerResetPostReset();
  }
  DeviceSlot_DisableAllDeviceSlots(a1);
  if ( *(_BYTE *)(a1 + 80) )
  {
    XilDeviceSlot_InitializeSecureScratchpadBuffers(a1 + 16);
  }
  else
  {
    for ( j = *(__int64 **)(a1 + 56); j != (__int64 *)(a1 + 56); j = (__int64 *)*j )
      memset((void *)j[2], 0, *((unsigned int *)j + 10));
  }
  return DeviceSlot_Initialize(a1);
}
