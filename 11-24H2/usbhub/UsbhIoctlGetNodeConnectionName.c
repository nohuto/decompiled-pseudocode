/*
 * XREFs of UsbhIoctlGetNodeConnectionName @ 0x1400213E0
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
 *     UsbhGetHubPdoName @ 0x1400223E4 (UsbhGetHubPdoName.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x14003DEE0 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x140061340 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionName(__int64 a1, IRP *a2, __int64 a3)
{
  char v6; // di
  _IRP *MasterIrp; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // rax
  _DWORD *v15; // rdi
  _DWORD *v16; // rsi
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r10
  int HubPdoName; // r15d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // rsi
  struct _KSEMAPHORE *v28; // rdi
  struct _KEVENT *v29; // rax
  __int64 v30; // rdx
  __int64 v32; // rsi
  int v33; // r15d
  unsigned int v34; // eax
  int v35; // [rsp+50h] [rbp-48h] BYREF
  _QWORD *v36; // [rsp+58h] [rbp-40h]
  unsigned int v37; // [rsp+B0h] [rbp+18h] BYREF
  size_t Size; // [rsp+B8h] [rbp+20h]

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      2,
      36,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      (char)a2);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LODWORD(Size) = *(_DWORD *)(a3 + 8);
  v35 = 261;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 859729769;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = MasterIrp;
      }
    }
  }
  v10 = FdoExt(a1);
  v36 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185, 1);
  v11 = 4027383811LL;
  if ( v36 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
          *(_DWORD *)v13 = 724652097;
          *(_QWORD *)(v13 + 8) = 0LL;
          *(_QWORD *)(v13 + 16) = 0LL;
          *(_QWORD *)(v13 + 24) = 4027383811LL;
        }
      }
    }
    v14 = FdoExt(a1);
    KeWaitForSingleObject(v14 + 1230, Executive, 0, 0, 0LL);
    v15 = FdoExt(a1) + 434;
    v16 = FdoExt(a1);
    KeWaitForSingleObject(v16 + 1240, Executive, 0, 0, 0LL);
    v11 = 4027383811LL;
    v15[14] = v16[340];
    v15[15] = 11;
    v15[12] = 827278406;
    *((_QWORD *)v15 + 3) = KeGetCurrentThread();
    v17 = v16[6];
    *((_QWORD *)v16 + 166) = v15;
    v18 = ((_BYTE)v17 + 1) & 7;
    v6 = 1;
    v16[6] = v18;
    v18 *= 32LL;
    *(_DWORD *)((char *)v16 + v18 + 28) = 11;
    *(_DWORD *)((char *)v16 + v18 + 32) = v16[340];
    *(_DWORD *)((char *)v16 + v18 + 36) = v16[340];
    *(_DWORD *)((char *)v16 + v18 + 40) = -267583485;
    v19 = (int)v16[340];
    if ( v16[340] == 5 )
    {
      HubPdoName = 0;
    }
    else
    {
      if ( v16[340] == 6 )
      {
        Log(a1, 32, 1095774563, 0, 4027383811LL);
        v11 = 4027383811LL;
      }
      HubPdoName = -1073741810;
    }
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v21 = *(_QWORD *)(a1 + 64);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
          *(_DWORD *)v22 = 556879937;
          *(_QWORD *)(v22 + 16) = HubPdoName;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 24) = v19;
        }
      }
    }
    if ( (HubPdoName & 0xC0000000) != 0xC0000000 )
    {
      HubPdoName = UsbhIoctlValidateParameters(a1, 261, (__int64)a2, a3, 4u, 0xAu);
      if ( (HubPdoName & 0xC0000000) != 0xC0000000 )
      {
        v32 = UsbhLatchPdo(a1, MasterIrp->Type, (__int64)a2, 0x496C3033u);
        if ( v32 )
        {
          v33 = Size;
          v37 = 0;
          memset(MasterIrp, 0, (unsigned int)Size);
          HubPdoName = UsbhGetHubPdoName(a1, v32, &MasterIrp->Size + 1, (unsigned int)(v33 - 4), &v37);
          v34 = v37;
          if ( v37 >= 4 )
            *(_DWORD *)(&MasterIrp->Size + 1) += 4;
          a2->IoStatus.Information = v34 + 4;
          UsbhUnlatchPdo(a1, v32, (__int64)a2, 0x496C3033u);
        }
        else
        {
          *(_DWORD *)(&MasterIrp->Size + 1) = 10;
          LOWORD(MasterIrp->MdlAddress) = 0;
          HubPdoName = 0;
          a2->IoStatus.Information = 10LL;
        }
      }
      v11 = 4027383811LL;
    }
  }
  else
  {
    HubPdoName = -1073741670;
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 859598697;
        *(_QWORD *)(v24 + 24) = HubPdoName;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = a2;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      37,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      HubPdoName);
    v11 = 4027383811LL;
  }
  if ( (HubPdoName & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(HubPdoName) )
  {
    UsbhException(a1, 0LL, 91LL, &v35, 4u, HubPdoName, 0, usbfile_ioctl_c, 1740, 0);
    v11 = 4027383811LL;
  }
  if ( v6 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 758206529;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = 0LL;
          *(_QWORD *)(v26 + 24) = v11;
        }
      }
    }
    v27 = FdoExt(a1);
    v28 = (struct _KSEMAPHORE *)FdoExt(a1);
    FdoExt(*((_QWORD *)v27 + 218));
    v27[446] = 1734964085;
    v28[41].Header.WaitListHead.Blink = 0LL;
    KeReleaseSemaphore(v28 + 155, 16, 1, 0);
    v29 = (struct _KEVENT *)FdoExt(a1);
    KeSetEvent(v29 + 205, 0, 0);
  }
  UsbhIoctlTraceOutput(a1, a2);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v30, v36);
  a2->IoStatus.Status = HubPdoName;
  IofCompleteRequest(a2, 0);
  return (unsigned int)HubPdoName;
}
