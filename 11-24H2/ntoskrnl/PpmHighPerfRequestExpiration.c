/*
 * XREFs of PpmHighPerfRequestExpiration @ 0x1405D7800
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopPowerRequestReferenceRelease @ 0x14046BD60 (PopPowerRequestReferenceRelease.c)
 */

void PpmHighPerfRequestExpiration()
{
  KIRQL v0; // di
  unsigned int i; // ebx

  v0 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( MEMORY[0xFFFFF78000000008] >= (unsigned __int64)PpmHighPerfDeferredEndTime )
  {
    for ( i = 0; i < PpmHighPerfDeferredEndCount; ++i )
      PopPowerRequestReferenceRelease(PpmHighPerfPowerRequest, 4u);
    PpmHighPerfDeferredEndCount = 0;
  }
  KeReleaseSpinLock(&PpmHighPerfRequestLock, v0);
}
