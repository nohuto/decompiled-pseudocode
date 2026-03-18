/*
 * XREFs of ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140045AD0
 * Callers:
 *     <none>
 * Callees:
 *     EnableFlushTimer @ 0x1400552D4 (EnableFlushTimer.c)
 */

void __fastcall TlgAggregateInternalFlushTimerCallbackKernelMode(struct _EX_TIMER *a1, volatile signed __int16 *a2)
{
  signed __int16 v2; // ax

  v2 = _InterlockedCompareExchange16(a2 + 28, 1, 0);
  if ( v2 )
  {
    if ( v2 == 1 )
      EnableFlushTimer(a1, 15000LL);
  }
  else
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a2, DelayedWorkQueue);
  }
}
