/*
 * XREFs of NtTerminateProcess @ 0x140A6C390
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     PsGetProcessCreateTimeQuadPart @ 0x14044FBA0 (PsGetProcessCreateTimeQuadPart.c)
 *     PsGetProcessStartKey @ 0x140454D00 (PsGetProcessStartKey.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     KeForceResumeThread @ 0x14047D350 (KeForceResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateAllThreads @ 0x1408BDBA4 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1408F48F0 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     PspTerminateProcess @ 0x14091D668 (PspTerminateProcess.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x140A6C5E4 (PspLogAuditTerminateRemoteProcessEvent.c)
 */

NTSTATUS __cdecl NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v3; // r14d
  __int64 v5; // rdi
  char PreviousMode; // r15
  NTSTATUS result; // eax
  struct _KPROCESS *v8; // rbx
  unsigned int Flink; // r13d
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PEPROCESS Process; // [rsp+80h] [rbp+8h] BYREF
  LONGLONG TimeQuadPart; // [rsp+90h] [rbp+18h]
  unsigned __int64 ProcessStartKey; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  Process = 0LL;
  v5 = (__int64)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               1,
               (__int64)PsProcessType,
               PreviousMode,
               0x65547350u,
               &Process,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    if ( !PreviousMode )
      v3 = (*(_BYTE *)(v5 + 368) & 1) == 0;
    v8 = Process;
    Flink = (unsigned int)Process[1].Header.WaitListHead.Flink;
    ProcessStartKey = PsGetProcessStartKey((__int64)Process);
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(v8);
    --CurrentThread->KernelApcDisable;
    v10 = PspTerminateProcess(&v8->Header.Lock, (struct _EX_RUNDOWN_REF *)CurrentThread, ExitStatus, v3);
    ObfDereferenceObjectWithTag(v8, 0x65547350u);
    if ( v8 == (struct _KPROCESS *)v5 )
    {
      if ( PreviousMode == 1 || (*(_BYTE *)(v5 + 368) & 1) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
        KeForceResumeThread((__int64)CurrentThread);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v16, v17, v18);
        PspExitThread(ExitStatus);
        __debugbreak();
      }
    }
    else
    {
      PspLogAuditTerminateRemoteProcessEvent(Flink, v10, ProcessStartKey, TimeQuadPart);
    }
  }
  else
  {
    if ( PreviousMode != 1 && (*(_BYTE *)(v5 + 368) & 1) == 0 || (*(_DWORD *)(v5 + 1532) & 1) != 0 )
      return -1073741637;
    PspLockProcessExclusive((__int64)CurrentThread->ApcState.Process, (__int64)CurrentThread);
    _m_prefetchw((const void *)(v5 + 500));
    v14 = *(_DWORD *)(v5 + 500);
    do
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 500), v14 | 0x40000000, v14);
    }
    while ( v15 != v14 );
    if ( (v14 & 0x40000008) != 0 )
    {
      PspUnlockProcessExclusive(v5, (__int64)CurrentThread);
      PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, ExitStatus, 1);
      return 0;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
    if ( *(_DWORD *)(v5 + 1364) == 259 )
      *(_DWORD *)(v5 + 1364) = ExitStatus;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 456));
    KeAbPostRelease(v5 + 456);
    v10 = PspTerminateAllThreads((PVOID)v5, (struct _EX_RUNDOWN_REF *)CurrentThread, ExitStatus, 0);
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
  return v10;
}
