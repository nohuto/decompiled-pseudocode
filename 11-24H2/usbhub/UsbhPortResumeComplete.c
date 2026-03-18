/*
 * XREFs of UsbhPortResumeComplete @ 0x1400191B0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhLogSignalResumeEvent @ 0x140019A84 (UsbhLogSignalResumeEvent.c)
 *     UsbhRawWait @ 0x14001A244 (UsbhRawWait.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhEnableTimerObject @ 0x14002C5D0 (UsbhEnableTimerObject.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003DC1C (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPortResumeComplete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  KIRQL v14; // al
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // r8
  __int64 v18; // rdx
  _DWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // r12
  char v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  _DWORD *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // edx
  _DWORD *Pool2; // rdi
  __int64 (__fastcall *v34)(__int64, __int64); // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rsi
  void (__fastcall *v42)(__int64, __int64, void *, _QWORD, _DWORD *, int); // rax
  int v43; // ecx
  int v45; // r9d
  int v46; // [rsp+28h] [rbp-40h]

  v6 = 10;
  v7 = PdoExt(a3);
  if ( (v7[706] & 0x80u) != 0 )
    v6 = *(unsigned __int8 *)(*((_QWORD *)v7 + 357) + 4LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      37,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1297306224;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
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
        *(_DWORD *)v11 = 1953063287;
        *(_QWORD *)(v11 + 16) = v6;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 24) = 0LL;
      }
    }
  }
  UsbhRawWait(v6);
  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2, v12, v13) )
  {
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v15 = *(unsigned __int16 *)(a2 + 4);
    v16 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 448) = 1;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v17 = *(_QWORD *)(a1 + 64);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v18 = 1986359664;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 16) = v16;
          *(_QWORD *)(v18 + 24) = v15;
        }
      }
    }
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v14);
  }
  v19 = PdoExt(a3);
  UsbhLatchPdo(a1, *((_WORD *)v19 + 714), 0LL, 0x73737057u);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v21 = 1262573427;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = a3;
        *(_QWORD *)(v21 + 24) = 0LL;
      }
    }
  }
  v22 = v19 + 406;
  v23 = 0;
  FdoExt(a1);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
        *(_DWORD *)v25 = 1129141329;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = 2001752915LL;
        *(_QWORD *)(v25 + 24) = a3;
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
      0);
  v26 = *((_BYTE *)FdoExt(a1) + 5268);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      0);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 1297568097;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = 2001752915LL;
        *(_QWORD *)(v28 + 24) = a3;
      }
    }
  }
  v29 = FdoExt(a1);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v30 = *(_QWORD *)(a1 + 64);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v30 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
        *(_DWORD *)v31 = 1296783201;
        *(_QWORD *)(v31 + 8) = 0LL;
        *(_QWORD *)(v31 + 16) = 0LL;
        *(_QWORD *)(v31 + 24) = a3;
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
      0);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 72LL, 1112885333LL);
  if ( !Pool2 )
    goto LABEL_66;
  v34 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)FdoExt(a1) + 596);
  if ( !v34 || (LOBYTE(v35) = v26, (v36 = v34(a1, v35)) == 0) )
  {
    ExFreePoolWithTag(Pool2, 0);
LABEL_66:
    LOBYTE(v43) = -102;
LABEL_67:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v32,
        1,
        49,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        0,
        v43);
    Log(a1, 8, 1364476705, 2001752915, a3);
    if ( v22 )
      UsbhEnableTimerObject(a1, (_DWORD)v22, 0, 0, a3, v45);
    v23 = 1;
    goto LABEL_63;
  }
  *((_QWORD *)Pool2 + 5) = v36;
  *Pool2 = 1230463592;
  *((_QWORD *)Pool2 + 3) = UsbhSS_PdoWakeWorker;
  Pool2[1] = 2001752915;
  Pool2[3] = 0;
  *((_QWORD *)Pool2 + 4) = a3;
  *((_QWORD *)Pool2 + 2) = a1;
  ExInterlockedInsertTailList((PLIST_ENTRY)v29 + 174, (PLIST_ENTRY)Pool2 + 3, (PKSPIN_LOCK)v29 + 350);
  if ( Pool2[1] != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v37 = *(_QWORD *)(a1 + 64);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
        *(_DWORD *)v38 = 726485847;
        *(_QWORD *)(v38 + 8) = 0LL;
        *(_QWORD *)(v38 + 16) = 0LL;
        *(_QWORD *)(v38 + 24) = Pool2;
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
      0);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v39 = *(_QWORD *)(a1 + 64);
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
        *(_DWORD *)v40 = 726488145;
        *(_QWORD *)(v40 + 8) = 0LL;
        *(_QWORD *)(v40 + 16) = 2001752915LL;
        *(_QWORD *)(v40 + 24) = Pool2;
      }
    }
  }
  v41 = *((_QWORD *)Pool2 + 5);
  v42 = (void (__fastcall *)(__int64, __int64, void *, _QWORD, _DWORD *, int))*((_QWORD *)FdoExt(a1) + 598);
  if ( v42 )
  {
    LOBYTE(v46) = v26;
    v42(a1, v41, &UsbhHubWorker, 0LL, Pool2, v46);
    v43 = 0;
  }
  else
  {
    v43 = -1073741822;
  }
  v32 = -1073741824;
  if ( (v43 & 0xC0000000) == 0xC0000000 )
    goto LABEL_67;
LABEL_63:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v32,
      1,
      50,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      0,
      v23);
  return 0LL;
}
