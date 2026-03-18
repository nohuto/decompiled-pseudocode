/*
 * XREFs of IopGetFileInformation @ 0x1408ECAD0
 * Callers:
 *     IopGetRelatedFileName @ 0x140706080 (IopGetRelatedFileName.c)
 *     IopGraftName @ 0x140862214 (IopGraftName.c)
 *     IopGetBasicInformationFile @ 0x1408ED534 (IopGetBasicInformationFile.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 */

__int64 __fastcall IopGetFileInformation(struct _FILE_OBJECT *Object, ULONG a2, ULONG a3, struct _IRP *a4, _DWORD *a5)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  IRP *Irp; // rax
  IRP *v11; // rbx
  __int64 v12; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v14; // edx
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v16 = 0LL;
  PsReferenceSiloContext(Object);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  Irp = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 0LL);
  v11 = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = Object;
    v12 = (__int64)Irp;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->UserEvent = &Event;
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v16;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v11->Flags = 4100;
    v11->RequestorMode = 0;
    v11->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = Object;
    v11->Flags |= 0x10u;
    v11->AssociatedIrp.MasterIrp = a4;
    CurrentStackLocation[-1].Parameters.Read.Length = a2;
    CurrentStackLocation[-1].Parameters.Create.Options = a3;
    IopQueueThreadIrp(v12);
    v14 = IofCallDriver(RelatedDeviceObject, v11);
    if ( v14 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v14 = v16;
    }
    *a5 = DWORD2(v16);
    return v14;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225626LL;
  }
}
