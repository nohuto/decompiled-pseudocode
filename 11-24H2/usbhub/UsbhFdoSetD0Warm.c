/*
 * XREFs of UsbhFdoSetD0Warm @ 0x140037CE4
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002D060 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140012820 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     UsbhSyncBusResume @ 0x14001E040 (UsbhSyncBusResume.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     UsbhWaitForPortResume @ 0x140023B40 (UsbhWaitForPortResume.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x140024158 (UsbhSendSynchronousUsbIoctlRequest.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhResumeHardReset @ 0x1400399E4 (UsbhResumeHardReset.c)
 *     UsbhFlushPortChange @ 0x14003AEC4 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1400439CC (UsbhQueueSoftConnectChange.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 */

__int64 __fastcall UsbhFdoSetD0Warm(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // r13
  int v5; // edi
  __int16 v6; // bp
  unsigned __int16 v7; // si
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 PortData; // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  _DWORD *v13; // rax
  _DWORD *v14; // r14
  int v15; // eax
  int v16; // eax
  int v17; // r8d
  unsigned __int16 i; // si
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rbp
  unsigned __int16 v23; // si
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // r15d
  __int64 v28; // r10
  __int64 v29; // r9
  __int64 v30; // rax
  struct _DEVICE_OBJECT *v31; // rbp
  _DWORD *v32; // rax
  _DWORD *v33; // r14
  __int64 v34; // r9
  int v35; // eax
  __int64 v37; // [rsp+20h] [rbp-78h]
  __int64 v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+28h] [rbp-70h]
  unsigned int v40; // [rsp+50h] [rbp-48h] BYREF
  _DWORD *v41; // [rsp+58h] [rbp-40h]
  int v42; // [rsp+B0h] [rbp+18h] BYREF
  int v43; // [rsp+B8h] [rbp+20h] BYREF

  v40 = 0;
  v42 = 0;
  v41 = FdoExt((__int64)DeviceObject);
  v4 = v41;
  v5 = 0;
  Log((__int64)DeviceObject, 16, 2002874989, 0LL, 0LL);
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      28,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  LODWORD(v37) = 0;
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_START, v37, 0);
  v7 = 1;
  if ( !*((_BYTE *)FdoExt((__int64)DeviceObject) + 2938) )
    goto LABEL_26;
  do
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, v7, v8, v9);
    if ( PortData )
    {
      v5 = UsbhQueryPortState((__int64)DeviceObject, v7, (__int64)&v42, &v43);
      if ( v5 >= 0 )
      {
        v11 = UsbhLatchPdo((__int64)DeviceObject, v7, 0LL, 0x574D5253u);
        v12 = v11;
        if ( v11 )
        {
          v13 = PdoExt(v11);
          v14 = v13;
          if ( (v42 & 1) != 0 && (v42 & 0x10000) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003986028, v7, 0LL);
            v5 = UsbhFlushPortChange(DeviceObject, v7, &v43);
            if ( v5 >= 0 )
            {
              v15 = v14[355];
              if ( (v15 & 0x8000000) == 0 )
                v14[355] = v15 | 0x4000;
            }
            goto LABEL_13;
          }
          if ( (v42 & 3) != 1 || (v16 = v13[355], (v16 & 0x8000000) != 0) )
          {
            if ( (v42 & 0x10000) != 0 || (v42 & 1) != 0 )
              goto LABEL_13;
            *(_DWORD *)(PortData + 2408) |= 4u;
            v17 = 2003985971;
          }
          else
          {
            v17 = 2003985970;
            v14[355] = v16 | 0x4000;
          }
          Log((__int64)DeviceObject, 16, v17, v7, 0LL);
LABEL_13:
          UsbhUnlatchPdo((__int64)DeviceObject, v12, 0LL, 0x574D5253u);
          goto LABEL_24;
        }
        if ( (v42 & 0x10000) == 0 && (v42 & 1) != 0 )
        {
          *(_DWORD *)(PortData + 2408) |= 4u;
          Log((__int64)DeviceObject, 16, 2003985972, v7, 0LL);
        }
      }
    }
LABEL_24:
    ++v7;
  }
  while ( v7 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) );
  v4 = v41;
  v6 = 1;
LABEL_26:
  Log((__int64)DeviceObject, 16, 1651724877, 0LL, 0LL);
  UsbhSyncBusResume((__int64)DeviceObject, a2);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
  {
    v21 = UsbhGetPortData((__int64)DeviceObject, i, v19, v20);
    v22 = v21;
    if ( v21 )
    {
      v5 = UsbhWaitForPortResume(DeviceObject, v21, a2);
      if ( (v5 & 0xC0000000) == 0xC0000000 )
      {
        LODWORD(v39) = v5;
        LODWORD(v38) = *(unsigned __int16 *)(v22 + 4);
        UsbhEtwLogHubIrpEvent(
          (__int64)DeviceObject,
          0LL,
          0LL,
          &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_PORT_RESUME_ERROR,
          v38,
          v39);
        v6 = 1;
        break;
      }
    }
    v6 = 1;
  }
  if ( (v5 & 0xC0000000) != 0xC0000000 )
  {
    UsbhWait((__int64)DeviceObject, 0xAu);
    v5 = UsbhFdoCheckUpstreamConnectionState((__int64)DeviceObject, &v40);
    if ( (v5 & 0xC0000000) != 0xC0000000 )
    {
      v23 = 1;
      if ( *((_BYTE *)FdoExt((__int64)DeviceObject) + 2938) )
      {
        do
        {
          v26 = UsbhGetPortData((__int64)DeviceObject, v23, v24, v25);
          if ( v26 )
          {
            v27 = 0;
            if ( (*(_DWORD *)(v26 + 2408) & 4) != 0 )
            {
              Log((__int64)DeviceObject, 16, 2003989347, v23, 0LL);
              *(_DWORD *)(v28 + 2408) &= ~4u;
              LOBYTE(v29) = v6;
              UsbhQueueSoftConnectChange(DeviceObject, v23, a2, v29);
            }
            else
            {
              v30 = UsbhLatchPdo((__int64)DeviceObject, v23, 0LL, 0x574D5253u);
              v31 = (struct _DEVICE_OBJECT *)v30;
              if ( !v30 )
                goto LABEL_45;
              v32 = PdoExt(v30);
              v33 = v32 + 355;
              if ( (v32[358] & 0x1000) != 0 || (*v33 & 0x4000) != 0 )
              {
                *v33 &= ~0x4000u;
                *v33 |= 0x2000000u;
                LODWORD(v39) = 0;
                LODWORD(v38) = *((unsigned __int16 *)PdoExt((__int64)v31) + 714);
                UsbhEtwLogHubIrpEvent(
                  (__int64)DeviceObject,
                  0LL,
                  0LL,
                  &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_RESET_ON_RESUME,
                  v38,
                  v39);
                PdoExt((__int64)v31);
                v27 = UsbhSyncResetDeviceInternal(DeviceObject);
                if ( (*v33 & 4) != 0 )
                  UsbhSendSynchronousUsbIoctlRequest((__int64)DeviceObject, v31, 0x220FA7u);
              }
              UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v31, 0LL, 0x574D5253u);
              if ( (v27 & 0xC0000000) == 0xC0000000 )
              {
                Log((__int64)DeviceObject, 16, 1466782291, 0LL, v27);
                v6 = v34 + 1;
                LOBYTE(v34) = v34 + 1;
                UsbhQueueSoftConnectChange(DeviceObject, v23, a2, v34);
                UsbhException((__int64)DeviceObject, 0LL, 138LL, 0LL, 0, v27, 0, usbfile_fdopwr_c, 3694, 0);
              }
              else
              {
LABEL_45:
                v6 = 1;
              }
            }
          }
          v23 += v6;
        }
        while ( v23 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) );
        v4 = v41;
      }
      v35 = v4[640];
      if ( (v35 & 0x10) != 0 )
      {
        v4[640] = v35 & 0xFFFFFFEF;
        UsbhException((__int64)DeviceObject, 0LL, 113LL, 0LL, 0, 0, 0, usbfile_fdopwr_c, 3709, 0);
        v5 = -1073741823;
      }
    }
  }
  UsbhResumeHardReset(DeviceObject, a2);
  LODWORD(v39) = v5;
  LODWORD(v38) = 0;
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_COMPLETE, v38, v39);
  return (unsigned int)v5;
}
