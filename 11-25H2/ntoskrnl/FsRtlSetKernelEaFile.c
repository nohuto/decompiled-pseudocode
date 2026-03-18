/*
 * XREFs of FsRtlSetKernelEaFile @ 0x140A00480
 * Callers:
 *     CmpAdjustFileCFSafety @ 0x1404F2264 (CmpAdjustFileCFSafety.c)
 *     sub_1409FF648 @ 0x1409FF648 (sub_1409FF648.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IoAllocateIrpEx @ 0x140253CC0 (IoAllocateIrpEx.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 *     FsRtlpFreeMdlChain @ 0x140701224 (FsRtlpFreeMdlChain.c)
 */

__int64 __fastcall FsRtlSetKernelEaFile(PFILE_OBJECT FileObject, void *a2, int a3)
{
  IRP *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int Status; // edi
  NTSTATUS v13; // eax
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+30h] [rbp-28h]
  struct _KEVENT Object; // [rsp+38h] [rbp-20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp+20h]

  v6 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v7) = DeviceObject->StackSize;
    v8 = IoAllocateIrpEx((__int64)DeviceObject, v7, 0LL);
    v6 = (IRP *)v8;
    Irp = (PIRP)v8;
    if ( v8 )
    {
      v9 = (__int64 *)(v8 + 184);
      v10 = *(_QWORD *)(v8 + 184);
      *(_WORD *)(v10 - 72) = 1032;
      *(_QWORD *)(v10 - 24) = FileObject;
      v6->UserBuffer = a2;
      *(_DWORD *)(v10 - 64) = a3;
      v6 = Irp;
      Irp->Tail.Overlay.Thread = KeGetCurrentThread();
      Irp->Flags = 4;
      Irp->RequestorMode = 0;
      v11 = *v9;
      *(_QWORD *)(v11 - 16) = SmKmGenericCompletion;
      *(_QWORD *)(v11 - 8) = &Object;
      *(_BYTE *)(v11 - 69) = 0;
      *(_BYTE *)(v11 - 69) = 64;
      *(_BYTE *)(v11 - 69) = -64;
      *(_BYTE *)(v11 - 69) = -32;
      if ( IofCallDriver(DeviceObject, Irp) == 259 )
      {
        while ( 1 )
        {
          v13 = KeWaitForSingleObject(&Object, Executive, 0, 1u, 0LL);
          if ( v13 != 257 )
            break;
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
          {
            v6 = Irp;
            goto LABEL_13;
          }
          v6 = Irp;
        }
        if ( v13 != -1073741749 )
          goto LABEL_4;
LABEL_13:
        IoCancelIrp(v6);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
LABEL_4:
      Status = v6->IoStatus.Status;
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v6 )
  {
    MdlAddress = v6->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v6->MdlAddress = 0LL;
    }
    IoFreeIrp(v6);
  }
  return Status;
}
