/*
 * XREFs of FsRtlKernelFsControlFile @ 0x1409F6160
 * Callers:
 *     sub_1409F4D38 @ 0x1409F4D38 (sub_1409F4D38.c)
 *     sub_1409F5164 @ 0x1409F5164 (sub_1409F5164.c)
 *     sub_1409F581C @ 0x1409F581C (sub_1409F581C.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     IoAllocateIrpEx @ 0x1402841C0 (IoAllocateIrpEx.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     FsRtlpFreeMdlChain @ 0x14070ACA4 (FsRtlpFreeMdlChain.c)
 */

__int64 __fastcall FsRtlKernelFsControlFile(
        PFILE_OBJECT FileObject,
        int a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        ULONG Length,
        ULONG *a7)
{
  size_t v7; // r12
  char v9; // r13
  __int64 v11; // rbx
  int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  ULONG v16; // r14d
  __int64 v17; // rax
  int v18; // esi
  ULONG v19; // ecx
  NTSTATUS v20; // eax
  struct _MDL *Mdl; // rax
  struct _MDL *v22; // rcx
  PIRP Irp; // [rsp+38h] [rbp-50h]
  __int64 *v25; // [rsp+40h] [rbp-48h]
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-40h]
  struct _KEVENT Object; // [rsp+50h] [rbp-38h] BYREF

  v7 = a4;
  v9 = a2;
  v11 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v12 = v9 & 3;
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    v18 = -1073741808;
    goto LABEL_37;
  }
  DeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v13) = DeviceObject->StackSize;
  v14 = IoAllocateIrpEx((__int64)DeviceObject, v13, 0LL);
  v11 = v14;
  Irp = (PIRP)v14;
  if ( !v14 )
    goto LABEL_23;
  v25 = (__int64 *)(v14 + 184);
  v15 = *(_QWORD *)(v14 + 184);
  *(_WORD *)(v15 - 72) = 1037;
  *(_QWORD *)(v15 - 24) = FileObject;
  v16 = Length;
  *(_DWORD *)(v15 - 64) = Length;
  *(_DWORD *)(v15 - 56) = v7;
  *(_DWORD *)(v15 - 48) = a2;
  if ( !v12 )
  {
    if ( (_DWORD)v7 || Length )
    {
      if ( (unsigned int)v7 >= Length )
      {
        *(_QWORD *)(v14 + 24) = a3;
      }
      else
      {
        *(_QWORD *)(v14 + 24) = VirtualAddress;
        memmove(VirtualAddress, a3, v7);
      }
      *(_DWORD *)(v11 + 16) = 16;
      *(_QWORD *)(v11 + 112) = VirtualAddress;
      if ( VirtualAddress )
        *(_DWORD *)(v11 + 16) = 80;
    }
    else
    {
      *(_DWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 112) = 0LL;
    }
    goto LABEL_10;
  }
  if ( v12 == 1 || v12 == 2 )
  {
    if ( a3 )
    {
      *(_QWORD *)(v14 + 24) = a3;
      *(_DWORD *)(v14 + 16) = 16;
    }
    else
    {
      *(_DWORD *)(v14 + 16) = 0;
    }
    if ( !VirtualAddress )
      goto LABEL_10;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    *(_QWORD *)(v11 + 8) = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, (LOCK_OPERATION)(v12 != 1));
      goto LABEL_10;
    }
LABEL_23:
    v18 = -1073741670;
    goto LABEL_37;
  }
  *(_QWORD *)(v14 + 112) = VirtualAddress;
  *(_QWORD *)(v15 - 40) = a3;
LABEL_10:
  v11 = (__int64)Irp;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->Flags |= 4u;
  Irp->RequestorMode = 0;
  v17 = *v25;
  *(_QWORD *)(v17 - 16) = SmKmGenericCompletion;
  *(_QWORD *)(v17 - 8) = &Object;
  *(_BYTE *)(v17 - 69) = 0;
  *(_BYTE *)(v17 - 69) = 64;
  *(_BYTE *)(v17 - 69) = -64;
  *(_BYTE *)(v17 - 69) = -32;
  if ( IofCallDriver(DeviceObject, Irp) == 259 )
  {
    while ( 1 )
    {
      v20 = KeWaitForSingleObject(&Object, Executive, 0, 1u, 0LL);
      if ( v20 != 257 )
        break;
      if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
      {
        v11 = (__int64)Irp;
        goto LABEL_36;
      }
      v11 = (__int64)Irp;
    }
    if ( v20 != -1073741749 )
      goto LABEL_11;
LABEL_36:
    IoCancelIrp((PIRP)v11);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
LABEL_11:
  v18 = *(_DWORD *)(v11 + 48);
  v19 = *(_DWORD *)(v11 + 56);
  *a7 = v19;
  if ( v18 >= 0 && v19 && (unsigned int)v7 >= Length )
  {
    if ( v19 < Length )
      v16 = v19;
    memmove(VirtualAddress, a3, v16);
  }
LABEL_37:
  if ( v11 )
  {
    v22 = *(struct _MDL **)(v11 + 8);
    if ( v22 )
    {
      FsRtlpFreeMdlChain(v22);
      *(_QWORD *)(v11 + 8) = 0LL;
    }
    IoFreeIrp((PIRP)v11);
  }
  return (unsigned int)v18;
}
