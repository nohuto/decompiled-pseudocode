/*
 * XREFs of PspExitProcess @ 0x1409387A0
 * Callers:
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x1403E3FE0 (PspProcessUnbindVirtualizedTimers.c)
 *     ExCleanTimerResolutionRequest @ 0x1404A6E8C (ExCleanTimerResolutionRequest.c)
 *     PspCallProcessNotifyRoutines @ 0x140938898 (PspCallProcessNotifyRoutines.c)
 *     PsSetProcessTelemetryAppState @ 0x1409394B0 (PsSetProcessTelemetryAppState.c)
 *     DbgkFlushErrorPort @ 0x140939888 (DbgkFlushErrorPort.c)
 *     PfProcessExitNotification @ 0x1409398E0 (PfProcessExitNotification.c)
 *     EtwTraceProcess @ 0x14094CC44 (EtwTraceProcess.c)
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
      EtwTraceProcess((PRKPROCESS)a2);
    if ( (*(_DWORD *)(a2 + 1532) & 1) == 0 || *(_QWORD *)(a2 + 1600) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines(a2, 0LL, 0LL);
      KeLeaveCriticalRegionThread();
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
