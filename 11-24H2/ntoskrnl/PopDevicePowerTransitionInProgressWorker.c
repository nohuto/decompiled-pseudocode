/*
 * XREFs of PopDevicePowerTransitionInProgressWorker @ 0x140498F90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

void PopDevicePowerTransitionInProgressWorker()
{
  KIRQL v0; // dl
  BOOL v1; // [rsp+58h] [rbp+10h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerTransitionLock);
  do
  {
    v1 = PopPendingSetPowerDeviceIrps != 0;
    KeReleaseSpinLock(&PopPendingPowerTransitionLock, v0);
    ZwUpdateWnfStateData(&WNF_PO_DEVICE_POWER_TRANSITION, &v1, 4LL);
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerTransitionLock);
  }
  while ( v1 != (PopPendingSetPowerDeviceIrps != 0) );
  PopDevicePowerTransitionInProgressWorkerQueued = 0;
  KeReleaseSpinLock(&PopPendingPowerTransitionLock, v0);
}
