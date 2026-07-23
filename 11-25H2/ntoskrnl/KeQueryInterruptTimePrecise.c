/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x140279D80
 * Callers:
 *     PsSessionCreate @ 0x1406EBB94 (PsSessionCreate.c)
 *     ExProcessCounterSetCallback @ 0x1408DE7B0 (ExProcessCounterSetCallback.c)
 *     PopPowerAggregatorRecordIntent @ 0x1409644B0 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140965C40 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A88870 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140AA7BD0 (PopEnableSystemSleepCheckpoint.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140AB83D0 (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}
