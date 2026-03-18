/*
 * XREFs of IopAllocateAndPopulateWriteIrp @ 0x140401030
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x140400990 (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1408C1630 (IopWriteFile.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     IopAllocateIrpExtension @ 0x140375A80 (IopAllocateIrpExtension.c)
 *     IopResetEvent @ 0x1403C4670 (IopResetEvent.c)
 *     IopAllocateMdl @ 0x140400000 (IopAllocateMdl.c)
 *     IopProbeAndLockPages_1 @ 0x14046E260 (IopProbeAndLockPages_1.c)
 *     Feature_911728953__private_IsEnabledDeviceUsageNoInline @ 0x1405979AC (Feature_911728953__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     IopExceptionCleanupEx @ 0x140970628 (IopExceptionCleanupEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateAndPopulateWriteIrp(__int64 a1, IRP **a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 Irp; // rax
  __int64 v7; // r9
  IRP *v8; // rsi
  void *v9; // r12
  struct _IO_STATUS_BLOCK *v10; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v12; // ecx
  struct _IRP *Pool2; // rax
  unsigned int v14; // edx
  __int64 Mdl; // rax
  int v16; // r8d
  int v17; // edx
  struct _MDL **v18; // rax
  struct _MDL *v19; // rax
  int v20; // edx
  _OWORD *v21; // r14
  __int64 IrpExtension; // rax
  _DWORD *v23; // rax
  PVOID *v24; // rbx
  void *v25; // rcx

  IsEnabledDeviceUsageNoInline = Feature_911728953__private_IsEnabledDeviceUsageNoInline();
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( !IsEnabledDeviceUsageNoInline || (*(_DWORD *)(v5 + 80) & 2) == 0 || *(int *)(a1 + 112) >= 0 )
      IopResetEvent(v5);
  }
  LOBYTE(v4) = *(_BYTE *)(a1 + 9) == 0;
  Irp = IopAllocateIrpExReturn(*(_QWORD *)(a1 + 24), *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 76LL), v4);
  v8 = (IRP *)Irp;
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
    v9 = *(void **)(a1 + 96);
    if ( v9 )
    {
      v10 = *(struct _IO_STATUS_BLOCK **)(a1 + 104);
      ObfReferenceObjectWithTag(*(PVOID *)(a1 + 96), 0x49526F49u);
      v8->Flags |= 0x200000u;
      v8->UserIosb = v10;
    }
    else
    {
      *(_QWORD *)(Irp + 72) = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(Irp + 88) = *(_QWORD *)(a1 + 40);
      v9 = *(void **)(a1 + 48);
    }
    v8->Overlay.AsynchronousParameters.UserApcContext = v9;
    CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(a1 + 16);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 0x10) != 0 || (*(_DWORD *)(a1 + 112) & 1) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    v8->AssociatedIrp.MasterIrp = 0LL;
    v8->MdlAddress = 0LL;
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( (v12 & 4) != 0 )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        if ( *(_QWORD *)(a1 + 128) )
        {
          v8->AssociatedIrp.MasterIrp = *(struct _IRP **)(a1 + 64);
          v8->Flags |= 0x10u;
          v8->UserBuffer = *(PVOID *)(a1 + 64);
        }
        else
        {
          Pool2 = (struct _IRP *)ExAllocatePool2(0x69uLL);
          v8->AssociatedIrp.MasterIrp = Pool2;
          memmove(Pool2, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 72));
          v8->Flags |= 0x30u;
        }
      }
      else
      {
        v8->Flags |= 0x10u;
      }
    }
    else if ( (v12 & 0x10) != 0 )
    {
      v14 = *(_DWORD *)(a1 + 72);
      if ( v14 )
      {
        LOBYTE(v7) = 1;
        Mdl = IopAllocateMdl(*(_QWORD *)(a1 + 64), v14, 0, v7, (__int64)v8, 0);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        if ( *(_QWORD *)(a1 + 128) )
          v17 = 0;
        else
          v17 = *(unsigned __int8 *)(a1 + 8);
        IopProbeAndLockPages_1(Mdl, v17, v16, *(_QWORD *)(a1 + 24), CurrentStackLocation[-1].MajorFunction);
      }
    }
    else
    {
      v8->UserBuffer = *(PVOID *)(a1 + 64);
      v18 = *(struct _MDL ***)(a1 + 120);
      if ( v18 )
      {
        v19 = *v18;
        if ( v19 )
        {
          v8->MdlAddress = v19;
          **(_QWORD **)(a1 + 120) = 0LL;
          if ( *(_QWORD *)(a1 + 96) )
            v8->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)v8->Overlay.AsynchronousParameters.UserApcContext | 1);
        }
      }
    }
    v20 = v8->Flags | 0x200;
    v8->Flags = v20;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 8) != 0 )
    {
      v20 |= 1u;
      v8->Flags = v20;
    }
    if ( *(_BYTE *)(a1 + 10) )
      v8->Flags = v20 | 0x800;
    if ( (unsigned int)Feature_911728953__private_IsEnabledDeviceUsageNoInline()
      && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 2) != 0
      && *(int *)(a1 + 112) < 0 )
    {
      v8->Flags |= 0x1000u;
    }
    if ( !*(_QWORD *)(a1 + 128) )
      goto LABEL_41;
    v8->RequestorMode = 0;
    v8->UserBuffer = *(PVOID *)(a1 + 64);
    v21 = *(_OWORD **)(a1 + 128);
    IrpExtension = IopAllocateIrpExtension((__int64)v8, 9);
    if ( IrpExtension )
    {
      *(_OWORD *)(IrpExtension + 64) = *v21;
LABEL_41:
      CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a1 + 72);
      CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 88);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)(a1 + 80);
      v23 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 208LL);
      if ( v23 )
      {
        if ( (*v23 & 0x10) != 0 )
          CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      }
      *a2 = v8;
      return 0LL;
    }
  }
  if ( v8 )
  {
    IopExceptionCleanupEx(*(_QWORD *)(a1 + 16), v8, *(PVOID *)(a1 + 32), 0LL, *(_BYTE *)(a1 + 9));
    return 3221225626LL;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 9) )
    {
      v24 = (PVOID *)(a1 + 16);
      IopReleaseFileObjectLock(*(_QWORD *)(a1 + 16));
    }
    else
    {
      v24 = (PVOID *)(a1 + 16);
    }
    v25 = *(void **)(a1 + 32);
    if ( v25 )
    {
      ObfDereferenceObjectWithTag(v25, 0x746C6644u);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    ObfDereferenceObjectWithTag(*v24, 0x746C6644u);
    *v24 = 0LL;
    return 3221225626LL;
  }
}
