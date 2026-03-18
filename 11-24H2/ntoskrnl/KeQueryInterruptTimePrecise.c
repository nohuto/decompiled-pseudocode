/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x14033BC40
 * Callers:
 *     PsSessionCreate @ 0x1406F73F8 (PsSessionCreate.c)
 *     ExProcessCounterSetCallback @ 0x1408EDBC0 (ExProcessCounterSetCallback.c)
 *     PopPowerAggregatorRecordIntent @ 0x1409BC260 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1409BD94C (PopPowerAggregatorAllocateLogEntry.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A8D7D0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140AAD020 (PopEnableSystemSleepCheckpoint.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140ABC550 (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 */

__int64 __fastcall KeQueryInterruptTimePrecise(__int64 a1)
{
  return RtlGetInterruptTimePrecise(a1);
}
