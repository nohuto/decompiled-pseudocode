/*
 * XREFs of FsRtlQueryInformationFile @ 0x140A2EF10
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateIrpEx @ 0x140253BB0 (IoAllocateIrpEx.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IoCancelIrp @ 0x140418FA0 (IoCancelIrp.c)
 *     FsRtlpFreeMdlChain @ 0x14070D104 (FsRtlpFreeMdlChain.c)
 */

NTSTATUS __stdcall FsRtlQueryInformationFile(
        PFILE_OBJECT FileObject,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        PULONG RetFileInformationSize)
{
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  NTSTATUS v15; // eax
  NTSTATUS v16; // edi
  struct _MDL *v17; // rcx
  PIRP Irp; // [rsp+30h] [rbp-38h]
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-30h]
  struct _KEVENT Object; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    v16 = -1073741808;
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v10) = DeviceObject->StackSize;
    v11 = IoAllocateIrpEx((__int64)DeviceObject, v10, 0LL);
    v9 = v11;
    Irp = (PIRP)v11;
    if ( v11 )
    {
      v12 = (__int64 *)(v11 + 184);
      v13 = *(_QWORD *)(v11 + 184);
      *(_WORD *)(v13 - 72) = 1029;
      *(_QWORD *)(v13 - 24) = FileObject;
      *(_QWORD *)(v9 + 24) = FileInformation;
      *(_DWORD *)(v13 - 64) = Length;
      *(_DWORD *)(v13 - 56) = FileInformationClass;
      v9 = (__int64)Irp;
      Irp->Tail.Overlay.Thread = KeGetCurrentThread();
      Irp->Flags |= 4u;
      Irp->RequestorMode = 0;
      v14 = *v12;
      *(_QWORD *)(v14 - 16) = SmKmGenericCompletion;
      *(_QWORD *)(v14 - 8) = &Object;
      *(_BYTE *)(v14 - 69) = 0;
      *(_BYTE *)(v14 - 69) = 64;
      *(_BYTE *)(v14 - 69) = -64;
      *(_BYTE *)(v14 - 69) = -32;
      if ( IofCallDriver(DeviceObject, Irp) == 259 )
      {
        while ( 1 )
        {
          v15 = KeWaitForSingleObject(&Object, Executive, 0, 1u, 0LL);
          if ( v15 != 257 )
            break;
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
          {
            v9 = (__int64)Irp;
            goto LABEL_12;
          }
          v9 = (__int64)Irp;
        }
        if ( v15 != -1073741749 )
          goto LABEL_6;
LABEL_12:
        IoCancelIrp((PIRP)v9);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
LABEL_6:
      v16 = *(_DWORD *)(v9 + 48);
      *RetFileInformationSize = *(_DWORD *)(v9 + 56);
    }
    else
    {
      v16 = -1073741670;
    }
  }
  if ( v9 )
  {
    v17 = *(struct _MDL **)(v9 + 8);
    if ( v17 )
    {
      FsRtlpFreeMdlChain(v17);
      *(_QWORD *)(v9 + 8) = 0LL;
    }
    IoFreeIrp((PIRP)v9);
  }
  return v16;
}
