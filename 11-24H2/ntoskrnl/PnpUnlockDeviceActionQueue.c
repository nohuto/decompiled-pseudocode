/*
 * XREFs of PnpUnlockDeviceActionQueue @ 0x140493744
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x140493724 (IoControlPnpDeviceActionQueue.c)
 *     IoFreePoDeviceNotifyList @ 0x140B6ED74 (IoFreePoDeviceNotifyList.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C65698 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 */

__int64 PnpUnlockDeviceActionQueue()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( (__int64 *)PnpEnumerationRequestList == &PnpEnumerationRequestList )
  {
    PnpEnumerationInProgress = 0;
    KeSetEvent(&PnpEnumerationLock, 0, 0);
  }
  else
  {
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  KeReleaseSpinLock(&PnpSpinLock, v0);
  return PpDevNodeUnlockTree(1LL);
}
