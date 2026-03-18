/*
 * XREFs of PpmSetExitLatencySamplingPercentage @ 0x1404D13E0
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 */

__int64 __fastcall PpmSetExitLatencySamplingPercentage(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx

  PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock, a2, a3);
  v4 = 0;
  if ( PpmExitLatencySamplingPercentageSet )
  {
    v4 = -1073741823;
  }
  else
  {
    v5 = *a1;
    PpmExitLatencySamplingPercentageSet = 1;
    if ( v5 > 0x64 )
      v5 = 100;
    PpmExitLatencySamplingPercentage = v5;
  }
  PpmReleaseLock(&PopFxSystemLatencyLock);
  return v4;
}
