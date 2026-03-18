/*
 * XREFs of XilDeviceSlot_SetDeviceContext @ 0x14002C4C8
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x140030C60 (UsbDevice_EnableCompletion.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1400243D0 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x14002C5CC (XilCoreDeviceSlot_SetDeviceContext.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x14002CA54 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x140046374 (XilDeviceSlot_SendSetDeviceContextRequest.c)
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
  if ( Controller_IsControllerAccessible(v6) )
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
          (__int64)"XilCoreDeviceSlot_SetDeviceContext failed",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
          722);
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
