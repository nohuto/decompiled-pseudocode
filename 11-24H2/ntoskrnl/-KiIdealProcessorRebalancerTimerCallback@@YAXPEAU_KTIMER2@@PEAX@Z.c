/*
 * XREFs of ?KiIdealProcessorRebalancerTimerCallback@@YAXPEAU_KTIMER2@@PEAX@Z @ 0x140489200
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall KiIdealProcessorRebalancerTimerCallback(struct _KTIMER2 *a1, void *a2)
{
  char v2; // bl

  v2 = 0;
  KxAcquireSpinLock(&qword_140E16FA8);
  byte_140E16FB1 |= 1u;
  if ( !byte_140E16FB0 )
  {
    byte_140E16FB0 = 1;
    v2 = 1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140E16FA8);
  if ( v2 )
    ExQueueWorkItem(&stru_140E16F88, (WORK_QUEUE_TYPE)48);
}
