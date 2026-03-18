/*
 * XREFs of RawScanDeletedList @ 0x1409A4080
 * Callers:
 *     RawShutdown @ 0x14077CA40 (RawShutdown.c)
 *     RawMountVolume @ 0x1409A3134 (RawMountVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     ExTryToAcquireFastMutex @ 0x140445730 (ExTryToAcquireFastMutex.c)
 *     RawCheckForDeleteVolume @ 0x1404BC1EC (RawCheckForDeleteVolume.c)
 */

void RawScanDeletedList()
{
  __int64 *v0; // rbx
  __int64 *v1; // rsi

  if ( (__int64 *)RawDismountedQueue != &RawDismountedQueue )
  {
    ExAcquireFastMutex(&RawGlobalLock);
    v0 = (__int64 *)RawDismountedQueue;
    while ( v0 != &RawDismountedQueue )
    {
      v1 = v0 - 22;
      v0 = (__int64 *)*v0;
      if ( ExTryToAcquireFastMutex((PFAST_MUTEX)(v1 + 30)) )
      {
        if ( !RawCheckForDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)v1) )
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 30));
      }
    }
    KeReleaseGuardedMutex(&RawGlobalLock);
  }
}
