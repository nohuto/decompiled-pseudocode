/*
 * XREFs of PspRundownSingleProcess @ 0x1408A8B38
 * Callers:
 *     PsTerminateMinimalProcess @ 0x140778C58 (PsTerminateMinimalProcess.c)
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     PspTerminateProcess @ 0x140939700 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x14094A964 (PspTerminateAllThreads.c)
 *     PspCreateProcess @ 0x140A1B354 (PspCreateProcess.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     PspProcessRundownWorkerSingle @ 0x140AA4A40 (PspProcessRundownWorkerSingle.c)
 *     PspProcessRundownWorker @ 0x140AAB640 (PspProcessRundownWorker.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PspLockProcessExclusive @ 0x14045AB10 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     RtlInterlockedSetClearBits @ 0x14048B890 (RtlInterlockedSetClearBits.c)
 *     KeSetProcess @ 0x14049F4A0 (KeSetProcess.c)
 *     KeRundownSecureProcess @ 0x1405B8418 (KeRundownSecureProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x1408A8AEC (PspNotifyEmptyJobsInJobChain.c)
 *     PspUserApcKernelRoutine @ 0x1408A8FB0 (PspUserApcKernelRoutine.c)
 *     PspClearProcessThreadCidRefs @ 0x1408A8FC8 (PspClearProcessThreadCidRefs.c)
 *     PspRemoveProcessFromJobChain @ 0x1408A9078 (PspRemoveProcessFromJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x1408EA780 (PspSendProcessNotificationToJobChain.c)
 *     ObReferenceProcessHandleTable @ 0x140940570 (ObReferenceProcessHandleTable.c)
 *     ObKillProcess @ 0x1409E4FC8 (ObKillProcess.c)
 *     ExSweepHandleTable @ 0x1409E502C (ExSweepHandleTable.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

bool __fastcall PspRundownSingleProcess(char *SystemArgument1, bool a2)
{
  bool v2; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // rbp
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
  PspUnlockProcessExclusive((__int64)SystemArgument1);
  if ( v2 )
  {
LABEL_2:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)SystemArgument1 + 61);
    _InterlockedExchange64((volatile __int64 *)SystemArgument1 + 61, 1LL);
    if ( *((_QWORD *)SystemArgument1 + 84) && (*((_DWORD *)SystemArgument1 + 124) & 1) == 0 )
    {
      RtlInterlockedSetClearBits((volatile signed __int32 *)SystemArgument1 + 124, 8, 32);
      PspSendProcessNotificationToJobChain(SystemArgument1, v21, *((_QWORD *)SystemArgument1 + 58));
    }
    if ( *((_QWORD *)SystemArgument1 + 46) )
      KeRundownSecureProcess((__int64)SystemArgument1);
    if ( (*((_DWORD *)SystemArgument1 + 125) & 0x40000) != 0 )
    {
      KeStackAttachProcess((PRKPROCESS)SystemArgument1, &ApcState);
      if ( *((_QWORD *)SystemArgument1 + 96) )
        ObKillProcess(SystemArgument1);
      MmCleanProcessAddressSpace(SystemArgument1);
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    }
    if ( *((_QWORD *)SystemArgument1 + 201) )
    {
      --CurrentThread->KernelApcDisable;
      v24 = KeAbPreAcquire((__int64)(SystemArgument1 + 1624), 0LL);
      v25 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)SystemArgument1 + 406, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)SystemArgument1 + 203,
          (__int64)v24,
          (__int64)(SystemArgument1 + 1624));
      if ( v25 )
        *((_BYTE *)v25 + 10) = 1;
      ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)SystemArgument1 + 201) + 8LL), 0);
      ExFreePoolWithTag(*((PVOID *)SystemArgument1 + 201), 0);
      *((_QWORD *)SystemArgument1 + 201) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SystemArgument1 + 203, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)SystemArgument1 + 203);
      KeAbPostRelease((ULONG_PTR)(SystemArgument1 + 1624));
      KeLeaveCriticalRegionThread();
    }
    v6 = (_QWORD *)*((_QWORD *)SystemArgument1 + 240);
    if ( v6 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = (_QWORD *)*v6;
          if ( !*v6 )
            break;
          v8 = v6;
LABEL_16:
          v6 = v7;
          *v8 = 0LL;
        }
        v8 = v6 + 1;
        v7 = (_QWORD *)v6[1];
        if ( v7 )
          goto LABEL_16;
        v9 = v6[2];
        PspUserApcKernelRoutine(v6);
        v10 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v10 )
          break;
        v6 = (_QWORD *)v10;
      }
    }
    *((_QWORD *)SystemArgument1 + 240) = 0LL;
    v11 = (_QWORD *)*((_QWORD *)SystemArgument1 + 242);
    if ( !v11 )
    {
LABEL_24:
      *((_QWORD *)SystemArgument1 + 242) = 0LL;
      v16 = (void *)*((_QWORD *)SystemArgument1 + 53);
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        *((_QWORD *)SystemArgument1 + 53) = 0LL;
      }
      if ( *((_QWORD *)SystemArgument1 + 246) )
      {
        ExFreePoolWithTag(*((PVOID *)SystemArgument1 + 246), 0);
        *((_QWORD *)SystemArgument1 + 246) = 0LL;
      }
      v17 = (void *)*((_QWORD *)SystemArgument1 + 85);
      if ( v17 )
      {
        *((_QWORD *)SystemArgument1 + 85) = 0LL;
        ObfDereferenceObject(v17);
      }
      v18 = (void *)*((_QWORD *)SystemArgument1 + 102);
      if ( v18 )
      {
        ObfDereferenceObjectWithTag(v18, 0x72437350u);
        *((_QWORD *)SystemArgument1 + 102) = 0LL;
      }
      if ( (*((_DWORD *)SystemArgument1 + 125) & 0x40000) != 0 )
        KeSetProcess(SystemArgument1, v5);
      if ( *((_QWORD *)SystemArgument1 + 84) )
      {
        PspRemoveProcessFromJobChain((PEPROCESS)SystemArgument1);
        PspNotifyEmptyJobsInJobChain((__int64)SystemArgument1);
      }
      v19 = *((_QWORD *)SystemArgument1 + 58);
      if ( v19 )
        PspClearProcessThreadCidRefs(CurrentThread, v19, SystemArgument1);
      return v2;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = (_QWORD *)*v11;
        if ( !*v11 )
          break;
        v13 = v11;
LABEL_23:
        v11 = v12;
        *v13 = 0LL;
      }
      v13 = v11 + 1;
      v12 = (_QWORD *)v11[1];
      if ( v12 )
        goto LABEL_23;
      v14 = v11[2];
      PspUserApcKernelRoutine(v11);
      v15 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v15 )
        goto LABEL_24;
      v11 = (_QWORD *)v15;
    }
  }
  v22 = ObReferenceProcessHandleTable(SystemArgument1);
  if ( v22 )
  {
    LOBYTE(v23) = 1;
    ExSweepHandleTable(SystemArgument1, v22, v23);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)SystemArgument1 + 61);
  }
  return v2;
}
