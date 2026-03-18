/*
 * XREFs of UsbhClearTt @ 0x14004590C
 * Callers:
 *     UsbhReset1Complete @ 0x1400188C0 (UsbhReset1Complete.c)
 *     UsbhInitializeDevice @ 0x14002A2B4 (UsbhInitializeDevice.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x14000A470 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhClearTt(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  _DWORD *v6; // r14
  void *v7; // r10
  int v8; // edx
  int v9; // edx
  __int64 v10; // [rsp+20h] [rbp-40h]
  __int64 v11; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+50h] [rbp-10h] BYREF
  _WORD v13[4]; // [rsp+58h] [rbp-8h] BYREF
  __int16 v14; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a3;
  v12 = 0;
  v6 = FdoExt(a1);
  Log(a1, 4, 1919243348, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x18u,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      *(unsigned __int16 *)(a2 + 4));
  if ( (v6[640] & 0x80u) != 0 )
  {
    v14 = 0;
    v13[0] = 2083;
    Log(a1, 4, 1920156737, v3, 0LL);
    v13[2] = *(_WORD *)(a2 + 4);
    v13[3] = 0;
    v13[1] = 16 * (v3 & 0x7F);
    v8 = UsbhSyncSendCommand(a1, (unsigned __int8 *)v13, 0LL, &v14, v10, &v12);
    if ( (v8 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v8) )
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 22LL, v13, 8u, v9, v12, usbfile_bus_c, 2412, 0);
  }
  else
  {
    Log(a1, 4, 1851872340, a2, 0LL);
    if ( WPP_RECORDER_INITIALIZED != v7 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v11) = *(unsigned __int16 *)(a2 + 4);
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0x19u,
          (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
          v11);
      }
    }
  }
}
