/*
 * XREFs of UsbhIoctlGetHubCaps @ 0x140023CE4
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140009180 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhIoctlValidateParameters @ 0x14000FC10 (UsbhIoctlValidateParameters.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhIoctlTraceOutput @ 0x1400220A0 (UsbhIoctlTraceOutput.c)
 *     UsbhAcquireApiLock @ 0x140023660 (UsbhAcquireApiLock.c)
 *     UsbhReleaseApiLock @ 0x140023854 (UsbhReleaseApiLock.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhIoctlGetHubCaps(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v6; // r15
  _DWORD *p_Type; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  _QWORD *v11; // r12
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v17; // edx
  int v18[18]; // [rsp+50h] [rbp-48h] BYREF
  char v19; // [rsp+A8h] [rbp+10h] BYREF
  int v20; // [rsp+B8h] [rbp+20h]

  v19 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      19,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v18[0] = 271;
  v6 = FdoExt(a1);
  p_Type = &a2->AssociatedIrp.MasterIrp->Type;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v20 = 842952553;
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = v20;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = p_Type;
      }
    }
  }
  v10 = FdoExt(a1);
  v11 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185, 1);
  if ( v11 )
  {
    v12 = UsbhAcquireApiLock(a1, 0xF00D0002, &v19);
    if ( (v12 & 0xC0000000) != 0xC0000000 )
    {
      v12 = UsbhIoctlValidateParameters(a1, 271, (__int64)a2, a3, 0, 4u);
      if ( (v12 & 0xC0000000) != 0xC0000000 )
      {
        v17 = *p_Type | 1;
        if ( (v6[640] & 0x8000) == 0 )
          v17 = *p_Type & 0xFFFFFFFE;
        *p_Type = v17;
      }
    }
  }
  else
  {
    v12 = -1073741670;
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v20 = 842821481;
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = v20;
        *(_QWORD *)(v14 + 24) = v12;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = a2;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      20,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v12);
  if ( (v12 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v12) )
    UsbhException(a1, 0LL, 91LL, v18, 4u, v12, 0, usbfile_ioctl_c, 573, 0);
  if ( v19 )
    UsbhReleaseApiLock(a1, 0xF00D0002);
  UsbhIoctlTraceOutput(a1, (__int64)a2);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v15, v11);
  a2->IoStatus.Status = v12;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v12;
}
