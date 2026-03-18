/*
 * XREFs of KdUpdateTimeSlipEvent @ 0x1405AFC1C
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall KdUpdateTimeSlipEvent(void *a1)
{
  KIRQL v2; // di

  if ( !KdPitchDebugger )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&KdpTimeSlipEventLock);
    if ( KdpTimeSlipEvent )
      ObfDereferenceObjectWithTag(KdpTimeSlipEvent, 0x746C6644u);
    KdpTimeSlipEvent = a1;
    KeReleaseSpinLock(&KdpTimeSlipEventLock, v2);
  }
}
