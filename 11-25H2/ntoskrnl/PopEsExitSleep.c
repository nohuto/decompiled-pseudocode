/*
 * XREFs of PopEsExitSleep @ 0x140AA85C0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopEsStartTelemetry @ 0x140AA85F0 (PopEsStartTelemetry.c)
 */

__int64 PopEsExitSleep()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
  PopEsStartTelemetry();
  return PopReleaseRwLock(&PopEsLock);
}
