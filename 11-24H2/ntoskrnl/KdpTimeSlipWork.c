/*
 * XREFs of KdpTimeSlipWork @ 0x140B78650
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     ExTryAcquireTimeRefreshLockExclusive @ 0x1407B6080 (ExTryAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409B2024 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B68020 (ExUpdateSystemTimeFromCmos.c)
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
