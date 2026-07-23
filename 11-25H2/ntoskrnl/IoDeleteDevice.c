/*
 * XREFs of IoDeleteDevice @ 0x1402FDA50
 * Callers:
 *     DifIoDeleteDeviceWrapper @ 0x14061BC50 (DifIoDeleteDeviceWrapper.c)
 *     HalpAddDevice @ 0x1406F2AF0 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     IopRemoveLegacyDeviceNode @ 0x1407191B4 (IopRemoveLegacyDeviceNode.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140721A6C (IopCreateRootEnumeratedDeviceObject.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     RawShutdown @ 0x14076D710 (RawShutdown.c)
 *     VrpRegistryUnload @ 0x140819560 (VrpRegistryUnload.c)
 *     IoCreateDeviceSecure @ 0x14099CC50 (IoCreateDeviceSecure.c)
 *     RawMountVolume @ 0x14099E244 (RawMountVolume.c)
 *     PiSwDestroyDeviceObject @ 0x1409A34B4 (PiSwDestroyDeviceObject.c)
 *     IopPnPDispatch @ 0x140A5AF70 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 *     RawDeleteVcb @ 0x140A6EA4C (RawDeleteVcb.c)
 *     IopFindLegacyDeviceNode @ 0x140AA9F88 (IopFindLegacyDeviceNode.c)
 *     PiSwGetChildPdo @ 0x140AC044C (PiSwGetChildPdo.c)
 *     ViDdiDriverEntry @ 0x140B74770 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140B8CDB0 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140B8D0D0 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140C25460 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140C2B6E0 (WmipDriverEntry.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x1402FDBBC (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     IopRemoveTimerFromTimerList @ 0x14059382C (IopRemoveTimerFromTimerList.c)
 *     ObQueryNameString @ 0x1408C0E00 (ObQueryNameString.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14099EDE4 (EtwTiLogDeviceObjectLoadUnload.c)
 *     ObMakeTemporaryObject @ 0x1409AF2C0 (ObMakeTemporaryObject.c)
 *     PnpFreeInterruptInformation @ 0x140A55C80 (PnpFreeInterruptInformation.c)
 *     IoUnregisterShutdownNotification @ 0x140B5E130 (IoUnregisterShutdownNotification.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     IovDeleteDevice @ 0x140B72734 (IovDeleteDevice.c)
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
    Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL);
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
    IopCompleteUnloadOrDelete(DeviceObject);
}
