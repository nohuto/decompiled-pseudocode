/*
 * XREFs of IoDeleteDevice @ 0x1403E5820
 * Callers:
 *     DifIoDeleteDeviceWrapper @ 0x1406261D0 (DifIoDeleteDeviceWrapper.c)
 *     HalpAddDevice @ 0x1406FC520 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     IopRemoveLegacyDeviceNode @ 0x140722CC0 (IopRemoveLegacyDeviceNode.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x14072B9FC (IopCreateRootEnumeratedDeviceObject.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 *     RawShutdown @ 0x14077C8F0 (RawShutdown.c)
 *     VrpRegistryUnload @ 0x140829B90 (VrpRegistryUnload.c)
 *     RawMountVolume @ 0x1408ACB4C (RawMountVolume.c)
 *     PiSwDestroyDeviceObject @ 0x1409F3944 (PiSwDestroyDeviceObject.c)
 *     IopPnPDispatch @ 0x140A55010 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A5AFD8 (IopInitializeDeviceInstanceKey.c)
 *     IoCreateDeviceSecure @ 0x140A603E0 (IoCreateDeviceSecure.c)
 *     RawDeleteVcb @ 0x140A6A0DC (RawDeleteVcb.c)
 *     IopFindLegacyDeviceNode @ 0x140AAA1C8 (IopFindLegacyDeviceNode.c)
 *     PiSwGetChildPdo @ 0x140AC1360 (PiSwGetChildPdo.c)
 *     ViDdiDriverEntry @ 0x140B86750 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140B9ED90 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140B9F0B0 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140C38870 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140C3EB10 (WmipDriverEntry.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x1403E598C (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x140593EBC (IopRemoveTimerFromTimerList.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1408AC660 (EtwTiLogDeviceObjectLoadUnload.c)
 *     ObQueryNameString @ 0x1409524A0 (ObQueryNameString.c)
 *     ObMakeTemporaryObject @ 0x1409B9330 (ObMakeTemporaryObject.c)
 *     PnpFreeInterruptInformation @ 0x140A510F0 (PnpFreeInterruptInformation.c)
 *     IoUnregisterShutdownNotification @ 0x140B6EAB0 (IoUnregisterShutdownNotification.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     IovDeleteDevice @ 0x140B84734 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  _OBJECT_NAME_INFORMATION *v2; // rsi
  _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  ReturnLength = 0;
  v3 = 0LL;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL, ReturnLength, 0x334E6F49u);
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
