/*
 * XREFs of FsRtlGetFileSize @ 0x140942760
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14044C520 (FsRtlCreateSectionForDataScan.c)
 *     ExpQueryElamCertInfo @ 0x1407B4C04 (ExpQueryElamCertInfo.c)
 *     MiShareExistingControlArea @ 0x1409425C0 (MiShareExistingControlArea.c)
 *     MiCreateDataFileMap @ 0x140943D3C (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 *     MmExtendSection @ 0x140946018 (MmExtendSection.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6E09C (ExpQueryCodeIntegrityCertificateInfo.c)
 * Callees:
 *     IoAllocateIrpEx @ 0x140253BB0 (IoAllocateIrpEx.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IoSetThreadHardErrorMode @ 0x14045D2F0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall FsRtlGetFileSize(PFILE_OBJECT FileObject, PLARGE_INTEGER FileSize)
{
  __int64 v4; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  NTSTATUS result; // eax
  __int64 v8; // rdx
  IRP *Irp; // rbx
  BOOLEAN v10; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  BOOLEAN v12; // r14
  NTSTATUS v13; // ecx
  NTSTATUS v14; // eax
  __int128 v15; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h]

  v15 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || !FastIoDispatch->FastIoQueryStandardInfo
    || (LOBYTE(v4) = 1, !(unsigned __int8)guard_dispatch_icall_no_overrides(FileObject, v4, &v17, &v15)) )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    LOBYTE(v8) = RelatedDeviceObject->StackSize;
    Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v8, 0LL);
    if ( !Irp )
      return -1073741670;
    v10 = IoSetThreadHardErrorMode(0);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = v10;
    Irp->Flags = 66;
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v15;
    Irp->UserEvent = &Event;
    Irp->RequestorMode = 0;
    Irp->Tail.Overlay.OriginalFileObject = FileObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v17;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = FileObject;
    CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
    CurrentStackLocation[-1].Parameters.Read.Length = 24;
    CurrentStackLocation[-1].Parameters.Create.Options = 5;
    v13 = IofCallDriver(RelatedDeviceObject, Irp);
    if ( v13 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else
    {
      v14 = v15;
      if ( v13 < 0 )
        v14 = v13;
      LODWORD(v15) = v14;
    }
    IoSetThreadHardErrorMode(v12);
  }
  result = v15;
  if ( (int)v15 >= 0 )
  {
    if ( BYTE5(v18) )
      return -1073741638;
    else
      *FileSize = *(LARGE_INTEGER *)((char *)&v17 + 8);
  }
  return result;
}
