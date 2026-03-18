/*
 * XREFs of Usbh_BS_BusSuspend @ 0x140040C94
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x14001FC5C (UsbhDispatch_BusEvent.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhBusPnpStop_Action @ 0x14001EB48 (UsbhBusPnpStop_Action.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhReleaseBusStateLock @ 0x140033BCC (UsbhReleaseBusStateLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhBusDisconnect_Action @ 0x14004077C (UsbhBusDisconnect_Action.c)
 *     UsbhBusReset_Action @ 0x140040814 (UsbhBusReset_Action.c)
 */

__int64 __fastcall Usbh_BS_BusSuspend(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx

  v3 = a3;
  FdoExt((__int64)a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651724371, a2, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xEu,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
  v7 = v3 - 3;
  if ( !v7 )
  {
    UsbhBusPnpStop_Action((__int64)a1, a2);
    v6 = 2;
    return UsbhReleaseBusStateLock(a1, a2, v6);
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    v6 = 4;
    return UsbhReleaseBusStateLock(a1, a2, v6);
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v6 = 3;
    return UsbhReleaseBusStateLock(a1, a2, v6);
  }
  v10 = v9 - 2;
  if ( !v10 )
  {
    UsbhBusReset_Action((__int64)a1, a2);
    goto LABEL_11;
  }
  if ( v10 == 1 )
  {
    UsbhBusDisconnect_Action((__int64)a1, a2);
LABEL_11:
    v6 = 5;
  }
  return UsbhReleaseBusStateLock(a1, a2, v6);
}
