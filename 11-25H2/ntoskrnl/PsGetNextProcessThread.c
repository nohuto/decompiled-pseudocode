/*
 * XREFs of PsGetNextProcessThread @ 0x1408BD940
 * Callers:
 *     PsMultiResumeProcess @ 0x1404621A4 (PsMultiResumeProcess.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x140489530 (PspSynchronizeThreadIsolationDomains.c)
 *     KeTraceHgsPlusRundown @ 0x1405BE1A8 (KeTraceHgsPlusRundown.c)
 *     KeTraceThreadAffinityRundown @ 0x1405BE21C (KeTraceThreadAffinityRundown.c)
 *     KeTraceSchedulingGroupRundown @ 0x1405C3470 (KeTraceSchedulingGroupRundown.c)
 *     PspWaitForUsermodeExit @ 0x14076941C (PspWaitForUsermodeExit.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PsEnumProcessThreads @ 0x1408BD784 (PsEnumProcessThreads.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1408BD868 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     PspTerminateAllThreads @ 0x1408BDBA4 (PspTerminateAllThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x1409B9A84 (DbgkpPostFakeThreadMessages.c)
 *     PsSuspendProcess @ 0x1409BA0F0 (PsSuspendProcess.c)
 *     NtGetNextThread @ 0x1409BA4F0 (NtGetNextThread.c)
 *     DbgkpSetProcessDebugObject @ 0x1409BAE18 (DbgkpSetProcessDebugObject.c)
 *     ExSwapinWorkerThreads @ 0x140A4E204 (ExSwapinWorkerThreads.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABB5E0 (PspFindFirstThreadByTebValue.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r13
  signed __int64 *v3; // rsi
  _QWORD **v5; // r14
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  int v8; // r12d
  __int64 *v9; // rbx
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
    ExfAcquirePushLockSharedEx(v3, 0, v9, (unsigned __int64)v3);
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v8 )
    return v7;
  return (_QWORD *)v6;
}
