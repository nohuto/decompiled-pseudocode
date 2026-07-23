/*
 * XREFs of PspExitProcess @ 0x1408F2E70
 * Callers:
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14046BC94 (PspProcessUnbindVirtualizedTimers.c)
 *     ExCleanTimerResolutionRequest @ 0x1404A17F8 (ExCleanTimerResolutionRequest.c)
 *     EtwTraceProcess @ 0x1408F11B4 (EtwTraceProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x1408F2F68 (PspCallProcessNotifyRoutines.c)
 *     PsSetProcessTelemetryAppState @ 0x1408F3B80 (PsSetProcessTelemetryAppState.c)
 *     PfProcessExitNotification @ 0x14094BDC4 (PfProcessExitNotification.c)
 *     DbgkFlushErrorPort @ 0x140A527EC (DbgkFlushErrorPort.c)
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
      EtwTraceProcess((PRKPROCESS)a2, 770);
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
