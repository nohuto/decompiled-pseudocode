/*
 * XREFs of PspScheduleEnforcementWorker @ 0x140A48554
 * Callers:
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void __fastcall PspScheduleEnforcementWorker(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x100000u);
  _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
  if ( (_InterlockedOr(&PspJobTimeLimitsWorkItemFlags, 6u) & 4) == 0 )
    ExQueueWorkItem(&PspJobTimeLimitsWorkItem, DelayedWorkQueue);
}
