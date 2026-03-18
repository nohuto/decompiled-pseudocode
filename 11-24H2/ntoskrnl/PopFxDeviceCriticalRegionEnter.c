/*
 * XREFs of PopFxDeviceCriticalRegionEnter @ 0x1405D0E60
 * Callers:
 *     PopFxCompleteComponentActivation @ 0x140317240 (PopFxCompleteComponentActivation.c)
 *     PopFxIdleWorker @ 0x1403B4B50 (PopFxIdleWorker.c)
 *     PopFxActivateComponentWorker @ 0x1403B6358 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1404EB37C (PopFxIdleWorkerTail.c)
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
