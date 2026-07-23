/*
 * XREFs of PopDevicePowerTransitionInProgressWorker @ 0x140493870
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

void PopDevicePowerTransitionInProgressWorker()
{
  KIRQL v0; // dl
  BOOL Buffer; // [rsp+58h] [rbp+10h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerTransitionLock);
  do
  {
    Buffer = PopPendingSetPowerDeviceIrps != 0;
    KeReleaseSpinLock(&PopPendingPowerTransitionLock, v0);
    ZwUpdateWnfStateData(&WNF_PO_DEVICE_POWER_TRANSITION, &Buffer, 4u, 0LL, 0LL, 0, 0);
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerTransitionLock);
  }
  while ( Buffer != (PopPendingSetPowerDeviceIrps != 0) );
  PopDevicePowerTransitionInProgressWorkerQueued = 0;
  KeReleaseSpinLock(&PopPendingPowerTransitionLock, v0);
}
