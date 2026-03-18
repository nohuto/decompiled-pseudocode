/*
 * XREFs of IopGetVolumeId @ 0x140A23DFC
 * Callers:
 *     IopTrackLink @ 0x140A23294 (IopTrackLink.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1402D49E0 (IoBuildDeviceIoControlRequest.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

NTSTATUS __fastcall IopGetVolumeId(PFILE_OBJECT FileObject, __int64 a2)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r14
  PIRP v5; // rax
  IRP *v6; // rbx
  NTSTATUS result; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v9; // xmm0
  struct _KEVENT Event; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-21h] BYREF
  _OWORD v12[4]; // [rsp+80h] [rbp-9h] BYREF

  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset_0(v12, 0, sizeof(v12));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v5 = IoBuildDeviceIoControlRequest(0, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  v6 = v5;
  if ( !v5 )
    return -1073741670;
  v5->Flags |= 4u;
  v5->Tail.Overlay.OriginalFileObject = FileObject;
  v5->UserBuffer = v12;
  v5->AssociatedIrp.MasterIrp = (struct _IRP *)v12;
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].MajorFunction = 10;
  CurrentStackLocation[-1].Parameters.Read.Length = 64;
  CurrentStackLocation[-1].Parameters.Create.Options = 8;
  PsReferenceSiloContext(FileObject);
  result = IofCallDriver(RelatedDeviceObject, v6);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 )
  {
    v9 = v12[0];
    *(_DWORD *)a2 = 0;
    *(_OWORD *)(a2 + 4) = v9;
  }
  return result;
}
