/*
 * XREFs of PopEsExitSleep @ 0x140AA8B20
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopEsStartTelemetry @ 0x140AA8B50 (PopEsStartTelemetry.c)
 */

__int64 PopEsExitSleep()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
  PopEsStartTelemetry();
  return PopReleaseRwLock(&PopEsLock);
}
