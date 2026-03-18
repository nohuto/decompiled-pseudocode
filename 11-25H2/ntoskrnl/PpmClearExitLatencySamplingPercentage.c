/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x1404D7E78
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
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
