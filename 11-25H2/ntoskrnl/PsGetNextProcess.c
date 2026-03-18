/*
 * XREFs of PsGetNextProcess @ 0x1408DF760
 * Callers:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403AE380 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     IopLiveDumpAllocAndInitProcessFilters @ 0x140594B40 (IopLiveDumpAllocAndInitProcessFilters.c)
 *     KeTraceHgsPlusRundown @ 0x1405BE1A8 (KeTraceHgsPlusRundown.c)
 *     KeTraceThreadAffinityRundown @ 0x1405BE21C (KeTraceThreadAffinityRundown.c)
 *     KeTraceSchedulingGroupRundown @ 0x1405C3470 (KeTraceSchedulingGroupRundown.c)
 *     MiEmptyAccessLogs @ 0x140677E70 (MiEmptyAccessLogs.c)
 *     PsUpdateActiveProcessAffinity @ 0x140764D88 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140769118 (PsWaitForAllProcesses.c)
 *     MiHotPatchAllProcesses @ 0x1407E2DB4 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1407E463C (MiLogHotPatchRundown.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x1407ED938 (MiReferenceNonPagedMemoryProcessList.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14082425C (EtwQueryPerformanceTraceInformation.c)
 *     PsEnumProcesses @ 0x1408DECE4 (PsEnumProcesses.c)
 *     PfpPrivSourceEnum @ 0x1408DED60 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x1408DF3F4 (EtwpLogMemInfoWs.c)
 *     DbgkpCloseObject @ 0x1408E0060 (DbgkpCloseObject.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140986080 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140986140 (IopQueryProcessIdsUsingFile.c)
 *     NtGetNextProcess @ 0x140A32180 (NtGetNextProcess.c)
 *     VmpTracingEnabledCallback @ 0x140A80370 (VmpTracingEnabledCallback.c)
 *     PfpRpControlRequestReset @ 0x140A9864C (PfpRpControlRequestReset.c)
 *     PspProcessRundownWorker @ 0x140AA6080 (PspProcessRundownWorker.c)
 *     EtwpCoverageSamplerStop @ 0x140ACFEE0 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x140B69F70 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140C21A5C (PopEtInit.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

__int64 *__fastcall PsGetNextProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rsi
  __int64 *v4; // rdi
  int v5; // r15d
  __int64 *v6; // rbx
  __int64 *v7; // rbx
  bool v8; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PspActiveProcessLock, 0, v6, (unsigned __int64)&PspActiveProcessLock);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  if ( Object )
    v7 = (__int64 *)Object[59];
  else
    v7 = (__int64 *)PsActiveProcessHead;
  while ( v7 != &PsActiveProcessHead )
  {
    v4 = v7 - 59;
    if ( ObReferenceObjectSafeWithTag((__int64)(v7 - 59), 0x6E457350u) )
    {
      v5 = 1;
      break;
    }
    v7 = (__int64 *)*v7;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  if ( v5 )
    return v4;
  return (__int64 *)v3;
}
