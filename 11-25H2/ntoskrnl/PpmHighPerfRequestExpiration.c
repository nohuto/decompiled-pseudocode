/*
 * XREFs of PpmHighPerfRequestExpiration @ 0x1405D2CE0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopPowerRequestReferenceRelease @ 0x14046D3D0 (PopPowerRequestReferenceRelease.c)
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
