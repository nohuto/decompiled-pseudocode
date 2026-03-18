/*
 * XREFs of ExpTrackRaiseLimitNotification @ 0x1406552C4
 * Callers:
 *     ExpTrackTableGetMoreLimit @ 0x1403AA01C (ExpTrackTableGetMoreLimit.c)
 *     ExpLimitDpcInsertEntry @ 0x1406549A0 (ExpLimitDpcInsertEntry.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall ExpTrackRaiseLimitNotification(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), 1, 0) )
  {
    RtlpInterlockedPushEntrySList(&stru_140E29020, (PSLIST_ENTRY)(a1 + 80));
    if ( !_InterlockedCompareExchange(&dword_140E29030, 1, 0) )
    {
      stru_140E29038.Parameter = 0LL;
      stru_140E29038.List.Flink = 0LL;
      stru_140E29038.WorkerRoutine = (void (__fastcall *)(void *))ExpPlProcessNotifications;
      ExQueueWorkItem(&stru_140E29038, NormalWorkQueue);
    }
  }
}
