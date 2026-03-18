/*
 * XREFs of XilDeviceSlot_Create @ 0x140045BA0
 * Callers:
 *     DeviceSlot_Create @ 0x14007A7B4 (DeviceSlot_Create.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x14002CA54 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x140045C10 (XilDeviceSlot_CreateSecureObject.c)
 */

__int64 __fastcall XilDeviceSlot_Create(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // dl
  int SecureObject; // ebx
  _QWORD *XilCoreDeviceSlotData; // rax
  __int64 v6; // rcx

  v2 = a1 + 16;
  *(_QWORD *)(v2 + 72) = a1;
  v3 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1001LL);
  *(_BYTE *)(v2 + 64) = v3;
  if ( v3 )
  {
    SecureObject = XilDeviceSlot_CreateSecureObject();
    if ( SecureObject < 0 )
      Debug_FreAssertMsg(
        (__int64)"XilDeviceSlot_CreateSecureObject failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        143);
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(a1);
    *XilCoreDeviceSlotData = a1;
    v6 = *(_QWORD *)(a1 + 8);
    SecureObject = 0;
    XilCoreDeviceSlotData[1] = v6;
  }
  return (unsigned int)SecureObject;
}
