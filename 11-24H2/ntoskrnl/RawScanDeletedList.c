/*
 * XREFs of RawScanDeletedList @ 0x1408ACE04
 * Callers:
 *     RawShutdown @ 0x14077C8F0 (RawShutdown.c)
 *     RawMountVolume @ 0x1408ACB4C (RawMountVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ExTryToAcquireFastMutex @ 0x14043D8E0 (ExTryToAcquireFastMutex.c)
 *     RawCheckForDeleteVolume @ 0x1404B6EAC (RawCheckForDeleteVolume.c)
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
