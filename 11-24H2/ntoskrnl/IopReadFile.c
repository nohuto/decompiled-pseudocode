/*
 * XREFs of IopReadFile @ 0x1408C0610
 * Callers:
 *     NtReadFile @ 0x14084A380 (NtReadFile.c)
 *     NtCopyFileChunk @ 0x1409886C0 (NtCopyFileChunk.c)
 *     IopIoRingDispatchRead @ 0x140A94B48 (IopIoRingDispatchRead.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IopSetCopyInformationExtension @ 0x140375A3C (IopSetCopyInformationExtension.c)
 *     IopProcessUpdateTransferCount @ 0x1403C4620 (IopProcessUpdateTransferCount.c)
 *     IopResetEvent @ 0x1403C4670 (IopResetEvent.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1404845AC (IopFreeCopyObjectsFromDataBuffer.c)
 *     MmIsDriverVerifying @ 0x14049E430 (MmIsDriverVerifying.c)
 *     IopExceptionFilter @ 0x1405962D8 (IopExceptionFilter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140970628 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140BA9450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BA97CC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopReadFile(
        struct _FILE_OBJECT *BugCheckParameter2,
        void *a2,
        LARGE_INTEGER a3,
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
  __int64 v23; // r8
  __int64 v24; // rcx
  _KPROCESS *Process; // rcx
  __int16 v26; // ax
  __int64 Status; // rcx
  struct _IRP *v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  int v32; // ebx
  __int64 v33; // r10
  KPROCESSOR_MODE v35; // cl
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  int v37; // ebx
  struct _KTHREAD *v38; // rax
  int v39; // r8d
  _QWORD *v40; // r9
  __int64 v41; // r9
  ULONG_PTR FastIoRead; // r15
  __int64 v43; // rax
  void *v44; // r14
  char v45; // bl
  struct _KTHREAD *v46; // rax
  unsigned __int64 v47; // rdx
  IRP *v48; // rax
  struct _IO_STATUS_BLOCK *v49; // rax
  PVOID v50; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  PIRP v52; // rbx
  ULONG Flags; // eax
  ULONG v54; // r13d
  __int64 Pool2; // rax
  int v56; // ecx
  _DWORD *FileObjectExtension; // rax
  unsigned int SectorSize; // ecx
  int v59; // edx
  struct _DRIVER_OBJECT *DriverObject; // rbx
  bool v61; // zf
  struct _MDL *Mdl; // rax
  KPROCESSOR_MODE v63; // dl
  ULONG Irp; // [rsp+20h] [rbp-D8h]
  int HandleInformation; // [rsp+28h] [rbp-D0h]
  char v66[7]; // [rsp+51h] [rbp-A7h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A0h]
  bool v68; // [rsp+60h] [rbp-98h]
  int v69; // [rsp+64h] [rbp-94h]
  PIRP v70; // [rsp+68h] [rbp-90h]
  LARGE_INTEGER CurrentByteOffset; // [rsp+70h] [rbp-88h] BYREF
  ULONG v72; // [rsp+78h] [rbp-80h]
  PDEVICE_OBJECT v73; // [rsp+80h] [rbp-78h]
  int v74; // [rsp+88h] [rbp-70h]
  __int128 v75; // [rsp+90h] [rbp-68h]
  PVOID v76; // [rsp+A0h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  struct _KTHREAD *v78; // [rsp+B0h] [rbp-48h]
  LARGE_INTEGER v80; // [rsp+110h] [rbp+18h]
  unsigned __int8 v82; // [rsp+148h] [rbp+50h]

  v80 = a3;
  v15 = 0LL;
  v70 = 0LL;
  v69 = 0;
  v16 = 0;
  v17 = 0LL;
  Object = 0LL;
  v72 = 0;
  CurrentByteOffset.QuadPart = 0LL;
  if ( a10 && (a3.QuadPart || a2 || BugCheckParameter2->CompletionContext) )
  {
    v32 = -1073741811;
    v28 = VirtualAddress;
    goto LABEL_35;
  }
  if ( a13 && *a13 )
  {
    v19 = Length;
    if ( (*a13)->ByteCount < Length )
    {
      v32 = -1073741811;
      v28 = VirtualAddress;
      goto LABEL_35;
    }
  }
  else
  {
    v19 = Length;
  }
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v82 = PreviousMode;
  if ( (BugCheckParameter2->Flags & 2) != 0 && a12 >= 0 )
    v16 = 1;
  v21 = a12 & 0x40000000;
  v74 = a12 & 0x40000000;
  v68 = (a12 & 0x40000000) == 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(BugCheckParameter2);
  v73 = RelatedDeviceObject;
  if ( !PreviousMode || a10 )
  {
    v33 = a8;
    if ( a8 )
      CurrentByteOffset = *(LARGE_INTEGER *)a8;
    v28 = VirtualAddress;
    if ( a9 )
      v72 = *a9;
  }
  else
  {
    v23 = 0x7FFFFFFF0000LL;
    v24 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v24 = (__int64)a5;
    *(_DWORD *)v24 = *(_DWORD *)v24;
    v78 = KeGetCurrentThread();
    Process = v78->ApcState.Process;
    if ( Process[1].ReadyTime )
    {
      v26 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( (v26 == 332 || v26 == 452) && !v16 )
      {
        Status = (unsigned int)a5->Status;
        *(_DWORD *)Status = *(_DWORD *)Status;
        a5 = (struct _IO_STATUS_BLOCK *)Status;
        v80.QuadPart |= 1uLL;
      }
    }
    v28 = VirtualAddress;
    if ( !a14 && v19 )
    {
      v29 = (unsigned __int64)VirtualAddress;
      v30 = (unsigned __int64)&VirtualAddress[-1].Tail.CompletionKey + v19 + 87;
      if ( (unsigned __int64)VirtualAddress > v30 || v30 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v31 = (v30 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v29 = *(_BYTE *)v29;
        v29 = (v29 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v29 != v31 );
    }
    if ( BugCheckParameter2->CompletionContext && (v80.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v69 = -1073741811;
      v32 = -1073741811;
      v17 = Object;
LABEL_35:
      if ( a14 )
        IopFreeCopyObjectsFromDataBuffer((__int64)v28, 1);
      if ( v15 )
        IopExceptionCleanupEx((ULONG_PTR)BugCheckParameter2, v15, v17, 0LL, v16);
      else
        ObfDereferenceObject(BugCheckParameter2);
      return (unsigned int)v32;
    }
    v33 = a8;
    if ( a8 )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      CurrentByteOffset = *(LARGE_INTEGER *)a8;
    }
    if ( a9 )
    {
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        v23 = (__int64)a9;
      v72 = *(_DWORD *)v23;
    }
  }
  v35 = v82;
  if ( v82 && (BugCheckParameter2->Flags & 8) != 0 )
  {
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( (_WORD)SectorSize && ((SectorSize - 1) & v19) != 0
      || (v59 = RelatedDeviceObject->SectorSize, (RelatedDeviceObject->AlignmentRequirement & (unsigned int)v28) != 0) )
    {
      if ( (_WORD)SectorSize && v19 % SectorSize
        || (v59 = RelatedDeviceObject->SectorSize, (RelatedDeviceObject->AlignmentRequirement & (unsigned int)v28) != 0) )
      {
        v32 = -1073741811;
        v17 = Object;
        goto LABEL_35;
      }
    }
    if ( v33 && (_WORD)SectorSize && ((v59 - 1) & CurrentByteOffset.LowPart) != 0 )
    {
      v32 = -1073741811;
      v17 = Object;
      goto LABEL_35;
    }
    v35 = v82;
  }
  if ( a2 )
  {
    v76 = 0LL;
    v32 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v35, &v76, 0LL);
    Object = v76;
    v69 = v32;
    if ( v32 < 0 )
    {
      v17 = v76;
      goto LABEL_35;
    }
    KeResetEvent((PRKEVENT)v76);
    RelatedDeviceObject = v73;
    v33 = a8;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( v16 )
  {
    v37 = BugCheckParameter2->Flags & 4;
    v38 = KeGetCurrentThread();
    --v38->KernelApcDisable;
    v40 = KeAbPreAcquire((__int64)&BugCheckParameter2->Lock, 0LL);
    v66[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&BugCheckParameter2->Busy, 1) )
    {
      LOBYTE(v39) = v37 != 0;
      v32 = IopWaitAndAcquireFileObjectLock((_DWORD)BugCheckParameter2, v82, v39, (_DWORD)v40, (__int64)v66);
    }
    else
    {
      if ( v40 )
        *((_BYTE *)v40 + 10) = 1;
      PsReferenceSiloContext(BugCheckParameter2);
      v32 = 0;
    }
    v69 = v32;
    if ( v66[0] )
    {
      v17 = Object;
      if ( Object )
        ObfDereferenceObject(Object);
      v15 = v70;
      goto LABEL_35;
    }
    if ( !a8 || CurrentByteOffset.QuadPart == -2 )
      CurrentByteOffset = BugCheckParameter2->CurrentByteOffset;
    if ( BugCheckParameter2->PrivateCacheMap && !a14 )
    {
      v75 = 0LL;
      FastIoRead = (ULONG_PTR)FastIoDispatch->FastIoRead;
      if ( CurrentByteOffset.HighPart < 0 )
      {
        v17 = Object;
        if ( Object )
          ObfDereferenceObject(Object);
LABEL_53:
        IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
LABEL_54:
        v32 = -1073741811;
        v15 = v70;
        goto LABEL_35;
      }
      if ( (MmVerifierData & 0x10) != 0 && (DriverObject = v73->DriverObject, MmIsDriverVerifying(DriverObject)) )
        v43 = VfFastIoSnapState(DriverObject);
      else
        v43 = 0LL;
      v44 = (void *)v43;
      HandleInformation = (int)v28;
      Irp = v72;
      LOBYTE(v41) = 1;
      v45 = guard_dispatch_icall_no_overrides(BugCheckParameter2, &CurrentByteOffset, Length, v41);
      if ( v44 )
        VfFastIoCheckState(v44, FastIoRead);
      if ( v45 && (!(_DWORD)v75 || (_DWORD)v75 == -1073741807 || (_DWORD)v75 == -2147483643) )
      {
        v46 = KeGetCurrentThread();
        ++v46->ReadOperationCount;
        __incgsdword(0x2EDCu);
        IopProcessUpdateTransferCount(0LL, DWORD2(v75), 0x398u, 0x3B8u);
        __addgsqword(0x2EE8u, v47);
        *(_OWORD *)&a5->Status = v75;
        v17 = Object;
        if ( a2 )
        {
          if ( (BugCheckParameter2->Flags & 0x8000000) == 0 )
            KeSetEvent((PRKEVENT)Object, 0, 0);
          ObfDereferenceObject(v17);
        }
        IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
        v32 = v75;
        v15 = v70;
        goto LABEL_35;
      }
      v21 = v74;
    }
    RelatedDeviceObject = v73;
  }
  else if ( !v33 && (BugCheckParameter2->Flags & 0x280) == 0 )
  {
    v17 = Object;
    if ( Object )
    {
      ObfDereferenceObject(Object);
      v32 = -1073741811;
      v15 = v70;
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
    RelatedDeviceObject = v73;
  }
  v48 = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 (unsigned __int8)v16 ^ 1u);
  v15 = v48;
  v70 = v48;
  if ( !v48 )
  {
    v17 = Object;
    if ( Object )
      ObfDereferenceObject(Object);
    if ( v16 )
      IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
    v32 = -1073741670;
    goto LABEL_35;
  }
  v48->Tail.Overlay.OriginalFileObject = BugCheckParameter2;
  v48->Tail.Overlay.Thread = CurrentThread;
  v48->Tail.Overlay.AuxiliaryBuffer = 0LL;
  v48->RequestorMode = v82;
  v48->PendingReturned = 0;
  v48->Cancel = 0;
  v48->CancelRoutine = 0LL;
  v48->Flags = 0;
  v48->UserEvent = (PKEVENT)Object;
  if ( a10 )
  {
    ObfReferenceObjectWithTag(a10, 0x49526F49u);
    v15->Flags |= 0x200000u;
    v49 = a11;
    v50 = a10;
  }
  else
  {
    v48->Overlay.AllocationSize = v80;
    v49 = a5;
    v50 = a4;
  }
  v15->Overlay.AsynchronousParameters.UserApcContext = v50;
  v15->UserIosb = v49;
  CurrentStackLocation = v15->Tail.Overlay.CurrentStackLocation;
  *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
  CurrentStackLocation[-1].FileObject = BugCheckParameter2;
  v52 = v70;
  v70->AssociatedIrp.MasterIrp = 0LL;
  v52->MdlAddress = 0LL;
  Flags = v73->Flags;
  if ( (Flags & 4) != 0 )
  {
    v54 = Length;
    if ( Length )
    {
      if ( a14 )
      {
        v52->AssociatedIrp.MasterIrp = v28;
        v52->Flags |= 0x50u;
      }
      else
      {
        Pool2 = ExAllocatePool2(0x49uLL);
        v52->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
        if ( !Pool2 )
        {
          v32 = -1073741670;
          v15 = v70;
          v17 = Object;
          goto LABEL_35;
        }
        v52->Flags |= 0x70u;
      }
      v52->UserBuffer = v28;
    }
    else
    {
      v52->Flags |= 0x50u;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    v54 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(v28, Length, 0, 1u, v52);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v63 = v82;
      if ( a14 )
        v63 = 0;
      MmProbeAndLockPages(Mdl, v63, IoWriteAccess);
    }
  }
  else
  {
    v52->UserBuffer = v28;
    if ( a13 && *a13 )
    {
      v52->MdlAddress = *a13;
      *a13 = 0LL;
      v61 = a10 == 0LL;
      v54 = Length;
      if ( !v61 )
        v52->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)v52->Overlay.AsynchronousParameters.UserApcContext | 1);
    }
    else
    {
      v54 = Length;
    }
  }
  v56 = v52->Flags | 0x100;
  v52->Flags = v56;
  if ( (BugCheckParameter2->Flags & 8) != 0 )
  {
    v56 |= 1u;
    v52->Flags = v56;
  }
  if ( !v21 )
    v52->Flags = v56 | 0x800;
  if ( a14 )
  {
    v52->RequestorMode = 0;
    v52->UserBuffer = v28;
    v32 = IopSetCopyInformationExtension((__int64)v52, a14);
    if ( v32 < 0 )
    {
      v15 = v70;
      v17 = Object;
      goto LABEL_35;
    }
    v52 = v70;
  }
  CurrentStackLocation[-1].Parameters.Read.Length = v54;
  CurrentStackLocation[-1].Parameters.Create.Options = v72;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = CurrentByteOffset;
  FileObjectExtension = BugCheckParameter2->FileObjectExtension;
  if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
    CurrentStackLocation[-1].Parameters.Read.Flags = a5->Information;
  LOBYTE(HandleInformation) = v16;
  LOBYTE(Irp) = v82;
  return (unsigned int)IopSynchronousServiceTail(v73, v52, BugCheckParameter2, v68, Irp, HandleInformation, 0);
}
