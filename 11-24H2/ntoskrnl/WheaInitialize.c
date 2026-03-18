/*
 * XREFs of WheaInitialize @ 0x140C440FC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14065B774 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     WheapCallErrorSourceInitialize @ 0x14065D6D4 (WheapCallErrorSourceInitialize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExGetPrmInterface @ 0x1407BF230 (ExGetPrmInterface.c)
 *     WheapLogInitEvent @ 0x1407C8368 (WheapLogInitEvent.c)
 *     WheaInitializeRegChangeNotify @ 0x1407C89CC (WheaInitializeRegChangeNotify.c)
 *     WheapInitWnfCallbacks @ 0x1407C95A4 (WheapInitWnfCallbacks.c)
 *     IoWMIRegistrationControl @ 0x1409D0C80 (IoWMIRegistrationControl.c)
 *     WheapCreatePerProcessorInfo @ 0x140C44758 (WheapCreatePerProcessorInfo.c)
 *     WheapInitializeErrorSourceTable @ 0x140C447F8 (WheapInitializeErrorSourceTable.c)
 *     WheapQueryPshedForErrorSources @ 0x140C44958 (WheapQueryPshedForErrorSources.c)
 *     WheapInitializeEventing @ 0x140C44B04 (WheapInitializeEventing.c)
 *     WheapLoadPolicy @ 0x140C44C40 (WheapLoadPolicy.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // r12
  int v4; // eax
  int PerProcessorInfo; // eax
  int v6; // eax
  __int64 v7; // r9
  unsigned int *v8; // rbx
  unsigned int k; // edi
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  int v17; // eax
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rbx
  int v21; // eax
  __int64 v32; // rbx
  int v33; // r13d
  bool v34; // zf
  int v35; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-20h]
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-20h]
  unsigned int v39; // [rsp+88h] [rbp+48h] BYREF
  PVOID Address; // [rsp+90h] [rbp+50h] BYREF
  __int64 v41; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  Address = 0LL;
  v41 = 0LL;
  v39 = 0;
  if ( a2 )
  {
    qword_140EF9B58 = (__int64)&WheapPrevErrList;
    WheapPrevErrList = (__int64)&WheapPrevErrList;
    v12 = PshedInitialize(a1, &v41);
    if ( v12 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v12, 0LL, 0LL);
    memset_0(&WheapWorkQueue, 0, 0x88uLL);
    qword_140EF9B68 = (__int64)&WheapWorkQueue;
    qword_140EF9B98 = (__int64)WheapWorkQueueDpcRoutine;
    WheapWorkQueue = (__int64)&WheapWorkQueue;
    qword_140EF9BD0 = (__int64)WheapWorkQueueWorkerRoutine;
    qword_140EF9BE0 = (__int64)WheapProcessWorkQueueItem;
    qword_140EF9B70 = 0LL;
    dword_140EF9B80 = 275;
    qword_140EF9BA0 = (__int64)&WheapWorkQueue;
    qword_140EF9BB8 = 0LL;
    qword_140EF9B90 = 0LL;
    qword_140EF9BD8 = (__int64)&WheapWorkQueue;
    qword_140EF9BC0 = 0LL;
    WheapInitWnfCallbacks();
    v13 = WheapQueryPshedForErrorSources(&v39, &Address);
    if ( v13 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v13, v2, 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = KeAbPreAcquire((__int64)&WheapConfigTableLock, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&WheapConfigTableLock, (__int64)v15, (__int64)&WheapConfigTableLock);
    if ( v16 )
      *((_BYTE *)v16 + 10) = 1;
    v17 = WheapInitializeErrorSourceTable(v39, Address);
    if ( v17 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v17, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0;
          i < (unsigned int)KeNumberProcessors_0;
          *(_QWORD *)(*(_QWORD *)(Prcb + 35744) + 8LL) = &WheapErrorSourceTable )
    {
      Prcb = KeGetPrcb(i++);
      **(_DWORD **)(Prcb + 35744) = v39;
      *(_QWORD *)(*(_QWORD *)(Prcb + 35744) + 16LL) = &WheapWorkQueue;
    }
    for ( j = qword_140EEED18; (__int64 *)j != &qword_140EEED18; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 104) == 7 )
      {
        *(_DWORD *)(j + 108) = 2;
        v21 = WheapCallErrorSourceInitialize(j, v2);
        if ( v21 < 0 )
        {
          BugCheckParameter4 = *(int *)(j + 104);
          *(_DWORD *)(j + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v21, v2, BugCheckParameter4);
        }
      }
    }
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 0x80000008 )
      {
        _RAX = 2147483656LL;
        __asm { cpuid }
        if ( (_RBX & 1) != 0 )
          WheapClearPoisonSupported = 1;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      WheapCheckForAndReportErrorsFromPreviousSession();
    v32 = qword_140EEED18;
    v33 = 1;
    while ( (__int64 *)v32 != &qword_140EEED18 )
    {
      v34 = *(_DWORD *)(v32 + 104) == 7;
      *(_DWORD *)(v32 + 124) = v33;
      if ( !v34 && !*(_BYTE *)(v32 + 88) && *(_DWORD *)(v32 + 108) == 1 )
      {
        *(_DWORD *)(v32 + 108) = 2;
        v35 = WheapCallErrorSourceInitialize(v32, v2);
        if ( v35 < 0 )
        {
          BugCheckParameter4a = *(int *)(v32 + 104);
          *(_DWORD *)(v32 + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v35, v2, BugCheckParameter4a);
        }
      }
      v32 = *(_QWORD *)v32;
      ++v33;
    }
    if ( (int)ExGetPrmInterface(1, (__int64)&WheapDispatchPtr.Dpc.ProcessorHistory) >= 0 )
      WheapPrmInitialized = 1;
    WheapLogInitEvent();
    *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
    IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
    WheaInitializeRegChangeNotify();
    WheapInitializationComplete = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapConfigTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapConfigTableLock);
    KeAbPostRelease((ULONG_PTR)&WheapConfigTableLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    WheapStatus = 0LL;
    dword_140EF9BF8 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v4 = PshedInitialize(a1, &v41);
    if ( v4 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v4, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v6 = WheapQueryPshedForErrorSources(&v39, &Address);
    if ( v6 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v6, 0LL, 0LL);
    WheapErrorSourceTable = 1279410516LL;
    qword_140EEED20 = (__int64)&qword_140EEED18;
    qword_140EEED18 = (__int64)&qword_140EEED18;
    dword_140EEED10 = 1;
    LOWORD(stru_140EEED28.Header.Lock) = 1;
    stru_140EEED28.Header.Size = 6;
    stru_140EEED28.Header.SignalState = 1;
    stru_140EEED28.Header.WaitListHead.Blink = &stru_140EEED28.Header.WaitListHead;
    stru_140EEED28.Header.WaitListHead.Flink = &stru_140EEED28.Header.WaitListHead;
    WheapInitializeEventing();
    v8 = (unsigned int *)Address;
    for ( k = 0; k < v39; ++k )
    {
      v10 = guard_dispatch_icall_no_overrides(0LL, v8, 0LL, v7);
      if ( v10 < 0 )
        KeBugCheckEx(0x122u, 6uLL, v10, 0LL, (int)v8[2]);
      v11 = *v8;
      v8[3] = 2;
      v8 = (unsigned int *)((char *)v8 + v11);
    }
    PshedFreeMemory(Address);
  }
  return 0LL;
}
