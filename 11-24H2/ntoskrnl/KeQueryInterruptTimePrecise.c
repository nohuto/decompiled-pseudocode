/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x14031B120
 * Callers:
 *     PsSessionCreate @ 0x1406F53F8 (PsSessionCreate.c)
 *     ExProcessCounterSetCallback @ 0x14085F3F0 (ExProcessCounterSetCallback.c)
 *     PopPowerAggregatorRecordIntent @ 0x1409A28B0 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1409A3F9C (PopPowerAggregatorAllocateLogEntry.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A89DA0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140AA80A0 (PopEnableSystemSleepCheckpoint.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140AB7570 (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}
