/*
 * XREFs of PsGetNextProcess @ 0x1408EEB70
 * Callers:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x140210350 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     IopLiveDumpAllocAndInitProcessFilters @ 0x140598250 (IopLiveDumpAllocAndInitProcessFilters.c)
 *     KeTraceHgsPlusRundown @ 0x1405C2288 (KeTraceHgsPlusRundown.c)
 *     KeTraceThreadAffinityRundown @ 0x1405C22FC (KeTraceThreadAffinityRundown.c)
 *     KeTraceSchedulingGroupRundown @ 0x1405C7810 (KeTraceSchedulingGroupRundown.c)
 *     MiEmptyAccessLogs @ 0x140683670 (MiEmptyAccessLogs.c)
 *     PsUpdateActiveProcessAffinity @ 0x140774758 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x140778944 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140778DC8 (PsWaitForAllProcesses.c)
 *     MiHotPatchAllProcesses @ 0x1407F2C54 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x1407FD7C8 (MiReferenceNonPagedMemoryProcessList.c)
 *     PsEnumProcesses @ 0x1408EE0F4 (PsEnumProcesses.c)
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x1408EE804 (EtwpLogMemInfoWs.c)
 *     DbgkpCloseObject @ 0x1408EF460 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1408EF610 (IopQueryProcessIdsUsingFile.c)
 *     NtGetNextProcess @ 0x1408EFDC0 (NtGetNextProcess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 *     VmpTracingEnabledCallback @ 0x140A840D0 (VmpTracingEnabledCallback.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140A85E48 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PfpRpControlRequestReset @ 0x140A9E17C (PfpRpControlRequestReset.c)
 *     PspProcessRundownWorker @ 0x140AAB640 (PspProcessRundownWorker.c)
 *     EtwpCoverageSamplerStop @ 0x140ADAAD0 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x140B79F70 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140C32B60 (PopEtInit.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 *__fastcall PsGetNextProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rbp
  __int64 *v4; // rdi
  int v5; // r15d
  _QWORD *v6; // rbx
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PspActiveProcessLock, 0, v6, (__int64)&PspActiveProcessLock);
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
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v9, v8);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  if ( v5 )
    return v4;
  return (__int64 *)v3;
}
