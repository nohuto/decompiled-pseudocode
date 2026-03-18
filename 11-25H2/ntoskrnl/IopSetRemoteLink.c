/*
 * XREFs of IopSetRemoteLink @ 0x1407071C0
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
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

NTSTATUS __fastcall IopSetRemoteLink(PFILE_OBJECT FileObject, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r15
  PIRP v7; // rdi
  NTSTATUS result; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v12[34]; // [rsp+80h] [rbp-80h] BYREF

  memset_0(v12, 0, sizeof(v12));
  v5 = 0;
  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v7 = IoBuildDeviceIoControlRequest(0x1400ECu, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  if ( !v7 )
    return -1073741670;
  if ( a3 )
  {
    v5 = a3[2] + 12;
    if ( v5 > 0x110 )
      return -1073741789;
    memmove(v12, a3, v5);
    v12[0] = 0LL;
  }
  v7->Flags |= 4u;
  v7->AssociatedIrp.MasterIrp = (struct _IRP *)v12;
  CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
  v7->Tail.Overlay.OriginalFileObject = FileObject;
  CurrentStackLocation[-1].FileObject = FileObject;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1037;
  CurrentStackLocation[-1].Parameters.Create.Options = v5;
  PsReferenceSiloContext(FileObject);
  result = IofCallDriver(RelatedDeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
