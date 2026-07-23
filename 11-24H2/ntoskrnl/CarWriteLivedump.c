/*
 * XREFs of CarWriteLivedump @ 0x1406182D4
 * Callers:
 *     CarReportDifPluginRuleViolation @ 0x140615800 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     CarLiveDump @ 0x1406180E0 (CarLiveDump.c)
 */

__int64 __fastcall CarWriteLivedump(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 CurrentIrql; // r10

  CurrentIrql = KeGetCurrentIrql();
  if ( CarPreviousDumpTime && MEMORY[0xFFFFF78000000014] - CarPreviousDumpTime < 36000000000LL
    || _InterlockedCompareExchange(&CarLkdInProgress, 1, 0) )
  {
    return 3221228560LL;
  }
  *(_QWORD *)(a1 + 1320) = a2;
  *(_QWORD *)(a1 + 1344) = a5;
  *(_QWORD *)(a1 + 1328) = a3;
  *(_QWORD *)(a1 + 1336) = a4;
  if ( !CurrentIrql )
    return CarLiveDump((_QWORD *)a1);
  QueuedItem.List.Blink = 0LL;
  QueuedItem.List.Flink = 0LL;
  QueuedItem.Parameter = (void *)a1;
  QueuedItem.WorkerRoutine = (void (__fastcall *)(void *))CarLiveDump;
  *(_BYTE *)(a1 + 1352) = 1;
  ExQueueWorkItem(&QueuedItem, SuperCriticalWorkQueue);
  return 259LL;
}
