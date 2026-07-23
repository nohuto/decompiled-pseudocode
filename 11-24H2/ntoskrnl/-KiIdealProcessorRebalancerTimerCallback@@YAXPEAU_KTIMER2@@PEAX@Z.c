/*
 * XREFs of ?KiIdealProcessorRebalancerTimerCallback@@YAXPEAU_KTIMER2@@PEAX@Z @ 0x1404841C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall KiIdealProcessorRebalancerTimerCallback(struct _KTIMER2 *a1, void *a2)
{
  char v2; // bl

  v2 = 0;
  KxAcquireSpinLock(&qword_140E170E8);
  byte_140E170F1 |= 1u;
  if ( !byte_140E170F0 )
  {
    byte_140E170F0 = 1;
    v2 = 1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140E170E8);
  if ( v2 )
    ExQueueWorkItem(&stru_140E170C8, (WORK_QUEUE_TYPE)48);
}
