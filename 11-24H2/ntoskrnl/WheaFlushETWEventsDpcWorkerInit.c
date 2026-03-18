/*
 * XREFs of WheaFlushETWEventsDpcWorkerInit @ 0x14065DED4
 * Callers:
 *     WheapEtwEnableCallback @ 0x1407C8340 (WheapEtwEnableCallback.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 (__fastcall *WheaFlushETWEventsDpcWorkerInit())()
{
  __int64 (__fastcall *result)(); // rax

  memset_0(&WheaFlushETWEventsDpcWorker, 0, 0x70uLL);
  WheaFlushETWEventsDpcWorker.TargetInfoAsUlong = 275;
  WheaFlushETWEventsDpcWorker.DeferredContext = &WheaFlushETWEventsDpcWorker;
  WheaFlushETWEventsDpcWorker.DeferredRoutine = (PKDEFERRED_ROUTINE)WheaFlushETWEventsDpcRoutine;
  stru_140EF9A60.WorkerRoutine = (void (__fastcall *)(void *))WheaFlushETWEventsWorkerRoutine;
  result = WheapProcessWaitingETWEvents;
  qword_140EF9A88 = (__int64)WheapProcessWaitingETWEvents;
  WheaFlushETWEventsDpcWorker.DpcData = 0LL;
  WheaFlushETWEventsDpcWorker.ProcessorHistory = 0LL;
  stru_140EF9A60.Parameter = &WheaFlushETWEventsDpcWorker;
  stru_140EF9A60.List.Flink = 0LL;
  dword_140EF9A80 = 0;
  WheaFlushETWEventsInitialized = 1;
  return result;
}
