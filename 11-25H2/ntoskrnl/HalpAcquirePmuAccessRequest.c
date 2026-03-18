/*
 * XREFs of HalpAcquirePmuAccessRequest @ 0x1405427C0
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x1406F20B0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406F2630 (HalpRequestPmuAccess.c)
 * Callees:
 *     <none>
 */

__int64 HalpAcquirePmuAccessRequest()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( _InterlockedCompareExchange(&dword_140FC15E8, 1, 0) == 1 )
    return (unsigned int)-2147483631;
  return v0;
}
