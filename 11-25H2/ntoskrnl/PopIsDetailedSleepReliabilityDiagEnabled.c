/*
 * XREFs of PopIsDetailedSleepReliabilityDiagEnabled @ 0x140AB1DB4
 * Callers:
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x140747E8C (PopUpdatePowerActionWatchdogTimeouts.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140AA7BD0 (PopEnableSystemSleepCheckpoint.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 */

char PopIsDetailedSleepReliabilityDiagEnabled()
{
  char v0; // bl

  PopAcquireRwLockShared(&PopSleepReliabilityDiagLock);
  v0 = PopSleepReliabilityDetailedDiagEnabled;
  PopReleaseRwLock(&PopSleepReliabilityDiagLock);
  return v0;
}
