/*
 * XREFs of FsRtlQueryKernelEaFile @ 0x1409FD030
 * Callers:
 *     sub_1409FCADC @ 0x1409FCADC (sub_1409FCADC.c)
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

__int64 __fastcall FsRtlQueryKernelEaFile(
        PFILE_OBJECT FileObject,
        __int64 a2,
        int a3,
        char a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        char a8,
        _DWORD *a9)
{
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edi
  NTSTATUS v20; // eax
  struct _MDL *v21; // rcx
  IRP *Irp; // [rsp+30h] [rbp-38h]
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-30h]
  struct _KEVENT Object; // [rsp+40h] [rbp-28h] BYREF

  v13 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    v19 = -1073741808;
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v14) = DeviceObject->StackSize;
    v15 = IoAllocateIrpEx((__int64)DeviceObject, v14, 0LL);
    v13 = v15;
    Irp = (IRP *)v15;
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 184);
      *(_BYTE *)(v16 - 72) = 7;
      *(_QWORD *)(v16 - 24) = FileObject;
      *(_QWORD *)(v15 + 112) = a2;
      *(_DWORD *)(v16 - 64) = a3;
      *(_QWORD *)(v16 - 56) = a5;
      *(_DWORD *)(v16 - 48) = a6;
      v17 = (_BYTE *)(v16 - 70);
      if ( a7 )
      {
        *(_DWORD *)(v16 - 40) = *a7;
        *v17 |= 4u;
      }
      else
      {
        *(_DWORD *)(v16 - 40) = 0;
      }
      if ( a8 )
        *v17 |= 1u;
      if ( a4 )
        *v17 |= 2u;
      v13 = v15;
      *(_QWORD *)(v15 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v15 + 16) = 4;
      *(_BYTE *)(v15 + 64) = 0;
      v18 = *(_QWORD *)(v15 + 184);
      *(_QWORD *)(v18 - 16) = SmKmGenericCompletion;
      *(_QWORD *)(v18 - 8) = &Object;
      *(_BYTE *)(v18 - 69) = 0;
      *(_BYTE *)(v18 - 69) = 64;
      *(_BYTE *)(v18 - 69) = -64;
      *(_BYTE *)(v18 - 69) = -32;
      if ( IofCallDriver(DeviceObject, Irp) == 259 )
      {
        while ( 1 )
        {
          v20 = KeWaitForSingleObject(&Object, Executive, 0, 1u, 0LL);
          if ( v20 != 257 )
            break;
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
          {
            v13 = (__int64)Irp;
            goto LABEL_20;
          }
          v13 = (__int64)Irp;
        }
        if ( v20 != -1073741749 )
          goto LABEL_10;
LABEL_20:
        IoCancelIrp((PIRP)v13);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
LABEL_10:
      v19 = *(_DWORD *)(v13 + 48);
      *a9 = *(_DWORD *)(v13 + 56);
    }
    else
    {
      v19 = -1073741670;
    }
  }
  if ( v13 )
  {
    v21 = *(struct _MDL **)(v13 + 8);
    if ( v21 )
    {
      FsRtlpFreeMdlChain(v21);
      *(_QWORD *)(v13 + 8) = 0LL;
    }
    IoFreeIrp((PIRP)v13);
  }
  return v19;
}
