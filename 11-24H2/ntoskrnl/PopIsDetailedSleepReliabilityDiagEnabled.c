/*
 * XREFs of PopIsDetailedSleepReliabilityDiagEnabled @ 0x140AB1098
 * Callers:
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x14075229C (PopUpdatePowerActionWatchdogTimeouts.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140AA80A0 (PopEnableSystemSleepCheckpoint.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 */

char PopIsDetailedSleepReliabilityDiagEnabled()
{
  char v0; // bl

  PopAcquireRwLockShared(&PopSleepReliabilityDiagLock);
  v0 = PopSleepReliabilityDetailedDiagEnabled;
  PopReleaseRwLock(&PopSleepReliabilityDiagLock);
  return v0;
}
