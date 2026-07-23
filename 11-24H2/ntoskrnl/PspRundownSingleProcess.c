/*
 * XREFs of PspRundownSingleProcess @ 0x1408FED98
 * Callers:
 *     PsTerminateMinimalProcess @ 0x140778D58 (PsTerminateMinimalProcess.c)
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     PspTerminateAllThreads @ 0x1408EEED4 (PspTerminateAllThreads.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     PspTerminateProcess @ 0x1408F4E40 (PspTerminateProcess.c)
 *     PspCreateProcess @ 0x1409F98C4 (PspCreateProcess.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     PspProcessRundownWorkerSingle @ 0x140A9FDD0 (PspProcessRundownWorkerSingle.c)
 *     PspProcessRundownWorker @ 0x140AA6870 (PspProcessRundownWorker.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     RtlInterlockedSetClearBits @ 0x140486664 (RtlInterlockedSetClearBits.c)
 *     KeSetProcess @ 0x14049A2E8 (KeSetProcess.c)
 *     KeRundownSecureProcess @ 0x1405B59F8 (KeRundownSecureProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PspSendProcessNotificationToJobChain @ 0x14085BFB0 (PspSendProcessNotificationToJobChain.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x1408FED4C (PspNotifyEmptyJobsInJobChain.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 *     PspClearProcessThreadCidRefs @ 0x1408FF228 (PspClearProcessThreadCidRefs.c)
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 *     ObKillProcess @ 0x1409DFA28 (ObKillProcess.c)
 *     ExSweepHandleTable @ 0x1409DFA8C (ExSweepHandleTable.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

bool __fastcall PspRundownSingleProcess(char *SystemArgument1, bool a2)
{
  bool v2; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // r11
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  char *v26; // rax
  char *v27; // rbp
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
      PspSendProcessNotificationToJobChain((__int64)SystemArgument1, v23, *((_QWORD *)SystemArgument1 + 58));
    }
    if ( *((_QWORD *)SystemArgument1 + 46) )
      KeRundownSecureProcess((__int64)SystemArgument1);
    if ( (*((_DWORD *)SystemArgument1 + 125) & 0x40000) != 0 )
    {
      KeStackAttachProcess((PRKPROCESS)SystemArgument1, &ApcState);
      if ( *((_QWORD *)SystemArgument1 + 96) )
        ObKillProcess(SystemArgument1);
      MmCleanProcessAddressSpace(SystemArgument1);
      KiUnstackDetachProcess((__int64)&ApcState, 0, v6, v7);
    }
    if ( *((_QWORD *)SystemArgument1 + 201) )
    {
      --CurrentThread->KernelApcDisable;
      v26 = (char *)KeAbPreAcquire((__int64)(SystemArgument1 + 1624), 0LL);
      v27 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)SystemArgument1 + 406, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)SystemArgument1 + 203, v26, (__int64)(SystemArgument1 + 1624));
      if ( v27 )
        v27[10] = 1;
      ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)SystemArgument1 + 201) + 8LL), 0);
      ExFreePoolWithTag(*((PVOID *)SystemArgument1 + 201), 0);
      *((_QWORD *)SystemArgument1 + 201) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SystemArgument1 + 203, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)SystemArgument1 + 203);
      KeAbPostRelease((ULONG_PTR)(SystemArgument1 + 1624));
      KeLeaveCriticalRegionThread();
    }
    v8 = (_QWORD *)*((_QWORD *)SystemArgument1 + 240);
    if ( v8 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (_QWORD *)*v8;
          if ( !*v8 )
            break;
          v10 = v8;
LABEL_16:
          v8 = v9;
          *v10 = 0LL;
        }
        v10 = v8 + 1;
        v9 = (_QWORD *)v8[1];
        if ( v9 )
          goto LABEL_16;
        v11 = v8[2];
        PspUserApcKernelRoutine(v8);
        v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v12 )
          break;
        v8 = (_QWORD *)v12;
      }
    }
    *((_QWORD *)SystemArgument1 + 240) = 0LL;
    v13 = (_QWORD *)*((_QWORD *)SystemArgument1 + 242);
    if ( !v13 )
    {
LABEL_24:
      *((_QWORD *)SystemArgument1 + 242) = 0LL;
      v18 = (void *)*((_QWORD *)SystemArgument1 + 53);
      if ( v18 )
      {
        ExFreePoolWithTag(v18, 0);
        *((_QWORD *)SystemArgument1 + 53) = 0LL;
      }
      if ( *((_QWORD *)SystemArgument1 + 246) )
      {
        ExFreePoolWithTag(*((PVOID *)SystemArgument1 + 246), 0);
        *((_QWORD *)SystemArgument1 + 246) = 0LL;
      }
      v19 = (void *)*((_QWORD *)SystemArgument1 + 85);
      if ( v19 )
      {
        *((_QWORD *)SystemArgument1 + 85) = 0LL;
        ObfDereferenceObject(v19);
      }
      v20 = (void *)*((_QWORD *)SystemArgument1 + 102);
      if ( v20 )
      {
        ObfDereferenceObjectWithTag(v20, 0x72437350u);
        *((_QWORD *)SystemArgument1 + 102) = 0LL;
      }
      if ( (*((_DWORD *)SystemArgument1 + 125) & 0x40000) != 0 )
        KeSetProcess(SystemArgument1, v5);
      if ( *((_QWORD *)SystemArgument1 + 84) )
      {
        PspRemoveProcessFromJobChain((PEPROCESS)SystemArgument1);
        PspNotifyEmptyJobsInJobChain((__int64)SystemArgument1);
      }
      v21 = *((_QWORD *)SystemArgument1 + 58);
      if ( v21 )
        PspClearProcessThreadCidRefs(CurrentThread, v21, SystemArgument1);
      return v2;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = (_QWORD *)*v13;
        if ( !*v13 )
          break;
        v15 = v13;
LABEL_23:
        v13 = v14;
        *v15 = 0LL;
      }
      v15 = v13 + 1;
      v14 = (_QWORD *)v13[1];
      if ( v14 )
        goto LABEL_23;
      v16 = v13[2];
      PspUserApcKernelRoutine(v13);
      v17 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v17 )
        goto LABEL_24;
      v13 = (_QWORD *)v17;
    }
  }
  v24 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)SystemArgument1);
  if ( v24 )
  {
    LOBYTE(v25) = 1;
    ExSweepHandleTable(SystemArgument1, v24, v25);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)SystemArgument1 + 61);
  }
  return v2;
}
