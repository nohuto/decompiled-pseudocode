/*
 * XREFs of IopReadFile @ 0x1408BDFD0
 * Callers:
 *     NtReadFile @ 0x140846640 (NtReadFile.c)
 *     IopIoRingDispatchRead @ 0x140A912F8 (IopIoRingDispatchRead.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x14025F988 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IopProcessUpdateTransferCount @ 0x1403B31E0 (IopProcessUpdateTransferCount.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     IopSetCopyInformationExtension @ 0x1404353DC (IopSetCopyInformationExtension.c)
 *     MmIsDriverVerifying @ 0x140499230 (MmIsDriverVerifying.c)
 *     IopExceptionFilter @ 0x140593308 (IopExceptionFilter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BAB7CC (VfFastIoSnapState.c)
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
  PIRP v15; // r14
  char v16; // r12
  PVOID v17; // r15
  ULONG v19; // ebx
  char PreviousMode; // si
  int v21; // r15d
  PDEVICE_OBJECT RelatedDeviceObject; // r9
  __int64 v23; // rcx
  _KPROCESS *Process; // rcx
  __int16 v25; // ax
  __int64 Status; // rcx
  struct _IRP *v27; // rsi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // r10
  KPROCESSOR_MODE v34; // cl
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  int v36; // ebx
  struct _KTHREAD *v37; // rax
  int v38; // r8d
  _QWORD *v39; // r9
  ULONG_PTR FastIoRead; // r15
  __int64 v41; // rax
  void *v42; // r14
  char v43; // bl
  struct _KTHREAD *v44; // rax
  unsigned __int64 v45; // rdx
  IRP *v46; // rax
  struct _IO_STATUS_BLOCK *v47; // rax
  PVOID v48; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  PIRP v50; // rbx
  ULONG Flags; // eax
  ULONG v52; // r13d
  __int64 Pool2; // rax
  int v54; // ecx
  _DWORD *FileObjectExtension; // rax
  unsigned int SectorSize; // ecx
  int v57; // edx
  struct _DRIVER_OBJECT *DriverObject; // rbx
  bool v59; // zf
  struct _MDL *Mdl; // rax
  KPROCESSOR_MODE v61; // dl
  ULONG Irp; // [rsp+20h] [rbp-D8h]
  int HandleInformation; // [rsp+28h] [rbp-D0h]
  char v64[7]; // [rsp+51h] [rbp-A7h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A0h]
  bool v66; // [rsp+60h] [rbp-98h]
  int v67; // [rsp+64h] [rbp-94h]
  PIRP v68; // [rsp+68h] [rbp-90h]
  LARGE_INTEGER CurrentByteOffset; // [rsp+70h] [rbp-88h] BYREF
  ULONG v70; // [rsp+78h] [rbp-80h]
  PDEVICE_OBJECT v71; // [rsp+80h] [rbp-78h]
  int v72; // [rsp+88h] [rbp-70h]
  __int128 v73; // [rsp+90h] [rbp-68h]
  PVOID v74; // [rsp+A0h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  struct _KTHREAD *v76; // [rsp+B0h] [rbp-48h]
  __int64 v78; // [rsp+110h] [rbp+18h]
  unsigned __int8 v80; // [rsp+148h] [rbp+50h]

  v78 = a3;
  v15 = 0LL;
  v68 = 0LL;
  v67 = 0;
  v16 = 0;
  v17 = 0LL;
  Object = 0LL;
  v70 = 0;
  CurrentByteOffset.QuadPart = 0LL;
  if ( a10 && (a3 || a2 || BugCheckParameter2->CompletionContext) )
  {
    v31 = -1073741811;
    v27 = VirtualAddress;
    goto LABEL_35;
  }
  if ( a13 && *a13 )
  {
    v19 = Length;
    if ( (*a13)->ByteCount < Length )
    {
      v31 = -1073741811;
      v27 = VirtualAddress;
      goto LABEL_35;
    }
  }
  else
  {
    v19 = Length;
  }
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v80 = PreviousMode;
  if ( (BugCheckParameter2->Flags & 2) != 0 && a12 >= 0 )
    v16 = 1;
  v21 = a12 & 0x40000000;
  v72 = a12 & 0x40000000;
  v66 = (a12 & 0x40000000) == 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(BugCheckParameter2);
  v71 = RelatedDeviceObject;
  if ( !PreviousMode || a10 )
  {
    v32 = a8;
    if ( a8 )
      CurrentByteOffset = *(LARGE_INTEGER *)a8;
    v27 = VirtualAddress;
    if ( a9 )
      v70 = *a9;
  }
  else
  {
    a3 = 0x7FFFFFFF0000LL;
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v23 = (__int64)a5;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    v76 = KeGetCurrentThread();
    Process = v76->ApcState.Process;
    if ( Process[1].ReadyTime )
    {
      v25 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( (v25 == 332 || v25 == 452) && !v16 )
      {
        Status = (unsigned int)a5->Status;
        *(_DWORD *)Status = *(_DWORD *)Status;
        a5 = (struct _IO_STATUS_BLOCK *)Status;
        v78 |= 1uLL;
      }
    }
    v27 = VirtualAddress;
    if ( !a14 && v19 )
    {
      v28 = (unsigned __int64)VirtualAddress;
      v29 = (unsigned __int64)&VirtualAddress[-1].Tail.CompletionKey + v19 + 87;
      if ( (unsigned __int64)VirtualAddress > v29 || v29 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v30 = (v29 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v28 = *(_BYTE *)v28;
        v28 = (v28 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v28 != v30 );
    }
    if ( BugCheckParameter2->CompletionContext && (v78 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v67 = -1073741811;
      v31 = -1073741811;
      v17 = Object;
LABEL_35:
      if ( a14 )
        IopFreeCopyObjectsFromDataBuffer((__int64)v27, 1, a3);
      if ( v15 )
        IopExceptionCleanupEx((ULONG_PTR)BugCheckParameter2, v15, v17, 0LL, v16);
      else
        ObfDereferenceObject(BugCheckParameter2);
      return (unsigned int)v31;
    }
    v32 = a8;
    if ( a8 )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      CurrentByteOffset = *(LARGE_INTEGER *)a8;
    }
    if ( a9 )
    {
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        a3 = (__int64)a9;
      v70 = *(_DWORD *)a3;
    }
  }
  v34 = v80;
  if ( v80 && (BugCheckParameter2->Flags & 8) != 0 )
  {
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( (_WORD)SectorSize && ((SectorSize - 1) & v19) != 0
      || (v57 = RelatedDeviceObject->SectorSize, (RelatedDeviceObject->AlignmentRequirement & (unsigned int)v27) != 0) )
    {
      if ( (_WORD)SectorSize && v19 % SectorSize
        || (v57 = RelatedDeviceObject->SectorSize, (RelatedDeviceObject->AlignmentRequirement & (unsigned int)v27) != 0) )
      {
        v31 = -1073741811;
        v17 = Object;
        goto LABEL_35;
      }
    }
    if ( v32 && (_WORD)SectorSize && ((v57 - 1) & CurrentByteOffset.LowPart) != 0 )
    {
      v31 = -1073741811;
      v17 = Object;
      goto LABEL_35;
    }
    v34 = v80;
  }
  if ( a2 )
  {
    v74 = 0LL;
    v31 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v34, &v74, 0LL);
    Object = v74;
    v67 = v31;
    if ( v31 < 0 )
    {
      v17 = v74;
      goto LABEL_35;
    }
    KeResetEvent((PRKEVENT)v74);
    RelatedDeviceObject = v71;
    v32 = a8;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( v16 )
  {
    v36 = BugCheckParameter2->Flags & 4;
    v37 = KeGetCurrentThread();
    --v37->KernelApcDisable;
    v39 = KeAbPreAcquire((__int64)&BugCheckParameter2->Lock, 0LL);
    v64[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&BugCheckParameter2->Busy, 1) )
    {
      LOBYTE(v38) = v36 != 0;
      v31 = IopWaitAndAcquireFileObjectLock((_DWORD)BugCheckParameter2, v80, v38, (_DWORD)v39, (__int64)v64);
    }
    else
    {
      if ( v39 )
        *((_BYTE *)v39 + 10) = 1;
      PsReferenceSiloContext(BugCheckParameter2);
      v31 = 0;
    }
    v67 = v31;
    if ( v64[0] )
    {
      v17 = Object;
      if ( Object )
        ObfDereferenceObject(Object);
      v15 = v68;
      goto LABEL_35;
    }
    if ( !a8 || CurrentByteOffset.QuadPart == -2 )
      CurrentByteOffset = BugCheckParameter2->CurrentByteOffset;
    if ( BugCheckParameter2->PrivateCacheMap && !a14 )
    {
      v73 = 0LL;
      FastIoRead = (ULONG_PTR)FastIoDispatch->FastIoRead;
      if ( CurrentByteOffset.HighPart < 0 )
      {
        v17 = Object;
        if ( Object )
          ObfDereferenceObject(Object);
LABEL_53:
        IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
LABEL_54:
        v31 = -1073741811;
        v15 = v68;
        goto LABEL_35;
      }
      if ( (MmVerifierData & 0x10) != 0 && (DriverObject = v71->DriverObject, MmIsDriverVerifying(DriverObject)) )
        v41 = VfFastIoSnapState(DriverObject);
      else
        v41 = 0LL;
      v42 = (void *)v41;
      HandleInformation = (int)v27;
      Irp = v70;
      v43 = guard_dispatch_icall_no_overrides(BugCheckParameter2, &CurrentByteOffset);
      if ( v42 )
        VfFastIoCheckState(v42, FastIoRead);
      if ( v43 && (!(_DWORD)v73 || (_DWORD)v73 == -1073741807 || (_DWORD)v73 == -2147483643) )
      {
        v44 = KeGetCurrentThread();
        ++v44->ReadOperationCount;
        __incgsdword(0x2EDCu);
        IopProcessUpdateTransferCount(0LL, DWORD2(v73), 0x398u, 0x3B8u);
        __addgsqword(0x2EE8u, v45);
        *(_OWORD *)&a5->Status = v73;
        v17 = Object;
        if ( a2 )
        {
          if ( (BugCheckParameter2->Flags & 0x8000000) == 0 )
            KeSetEvent((PRKEVENT)Object, 0, 0);
          ObfDereferenceObject(v17);
        }
        IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
        v31 = v73;
        v15 = v68;
        goto LABEL_35;
      }
      v21 = v72;
    }
    RelatedDeviceObject = v71;
  }
  else if ( !v32 && (BugCheckParameter2->Flags & 0x280) == 0 )
  {
    v17 = Object;
    if ( Object )
    {
      ObfDereferenceObject(Object);
      v31 = -1073741811;
      v15 = v68;
      goto LABEL_35;
    }
    goto LABEL_54;
  }
  if ( CurrentByteOffset.HighPart < 0 )
  {
    v17 = Object;
    if ( Object )
      ObfDereferenceObject(Object);
    if ( !v16 )
      goto LABEL_54;
    goto LABEL_53;
  }
  if ( !a10 )
  {
    IopResetEvent((__int64)BugCheckParameter2);
    RelatedDeviceObject = v71;
  }
  v46 = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 (unsigned __int8)v16 ^ 1u);
  v15 = v46;
  v68 = v46;
  if ( !v46 )
  {
    v17 = Object;
    if ( Object )
      ObfDereferenceObject(Object);
    if ( v16 )
      IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
    v31 = -1073741670;
    goto LABEL_35;
  }
  v46->Tail.Overlay.OriginalFileObject = BugCheckParameter2;
  v46->Tail.Overlay.Thread = CurrentThread;
  v46->Tail.Overlay.AuxiliaryBuffer = 0LL;
  v46->RequestorMode = v80;
  v46->PendingReturned = 0;
  v46->Cancel = 0;
  v46->CancelRoutine = 0LL;
  v46->Flags = 0;
  v46->UserEvent = (PKEVENT)Object;
  if ( a10 )
  {
    ObfReferenceObjectWithTag(a10, 0x49526F49u);
    v15->Flags |= 0x200000u;
    v47 = a11;
    v48 = a10;
  }
  else
  {
    v46->Overlay.AllocationSize.QuadPart = v78;
    v47 = a5;
    v48 = a4;
  }
  v15->Overlay.AsynchronousParameters.UserApcContext = v48;
  v15->UserIosb = v47;
  CurrentStackLocation = v15->Tail.Overlay.CurrentStackLocation;
  *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
  CurrentStackLocation[-1].FileObject = BugCheckParameter2;
  v50 = v68;
  v68->AssociatedIrp.MasterIrp = 0LL;
  v50->MdlAddress = 0LL;
  Flags = v71->Flags;
  if ( (Flags & 4) != 0 )
  {
    v52 = Length;
    if ( Length )
    {
      if ( a14 )
      {
        v50->AssociatedIrp.MasterIrp = v27;
        v50->Flags |= 0x50u;
      }
      else
      {
        Pool2 = ExAllocatePool2(0x49uLL, Length, 0x42536F49u);
        v50->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
        if ( !Pool2 )
        {
          v31 = -1073741670;
          v15 = v68;
          v17 = Object;
          goto LABEL_35;
        }
        v50->Flags |= 0x70u;
      }
      v50->UserBuffer = v27;
    }
    else
    {
      v50->Flags |= 0x50u;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    v52 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(v27, Length, 0, 1u, v50);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v61 = v80;
      if ( a14 )
        v61 = 0;
      MmProbeAndLockPages(Mdl, v61, IoWriteAccess);
    }
  }
  else
  {
    v50->UserBuffer = v27;
    if ( a13 && *a13 )
    {
      v50->MdlAddress = *a13;
      *a13 = 0LL;
      v59 = a10 == 0LL;
      v52 = Length;
      if ( !v59 )
        v50->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)v50->Overlay.AsynchronousParameters.UserApcContext | 1);
    }
    else
    {
      v52 = Length;
    }
  }
  v54 = v50->Flags | 0x100;
  v50->Flags = v54;
  if ( (BugCheckParameter2->Flags & 8) != 0 )
  {
    v54 |= 1u;
    v50->Flags = v54;
  }
  if ( !v21 )
    v50->Flags = v54 | 0x800;
  if ( a14 )
  {
    v50->RequestorMode = 0;
    v50->UserBuffer = v27;
    v31 = IopSetCopyInformationExtension((__int64)v50, a14);
    if ( v31 < 0 )
    {
      v15 = v68;
      v17 = Object;
      goto LABEL_35;
    }
    v50 = v68;
  }
  CurrentStackLocation[-1].Parameters.Read.Length = v52;
  CurrentStackLocation[-1].Parameters.Create.Options = v70;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = CurrentByteOffset;
  FileObjectExtension = BugCheckParameter2->FileObjectExtension;
  if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
    CurrentStackLocation[-1].Parameters.Read.Flags = a5->Information;
  LOBYTE(HandleInformation) = v16;
  LOBYTE(Irp) = v80;
  return (unsigned int)IopSynchronousServiceTail(v71, v50, BugCheckParameter2, v66, Irp, HandleInformation, 0);
}
