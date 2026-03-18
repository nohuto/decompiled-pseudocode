/*
 * XREFs of PsGetNextProcessThread @ 0x14094A700
 * Callers:
 *     PspSynchronizeThreadIsolationDomains @ 0x1402053A8 (PspSynchronizeThreadIsolationDomains.c)
 *     PsMultiResumeProcess @ 0x140460798 (PsMultiResumeProcess.c)
 *     KeTraceHgsPlusRundown @ 0x1405C2288 (KeTraceHgsPlusRundown.c)
 *     KeTraceThreadAffinityRundown @ 0x1405C22FC (KeTraceThreadAffinityRundown.c)
 *     KeTraceSchedulingGroupRundown @ 0x1405C7810 (KeTraceSchedulingGroupRundown.c)
 *     PspWaitForUsermodeExit @ 0x1407790CC (PspWaitForUsermodeExit.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140939BE0 (DbgkpPostFakeThreadMessages.c)
 *     PsSuspendProcess @ 0x14093A350 (PsSuspendProcess.c)
 *     NtGetNextThread @ 0x14093B590 (NtGetNextThread.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PsEnumProcessThreads @ 0x14094A540 (PsEnumProcessThreads.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14094A628 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     PspTerminateAllThreads @ 0x14094A964 (PspTerminateAllThreads.c)
 *     DbgkpSetProcessDebugObject @ 0x1409E8B88 (DbgkpSetProcessDebugObject.c)
 *     ExSwapinWorkerThreads @ 0x140A51B34 (ExSwapinWorkerThreads.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABF77C (PspFindFirstThreadByTebValue.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r13
  signed __int64 *v3; // r15
  _QWORD **v5; // rsi
  __int64 v6; // r14
  _QWORD *v7; // rdi
  int v8; // r12d
  _QWORD *v9; // rbx
  _QWORD *v10; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 456);
  v5 = (_QWORD **)(a1 + 880);
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = 0LL;
  v8 = 0;
  v9 = KeAbPreAcquire(a1 + 456, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v9, (__int64)v3);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  if ( a2 )
    v10 = (_QWORD *)a2[175];
  else
    v10 = *v5;
  while ( v10 != v5 )
  {
    v7 = v10 - 175;
    if ( ObReferenceObjectSafeWithTag((__int64)(v10 - 175), 0x6E457350u) )
    {
      v8 = 1;
      break;
    }
    v10 = (_QWORD *)*v10;
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread();
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v8 )
    return v7;
  return (_QWORD *)v6;
}
