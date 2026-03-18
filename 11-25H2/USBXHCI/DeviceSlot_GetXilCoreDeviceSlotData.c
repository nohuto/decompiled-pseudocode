/*
 * XREFs of DeviceSlot_GetXilCoreDeviceSlotData @ 0x14002CA54
 * Callers:
 *     UsbDevice_SetDeviceDisabled @ 0x14000E7F4 (UsbDevice_SetDeviceDisabled.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x14002C4C8 (XilDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_DisableCompletion @ 0x14002C738 (UsbDevice_DisableCompletion.c)
 *     XilDeviceSlot_Create @ 0x140045BA0 (XilDeviceSlot_Create.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 */

__int64 __fastcall DeviceSlot_GetXilCoreDeviceSlotData(__int64 a1)
{
  __int64 result; // rax

  result = a1 + 16;
  if ( *(_BYTE *)(a1 + 80) )
  {
    Debug_FreAssertMsg(
      (__int64)"Unexpected code path hit",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\deviceslot.c",
      123);
    return 0LL;
  }
  return result;
}
