/*
 * XREFs of FsRtlGetFileSize @ 0x14093DE60
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140205500 (FsRtlCreateSectionForDataScan.c)
 *     ExpQueryElamCertInfo @ 0x1407A5834 (ExpQueryElamCertInfo.c)
 *     MmExtendSection @ 0x14093ADB0 (MmExtendSection.c)
 *     MiCreateDataFileMap @ 0x14093BE74 (MiCreateDataFileMap.c)
 *     MiShareExistingControlArea @ 0x14093DCC0 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x14093F578 (MiCreateImageFileMap.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6BEE8 (ExpQueryCodeIntegrityCertificateInfo.c)
 * Callees:
 *     IoAllocateIrpEx @ 0x140253CC0 (IoAllocateIrpEx.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     IoSetThreadHardErrorMode @ 0x14045E010 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall FsRtlGetFileSize(PFILE_OBJECT FileObject, PLARGE_INTEGER FileSize)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  NTSTATUS result; // eax
  __int64 v7; // rdx
  IRP *Irp; // rbx
  BOOLEAN v9; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  BOOLEAN v11; // r14
  NTSTATUS v12; // ecx
  NTSTATUS v13; // eax
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  __int128 v16; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp-18h]

  v14 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || !FastIoDispatch->FastIoQueryStandardInfo
    || !(unsigned __int8)guard_dispatch_icall_no_overrides(FileObject) )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    LOBYTE(v7) = RelatedDeviceObject->StackSize;
    Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v7, 0LL);
    if ( !Irp )
      return -1073741670;
    v9 = IoSetThreadHardErrorMode(0);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v11 = v9;
    Irp->Flags = 66;
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v14;
    Irp->UserEvent = &Event;
    Irp->RequestorMode = 0;
    Irp->Tail.Overlay.OriginalFileObject = FileObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v16;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = FileObject;
    CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
    CurrentStackLocation[-1].Parameters.Read.Length = 24;
    CurrentStackLocation[-1].Parameters.Create.Options = 5;
    v12 = IofCallDriver(RelatedDeviceObject, Irp);
    if ( v12 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else
    {
      v13 = v14;
      if ( v12 < 0 )
        v13 = v12;
      LODWORD(v14) = v13;
    }
    IoSetThreadHardErrorMode(v11);
  }
  result = v14;
  if ( (int)v14 >= 0 )
  {
    if ( BYTE5(v17) )
      return -1073741638;
    else
      *FileSize = *(LARGE_INTEGER *)((char *)&v16 + 8);
  }
  return result;
}
