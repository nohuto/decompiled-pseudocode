/*
 * XREFs of PopEsExitSleep @ 0x140AADAA0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopEsStartTelemetry @ 0x140AADAD0 (PopEsStartTelemetry.c)
 */

__int64 PopEsExitSleep()
{
  PopAcquireRwLockExclusive(&PopEsLock);
  PopEsStartTelemetry();
  return PopReleaseRwLock((signed __int64 *)&PopEsLock);
}
