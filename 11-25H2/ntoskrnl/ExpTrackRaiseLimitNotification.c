/*
 * XREFs of ExpTrackRaiseLimitNotification @ 0x1406493C4
 * Callers:
 *     ExpTrackTableGetMoreLimit @ 0x1402FE32C (ExpTrackTableGetMoreLimit.c)
 *     ExpLimitDpcInsertEntry @ 0x140648AA4 (ExpLimitDpcInsertEntry.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall ExpTrackRaiseLimitNotification(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), 1, 0) )
  {
    RtlpInterlockedPushEntrySList(&stru_140E28DE0, (PSLIST_ENTRY)(a1 + 80));
    if ( !_InterlockedCompareExchange(&dword_140E28DF0, 1, 0) )
    {
      stru_140E28DF8.Parameter = 0LL;
      stru_140E28DF8.List.Flink = 0LL;
      stru_140E28DF8.WorkerRoutine = (void (__fastcall *)(void *))ExpPlProcessNotifications;
      ExQueueWorkItem(&stru_140E28DF8, NormalWorkQueue);
    }
  }
}
