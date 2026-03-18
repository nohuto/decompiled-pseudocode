/*
 * XREFs of IopReadFile @ 0x140935F80
 * Callers:
 *     NtReadFile @ 0x14084E5D0 (NtReadFile.c)
 *     NtCopyFileChunk @ 0x140970910 (NtCopyFileChunk.c)
 *     IopIoRingDispatchRead @ 0x140A90A08 (IopIoRingDispatchRead.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     IopProcessUpdateTransferCount @ 0x1402A1520 (IopProcessUpdateTransferCount.c)
 *     IopResetEvent @ 0x1402A1570 (IopResetEvent.c)
 *     IopSetCopyInformationExtension @ 0x1402D49A4 (IopSetCopyInformationExtension.c)
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x140484034 (IopFreeCopyObjectsFromDataBuffer.c)
 *     MmIsDriverVerifying @ 0x14049F5C0 (MmIsDriverVerifying.c)
 *     IopExceptionFilter @ 0x140592C78 (IopExceptionFilter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     IopExceptionCleanupEx @ 0x1409887B0 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140B99470 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140B997F8 (VfFastIoSnapState.c)
 */

__int64 __fastcall IopReadFile(
        struct _FILE_OBJECT *BugCheckParameter2,
        void *a2,
        __int64 a3,
        void *a4,
        struct _IO_STATUS_BLOCK *a5,
        struct _IRP *VirtualAddress,
        ULONG Length,
        __int64 a8,
        ULONG *a9,
        PVOID a10,
        struct _IO_STATUS_BLOCK *a11,
        int a12,
        PMDL *a13,
        _OWORD *a14)
{
  IRP *v15; // r15
  char v16; // di
  void *v17; // r13
  char PreviousMode; // r14
  ULONG *p_Flags; // rbx
  bool v21; // di
  bool v22; // r15
  bool v23; // zf
  __int64 v24; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r11
  __int64 v26; // rcx
  _KPROCESS *Process; // rcx
  __int16 v28; // ax
  __int64 Status; // rcx
  struct _IRP *v30; // r14
  ULONG v31; // r9d
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  int v35; // ebx
  __int64 v36; // r10
  KPROCESSOR_MODE v38; // cl
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  bool v40; // bl
  int v41; // ebx
  struct _KTHREAD *v42; // rax
  int v43; // r8d
  __int64 *v44; // r9
  ULONG_PTR FastIoRead; // r15
  void *v46; // rbx
  char v47; // di
  struct _KTHREAD *v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  IRP *Irp; // rbx
  KPROCESSOR_MODE v52; // di
  struct _IO_STATUS_BLOCK *v53; // rax
  PVOID v54; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG Flags; // eax
  ULONG v57; // r13d
  int v58; // ecx
  char v59; // r12
  _DWORD *FileObjectExtension; // rax
  __int64 Pool2; // rax
  ULONG *v62; // rcx
  struct _MDL *Mdl; // rax
  KPROCESSOR_MODE v64; // dl
  int SectorSize; // ecx
  int v66; // edx
  struct _DRIVER_OBJECT *DriverObject; // rbx
  unsigned __int8 v68; // [rsp+50h] [rbp-98h]
  bool v69; // [rsp+51h] [rbp-97h]
  char v70; // [rsp+52h] [rbp-96h] BYREF
  char v71; // [rsp+53h] [rbp-95h]
  PVOID Object; // [rsp+58h] [rbp-90h]
  PIRP v73; // [rsp+60h] [rbp-88h]
  char v74; // [rsp+68h] [rbp-80h]
  int v75; // [rsp+6Ch] [rbp-7Ch]
  LARGE_INTEGER CurrentByteOffset; // [rsp+70h] [rbp-78h]
  ULONG v77; // [rsp+78h] [rbp-70h]
  struct _DEVICE_OBJECT *v78; // [rsp+80h] [rbp-68h]
  __int128 v79; // [rsp+88h] [rbp-60h]
  PVOID v80; // [rsp+98h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-48h]
  struct _KTHREAD *v82; // [rsp+A8h] [rbp-40h]
  __int64 v84; // [rsp+100h] [rbp+18h]
  bool v86; // [rsp+138h] [rbp+50h]
  int v87; // [rsp+148h] [rbp+60h]

  v84 = a3;
  v15 = 0LL;
  v73 = 0LL;
  v75 = 0;
  v16 = 0;
  v17 = 0LL;
  Object = 0LL;
  v77 = 0;
  CurrentByteOffset.QuadPart = 0LL;
  v71 = 1;
  if ( a10 && (a3 || a2 || BugCheckParameter2->CompletionContext) )
  {
    v35 = -1073741811;
    v30 = VirtualAddress;
    goto LABEL_34;
  }
  if ( a13 && *a13 && (*a13)->ByteCount < Length )
  {
    v35 = -1073741811;
    v30 = VirtualAddress;
    v17 = 0LL;
    goto LABEL_34;
  }
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v68 = PreviousMode;
  p_Flags = &BugCheckParameter2->Flags;
  v21 = a12 >= 0 && (BugCheckParameter2->Flags & 2) != 0;
  v69 = v21;
  v22 = v21;
  v86 = v21;
  v23 = (a12 & 0x40000000) == 0;
  v87 = a12 & 0x40000000;
  v74 = v23;
  RelatedDeviceObject = IoGetRelatedDeviceObject(BugCheckParameter2);
  v78 = RelatedDeviceObject;
  if ( !PreviousMode || a10 )
  {
    v62 = &BugCheckParameter2->Flags;
    v36 = a8;
    if ( a8 )
    {
      CurrentByteOffset = *(LARGE_INTEGER *)a8;
      v62 = &BugCheckParameter2->Flags;
    }
    v30 = VirtualAddress;
    v31 = Length;
    if ( a9 )
    {
      v77 = *a9;
      p_Flags = v62;
    }
  }
  else
  {
    v24 = 0x7FFFFFFF0000LL;
    v26 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v26 = (__int64)a5;
    *(_DWORD *)v26 = *(_DWORD *)v26;
    v82 = KeGetCurrentThread();
    Process = v82->ApcState.Process;
    if ( Process[1].ReadyTime )
    {
      v28 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( (v28 == 332 || v28 == 452) && !v21 )
      {
        Status = (unsigned int)a5->Status;
        *(_DWORD *)Status = *(_DWORD *)Status;
        a5 = (struct _IO_STATUS_BLOCK *)Status;
        v84 |= 1uLL;
      }
    }
    v30 = VirtualAddress;
    if ( a14 )
    {
      v31 = Length;
    }
    else
    {
      v31 = Length;
      if ( Length )
      {
        v32 = (unsigned __int64)VirtualAddress;
        v33 = (unsigned __int64)&VirtualAddress[-1].Tail.CompletionKey + Length + 87;
        if ( v33 >= 0x7FFFFFFF0000LL || (unsigned __int64)VirtualAddress > v33 )
          ExRaiseAccessViolation();
        v34 = (v33 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v32 = *(_BYTE *)v32;
          v32 = (v32 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v32 != v34 );
      }
    }
    if ( BugCheckParameter2->CompletionContext && (v84 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v75 = -1073741811;
      v16 = v21;
      v35 = -1073741811;
      v15 = v73;
      v17 = v73;
      goto LABEL_34;
    }
    v36 = a8;
    if ( a8 )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      CurrentByteOffset = *(LARGE_INTEGER *)a8;
    }
    if ( a9 )
    {
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        v24 = (__int64)a9;
      v77 = *(_DWORD *)v24;
    }
    p_Flags = &BugCheckParameter2->Flags;
  }
  v38 = v68;
  if ( v68 && (*p_Flags & 8) != 0 )
  {
    SectorSize = RelatedDeviceObject->SectorSize;
    v66 = SectorSize;
    if ( (_WORD)SectorSize && (v24 = RelatedDeviceObject->SectorSize, ((SectorSize - 1) & v31) != 0)
      || (v24 = RelatedDeviceObject->SectorSize, (RelatedDeviceObject->AlignmentRequirement & (unsigned int)v30) != 0) )
    {
      if ( (_WORD)SectorSize && v31 % (unsigned int)v24
        || (v66 = v24, (RelatedDeviceObject->AlignmentRequirement & (unsigned int)v30) != 0) )
      {
        v35 = -1073741811;
        v16 = v21;
        v15 = v73;
        v17 = v73;
        goto LABEL_34;
      }
    }
    if ( v36 && (_WORD)SectorSize && ((v66 - 1) & CurrentByteOffset.LowPart) != 0 )
    {
      v35 = -1073741811;
      v16 = v21;
      v15 = v73;
      v17 = v73;
      goto LABEL_34;
    }
    v38 = v68;
  }
  if ( a2 )
  {
    v80 = 0LL;
    v35 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v38, &v80, 0LL);
    Object = v80;
    v75 = v35;
    v16 = v21;
    if ( v35 < 0 )
    {
      v17 = v80;
      goto LABEL_51;
    }
    KeResetEvent((PRKEVENT)v80);
    v36 = a8;
    RelatedDeviceObject = v78;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  v40 = v69;
  if ( v69 )
  {
    v41 = BugCheckParameter2->Flags & 4;
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    v44 = KeAbPreAcquire((__int64)&BugCheckParameter2->Lock, 0LL);
    v70 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&BugCheckParameter2->Busy, 1) )
    {
      LOBYTE(v43) = v41 != 0;
      v35 = IopWaitAndAcquireFileObjectLock((_DWORD)BugCheckParameter2, v68, v43, (_DWORD)v44, (__int64)&v70);
    }
    else
    {
      if ( v44 )
        *((_BYTE *)v44 + 10) = 1;
      PsReferenceSiloContext(BugCheckParameter2);
      v35 = 0;
    }
    v75 = v35;
    if ( v70 )
    {
      v17 = Object;
      if ( Object )
        ObfDereferenceObject(Object);
      v16 = v22;
      v15 = v73;
      goto LABEL_34;
    }
    if ( !a8 || CurrentByteOffset.QuadPart == -2 )
      CurrentByteOffset = BugCheckParameter2->CurrentByteOffset;
    if ( BugCheckParameter2->PrivateCacheMap && !a14 )
    {
      v79 = 0LL;
      FastIoRead = (ULONG_PTR)FastIoDispatch->FastIoRead;
      if ( CurrentByteOffset.HighPart < 0 )
      {
        v17 = Object;
        if ( Object )
          ObfDereferenceObject(Object);
        IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
        v35 = -1073741811;
        v16 = v86;
        v15 = v73;
        goto LABEL_34;
      }
      if ( (MmVerifierData & 0x10) != 0 && (DriverObject = v78->DriverObject, MmIsDriverVerifying(DriverObject)) )
        v46 = (void *)VfFastIoSnapState(DriverObject);
      else
        v46 = 0LL;
      v47 = guard_dispatch_icall_no_overrides(BugCheckParameter2);
      if ( v46 )
        VfFastIoCheckState(v46, FastIoRead);
      if ( v47 && (!(_DWORD)v79 || (_DWORD)v79 == -1073741807 || (_DWORD)v79 == -2147483643) )
      {
        v48 = KeGetCurrentThread();
        ++v48->ReadOperationCount;
        __incgsdword(0x2EDCu);
        IopProcessUpdateTransferCount(0LL, DWORD2(v79), 0x398u, 0x3B8u);
        __addgsqword(0x2EE8u, v49);
        *(_OWORD *)&a5->Status = v79;
        v17 = Object;
        if ( a2 )
        {
          if ( (BugCheckParameter2->Flags & 0x8000000) == 0 )
            KeSetEvent((PRKEVENT)Object, 0, 0);
          ObfDereferenceObject(v17);
        }
        IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
        v35 = v79;
        v16 = v86;
        v15 = v73;
        goto LABEL_34;
      }
      v22 = v86;
    }
    v40 = v69;
    RelatedDeviceObject = v78;
  }
  else if ( !v36 && (BugCheckParameter2->Flags & 0x280) == 0 )
  {
    v17 = Object;
    if ( Object )
      ObfDereferenceObject(Object);
LABEL_57:
    v35 = -1073741811;
    v16 = v22;
    v15 = v73;
    goto LABEL_34;
  }
  if ( CurrentByteOffset.HighPart < 0 )
  {
    v17 = Object;
    if ( Object )
      ObfDereferenceObject(Object);
    if ( !v40 )
      goto LABEL_57;
    IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
    v35 = -1073741811;
    v16 = v22;
LABEL_51:
    v15 = v73;
    goto LABEL_34;
  }
  if ( !a10 )
  {
    IopResetEvent((__int64)BugCheckParameter2);
    RelatedDeviceObject = v78;
  }
  LOBYTE(v24) = !v40;
  v50 = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v24);
  Irp = (IRP *)v50;
  v73 = (PIRP)v50;
  if ( v50 )
  {
    *(_QWORD *)(v50 + 192) = BugCheckParameter2;
    *(_QWORD *)(v50 + 152) = CurrentThread;
    *(_QWORD *)(v50 + 160) = 0LL;
    v52 = v68;
    *(_WORD *)(v50 + 64) = v68;
    *(_BYTE *)(v50 + 68) = 0;
    *(_QWORD *)(v50 + 104) = 0LL;
    *(_DWORD *)(v50 + 16) = 0;
    *(_QWORD *)(v50 + 80) = Object;
    if ( a10 )
    {
      ObfReferenceObjectWithTag(a10, 0x49526F49u);
      Irp->Flags |= 0x200000u;
      v53 = a11;
      v54 = a10;
    }
    else
    {
      *(_QWORD *)(v50 + 88) = v84;
      v53 = a5;
      v54 = a4;
    }
    Irp->Overlay.AsynchronousParameters.UserApcContext = v54;
    Irp->UserIosb = v53;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = BugCheckParameter2;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Flags = v78->Flags;
    if ( (Flags & 4) != 0 )
    {
      v57 = Length;
      if ( Length )
      {
        if ( a14 )
        {
          Irp->AssociatedIrp.MasterIrp = v30;
          Irp->Flags |= 0x50u;
          Irp->UserBuffer = v30;
        }
        else
        {
          Pool2 = ExAllocatePool2(0x49uLL);
          Irp->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
          if ( !Pool2 )
          {
            v35 = -1073741670;
            v16 = v86;
            goto LABEL_99;
          }
          Irp->Flags |= 0x70u;
          Irp->UserBuffer = v30;
        }
      }
      else
      {
        Irp->Flags |= 0x50u;
      }
    }
    else if ( (Flags & 0x10) != 0 )
    {
      v57 = Length;
      if ( Length )
      {
        Mdl = IoAllocateMdl(v30, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        if ( a14 )
          v64 = 0;
        else
          v64 = v68;
        MmProbeAndLockPages(Mdl, v64, IoWriteAccess);
      }
    }
    else
    {
      Irp->UserBuffer = v30;
      if ( a13 && *a13 )
      {
        Irp->MdlAddress = *a13;
        *a13 = 0LL;
        v57 = Length;
        if ( a10 )
          Irp->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcContext | 1);
      }
      else
      {
        v57 = Length;
      }
    }
    v58 = Irp->Flags | 0x100;
    Irp->Flags = v58;
    if ( (BugCheckParameter2->Flags & 8) != 0 )
    {
      v58 |= 1u;
      Irp->Flags = v58;
    }
    if ( !v87 )
      Irp->Flags = v58 | 0x800;
    if ( !a14 )
    {
      v59 = v86;
      goto LABEL_91;
    }
    Irp->RequestorMode = 0;
    Irp->UserBuffer = v30;
    v35 = IopSetCopyInformationExtension((__int64)Irp, a14);
    v59 = v86;
    v16 = v86;
    if ( v35 >= 0 )
    {
      v52 = v68;
LABEL_91:
      CurrentStackLocation[-1].Parameters.Read.Length = v57;
      CurrentStackLocation[-1].Parameters.Create.Options = v77;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset = CurrentByteOffset;
      FileObjectExtension = BugCheckParameter2->FileObjectExtension;
      if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
        CurrentStackLocation[-1].Parameters.Read.Flags = a5->Information;
      v15 = v73;
      v35 = IopSynchronousServiceTail(v78, (__int64)v73, (__int64)BugCheckParameter2, v74, v52, v59, 0);
      v71 = 0;
      v16 = v59;
      v17 = Object;
      goto LABEL_34;
    }
LABEL_99:
    v17 = Object;
    v15 = v73;
    goto LABEL_34;
  }
  v17 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v69 )
    IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
  v35 = -1073741670;
  v16 = v22;
  v15 = v73;
LABEL_34:
  if ( v71 )
  {
    if ( a14 )
      IopFreeCopyObjectsFromDataBuffer((__int64)v30, 1);
    if ( v15 )
      IopExceptionCleanupEx((ULONG_PTR)BugCheckParameter2, v15, v17, 0LL, v16);
    else
      ObfDereferenceObject(BugCheckParameter2);
  }
  return (unsigned int)v35;
}
