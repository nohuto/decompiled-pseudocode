/*
 * XREFs of PspRundownSingleProcess @ 0x1408E0448
 * Callers:
 *     PsTerminateMinimalProcess @ 0x140768FA8 (PsTerminateMinimalProcess.c)
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     PspTerminateAllThreads @ 0x1408BDBA4 (PspTerminateAllThreads.c)
 *     PspTerminateProcess @ 0x14091D668 (PspTerminateProcess.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     PspCreateProcess @ 0x140A8F360 (PspCreateProcess.c)
 *     PspProcessRundownWorkerSingle @ 0x140A9F220 (PspProcessRundownWorkerSingle.c)
 *     PspProcessRundownWorker @ 0x140AA6080 (PspProcessRundownWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     RtlInterlockedSetClearBits @ 0x14048BE9C (RtlInterlockedSetClearBits.c)
 *     KeSetProcess @ 0x1404A8088 (KeSetProcess.c)
 *     KeRundownSecureProcess @ 0x1405B4528 (KeRundownSecureProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 *     PspSendProcessNotificationToJobChain @ 0x1408DB3B0 (PspSendProcessNotificationToJobChain.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x1408E03FC (PspNotifyEmptyJobsInJobChain.c)
 *     PspUserApcKernelRoutine @ 0x1408E08C0 (PspUserApcKernelRoutine.c)
 *     PspClearProcessThreadCidRefs @ 0x1408E08D8 (PspClearProcessThreadCidRefs.c)
 *     PspRemoveProcessFromJobChain @ 0x1408E09E4 (PspRemoveProcessFromJobChain.c)
 *     ObKillProcess @ 0x140972730 (ObKillProcess.c)
 *     ExSweepHandleTable @ 0x140972794 (ExSweepHandleTable.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

bool __fastcall PspRundownSingleProcess(char *SystemArgument1, bool a2)
{
  bool v2; // r14
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // r11
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 *v24; // rbp
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  v2 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
    goto LABEL_2;
  PspLockProcessExclusive((__int64)SystemArgument1, (__int64)CurrentThread);
  if ( !*((_DWORD *)SystemArgument1 + 224) )
  {
    _m_prefetchw(SystemArgument1 + 500);
    v2 = (_InterlockedOr((volatile signed __int32 *)SystemArgument1 + 125, 0x2000008u) & 0x2000000) == 0;
  }
  PspUnlockProcessExclusive((__int64)SystemArgument1, (__int64)CurrentThread);
  if ( v2 )
  {
LABEL_2:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)SystemArgument1 + 61);
    _InterlockedExchange64((volatile __int64 *)SystemArgument1 + 61, 1LL);
    if ( *((_QWORD *)SystemArgument1 + 84) && (*((_DWORD *)SystemArgument1 + 124) & 1) == 0 )
    {
      RtlInterlockedSetClearBits((volatile signed __int32 *)SystemArgument1 + 124, 8, 32);
      PspSendProcessNotificationToJobChain((__int64)SystemArgument1, v20, *((_QWORD *)SystemArgument1 + 58));
    }
    if ( *((_QWORD *)SystemArgument1 + 46) )
      KeRundownSecureProcess((__int64)SystemArgument1);
    if ( (*((_DWORD *)SystemArgument1 + 125) & 0x40000) != 0 )
    {
      KeStackAttachProcess((PRKPROCESS)SystemArgument1, &ApcState);
      if ( *((_QWORD *)SystemArgument1 + 96) )
        ObKillProcess(SystemArgument1);
      MmCleanProcessAddressSpace(SystemArgument1);
      KiUnstackDetachProcess((__int64)&ApcState, 0LL);
    }
    if ( *((_QWORD *)SystemArgument1 + 201) )
    {
      --CurrentThread->KernelApcDisable;
      v23 = KeAbPreAcquire((__int64)(SystemArgument1 + 1624), 0LL);
      v24 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)SystemArgument1 + 406, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)SystemArgument1 + 203, v23, (__int64)(SystemArgument1 + 1624));
      if ( v24 )
        *((_BYTE *)v24 + 10) = 1;
      ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)SystemArgument1 + 201) + 8LL), 0);
      ExFreePoolWithTag(*((PVOID *)SystemArgument1 + 201), 0);
      *((_QWORD *)SystemArgument1 + 201) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SystemArgument1 + 203, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)SystemArgument1 + 203);
      KeAbPostRelease((ULONG_PTR)(SystemArgument1 + 1624));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v5 = (_QWORD *)*((_QWORD *)SystemArgument1 + 240);
    if ( v5 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v6 = (_QWORD *)*v5;
          if ( !*v5 )
            break;
          v7 = v5;
LABEL_16:
          v5 = v6;
          *v7 = 0LL;
        }
        v7 = v5 + 1;
        v6 = (_QWORD *)v5[1];
        if ( v6 )
          goto LABEL_16;
        v8 = v5[2];
        PspUserApcKernelRoutine(v5);
        v9 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v9 )
          break;
        v5 = (_QWORD *)v9;
      }
    }
    *((_QWORD *)SystemArgument1 + 240) = 0LL;
    v10 = (_QWORD *)*((_QWORD *)SystemArgument1 + 242);
    if ( !v10 )
    {
LABEL_24:
      *((_QWORD *)SystemArgument1 + 242) = 0LL;
      v15 = (void *)*((_QWORD *)SystemArgument1 + 53);
      if ( v15 )
      {
        ExFreePoolWithTag(v15, 0);
        *((_QWORD *)SystemArgument1 + 53) = 0LL;
      }
      if ( *((_QWORD *)SystemArgument1 + 246) )
      {
        ExFreePoolWithTag(*((PVOID *)SystemArgument1 + 246), 0);
        *((_QWORD *)SystemArgument1 + 246) = 0LL;
      }
      v16 = (void *)*((_QWORD *)SystemArgument1 + 85);
      if ( v16 )
      {
        *((_QWORD *)SystemArgument1 + 85) = 0LL;
        ObfDereferenceObject(v16);
      }
      v17 = (void *)*((_QWORD *)SystemArgument1 + 102);
      if ( v17 )
      {
        ObfDereferenceObjectWithTag(v17, 0x72437350u);
        *((_QWORD *)SystemArgument1 + 102) = 0LL;
      }
      if ( (*((_DWORD *)SystemArgument1 + 125) & 0x40000) != 0 )
        KeSetProcess(SystemArgument1);
      if ( *((_QWORD *)SystemArgument1 + 84) )
      {
        PspRemoveProcessFromJobChain((PEPROCESS)SystemArgument1);
        PspNotifyEmptyJobsInJobChain((__int64)SystemArgument1);
      }
      v18 = *((_QWORD *)SystemArgument1 + 58);
      if ( v18 )
        PspClearProcessThreadCidRefs(CurrentThread, v18, SystemArgument1);
      return v2;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = (_QWORD *)*v10;
        if ( !*v10 )
          break;
        v12 = v10;
LABEL_23:
        v10 = v11;
        *v12 = 0LL;
      }
      v12 = v10 + 1;
      v11 = (_QWORD *)v10[1];
      if ( v11 )
        goto LABEL_23;
      v13 = v10[2];
      PspUserApcKernelRoutine(v10);
      v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v14 )
        goto LABEL_24;
      v10 = (_QWORD *)v14;
    }
  }
  v21 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)SystemArgument1);
  if ( v21 )
  {
    LOBYTE(v22) = 1;
    ExSweepHandleTable(SystemArgument1, v21, v22);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)SystemArgument1 + 61);
  }
  return v2;
}
