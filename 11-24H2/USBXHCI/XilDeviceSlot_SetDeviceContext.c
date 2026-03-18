/*
 * XREFs of XilDeviceSlot_SetDeviceContext @ 0x140001348
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x14002FC80 (UsbDevice_EnableCompletion.c)
 * Callees:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x14000144C (XilCoreDeviceSlot_SetDeviceContext.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x140002084 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x140018FE0 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x140046684 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 */

__int64 __fastcall XilDeviceSlot_SetDeviceContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // r14
  int v7; // ebx
  __int64 XilCoreDeviceSlotData; // rax
  int v10; // edx

  v3 = a1 + 16;
  v4 = a3;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL);
  if ( (unsigned __int8)Controller_IsControllerAccessible(v6) )
  {
    if ( *(_BYTE *)(v3 + 64) )
    {
      v7 = XilDeviceSlot_SendSetDeviceContextRequest(v3, a2, (unsigned int)v4);
      if ( v7 >= 0 )
        *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(*(_QWORD *)(v3 + 72)) + 8 * v4) = a2;
    }
    else
    {
      XilCoreDeviceSlotData = DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v3 + 72));
      v7 = XilCoreDeviceSlot_SetDeviceContext(XilCoreDeviceSlotData, a2, (unsigned int)v4, 0LL);
      if ( v7 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v6 + 72),
            v10,
            10,
            25,
            (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
            v7);
        }
        Debug_FreAssertMsg(
          "XilCoreDeviceSlot_SetDeviceContext failed",
          0LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
          722LL);
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
