/*
 * XREFs of CcSetValidData @ 0x14025ABE4
 * Callers:
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 * Callees:
 *     IoAllocateIrp @ 0x14025AD60 (IoAllocateIrp.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140ABD89C (CcSetTelemetryPeriodicTimer.c)
 */

__int64 __fastcall CcSetValidData(PFILE_OBJECT FileObject, __int64 *a2)
{
  __int64 v4; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  PIRP Irp; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS v8; // ecx
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v12; // [rsp+42h] [rbp-1Eh]
  char v13; // [rsp+43h] [rbp-1Dh]
  int v14; // [rsp+44h] [rbp-1Ch]
  _QWORD v15[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+18h] BYREF

  ++qword_140F8E718;
  v13 = 0;
  v10 = 0LL;
  if ( !dword_140F8E804 && !byte_140F8E6E1 && CcTelemetryGlobalData && !dword_140F8E800 )
    CcSetTelemetryPeriodicTimer(DueTime);
  v4 = *a2;
  Object = 0;
  v14 = 0;
  v16 = v4;
  v15[1] = v15;
  v15[0] = v15;
  v12 = 6;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
  if ( !Irp )
    return 3221225626LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Flags = 66;
  Irp->RequestorMode = 0;
  Irp->UserIosb = (PIO_STATUS_BLOCK)&v10;
  Irp->UserEvent = (PKEVENT)&Object;
  Irp->Tail.Overlay.OriginalFileObject = FileObject;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v16;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = 0LL;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
  CurrentStackLocation[-1].Parameters.Read.Length = 8;
  CurrentStackLocation[-1].Parameters.Create.Options = 20;
  CurrentStackLocation[-1].Parameters.SetFile.AdvanceOnly = 1;
  v8 = IofCallDriver(RelatedDeviceObject, Irp);
  if ( v8 == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return (unsigned int)v10;
  }
  else
  {
    result = (unsigned int)v10;
    if ( v8 < 0 )
      return (unsigned int)v8;
  }
  return result;
}
