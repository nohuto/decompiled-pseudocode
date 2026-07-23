/*
 * XREFs of IoDetachDevice @ 0x1403E5790
 * Callers:
 *     DifIoDetachDeviceWrapper @ 0x1406264A0 (DifIoDetachDeviceWrapper.c)
 *     ViFilterDispatchPnp @ 0x140B9F0B0 (ViFilterDispatchPnp.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     IovDetachDevice @ 0x140B8474C (IovDetachDevice.c)
 */

void __stdcall IoDetachDevice(PDEVICE_OBJECT TargetDevice)
{
  KIRQL v2; // di
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovDetachDevice(TargetDevice, retaddr);
  TargetDevice->AttachedDevice->DeviceObjectExtension->AttachedTo = 0LL;
  DeviceObjectExtension = TargetDevice->DeviceObjectExtension;
  TargetDevice->AttachedDevice = 0LL;
  if ( (DeviceObjectExtension->ExtensionFlags & 7) == 0 || TargetDevice->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v2);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)TargetDevice);
}
