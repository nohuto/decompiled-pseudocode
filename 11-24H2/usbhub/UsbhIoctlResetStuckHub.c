/*
 * XREFs of UsbhIoctlResetStuckHub @ 0x14004D718
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140009180 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhIoctlTraceOutput @ 0x1400220A0 (UsbhIoctlTraceOutput.c)
 *     UsbhAcquireApiLock @ 0x140023660 (UsbhAcquireApiLock.c)
 *     UsbhReleaseApiLock @ 0x140023854 (UsbhReleaseApiLock.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhVerifyCallerIsAdmin @ 0x14004D980 (UsbhVerifyCallerIsAdmin.c)
 */

__int64 __fastcall UsbhIoctlResetStuckHub(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v5; // rax
  _QWORD *v6; // rbp
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // [rsp+28h] [rbp-50h]
  char IsAdmin; // [rsp+88h] [rbp+10h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v12 = a3;
  LOBYTE(v12) = 0;
  Log(a1, 32, 1768898097, (__int64)a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x11u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v13 = 275;
  Log(a1, 32, 1768898098, (__int64)a2, 0LL);
  IsAdmin = UsbhVerifyCallerIsAdmin();
  v5 = FdoExt(a1);
  v6 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v5 + 434), (__int64)a2, 1430414185, 1);
  if ( v6 )
  {
    v7 = UsbhAcquireApiLock(a1, 0xF00D0275, &v12);
    if ( (v7 & 0xC0000000) != 0xC0000000 )
    {
      UsbhException(a1, 0LL, 132LL, &IsAdmin, 1u, v7, 0, usbfile_ioctl_c, 452, 0);
      a2->IoStatus.Information = 0LL;
    }
  }
  else
  {
    v7 = -1073741670;
  }
  Log(a1, 32, 1768897586, (__int64)a2, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x12u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v10);
  }
  if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
    UsbhException(a1, 0LL, 91LL, &v13, 4u, v7, 0, usbfile_ioctl_c, 465, 0);
  if ( (_BYTE)v12 )
    UsbhReleaseApiLock(a1, 0xF00D0275);
  UsbhIoctlTraceOutput(a1, (__int64)a2);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v8, v6);
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v7;
}
