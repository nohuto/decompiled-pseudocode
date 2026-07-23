/*
 * XREFs of IopAllocateAndPopulateWriteIrp @ 0x1403FB9B0
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1403FB310 (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1408BEFF0 (IopWriteFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     IopAllocateMdl @ 0x1403FA4F0 (IopAllocateMdl.c)
 *     IopAllocateIrpExtension @ 0x140435420 (IopAllocateIrpExtension.c)
 *     IopProbeAndLockPages_1 @ 0x140468A3C (IopProbeAndLockPages_1.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateAndPopulateWriteIrp(__int64 a1, IRP **a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 Irp; // rax
  __int64 v6; // r9
  IRP *v7; // rsi
  void *v8; // r12
  struct _IO_STATUS_BLOCK *v9; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v11; // ecx
  struct _IRP *Pool2; // rax
  unsigned int v13; // edx
  __int64 Mdl; // rax
  int v15; // r8d
  int v16; // edx
  struct _MDL **v17; // rax
  struct _MDL *v18; // rax
  int v19; // edx
  _OWORD *v20; // r14
  __int64 IrpExtension; // rax
  _DWORD *v22; // rax
  PVOID *v23; // rbx
  void *v24; // rcx

  if ( !*(_QWORD *)(a1 + 96) )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( (*(_DWORD *)(v4 + 80) & 2) == 0 || *(int *)(a1 + 112) >= 0 )
      IopResetEvent(v4);
  }
  LOBYTE(a3) = *(_BYTE *)(a1 + 9) == 0;
  Irp = IopAllocateIrpExReturn(*(_QWORD *)(a1 + 24), *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 76LL), a3);
  v7 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(Irp + 152) = *(_QWORD *)a1;
    *(_QWORD *)(Irp + 160) = 0LL;
    *(_BYTE *)(Irp + 64) = *(_BYTE *)(a1 + 8);
    *(_BYTE *)(Irp + 65) = 0;
    *(_BYTE *)(Irp + 68) = 0;
    *(_QWORD *)(Irp + 104) = 0LL;
    *(_DWORD *)(Irp + 16) = 0;
    *(_QWORD *)(Irp + 80) = *(_QWORD *)(a1 + 32);
    v8 = *(void **)(a1 + 96);
    if ( v8 )
    {
      v9 = *(struct _IO_STATUS_BLOCK **)(a1 + 104);
      ObfReferenceObjectWithTag(*(PVOID *)(a1 + 96), 0x49526F49u);
      v7->Flags |= 0x200000u;
      v7->UserIosb = v9;
    }
    else
    {
      *(_QWORD *)(Irp + 72) = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(Irp + 88) = *(_QWORD *)(a1 + 40);
      v8 = *(void **)(a1 + 48);
    }
    v7->Overlay.AsynchronousParameters.UserApcContext = v8;
    CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(a1 + 16);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 0x10) != 0 || (*(_DWORD *)(a1 + 112) & 1) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    v7->AssociatedIrp.MasterIrp = 0LL;
    v7->MdlAddress = 0LL;
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( (v11 & 4) != 0 )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        if ( *(_QWORD *)(a1 + 128) )
        {
          v7->AssociatedIrp.MasterIrp = *(struct _IRP **)(a1 + 64);
          v7->Flags |= 0x10u;
          v7->UserBuffer = *(PVOID *)(a1 + 64);
        }
        else
        {
          Pool2 = (struct _IRP *)ExAllocatePool2(0x69uLL, *(unsigned int *)(a1 + 72), 0x42536F49u);
          v7->AssociatedIrp.MasterIrp = Pool2;
          memmove(Pool2, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 72));
          v7->Flags |= 0x30u;
        }
      }
      else
      {
        v7->Flags |= 0x10u;
      }
    }
    else if ( (v11 & 0x10) != 0 )
    {
      v13 = *(_DWORD *)(a1 + 72);
      if ( v13 )
      {
        LOBYTE(v6) = 1;
        Mdl = IopAllocateMdl(*(_QWORD *)(a1 + 64), v13, 0, v6, (__int64)v7, 0);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        if ( *(_QWORD *)(a1 + 128) )
          v16 = 0;
        else
          v16 = *(unsigned __int8 *)(a1 + 8);
        IopProbeAndLockPages_1(Mdl, v16, v15, *(_QWORD *)(a1 + 24), CurrentStackLocation[-1].MajorFunction);
      }
    }
    else
    {
      v7->UserBuffer = *(PVOID *)(a1 + 64);
      v17 = *(struct _MDL ***)(a1 + 120);
      if ( v17 )
      {
        v18 = *v17;
        if ( v18 )
        {
          v7->MdlAddress = v18;
          **(_QWORD **)(a1 + 120) = 0LL;
          if ( *(_QWORD *)(a1 + 96) )
            v7->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)v7->Overlay.AsynchronousParameters.UserApcContext | 1);
        }
      }
    }
    v19 = v7->Flags | 0x200;
    v7->Flags = v19;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 8) != 0 )
    {
      v19 |= 1u;
      v7->Flags = v19;
    }
    if ( *(_BYTE *)(a1 + 10) )
    {
      v19 |= 0x800u;
      v7->Flags = v19;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 2) != 0 && *(int *)(a1 + 112) < 0 )
      v7->Flags = v19 | 0x1000;
    if ( !*(_QWORD *)(a1 + 128) )
      goto LABEL_39;
    v7->RequestorMode = 0;
    v7->UserBuffer = *(PVOID *)(a1 + 64);
    v20 = *(_OWORD **)(a1 + 128);
    IrpExtension = IopAllocateIrpExtension(v7, 9LL);
    if ( IrpExtension )
    {
      *(_OWORD *)(IrpExtension + 64) = *v20;
LABEL_39:
      CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a1 + 72);
      CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 88);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)(a1 + 80);
      v22 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 208LL);
      if ( v22 )
      {
        if ( (*v22 & 0x10) != 0 )
          CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      }
      *a2 = v7;
      return 0LL;
    }
  }
  if ( v7 )
  {
    IopExceptionCleanupEx(*(_QWORD *)(a1 + 16), v7, *(PVOID *)(a1 + 32), 0LL, *(_BYTE *)(a1 + 9));
    return 3221225626LL;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 9) )
    {
      v23 = (PVOID *)(a1 + 16);
      IopReleaseFileObjectLock(*(_QWORD *)(a1 + 16));
    }
    else
    {
      v23 = (PVOID *)(a1 + 16);
    }
    v24 = *(void **)(a1 + 32);
    if ( v24 )
    {
      ObfDereferenceObjectWithTag(v24, 0x746C6644u);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    ObfDereferenceObjectWithTag(*v23, 0x746C6644u);
    *v23 = 0LL;
    return 3221225626LL;
  }
}
