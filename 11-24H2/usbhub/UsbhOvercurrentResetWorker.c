/*
 * XREFs of UsbhOvercurrentResetWorker @ 0x14003F0B0
 * Callers:
 *     UsbhAutoOvercurrentResetWorker @ 0x14003EEB0 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhWmiResetOvercurrent @ 0x140055B30 (UsbhWmiResetOvercurrent.c)
 * Callees:
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     UsbhPCE_Enable @ 0x140020BC8 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x140020DB0 (UsbhPCE_Resume.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhDispatch_HardResetEvent @ 0x1400376CC (UsbhDispatch_HardResetEvent.c)
 *     UsbhSetPortPower @ 0x14003D390 (UsbhSetPortPower.c)
 *     UsbhDispatch_PindicatorEvent @ 0x14003E438 (UsbhDispatch_PindicatorEvent.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x14003F610 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhPCE_BusDisconnect @ 0x140042FFC (UsbhPCE_BusDisconnect.c)
 *     UsbhQueueSoftConnectChange @ 0x1400439CC (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhOvercurrentResetWorker(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v6; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 PortData; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // r10d
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r10
  int v19; // r11d
  __int64 v20; // r10
  int v21; // r11d
  int v22; // r11d
  int v24; // [rsp+78h] [rbp+10h] BYREF
  int v25; // [rsp+80h] [rbp+18h] BYREF

  v24 = 0;
  v6 = a2;
  FdoExt(a1);
  PortData = UsbhGetPortData(a1, (unsigned __int16)v6, v8, v9);
  Log(a1, 0x4000, 1870033495, a3, v6);
  UsbhWait(a1, 0x1F4u);
  Log(a1, 0x4000, 1870016848, a3, (unsigned __int16)v6);
  v13 = UsbhGetPortData(a1, (unsigned __int16)v6, v11, v12);
  if ( v13 )
    UsbhDispatch_PindicatorEvent(a1, v13, 3, a3);
  UsbhPCE_BusDisconnect(a1, a3, (unsigned __int16)v6);
  v14 = (int)UsbhSetPortPower(a1, v6);
  Log(a1, 0x4000, 1870017104, v14, (unsigned __int16)v6);
  if ( v15 < 0 )
  {
    if ( !Usb_Disconnected(v15) )
    {
      Log(a1, v22, 1870017569, a3, v6);
      UsbhDispatch_HardResetEvent(a1, a3, 3);
    }
  }
  else
  {
    UsbhWait(a1, dword_14006F5D4);
    UsbhPCE_Resume(a1, a3, v6);
    Log(a1, 0x4000, 1870025299, v14, (unsigned __int16)v6);
    v16 = UsbhQueryPortState(a1, (unsigned __int16)v6, (__int64)&v24, &v25);
    if ( !Usb_Disconnected(v16) )
    {
      Log(a1, 16, 1870017616, (unsigned __int16)v24, HIWORD(v24));
      Log(a1, v19, 1870017582, v18, (unsigned __int16)v6);
      if ( (int)v20 >= 0 && (v24 & 1) != 0 && (v24 & 0x10000) == 0 )
      {
        Log(a1, v21, 1870017872, (unsigned __int16)v6, v20);
        UsbhQueueSoftConnectChange(a1, (unsigned __int16)v6, a3, 0LL);
      }
      *(_DWORD *)(PortData + 2404) = 0;
      Log(a1, 0x4000, 1870017381, a3, (unsigned __int16)v6);
      UsbhPCE_Enable(a1, a3, v6);
    }
  }
  LOBYTE(v17) = a4;
  return Usbh_OvercurrentDerefHubBusy(a1, PortData, v17);
}
