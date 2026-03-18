/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x1404D6CA8
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 */

LONG __fastcall PpmClearExitLatencySamplingPercentage(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock, a2, a3);
  if ( PpmExitLatencySamplingPercentageSet )
  {
    PpmExitLatencySamplingPercentageSet = 0;
    PpmExitLatencySamplingPercentage = 0;
  }
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
