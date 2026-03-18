/*
 * XREFs of ?NodeUsageTelemetryTimerDpc@DXGGLOBAL@@CAXPEAU_KDPC@@PEAX11@Z @ 0x140073420
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGGLOBAL::NodeUsageTelemetryTimerDpc(
        struct _KDPC *Dpc,
        struct _LIST_ENTRY *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 40LL, 1265072196LL);
  if ( Pool2 )
  {
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)DXGGLOBAL::NodeUsageTelemetryThread;
    Pool2->Parameter = Pool2;
    Pool2[1].List.Flink = DeferredContext;
    ExQueueWorkItem(Pool2, NormalWorkQueue);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1388;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to  allocate pNodeUsageTelemetryWorkItem",
      1388LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
