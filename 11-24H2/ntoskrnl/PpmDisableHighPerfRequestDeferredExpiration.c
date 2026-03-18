/*
 * XREFs of PpmDisableHighPerfRequestDeferredExpiration @ 0x1404AFD1C
 * Callers:
 *     PdcPoPerfOverride @ 0x140A9568C (PdcPoPerfOverride.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     PopPowerRequestReferenceRelease @ 0x14046BD60 (PopPowerRequestReferenceRelease.c)
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
