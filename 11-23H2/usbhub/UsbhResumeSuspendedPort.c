/*
 * XREFs of UsbhResumeSuspendedPort @ 0x1C001A698
 * Callers:
 *     UsbhHandleSuspend @ 0x1C001A5BC (UsbhHandleSuspend.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhResumePort @ 0x1C001A780 (UsbhResumePort.c)
 *     UsbhSignalResumeEvent @ 0x1C001B710 (UsbhSignalResumeEvent.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhResumeSuspendedPort(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  int v8; // eax
  _DWORD *v10; // rax
  unsigned int v11; // r10d
  int v12; // r10d
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3;
  v14 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a4 + 4));
  Log(a1, 1024, 1936937549, a4, v5);
  FdoExt(a1);
  if ( (v5 & 0x1A) == 0x18 && a5 )
  {
    v10 = PdoExt(a5);
    v10[355] |= 0x2000u;
  }
  if ( (v5 & 2) == 0 || (v5 & 0x10) == 0 )
    goto LABEL_10;
  v8 = UsbhResumePort(a1, a4, &v14);
  v13 = *(unsigned __int16 *)(a4 + 4);
  if ( v8 < 0 )
  {
    Log(a1, 16, 1347568944, v8, v13);
    if ( !(unsigned __int8)Usb_Disconnected(v11) )
      UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 47, 0, 0, v12, v14, usbfile_busfunc_c, 3115, 0);
LABEL_10:
    UsbhSignalResumeEvent(a1, a4);
    return 0LL;
  }
  Log(a1, 16, 2004111955, 0LL, v13);
  return 0LL;
}
