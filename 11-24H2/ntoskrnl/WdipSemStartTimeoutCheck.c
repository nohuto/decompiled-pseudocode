/*
 * XREFs of WdipSemStartTimeoutCheck @ 0x1407A2BE0
 * Callers:
 *     WdipSemCleanStart @ 0x1407A0DC0 (WdipSemCleanStart.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExAllocateTimer @ 0x1403BF2E0 (ExAllocateTimer.c)
 *     WdipSemSqmInit @ 0x1407A36C8 (WdipSemSqmInit.c)
 */

__int64 WdipSemStartTimeoutCheck()
{
  if ( !WdipTimeoutWorkEnabled )
  {
    WdipTimeoutWorkEnabled = 1;
    WdipSemSqmInit();
    WdipTimeoutTimer = ExAllocateTimer((__int64)WdipTimeoutTimerRoutine, 0LL, 8u);
    if ( WdipTimeoutTimer )
    {
      WdipTimeoutTimerParameters = 0LL;
      qword_140EFF6D8 = -1LL;
      WdipTimeoutWorkItem.Parameter = 0LL;
      WdipTimeoutWorkItem.List.Flink = 0LL;
      WdipTimeoutWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WdipTimeoutCheckRoutine;
      ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
    }
  }
  return 0LL;
}
