/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1400232C8
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140009180 (UsbhFdoDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhIoctlValidateParameters @ 0x14000FC10 (UsbhIoctlValidateParameters.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     UsbhIoctlTraceOutput @ 0x1400220A0 (UsbhIoctlTraceOutput.c)
 *     UsbhAcquireApiLock @ 0x140023660 (UsbhAcquireApiLock.c)
 *     UsbhReleaseApiLock @ 0x140023854 (UsbhReleaseApiLock.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     memset @ 0x140061340 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExV2(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v6; // r13
  _IRP *MasterIrp; // r14
  size_t v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  int Type; // r15d
  int MdlAddress; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v22; // [rsp+98h] [rbp+10h] BYREF
  int v23; // [rsp+A0h] [rbp+18h]
  int v24; // [rsp+A8h] [rbp+20h] BYREF

  v22 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      30,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v24 = 279;
  v6 = FdoExt(a1);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v23 = 1665036137;
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = v23;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a2;
        *(_QWORD *)(v10 + 24) = MasterIrp;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      31,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v11 = UsbhAcquireApiLock(a1, 4027383829LL, &v22);
  if ( (v11 & 0xC0000000) != 0xC0000000 )
  {
    v11 = UsbhIoctlValidateParameters(a1, 279, (__int64)a2, a3, 0x10u, 0x10u);
    if ( (v11 & 0xC0000000) != 0xC0000000 )
    {
      if ( *(_DWORD *)(&MasterIrp->Size + 1) >= 0x10u )
      {
        Type = (unsigned __int16)MasterIrp->Type;
        MdlAddress = (int)MasterIrp->MdlAddress;
        memset(MasterIrp, 0, v8);
        *(_DWORD *)&MasterIrp->Type = Type;
        if ( (MdlAddress & 4) != 0 && UsbhGetPortData(a1, (unsigned __int16)Type, v14, v15) )
        {
          *(_DWORD *)(&MasterIrp->Size + 1) = 16;
          a2->IoStatus.Information = 16LL;
          v16 = LODWORD(MasterIrp->MdlAddress) | 1;
          LODWORD(MasterIrp->MdlAddress) = v16;
          if ( (v6[640] & 0x8000) != 0 )
            LODWORD(MasterIrp->MdlAddress) = v16 | 2;
          v17 = UsbhLatchPdo(a1, Type, (__int64)a2, 0x496F3063u);
          v18 = v17;
          if ( v17 )
          {
            if ( (PdoExt(v17)[355] & 0x80000) != 0 )
              HIDWORD(MasterIrp->MdlAddress) |= 2u;
            UsbhUnlatchPdo(a1, v18, (__int64)a2, 0x496F3063u);
          }
        }
        else
        {
          v11 = -1073741811;
        }
      }
      else
      {
        v11 = -1073741811;
      }
    }
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v23 = 1664905065;
        v20 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v20 = v23;
        *(_QWORD *)(v20 + 24) = v11;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = a2;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      32,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v11);
  if ( (v11 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v11) )
    UsbhException(a1, 0LL, 91LL, &v24, 4u, v11, 0, usbfile_ioctl_c, 1062, 0);
  if ( v22 )
    UsbhReleaseApiLock(a1, 4027383829LL);
  UsbhIoctlTraceOutput(a1, (__int64)a2);
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v11;
}
