/*
 * XREFs of IopGetFileInformation @ 0x14096E140
 * Callers:
 *     IopGetRelatedFileName @ 0x140712180 (IopGetRelatedFileName.c)
 *     IopGetBasicInformationFile @ 0x14096DFD0 (IopGetBasicInformationFile.c)
 *     IopGraftName @ 0x14099D348 (IopGraftName.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 */

__int64 __fastcall IopGetFileInformation(struct _FILE_OBJECT *Object, ULONG a2, ULONG a3, struct _IRP *a4, _DWORD *a5)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  IRP *Irp; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  IRP *v13; // rbx
  __int64 v14; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v16; // edx
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v18 = 0LL;
  PsReferenceSiloContext(Object);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  Irp = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 0LL);
  v13 = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = Object;
    v14 = (__int64)Irp;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->UserEvent = &Event;
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v18;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v13->Flags = 4100;
    v13->RequestorMode = 0;
    v13->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = Object;
    v13->Flags |= 0x10u;
    v13->AssociatedIrp.MasterIrp = a4;
    CurrentStackLocation[-1].Parameters.Read.Length = a2;
    CurrentStackLocation[-1].Parameters.Create.Options = a3;
    IopQueueThreadIrp(v14, v11, v12);
    v16 = IofCallDriver(RelatedDeviceObject, v13);
    if ( v16 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v16 = v18;
    }
    *a5 = DWORD2(v18);
    return v16;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225626LL;
  }
}
