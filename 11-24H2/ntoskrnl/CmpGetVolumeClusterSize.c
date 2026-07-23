/*
 * XREFs of CmpGetVolumeClusterSize @ 0x140932C5C
 * Callers:
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 * Callees:
 *     IoAllocateIrp @ 0x14025AD60 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x140411960 (IoGetAttachedDeviceReference.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryVolumeInformationFile @ 0x1406A7CD0 (ZwQueryVolumeInformationFile.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     CmpCreateEvent @ 0x140932EC0 (CmpCreateEvent.c)
 */

NTSTATUS __fastcall CmpGetVolumeClusterSize(HANDLE FileHandle, int *a2)
{
  struct _OBJECT_TYPE *v4; // r8
  NTSTATUS result; // eax
  int Event; // eax
  PVOID v7; // r15
  NTSTATUS v8; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PVOID v10; // rdi
  struct _DEVICE_OBJECT *v11; // rsi
  PIRP Irp; // rax
  IRP *v13; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  IRP *v15; // rdx
  struct _IO_STACK_LOCATION *v16; // rax
  NTSTATUS Status; // r14d
  unsigned int v18; // edx
  int v19; // edx
  PVOID Object; // [rsp+30h] [rbp-49h] BYREF
  PVOID v21; // [rsp+38h] [rbp-41h]
  HANDLE Handle; // [rsp+40h] [rbp-39h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-31h] BYREF
  int v24; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v25; // [rsp+5Ch] [rbp-1Dh]
  __int128 v26; // [rsp+60h] [rbp-19h]
  int v27; // [rsp+70h] [rbp-9h]
  __int128 FsInformation; // [rsp+78h] [rbp-1h] BYREF
  __int64 v29; // [rsp+88h] [rbp+Fh]

  v21 = 0LL;
  Handle = 0LL;
  v27 = 0;
  v25 = 0;
  Object = 0LL;
  v29 = 0LL;
  FsInformation = 0LL;
  v24 = 6;
  IoStatusBlock = 0LL;
  v4 = *(struct _OBJECT_TYPE **)CmIoFileObjectType;
  v26 = 0LL;
  result = ObReferenceObjectByHandle(FileHandle, 0, v4, 0, &Object, 0LL);
  if ( result < 0 )
    return result;
  Event = CmpCreateEvent(NotificationEvent);
  v7 = Object;
  v8 = Event;
  if ( Event >= 0 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
    v10 = v21;
    v11 = AttachedDeviceReference;
    if ( !AttachedDeviceReference )
      goto LABEL_27;
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    v13 = Irp;
    if ( !Irp )
      goto LABEL_27;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v15 = Irp;
    CurrentStackLocation[-1].MajorFunction = 14;
    CurrentStackLocation[-1].DeviceObject = v11;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2954240;
    CurrentStackLocation[-1].Parameters.Read.Length = 28;
    CurrentStackLocation[-1].Parameters.Create.Options = 12;
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v24;
    Irp->UserBuffer = &v24;
    v16 = Irp->Tail.Overlay.CurrentStackLocation;
    v13->Flags = 80;
    v13->IoStatus.Status = -1073741637;
    v16[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&CmpGetVolumeClusterSizeCompletion;
    v16[-1].Context = v10;
    v16[-1].Control = -32;
    Status = IofCallDriver(v11, v15);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(v10, Executive, 0, 0, 0LL);
      Status = v13->IoStatus.Status;
    }
    IoFreeIrp(v13);
    if ( Status < 0 )
      goto LABEL_27;
    if ( v25 < 0x18 )
      goto LABEL_27;
    v18 = HIDWORD(v26);
    if ( !HIDWORD(v26) )
      goto LABEL_27;
    if ( ((HIDWORD(v26) - 1) & HIDWORD(v26)) != 0 )
      Status = -1073741288;
    if ( Status < 0 )
    {
LABEL_27:
      v8 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
      if ( v8 < 0 )
        goto LABEL_16;
      v18 = HIDWORD(v29);
    }
    v8 = 0;
    if ( v18 > 0x1000 )
    {
      v19 = 8;
      goto LABEL_15;
    }
    if ( v18 < 0x200 )
    {
      v19 = 1;
      goto LABEL_15;
    }
    v19 = v18 >> 9;
    if ( ((v19 - 1) & v19) == 0 )
    {
LABEL_15:
      *a2 = v19;
      goto LABEL_16;
    }
    v8 = -1073741288;
LABEL_16:
    if ( v11 )
      ObfDereferenceObject(v11);
    goto LABEL_18;
  }
  v10 = 0LL;
LABEL_18:
  ObfDereferenceObject(v7);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    ZwClose(Handle);
  }
  return v8;
}
