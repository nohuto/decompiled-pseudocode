/*
 * XREFs of PopDevicePowerTransitionInProgressWorker @ 0x1404A0560
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
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
    ZwUpdateWnfStateData(&WNF_PO_DEVICE_POWER_TRANSITION, &v1, 4LL, 0LL, 0LL, 0, 0);
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerTransitionLock);
  }
  while ( v1 != (PopPendingSetPowerDeviceIrps != 0) );
  PopDevicePowerTransitionInProgressWorkerQueued = 0;
  KeReleaseSpinLock(&PopPendingPowerTransitionLock, v0);
}
