/*
 * XREFs of IoDeleteDevice @ 0x1403F1B00
 * Callers:
 *     DifIoDeleteDeviceWrapper @ 0x140627C10 (DifIoDeleteDeviceWrapper.c)
 *     HalpAddDevice @ 0x1406FE8E0 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IopRemoveLegacyDeviceNode @ 0x140725130 (IopRemoveLegacyDeviceNode.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x14072D9EC (IopCreateRootEnumeratedDeviceObject.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     RawShutdown @ 0x14077CA40 (RawShutdown.c)
 *     VrpRegistryUnload @ 0x140829360 (VrpRegistryUnload.c)
 *     IoCreateDeviceSecure @ 0x1409A1B40 (IoCreateDeviceSecure.c)
 *     RawMountVolume @ 0x1409A3134 (RawMountVolume.c)
 *     PiSwDestroyDeviceObject @ 0x1409FAFD4 (PiSwDestroyDeviceObject.c)
 *     IopPnPDispatch @ 0x140A5D2E0 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     RawDeleteVcb @ 0x140A70C4C (RawDeleteVcb.c)
 *     IopFindLegacyDeviceNode @ 0x140AAF2E8 (IopFindLegacyDeviceNode.c)
 *     PiSwGetChildPdo @ 0x140AC3B1C (PiSwGetChildPdo.c)
 *     ViDdiDriverEntry @ 0x140B84750 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140B9CD90 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140B9D0B0 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140C36730 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140C3C9C0 (WmipDriverEntry.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x1403F1C6C (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x1403F2590 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x140596EDC (IopRemoveTimerFromTimerList.c)
 *     ObQueryNameString @ 0x140969A10 (ObQueryNameString.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1409A3CD0 (EtwTiLogDeviceObjectLoadUnload.c)
 *     PnpFreeInterruptInformation @ 0x140A59830 (PnpFreeInterruptInformation.c)
 *     ObMakeTemporaryObject @ 0x140A68350 (ObMakeTemporaryObject.c)
 *     IoUnregisterShutdownNotification @ 0x140B6D210 (IoUnregisterShutdownNotification.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     IovDeleteDevice @ 0x140B82734 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  struct _OBJECT_NAME_INFORMATION *v2; // rsi
  struct _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  struct _OBJECT_NAME_INFORMATION *Pool2; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool2 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL);
    v3 = Pool2;
    if ( Pool2 )
    {
      if ( ObQueryNameString(DeviceObject, Pool2, ReturnLength, &ReturnLength) >= 0 )
        v2 = v3;
    }
  }
  EtwTiLogDeviceObjectLoadUnload(0LL, &DeviceObject->DriverObject->DriverName, v2);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( (MmVerifierData & 0x90) != 0 )
    IovDeleteDevice(DeviceObject, retaddr);
  if ( (DeviceObject->Flags & 0x800) != 0 )
    IoUnregisterShutdownNotification(DeviceObject);
  Timer = DeviceObject->Timer;
  if ( Timer )
  {
    IopRemoveTimerFromTimerList(DeviceObject->Timer);
    ExFreePoolWithTag(Timer, 0);
  }
  if ( (DeviceObject->Flags & 0x40) != 0 )
    ObMakeTemporaryObject(DeviceObject);
  PoRunDownDeviceObject(DeviceObject);
  PnpFreeInterruptInformation(DeviceObject);
  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject->DeviceObjectExtension->ExtensionFlags |= 2u;
  if ( DeviceObject->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v6);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)DeviceObject);
}
