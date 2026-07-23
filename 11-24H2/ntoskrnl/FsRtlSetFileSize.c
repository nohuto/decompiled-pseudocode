/*
 * XREFs of FsRtlSetFileSize @ 0x14098A000
 * Callers:
 *     MmExtendSection @ 0x14098A134 (MmExtendSection.c)
 *     MiCreateDataFileMap @ 0x14098A990 (MiCreateDataFileMap.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoAllocateIrpEx @ 0x1402841C0 (IoAllocateIrpEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IoSetThreadHardErrorMode @ 0x1404523B0 (IoSetThreadHardErrorMode.c)
 */

__int64 __fastcall FsRtlSetFileSize(PFILE_OBJECT FileObject, __int64 *a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v4; // rdx
  IRP *Irp; // rbx
  BOOLEAN v6; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  BOOLEAN v8; // di
  NTSTATUS v9; // ecx
  NTSTATUS v11; // eax
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+88h] [rbp+28h] BYREF

  v14 = *a2;
  v12 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v4) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v4, 0LL);
  if ( !Irp )
    return 3221225626LL;
  v6 = IoSetThreadHardErrorMode(0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v8 = v6;
  Irp->Flags = 66;
  Irp->UserIosb = (PIO_STATUS_BLOCK)&v12;
  Irp->UserEvent = &Event;
  Irp->RequestorMode = 0;
  Irp->Tail.Overlay.OriginalFileObject = FileObject;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v14;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
  CurrentStackLocation[-1].Parameters.Read.Length = 8;
  CurrentStackLocation[-1].Parameters.Create.Options = 20;
  v9 = IofCallDriver(RelatedDeviceObject, Irp);
  if ( v9 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    v11 = v12;
    if ( v9 < 0 )
      v11 = v9;
    LODWORD(v12) = v11;
  }
  IoSetThreadHardErrorMode(v8);
  return (unsigned int)v12;
}
