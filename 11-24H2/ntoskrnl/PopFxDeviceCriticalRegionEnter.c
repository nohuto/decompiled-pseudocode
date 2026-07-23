/*
 * XREFs of PopFxDeviceCriticalRegionEnter @ 0x1405CE580
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1402AE658 (PopFxActivateComponentWorker.c)
 *     PopFxCompleteComponentActivation @ 0x1402BFDF0 (PopFxCompleteComponentActivation.c)
 *     PopFxIdleWorker @ 0x1403A9020 (PopFxIdleWorker.c)
 *     PopFxIdleWorkerTail @ 0x1404E22FC (PopFxIdleWorkerTail.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PopFxDeviceCriticalRegionEnter(__int64 a1)
{
  struct _KTHREAD *result; // rax

  result = (struct _KTHREAD *)KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u )
  {
    result = (struct _KTHREAD *)*(unsigned int *)(a1 + 864);
    if ( ((unsigned __int16)result & 0x1000) != 0 )
    {
      result = KeGetCurrentThread();
      --result->SpecialApcDisable;
    }
  }
  return result;
}
