/*
 * XREFs of ExpTrackRaiseLimitNotification @ 0x1406539C4
 * Callers:
 *     ExpTrackTableGetMoreLimit @ 0x14039713C (ExpTrackTableGetMoreLimit.c)
 *     ExpLimitDpcInsertEntry @ 0x1406530A0 (ExpLimitDpcInsertEntry.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall ExpTrackRaiseLimitNotification(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), 1, 0) )
  {
    RtlpInterlockedPushEntrySList(&stru_140E29160, (PSLIST_ENTRY)(a1 + 80));
    if ( !_InterlockedCompareExchange(&dword_140E29170, 1, 0) )
    {
      stru_140E29178.Parameter = 0LL;
      stru_140E29178.List.Flink = 0LL;
      stru_140E29178.WorkerRoutine = (void (__fastcall *)(void *))ExpPlProcessNotifications;
      ExQueueWorkItem(&stru_140E29178, NormalWorkQueue);
    }
  }
}
