/*
 * XREFs of UsbhReset1DropDeviceTimeout @ 0x1400581C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhDropDevice @ 0x14001846C (UsbhDropDevice.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhAssertBusLock @ 0x140037AD0 (UsbhAssertBusLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhReset1DropDeviceTimeout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x15u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v9);
  }
  Log(a1, 1024, 1884451951, a2, 0LL);
  UsbhAssertBusLock(a1);
  LODWORD(v8) = -1073741823;
  LODWORD(v7) = *(unsigned __int16 *)(a2 + 4);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT, v7, v8);
  UsbhDropDevice(a1, a2, a3);
  return 0LL;
}
