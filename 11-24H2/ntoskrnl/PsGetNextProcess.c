/*
 * XREFs of PsGetNextProcess @ 0x1408603A0
 * Callers:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403396B0 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     IopLiveDumpAllocAndInitProcessFilters @ 0x1405951D0 (IopLiveDumpAllocAndInitProcessFilters.c)
 *     KeTraceHgsPlusRundown @ 0x1405BF858 (KeTraceHgsPlusRundown.c)
 *     KeTraceThreadAffinityRundown @ 0x1405BF8CC (KeTraceThreadAffinityRundown.c)
 *     KeTraceSchedulingGroupRundown @ 0x1405C4F40 (KeTraceSchedulingGroupRundown.c)
 *     MiEmptyAccessLogs @ 0x140684820 (MiEmptyAccessLogs.c)
 *     PsUpdateActiveProcessAffinity @ 0x140774978 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x140778A44 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140778EC8 (PsWaitForAllProcesses.c)
 *     MiHotPatchAllProcesses @ 0x1407F3224 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1407F4BB8 (MiLogHotPatchRundown.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x1407FDF38 (MiReferenceNonPagedMemoryProcessList.c)
 *     PsEnumProcesses @ 0x14085F924 (PsEnumProcesses.c)
 *     PfpPrivSourceEnum @ 0x14085F9A0 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x140860034 (EtwpLogMemInfoWs.c)
 *     DbgkpCloseObject @ 0x140860C60 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140860E10 (IopQueryProcessIdsUsingFile.c)
 *     NtGetNextProcess @ 0x1408615C0 (NtGetNextProcess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 *     VmpTracingEnabledCallback @ 0x140A7EBF0 (VmpTracingEnabledCallback.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140A80988 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PfpRpControlRequestReset @ 0x140A996EC (PfpRpControlRequestReset.c)
 *     PspProcessRundownWorker @ 0x140AA6870 (PspProcessRundownWorker.c)
 *     EtwpCoverageSamplerStop @ 0x140ADC310 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x140B7BF70 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140C34CA0 (PopEtInit.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

__int64 *__fastcall PsGetNextProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rbp
  __int64 *v4; // rdi
  int v5; // r15d
  char *v6; // rbx
  __int64 *v7; // rbx
  bool v8; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = (char *)KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PspActiveProcessLock, 0, v6, (__int64)&PspActiveProcessLock);
  if ( v6 )
    v6[10] = 1;
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
