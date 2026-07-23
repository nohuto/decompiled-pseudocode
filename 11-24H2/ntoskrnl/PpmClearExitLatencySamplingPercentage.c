/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x1404D00F8
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 */

LONG __fastcall PpmClearExitLatencySamplingPercentage(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock(&PopFxSystemLatencyLock, a2, a3);
  if ( PpmExitLatencySamplingPercentageSet )
  {
    PpmExitLatencySamplingPercentageSet = 0;
    PpmExitLatencySamplingPercentage = 0;
  }
  return PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
}
