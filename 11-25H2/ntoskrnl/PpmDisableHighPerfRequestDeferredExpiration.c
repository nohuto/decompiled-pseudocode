/*
 * XREFs of PpmDisableHighPerfRequestDeferredExpiration @ 0x1404AEC3C
 * Callers:
 *     PdcPoPerfOverride @ 0x140A2BB1C (PdcPoPerfOverride.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     PopPowerRequestReferenceRelease @ 0x14046D3D0 (PopPowerRequestReferenceRelease.c)
 */

void __fastcall PpmDisableHighPerfRequestDeferredExpiration(char a1)
{
  KIRQL v2; // si
  unsigned int i; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( a1 )
  {
    KeCancelTimer(&PpmHighPerfEndTimer);
    PpmHighPerfDeferredEndTime = 0LL;
    for ( i = 0; i < PpmHighPerfDeferredEndCount; ++i )
      PopPowerRequestReferenceRelease(PpmHighPerfPowerRequest, 4u);
    PpmHighPerfDeferredEndCount = 0;
    PpmHighPerfDeferredEndTime = 0LL;
  }
  PpmHighPerfDeferredEndDisabled = a1;
  KeReleaseSpinLock(&PpmHighPerfRequestLock, v2);
}
