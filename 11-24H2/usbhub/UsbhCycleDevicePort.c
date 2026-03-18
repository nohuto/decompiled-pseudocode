/*
 * XREFs of UsbhCycleDevicePort @ 0x140045ADC
 * Callers:
 *     UsbhFdoCyclePdoPort @ 0x14003F6C0 (UsbhFdoCyclePdoPort.c)
 *     UsbhIoctlCyclePort @ 0x14004C4B0 (UsbhIoctlCyclePort.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     UsbhSyncResumePort @ 0x140023948 (UsbhSyncResumePort.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1400439CC (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhCycleDevicePort(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // ebx
  _DWORD *v7; // r15
  _DWORD *v8; // r13
  _DWORD *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 PortData; // r12
  int v13; // eax
  __int64 v14; // r14
  __int64 v15; // rcx
  bool v16; // zf
  KIRQL v17; // dl
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // r9

  v6 = -1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x51u,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  v7 = PdoExt(a2);
  v8 = FdoExt(a1);
  v9 = PdoExt(a2) + 236;
  PortData = UsbhGetPortData(a1, *((unsigned __int16 *)v7 + 714), v10, v11);
  if ( !PortData )
  {
    Log(a1, 4, 1129932081, 0LL, 0LL);
    v6 = -1073741811;
    goto LABEL_17;
  }
  v13 = v8[640];
  if ( (v13 & 0x4000) != 0 )
  {
    Log(a1, 4, 1132029234, 0LL, 0LL);
    *a3 = -1073713152;
LABEL_8:
    v6 = -1073741810;
    goto LABEL_17;
  }
  if ( (v13 & 0x10) != 0 )
  {
    Log(a1, 4, 1132029235, 0LL, 0LL);
    *a3 = -1073704960;
    v6 = -1073741630;
    goto LABEL_17;
  }
  v14 = UsbhLatchPdo(a1, *((_WORD *)v7 + 714), 0LL, 0x6C435943u);
  Log(a1, 4, 1668899692, *((unsigned __int16 *)v7 + 714), v14);
  if ( !v14 )
    goto LABEL_8;
  if ( a2 == v14 )
  {
    UsbhAcquirePdoStateLock(v15, (__int64)v9, 14);
    v16 = PdoExt(a2)[281] == 3;
    v9[34] = 0;
    qword_14006F5E0 = 0LL;
    v9[22] = 1734964085;
    v17 = *((_BYTE *)v9 + 132);
    if ( v16 )
    {
      KeReleaseSpinLock(&HubG, v17);
      Log(a1, 8, 1668899655, *((unsigned __int16 *)v7 + 714), *((unsigned __int16 *)v7 + 714));
      _InterlockedIncrement((volatile signed __int32 *)(PortData + 412));
      v19 = UsbhSyncResumePort(a1, (__int64)v9, *((unsigned __int16 *)v7 + 714), v18);
      Log(a1, 8, 1668895315, *((unsigned __int16 *)v7 + 714), v19);
      LOBYTE(v20) = 1;
      UsbhQueueSoftConnectChange(a1, *((_WORD *)v7 + 714), (__int64)v9, v20);
      v6 = 0;
    }
    else
    {
      v6 = -1073741810;
      KeReleaseSpinLock(&HubG, v17);
    }
  }
  UsbhUnlatchPdo(a1, v14, 0LL, 0x6C435943u);
LABEL_17:
  Log(a1, 8, 1668899655, *((unsigned __int16 *)v7 + 714), v6);
  return (unsigned int)v6;
}
