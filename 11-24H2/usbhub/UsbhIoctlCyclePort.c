/*
 * XREFs of UsbhIoctlCyclePort @ 0x14004C4B0
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140009180 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhIoctlValidateParameters @ 0x14000FC10 (UsbhIoctlValidateParameters.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     UsbhIoctlTraceOutput @ 0x1400220A0 (UsbhIoctlTraceOutput.c)
 *     UsbhAcquireApiLock @ 0x140023660 (UsbhAcquireApiLock.c)
 *     UsbhReleaseApiLock @ 0x140023854 (UsbhReleaseApiLock.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhUpdateUxdSettings @ 0x14002A6CC (UsbhUpdateUxdSettings.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhCycleDevicePort @ 0x140045ADC (UsbhCycleDevicePort.c)
 *     UsbhVerifyCallerIsAdmin @ 0x14004D980 (UsbhVerifyCallerIsAdmin.c)
 */

__int64 __fastcall UsbhIoctlCyclePort(__int64 a1, IRP *a2, __int64 a3)
{
  int v6; // r14d
  _IRP *MasterIrp; // r15
  _DWORD *v8; // rax
  _QWORD *v9; // r12
  int v10; // ebx
  struct _DEVICE_OBJECT *v11; // rbp
  char IsAdmin; // bl
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+28h] [rbp-70h]
  int v17; // [rsp+50h] [rbp-48h] BYREF
  int v18[17]; // [rsp+54h] [rbp-44h] BYREF
  char v19; // [rsp+A8h] [rbp+10h] BYREF
  char v20; // [rsp+B8h] [rbp+20h] BYREF

  v20 = 0;
  v17 = 0;
  v19 = 0;
  v6 = 0;
  Log(a1, 32, 1768898097, (__int64)a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0xFu,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v18[0] = 7;
  Log(a1, 32, 1768898098, (__int64)a2, (__int64)MasterIrp);
  v8 = FdoExt(a1);
  v9 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v8 + 434), (__int64)a2, 1430414185, 1);
  if ( v9 )
  {
    v10 = UsbhAcquireApiLock(a1, 0xF00D0002, &v20);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      v10 = UsbhIoctlValidateParameters(a1, 7, (__int64)a2, a3, 4u, 8u);
      if ( (v10 & 0xC0000000) != 0xC0000000 )
      {
        v11 = (struct _DEVICE_OBJECT *)UsbhLatchPdo(a1, MasterIrp->Type, (__int64)a2, 0x496F3034u);
        if ( v11 )
        {
          IsAdmin = UsbhVerifyCallerIsAdmin();
          UsbhUpdateUxdSettings(a1, v11, 1, &v19);
          if ( dword_14006F5D8 || v19 || IsAdmin )
          {
            v13 = UsbhCycleDevicePort(a1, (__int64)v11, &v17);
            v6 = v17;
            v10 = v13;
          }
          else
          {
            v10 = -1073741637;
          }
          UsbhUnlatchPdo(a1, (__int64)v11, (__int64)a2, 0x496F3034u);
        }
        else
        {
          Log(a1, 32, 1733845872, *(unsigned int *)&MasterIrp->Type, (__int64)MasterIrp);
          v10 = -1073741667;
          v6 = -1073713152;
        }
        a2->IoStatus.Information = 8LL;
        *(_DWORD *)(&MasterIrp->Size + 1) = v6;
      }
    }
  }
  else
  {
    v10 = -1073741670;
  }
  Log(a1, 32, 1768897586, (__int64)a2, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v16) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x10u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v16);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
    UsbhException(a1, 0LL, 91LL, v18, 4u, v10, 0, usbfile_ioctl_c, 384, 0);
  if ( v20 )
    UsbhReleaseApiLock(a1, 0xF00D0002);
  UsbhIoctlTraceOutput(a1, (__int64)a2);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v14, v9);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
