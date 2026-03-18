/*
 * XREFs of NtTerminateProcess @ 0x14093B030
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsGetProcessCreateTimeQuadPart @ 0x140450700 (PsGetProcessCreateTimeQuadPart.c)
 *     PsGetProcessStartKey @ 0x140452EB0 (PsGetProcessStartKey.c)
 *     PspLockProcessExclusive @ 0x14045AB10 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     KeForceResumeThread @ 0x140479A40 (KeForceResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x1408A7CB0 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     PspTerminateProcess @ 0x140939700 (PspTerminateProcess.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x14093B284 (PspLogAuditTerminateRemoteProcessEvent.c)
 *     PspTerminateAllThreads @ 0x14094A964 (PspTerminateAllThreads.c)
 */

__int64 __fastcall NtTerminateProcess(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  BOOL v3; // r14d
  __int64 v5; // rdi
  char PreviousMode; // r15
  __int64 result; // rax
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
  if ( a1 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a1,
               1,
               (__int64)PsProcessType,
               PreviousMode,
               0x65547350u,
               &Process,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    if ( !PreviousMode )
      v3 = (*(_BYTE *)(v5 + 368) & 1) == 0;
    v8 = Process;
    Flink = (unsigned int)Process[1].Header.WaitListHead.Flink;
    ProcessStartKey = PsGetProcessStartKey((__int64)Process);
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(v8);
    --CurrentThread->KernelApcDisable;
    v10 = PspTerminateProcess(&v8->Header.Lock, (__int64)CurrentThread, a2, v3);
    ObfDereferenceObjectWithTag(v8, 0x65547350u);
    if ( v8 == (struct _KPROCESS *)v5 )
    {
      if ( PreviousMode == 1 || (*(_BYTE *)(v5 + 368) & 1) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
        KeForceResumeThread((__int64)CurrentThread);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v16, v17, v18);
        PspExitThread(a2);
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
      return 3221225659LL;
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
      PspUnlockProcessExclusive(v5);
      PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, a2, 1);
      return 0LL;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
    if ( *(_DWORD *)(v5 + 1364) == 259 )
      *(_DWORD *)(v5 + 1364) = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 456));
    KeAbPostRelease(v5 + 456);
    v10 = PspTerminateAllThreads((PVOID)v5);
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
  return v10;
}
