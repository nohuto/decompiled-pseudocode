/*
 * XREFs of UsbhQueueWorkItemEx @ 0x14002BFA0
 * Callers:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhHubProcessIsr @ 0x14000D190 (UsbhHubProcessIsr.c)
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 *     UsbhHubSSH_Timer @ 0x14002BED0 (UsbhHubSSH_Timer.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x14002CEA0 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhFdoWakePoComplete_Action @ 0x14002E010 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhPindicatorTimer @ 0x14003E7A0 (UsbhPindicatorTimer.c)
 *     UsbhQueueDriverOvercurrent @ 0x14003F320 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x14003F4A0 (UsbhQueueOvercurrentReset.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_HRS_Queued @ 0x14004BEAC (Usbh_HRS_Queued.c)
 *     UsbhDriverNotFoundTimer @ 0x14004F4A0 (UsbhDriverNotFoundTimer.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhQueueWorkItemEx(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned __int8 v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *Pool2; // rdi
  _DWORD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(__int64, _QWORD); // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  void (__fastcall *v24)(__int64, __int64, void *, _QWORD, _DWORD *, int); // rax
  int v26; // [rsp+28h] [rbp-60h]
  unsigned __int8 v27; // [rsp+40h] [rbp-48h]

  v9 = *((_BYTE *)FdoExt(a1) + 5268);
  v27 = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a5);
  v10 = 0;
  if ( a6 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 1297568097;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a6;
        *(_QWORD *)(v12 + 24) = a4;
      }
    }
  }
  Pool2 = a7;
  if ( a7 )
    goto LABEL_27;
  v14 = FdoExt(a1);
  if ( a6 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 1296783201;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = a5;
        *(_QWORD *)(v16 + 24) = a4;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      45,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a5);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 72LL, 1112885333LL);
  if ( !Pool2 )
    return 3221225626LL;
  v17 = (__int64 (__fastcall *)(__int64, _QWORD))*((_QWORD *)FdoExt(a1) + 596);
  if ( !v17 || (v18 = v17(a1, v27)) == 0 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  *((_QWORD *)Pool2 + 5) = v18;
  *((_QWORD *)Pool2 + 3) = a3;
  *Pool2 = 1230463592;
  Pool2[1] = a6;
  Pool2[3] = a5;
  *((_QWORD *)Pool2 + 4) = a4;
  *((_QWORD *)Pool2 + 2) = a1;
  ExInterlockedInsertTailList((PLIST_ENTRY)v14 + 174, (PLIST_ENTRY)Pool2 + 3, (PKSPIN_LOCK)v14 + 350);
  if ( Pool2[1] != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v20 = 726485847;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = 0LL;
        *(_QWORD *)(v20 + 24) = Pool2;
      }
    }
  }
  v9 = v27;
LABEL_27:
  _InterlockedIncrement(Pool2 + 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a5);
  if ( a6 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v21 = *(_QWORD *)(a1 + 64);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
        *(_DWORD *)v22 = 726488145;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = a6;
        *(_QWORD *)(v22 + 24) = Pool2;
      }
    }
  }
  v23 = *((_QWORD *)Pool2 + 5);
  v24 = (void (__fastcall *)(__int64, __int64, void *, _QWORD, _DWORD *, int))*((_QWORD *)FdoExt(a1) + 598);
  if ( v24 )
  {
    LOBYTE(v26) = v9;
    v24(a1, v23, &UsbhHubWorker, a2, Pool2, v26);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v10;
}
