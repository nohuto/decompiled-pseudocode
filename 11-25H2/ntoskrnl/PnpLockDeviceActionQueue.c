/*
 * XREFs of PnpLockDeviceActionQueue @ 0x140499094
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x140498FE0 (IoControlPnpDeviceActionQueue.c)
 *     IoBuildPoDeviceNotifyList @ 0x140B59AAC (IoBuildPoDeviceNotifyList.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C52208 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 */

void PnpLockDeviceActionQueue()
{
  KIRQL v0; // al
  KIRQL v1; // bl

  while ( 1 )
  {
    PpDevNodeLockTree(1LL);
    v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    v1 = v0;
    if ( !PnpEnumerationInProgress )
      break;
    KeReleaseSpinLock(&PnpSpinLock, v0);
    PpDevNodeUnlockTree(1LL);
    KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
  }
  PnpEnumerationInProgress = 1;
  KeResetEvent(&PnpEnumerationLock);
  KeReleaseSpinLock(&PnpSpinLock, v1);
}
