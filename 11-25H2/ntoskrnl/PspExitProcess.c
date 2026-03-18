/*
 * XREFs of PspExitProcess @ 0x14091EFA0
 * Callers:
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x1402F4794 (PspProcessUnbindVirtualizedTimers.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExCleanTimerResolutionRequest @ 0x1404A6260 (ExCleanTimerResolutionRequest.c)
 *     PfProcessExitNotification @ 0x14091D314 (PfProcessExitNotification.c)
 *     DbgkFlushErrorPort @ 0x14091D610 (DbgkFlushErrorPort.c)
 *     PspCallProcessNotifyRoutines @ 0x14091F098 (PspCallProcessNotifyRoutines.c)
 *     PsSetProcessTelemetryAppState @ 0x14091FCB0 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceProcess @ 0x140920FCC (EtwTraceProcess.c)
 */

void __fastcall PspExitProcess(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v5; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 500), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState((PRKPROCESS)a2);
    if ( (PerfGlobalGroupMask[0] & 1) != 0 )
      EtwTraceProcess(a2);
    if ( (*(_DWORD *)(a2 + 1532) & 1) == 0 || *(_QWORD *)(a2 + 1600) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines(a2, 0LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  v5 = *(void **)(a2 + 840);
  if ( !v5 )
    goto LABEL_3;
  if ( v5 != (void *)1 )
  {
    ObfDereferenceObject(v5);
LABEL_3:
    *(_QWORD *)(a2 + 840) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 500) < 0 )
      ExCleanTimerResolutionRequest();
    DbgkFlushErrorPort(a2);
    PfProcessExitNotification(a2);
    PspProcessUnbindVirtualizedTimers(a2);
  }
}
