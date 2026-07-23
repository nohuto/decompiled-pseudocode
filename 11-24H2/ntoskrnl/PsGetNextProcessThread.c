/*
 * XREFs of PsGetNextProcessThread @ 0x1408EEC70
 * Callers:
 *     PspSynchronizeThreadIsolationDomains @ 0x14032C988 (PspSynchronizeThreadIsolationDomains.c)
 *     PsMultiResumeProcess @ 0x140455C30 (PsMultiResumeProcess.c)
 *     KeTraceHgsPlusRundown @ 0x1405BF858 (KeTraceHgsPlusRundown.c)
 *     KeTraceThreadAffinityRundown @ 0x1405BF8CC (KeTraceThreadAffinityRundown.c)
 *     KeTraceSchedulingGroupRundown @ 0x1405C4F40 (KeTraceSchedulingGroupRundown.c)
 *     PspWaitForUsermodeExit @ 0x1407791CC (PspWaitForUsermodeExit.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PsEnumProcessThreads @ 0x1408EEAB0 (PsEnumProcessThreads.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1408EEB98 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     PspTerminateAllThreads @ 0x1408EEED4 (PspTerminateAllThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408F50E4 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1409E3B48 (DbgkpSetProcessDebugObject.c)
 *     PsSuspendProcess @ 0x140A0CD70 (PsSuspendProcess.c)
 *     NtGetNextThread @ 0x140A1A3A0 (NtGetNextThread.c)
 *     ExSwapinWorkerThreads @ 0x140A48C04 (ExSwapinWorkerThreads.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABA85C (PspFindFirstThreadByTebValue.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r13
  signed __int64 *v3; // r15
  _QWORD **v5; // rsi
  __int64 v6; // r14
  _QWORD *v7; // rdi
  int v8; // r12d
  char *v9; // rbx
  _QWORD *v10; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 456);
  v5 = (_QWORD **)(a1 + 880);
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = 0LL;
  v8 = 0;
  v9 = (char *)KeAbPreAcquire(a1 + 456, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v9, (__int64)v3);
  if ( v9 )
    v9[10] = 1;
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
