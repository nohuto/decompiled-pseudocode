/*
 * XREFs of PeriodicCaptureStateTimerCallback @ 0x14079E5F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405F50 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

void __fastcall PeriodicCaptureStateTimerCallback(__int64 a1, unsigned int *a2)
{
  if ( ExAcquireRundownProtectionCacheAwareEx(
         *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 170) + 448LL) + 8LL * *a2),
         1u) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*((_QWORD *)a2 + 168) + 32LL), NormalWorkQueue);
  }
}
