/*
 * XREFs of ?KiIdealProcessorRebalancerTimerCallback@@YAXPEAU_KTIMER2@@PEAX@Z @ 0x1404899F0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 */

void __fastcall KiIdealProcessorRebalancerTimerCallback(struct _KTIMER2 *a1, void *a2)
{
  char v2; // bl

  v2 = 0;
  KxAcquireSpinLock(&qword_140E16D68);
  byte_140E16D71 |= 1u;
  if ( !byte_140E16D70 )
  {
    byte_140E16D70 = 1;
    v2 = 1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140E16D68);
  if ( v2 )
    ExQueueWorkItem(&stru_140E16D48, (WORK_QUEUE_TYPE)48);
}
