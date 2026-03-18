/*
 * XREFs of HalpAcquirePmuAccessRequest @ 0x1405450B0
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FDEA0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406FE420 (HalpRequestPmuAccess.c)
 * Callees:
 *     <none>
 */

__int64 HalpAcquirePmuAccessRequest()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( _InterlockedCompareExchange(&dword_140FC1D88, 1, 0) == 1 )
    return (unsigned int)-2147483631;
  return v0;
}
