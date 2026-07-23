/*
 * XREFs of WheapWorkQueueAddItem @ 0x14042085C
 * Callers:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     WheapReportBootError @ 0x14065A154 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x14065A1F8 (WheapReportPersistedErrorRecord.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x140420930 (ExInterlockedInsertTailList.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, _LIST_ENTRY *a2)
{
  ExInterlockedInsertTailList((PLIST_ENTRY)a1, a2, (PKSPIN_LOCK)(a1 + 16));
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 24)) == 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 96), DelayedWorkQueue);
    else
      KeInsertQueueDpc((PRKDPC)(a1 + 32), 0LL, 0LL);
  }
}
