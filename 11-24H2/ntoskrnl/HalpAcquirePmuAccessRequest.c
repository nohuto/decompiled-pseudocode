/*
 * XREFs of HalpAcquirePmuAccessRequest @ 0x140542970
 * Callers:
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FBAE0 (HalpNotifyActorIfPmuAvailable.c)
 *     HalpRequestPmuAccess @ 0x1406FC060 (HalpRequestPmuAccess.c)
 * Callees:
 *     <none>
 */

__int64 HalpAcquirePmuAccessRequest()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( _InterlockedCompareExchange(&dword_140FC1FE8, 1, 0) == 1 )
    return (unsigned int)-2147483631;
  return v0;
}
