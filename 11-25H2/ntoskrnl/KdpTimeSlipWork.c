/*
 * XREFs of KdpTimeSlipWork @ 0x140B68650
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     ExTryAcquireTimeRefreshLockExclusive @ 0x1407A6BE0 (ExTryAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409CCD84 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B581F0 (ExUpdateSystemTimeFromCmos.c)
 */

__int64 KdpTimeSlipWork()
{
  KIRQL v0; // bl

  if ( ExTryAcquireTimeRefreshLockExclusive() )
  {
    ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLockExclusive();
    v0 = KeAcquireSpinLockRaiseToDpc(&KdpTimeSlipEventLock);
    if ( KdpTimeSlipEvent )
      KeSetEvent((PRKEVENT)KdpTimeSlipEvent, 0, 0);
    KeReleaseSpinLock(&KdpTimeSlipEventLock, v0);
  }
  return KiSetTimerEx((__int64)&KdpTimeSlipTimer, -1800000000LL, 0, 0, (__int64)&KdpTimeSlipDpc);
}
