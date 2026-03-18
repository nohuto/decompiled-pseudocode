/*
 * XREFs of UsbhQueueWorkItemWithRetry @ 0x14001CB60
 * Callers:
 *     UsbhHubIsr @ 0x140017140 (UsbhHubIsr.c)
 *     UsbhIdleIrp_NoIrp @ 0x14001C40C (UsbhIdleIrp_NoIrp.c)
 *     UsbhSS_SignalPdoWake @ 0x14001CA90 (UsbhSS_SignalPdoWake.c)
 *     UsbhIsrRetryTimer @ 0x140046E80 (UsbhIsrRetryTimer.c)
 *     UsbhResetIrqPipeRetryTimer @ 0x1400475E0 (UsbhResetIrqPipeRetryTimer.c)
 *     UsbHubhInitTimeoutTimer @ 0x14004E990 (UsbHubhInitTimeoutTimer.c)
 *     UsbhInitCallback @ 0x140050490 (UsbhInitCallback.c)
 *     UsbhInitRetryTimer @ 0x1400507B0 (UsbhInitRetryTimer.c)
 *     UsbhIdleIrpRetryTimer @ 0x14005D800 (UsbhIdleIrpRetryTimer.c)
 *     UsbhSS_WakeIrpRetryTimer @ 0x14005DAC0 (UsbhSS_WakeIrpRetryTimer.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhEnableTimerObject @ 0x14002C5D0 (UsbhEnableTimerObject.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003DC1C (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhQueueWorkItemWithRetry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edx
  _DWORD *Pool2; // rdi
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r14
  void (__fastcall *v27)(__int64, __int64, void *, _QWORD, _DWORD *, int); // rax
  int v28; // ecx
  int v30; // [rsp+28h] [rbp-60h]
  char v31; // [rsp+40h] [rbp-48h]

  v8 = 0;
  FdoExt(a1);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 1129141329;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a7;
        *(_QWORD *)(v11 + 24) = a5;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      48,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  v31 = *((_BYTE *)FdoExt(a1) + 5268);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 1297568097;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a7;
        *(_QWORD *)(v13 + 24) = a5;
      }
    }
  }
  v14 = FdoExt(a1);
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
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
        *(_QWORD *)(v16 + 16) = a6;
        *(_QWORD *)(v16 + 24) = a5;
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
      a6);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 72LL, 1112885333LL);
  if ( !Pool2 )
    goto LABEL_46;
  v19 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)FdoExt(a1) + 596);
  if ( !v19 || (LOBYTE(v20) = v31, (v21 = v19(a1, v20)) == 0) )
  {
    ExFreePoolWithTag(Pool2, 0);
LABEL_46:
    LOBYTE(v28) = -102;
LABEL_47:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        1,
        49,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        a6,
        v28);
    Log(a1, 8, 1364476705, a7, a5);
    if ( a2 )
      UsbhEnableTimerObject(a1, a2, 0, a6, a5, a7);
    v8 = 1;
    goto LABEL_43;
  }
  *((_QWORD *)Pool2 + 5) = v21;
  *Pool2 = 1230463592;
  Pool2[1] = a7;
  Pool2[3] = a6;
  *((_QWORD *)Pool2 + 4) = a5;
  *((_QWORD *)Pool2 + 2) = a1;
  *((_QWORD *)Pool2 + 3) = a3;
  ExInterlockedInsertTailList((PLIST_ENTRY)v14 + 174, (PLIST_ENTRY)Pool2 + 3, (PKSPIN_LOCK)v14 + 350);
  if ( Pool2[1] != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v22 = *(_QWORD *)(a1 + 64);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
        *(_DWORD *)v23 = 726485847;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = 0LL;
        *(_QWORD *)(v23 + 24) = Pool2;
      }
    }
  }
  _InterlockedIncrement(Pool2 + 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
        *(_DWORD *)v25 = 726488145;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = a7;
        *(_QWORD *)(v25 + 24) = Pool2;
      }
    }
  }
  v26 = *((_QWORD *)Pool2 + 5);
  v27 = (void (__fastcall *)(__int64, __int64, void *, _QWORD, _DWORD *, int))*((_QWORD *)FdoExt(a1) + 598);
  if ( v27 )
  {
    LOBYTE(v30) = v31;
    v27(a1, v26, &UsbhHubWorker, a4, Pool2, v30);
    v28 = 0;
  }
  else
  {
    v28 = -1073741822;
  }
  v17 = -1073741824;
  if ( (v28 & 0xC0000000) == 0xC0000000 )
    goto LABEL_47;
LABEL_43:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      1,
      50,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6,
      v8);
  return v8;
}
