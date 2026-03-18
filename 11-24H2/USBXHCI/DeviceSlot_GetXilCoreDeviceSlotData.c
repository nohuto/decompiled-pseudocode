/*
 * XREFs of DeviceSlot_GetXilCoreDeviceSlotData @ 0x140002084
 * Callers:
 *     XilDeviceSlot_SetDeviceContext @ 0x140001348 (XilDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_DisableCompletion @ 0x140001D68 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x140002568 (UsbDevice_SetDeviceDisabled.c)
 *     XilDeviceSlot_Create @ 0x140045EB0 (XilDeviceSlot_Create.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 */

__int64 __fastcall DeviceSlot_GetXilCoreDeviceSlotData(__int64 a1)
{
  __int64 result; // rax

  result = a1 + 16;
  if ( *(_BYTE *)(a1 + 80) )
  {
    Debug_FreAssertMsg(
      "Unexpected code path hit",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\deviceslot.c",
      123LL);
    return 0LL;
  }
  return result;
}
