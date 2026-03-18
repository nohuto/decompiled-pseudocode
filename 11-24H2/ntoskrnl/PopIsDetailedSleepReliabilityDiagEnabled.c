/*
 * XREFs of PopIsDetailedSleepReliabilityDiagEnabled @ 0x140AB6DC0
 * Callers:
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x140753F7C (PopUpdatePowerActionWatchdogTimeouts.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140AAD020 (PopEnableSystemSleepCheckpoint.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 */

char PopIsDetailedSleepReliabilityDiagEnabled()
{
  char v0; // bl

  PopAcquireRwLockShared((volatile signed __int64 *)&PopSleepReliabilityDiagLock);
  v0 = PopSleepReliabilityDetailedDiagEnabled;
  PopReleaseRwLock((signed __int64 *)&PopSleepReliabilityDiagLock);
  return v0;
}
