/*
 * XREFs of NtSetInformationFile @ 0x1402A04A0
 * Callers:
 *     DifNtSetInformationFileWrapper @ 0x140629B60 (DifNtSetInformationFileWrapper.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     IopProcessUpdateTransferCount @ 0x1402A1520 (IopProcessUpdateTransferCount.c)
 *     IopResetEvent @ 0x1402A1570 (IopResetEvent.c)
 *     IopWaitForSynchronousIo @ 0x1402A1910 (IopWaitForSynchronousIo.c)
 *     IoGetAttachedDevice @ 0x1402A1E80 (IoGetAttachedDevice.c)
 *     IopAllocateFileObjectExtension @ 0x1402A2840 (IopAllocateFileObjectExtension.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     IopCallDriverReference @ 0x14035D040 (IopCallDriverReference.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KeSetKernelStackSwapEnable @ 0x14044AF70 (KeSetKernelStackSwapEnable.c)
 *     IopReplaceCompletionPort @ 0x1404B17A8 (IopReplaceCompletionPort.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     IopSetFileObjectIosbRange @ 0x140706CF8 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140708F44 (IopSetFileMemoryPartitionInformation.c)
 *     RtlIsSandboxedToken @ 0x140840280 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContextEx @ 0x1408436C0 (SeCaptureSubjectContextEx.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     IopOpenLinkOrRenameTarget @ 0x1408ED610 (IopOpenLinkOrRenameTarget.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 *     IopCancelAlertedRequest @ 0x1409868F0 (IopCancelAlertedRequest.c)
 *     IopExceptionCleanupEx @ 0x1409887B0 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x14098A8E4 (IopAllocateIrpCleanup.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 *     IopTrackLink @ 0x140A23294 (IopTrackLink.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  size_t v5; // r13
  int v6; // r12d
  struct _KTHREAD *CurrentThread; // r10
  KPROCESSOR_MODE PreviousMode; // r15
  FILE_INFORMATION_CLASS v9; // edi
  ULONG v10; // eax
  __int64 v11; // rcx
  _KPROCESS *Process; // rax
  __int16 v13; // cx
  __int64 v14; // rax
  ACCESS_MASK v15; // esi
  int v16; // r15d
  struct _FILE_OBJECT *v17; // rbx
  PVPB Vpb; // rcx
  PVPB v19; // rcx
  struct _DEVICE_OBJECT *v20; // rcx
  PVOID FileObjectExtension; // rax
  struct _DEVICE_OBJECT **v22; // r8
  struct _DEVICE_OBJECT *i; // rax
  ULONG *p_Flags; // r14
  bool v25; // si
  struct _KTHREAD *v26; // rax
  volatile __int32 *v27; // rbx
  __int64 *v28; // rax
  KPROCESSOR_MODE v29; // si
  LARGE_INTEGER v30; // rax
  PVOID v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  signed __int64 v36; // rax
  bool v37; // cc
  signed __int64 v38; // rax
  _DWORD *v40; // rax
  char IsProcessAppContainer; // al
  struct _DEVICE_OBJECT *v42; // r8
  struct _DEVICE_OBJECT *v43; // rax
  char IsSandboxedToken; // bl
  char v45; // r14
  IRP *v46; // rax
  IRP *v47; // rsi
  struct _KTHREAD *v48; // rax
  int v49; // ecx
  bool v50; // zf
  PIO_STATUS_BLOCK v51; // rax
  struct _KEVENT *v52; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _IRP *Pool2; // rax
  struct _KTHREAD *v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rcx
  char v58; // r14
  ULONG_PTR v59; // rbx
  KPROCESSOR_MODE v60; // al
  unsigned __int8 CurrentIrql; // di
  char v62; // al
  struct _KTHREAD *v63; // rcx
  struct _IRP *v64; // r8
  unsigned int Flags; // ecx
  char v66; // al
  struct _IRP *v67; // r13
  void *v68; // rcx
  PVOID *v69; // rdi
  KIRQL v70; // al
  KSPIN_LOCK *v71; // rcx
  BOOL v72; // r8d
  NTSTATUS v73; // eax
  BOOLEAN Type; // al
  int v75; // eax
  struct _IRP *MasterIrp; // r9
  struct _IRP *v77; // rdx
  int v78; // ecx
  int SectorSize; // ecx
  NTSTATUS v80; // edi
  KEVENT *p_Event; // rax
  struct _IRP *v82; // r14
  PVOID v83; // rdi
  void *v84; // rcx
  unsigned int v85; // ecx
  unsigned int v86; // edi
  struct _IRP *v87; // rcx
  BOOLEAN v88; // al
  int v89; // r11d
  int v90; // edx
  unsigned int v91; // edx
  unsigned int v92; // edx
  unsigned __int8 v93; // [rsp+30h] [rbp-F8h]
  char v94; // [rsp+31h] [rbp-F7h]
  char v95; // [rsp+32h] [rbp-F6h]
  char v96; // [rsp+34h] [rbp-F4h] BYREF
  char v97; // [rsp+35h] [rbp-F3h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-F0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-E8h] BYREF
  int v100; // [rsp+48h] [rbp-E0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-D8h]
  PIRP Irp; // [rsp+58h] [rbp-D0h]
  PVOID v103; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v104; // [rsp+68h] [rbp-C0h] BYREF
  char *v105; // [rsp+78h] [rbp-B0h]
  struct _KTHREAD *v106; // [rsp+80h] [rbp-A8h]
  PVOID v107; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v108; // [rsp+90h] [rbp-98h] BYREF
  __int64 v109; // [rsp+98h] [rbp-90h] BYREF
  HANDLE v110; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v111; // [rsp+A8h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-70h] BYREF
  LARGE_INTEGER v113; // [rsp+D8h] [rbp-50h]
  char v114[72]; // [rsp+E0h] [rbp-48h] BYREF

  v5 = Length;
  v104 = 0LL;
  v105 = 0LL;
  v111 = 0LL;
  v6 = 0;
  v110 = 0LL;
  v100 = 0;
  v95 = 0;
  v97 = 0;
  CurrentThread = KeGetCurrentThread();
  v106 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v93 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = FileInformationClass;
    if ( (unsigned int)FileInformationClass >= (FileStatInformation|FileModeInformation) )
      return -1073741821;
    v10 = *((unsigned __int8 *)IopSetOperationLength + (int)FileInformationClass);
    if ( !(_BYTE)v10 )
      return -1073741821;
    if ( Length < v10 )
      return -1073741820;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v11 = (__int64)IoStatusBlock;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    Process = CurrentThread->ApcState.Process;
    if ( Process[1].ReadyTime && ((v13 = WORD2(Process[3].PerProcessorCycleTimes), v13 == 332) || v13 == 452) )
    {
      if ( Length )
      {
        v14 = 0LL;
        if ( Length != 1 )
          v14 = 3LL;
        if ( (v14 & (unsigned __int64)FileInformation) != 0 )
          ExRaiseDatatypeMisalignment();
      }
    }
    else if ( Length
           && ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1LL) & (unsigned __int64)FileInformation) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v15 = IopSetOperationAccess[FileInformationClass];
    if ( FileInformationClass == FileLinkInformationEx || FileInformationClass == FileLinkInformation )
    {
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContextEx(CurrentThread, CurrentThread->Process, &SubjectContext);
      IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      if ( IsSandboxedToken )
        v15 |= 0x100u;
    }
  }
  else
  {
    v9 = FileInformationClass;
    switch ( FileInformationClass )
    {
      case FileRenameInformationBypassAccessCheck:
        v9 = FileRenameInformation;
        v95 = 1;
        break;
      case FileRenameInformationExBypassAccessCheck:
        v9 = FileRenameInformationEx;
        v95 = 1;
        break;
      case FileLinkInformationBypassAccessCheck:
        v9 = FileLinkInformation;
        v95 = 1;
        break;
      case FileLinkInformationExBypassAccessCheck:
        v9 = FileLinkInformationEx;
        v95 = 1;
        break;
      case FileCaseSensitiveInformationForceAccessCheck:
        v9 = FileCaseSensitiveInformation;
        v97 = 1;
        break;
    }
    v15 = IopSetOperationAccess[v9];
  }
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(FileHandle, v15, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v17 = (struct _FILE_OBJECT *)Object;
  BugCheckParameter2 = (ULONG_PTR)Object;
  if ( v16 >= 0 )
  {
    v40 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v40 )
    {
      if ( (*v40 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v17 = (struct _FILE_OBJECT *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          v16 = -1073739504;
        }
      }
    }
  }
  if ( v16 < 0 )
    return v16;
  if ( (v17->Flags & 0x800) != 0 )
  {
    DeviceObject = IoGetAttachedDevice(v17->DeviceObject);
    goto LABEL_36;
  }
  Vpb = v17->Vpb;
  if ( !Vpb || (v20 = Vpb->DeviceObject) == 0LL )
  {
    v19 = v17->DeviceObject->Vpb;
    if ( !v19 || (v20 = v19->DeviceObject) == 0LL )
      v20 = v17->DeviceObject;
  }
  if ( !v20->AttachedDevice )
  {
LABEL_35:
    DeviceObject = v20;
    goto LABEL_36;
  }
  FileObjectExtension = v17->FileObjectExtension;
  if ( !FileObjectExtension
    || (v22 = (struct _DEVICE_OBJECT **)*((_QWORD *)FileObjectExtension + 2)) == 0LL
    || (v42 = *v22, (DeviceObject = v42) == 0LL) )
  {
LABEL_32:
    for ( i = v20->AttachedDevice; i; i = i->AttachedDevice )
      v20 = i;
    v17 = (struct _FILE_OBJECT *)Object;
    goto LABEL_35;
  }
  v43 = v20;
  while ( v43 != v42 )
  {
    v43 = v43->AttachedDevice;
    if ( !v43 )
      goto LABEL_32;
  }
  v17 = (struct _FILE_OBJECT *)Object;
LABEL_36:
  p_Flags = &v17->Flags;
  if ( (v17->Flags & 2) != 0 )
  {
    v25 = (v17->Flags & 4) != 0;
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    v27 = (volatile __int32 *)Object;
    v28 = KeAbPreAcquire((__int64)Object + 128, 0LL);
    v96 = 0;
    if ( _InterlockedExchange(v27 + 29, 1) )
    {
      v72 = v25;
      v29 = v93;
      v17 = (struct _FILE_OBJECT *)Object;
      v16 = IopWaitAndAcquireFileObjectLock((_DWORD)Object, v93, v72, (_DWORD)v28, (__int64)&v96);
    }
    else
    {
      if ( v28 )
        *((_BYTE *)v28 + 10) = 1;
      v17 = (struct _FILE_OBJECT *)Object;
      PsReferenceSiloContext(Object);
      v16 = 0;
      v29 = v93;
    }
    LODWORD(Irp) = v16;
    if ( v96 )
    {
      ObfDereferenceObjectWithTag(v17, 0x746C6644u);
      return v16;
    }
    if ( v9 == FilePositionInformation )
    {
      if ( (unsigned int)v5 >= 8 )
      {
        v30 = *(LARGE_INTEGER *)FileInformation;
        v113 = *(LARGE_INTEGER *)FileInformation;
        if ( (*p_Flags & 8) != 0
          && (SectorSize = DeviceObject->SectorSize, (_WORD)SectorSize)
          && ((SectorSize - 1) & v30.LowPart) != 0
          || v30.HighPart < 0 )
        {
          v16 = -1073741811;
        }
        else
        {
          v17->CurrentByteOffset = v30;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 0LL;
        }
        IopProcessUpdateTransferCount(0LL, (unsigned int)v5, 936LL);
        __addgsqword(0x2EF8u, (unsigned int)v5);
        v31 = Object;
        IopReleaseFileObjectLock((ULONG_PTR)Object);
        v35 = (__int64)v31 - 48;
        if ( ObpTraceFlags )
          ObpPushStackInfo(v35, 0, 1u, 0x746C6644u);
        v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)v35, 0xFFFFFFFFFFFFFFFFuLL);
        v37 = v36 <= 1;
        v38 = v36 - 1;
        if ( v37 )
        {
          if ( *(_QWORD *)(v35 + 8) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v35 + 24) ^ (unsigned __int64)BYTE1(v35)],
              (ULONG_PTR)Object,
              1uLL,
              *(_QWORD *)(v35 + 8));
          if ( v38 < 0 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v38);
          if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
          {
            ObpDeferObjectDeletion(v35, v32, v33, v34);
          }
          else
          {
            if ( (*(_BYTE *)(v35 + 26) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)(v35 - ObpInfoMaskToOffset[*(_BYTE *)(v35 + 26) & 0x7F]) + 24LL) )
            {
              ObpHandleRevocationBlockRemoveObject();
            }
            LOBYTE(v6) = ObpTraceFlags != 0;
            if ( v6 )
              ObpDeregisterObject(v35);
            ObpRemoveObjectRoutine(v35, 0LL);
          }
        }
        return v16;
      }
      IopReleaseFileObjectLock((ULONG_PTR)v17);
      ObfDereferenceObjectWithTag(v17, 0x746C6644u);
      return -1073741820;
    }
    v45 = 1;
  }
  else
  {
    LOWORD(v104) = 1;
    BYTE2(v104) = 6;
    DWORD1(v104) = 0;
    v105 = (char *)&v104 + 8;
    *((_QWORD *)&v104 + 1) = (char *)&v104 + 8;
    v45 = 0;
    v29 = v93;
  }
  v94 = v45;
  IopResetEvent(v17);
  if ( v9 == FileTrackingInformation )
  {
    if ( (unsigned int)v5 >= 0x10 )
    {
      if ( v45 )
        p_Event = &v17->Event;
      else
        p_Event = (KEVENT *)&v104;
      v80 = IopTrackLink(v17, (__int64)p_Event, v29);
      LODWORD(Irp) = v80;
      if ( v80 >= 0 )
      {
        IoStatusBlock->Information = 0LL;
        IoStatusBlock->Status = v80;
      }
    }
    else
    {
      v80 = -1073741820;
    }
    if ( v45 )
      IopReleaseFileObjectLock((ULONG_PTR)v17);
    ObfDereferenceObjectWithTag(v17, 0x746C6644u);
    return v80;
  }
  else
  {
    v46 = (IRP *)IopAllocateIrpExReturn(
                   (__int64)DeviceObject,
                   (unsigned __int8)DeviceObject->StackSize,
                   (unsigned __int8)v45 ^ 1u);
    v47 = v46;
    Irp = v46;
    if ( v46 )
    {
      v46->Tail.Overlay.OriginalFileObject = v17;
      v46->Tail.Overlay.Thread = v106;
      v46->RequestorMode = v93;
      if ( v45 )
      {
        v46->AllocationFlags |= 2u;
        v51 = IoStatusBlock;
        v52 = 0LL;
      }
      else
      {
        if ( v93 == 1 )
        {
          v48 = KeGetCurrentThread();
          v49 = *((_DWORD *)&v48->0 + 1) >> 6;
          LOBYTE(v49) = (*((_DWORD *)&v48->0 + 1) & 0x40) != 0;
          v50 = (*((_DWORD *)&v48->0 + 1) & 0x40) == 0;
          v100 = v49;
          if ( !v50 )
            _interlockedbittestandreset((volatile signed __int32 *)&v48->116 + 1, 6u);
        }
        v47->Flags = 4;
        v51 = (PIO_STATUS_BLOCK)&v111;
        v52 = (struct _KEVENT *)&v104;
      }
      v47->UserEvent = v52;
      v47->UserIosb = v51;
      v47->Overlay.AllocationSize.QuadPart = 0LL;
      CurrentStackLocation = v47->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MajorFunction = 6;
      CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)BugCheckParameter2;
      v47->AssociatedIrp.MasterIrp = 0LL;
      v47->MdlAddress = 0LL;
      Pool2 = (struct _IRP *)ExAllocatePool2(0x61uLL);
      v106 = (struct _KTHREAD *)Pool2;
      v47->AssociatedIrp.MasterIrp = Pool2;
      memmove(Pool2, FileInformation, v5);
      if ( ((unsigned int)(v9 - 19) <= 1 || v9 == FilePositionInformation) && v106->Header.SignalState < 0 )
        RtlRaiseStatus(-1073741811);
      v47->Flags |= 0x830u;
      CurrentStackLocation[-1].Parameters.Read.Length = v5;
      CurrentStackLocation[-1].Parameters.Create.Options = v9;
      if ( v97 || v95 )
        CurrentStackLocation[-1].Flags |= 1u;
      IopQueueThreadIrp((__int64)v47);
      v55 = KeGetCurrentThread();
      ++v55->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( v9 == FileModeInformation )
      {
        MasterIrp = v47->AssociatedIrp.MasterIrp;
        v59 = BugCheckParameter2;
        if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) == 0 )
        {
          v89 = *(_DWORD *)&MasterIrp->Type & 0x30;
          v90 = *(_DWORD *)(BugCheckParameter2 + 80);
          if ( (v89 == 0 || (v90 & 2) != 0) && (v89 != 0 || (v90 & 2) == 0) && v89 != 48 )
          {
            if ( (v90 & 8) == 0 )
            {
              if ( (*(_DWORD *)&MasterIrp->Type & 2) != 0 )
                v90 |= 0x10u;
              else
                v90 &= ~0x10u;
              *(_DWORD *)(BugCheckParameter2 + 80) = v90;
            }
            if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
              v91 = v90 | 0x20;
            else
              v91 = v90 & 0xFFFFFFDF;
            *(_DWORD *)(v59 + 80) = v91;
            if ( (v91 & 2) != 0 )
            {
              if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
                v92 = v91 | 4;
              else
                v92 = v91 & 0xFFFFFFFB;
              *(_DWORD *)(v59 + 80) = v92;
            }
            v16 = 0;
            goto LABEL_153;
          }
        }
        goto LABEL_172;
      }
      v56 = (unsigned int)(v9 - 10);
      if ( (unsigned int)v56 <= 0x3E && (v57 = 0x4080000000200003LL, _bittest64(&v57, v56)) )
      {
        v64 = v47->AssociatedIrp.MasterIrp;
        Flags = v64->Flags;
        if ( Flags && (Flags & 1) == 0 && (int)v5 - 20 >= Flags )
        {
          if ( v9 == FileMoveClusterInformation )
          {
            CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)&v64->Type;
          }
          else
          {
            if ( v9 == FileRenameInformationEx || v9 == FileLinkInformationEx )
              Type = v64->Type & 1;
            else
              Type = v64->Type;
            CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = Type;
          }
          if ( *((_WORD *)&v64->Flags + 2) == 92 || v64->MdlAddress )
          {
            v59 = BugCheckParameter2;
            v75 = IopOpenLinkOrRenameTarget(&v110, v47, v64, BugCheckParameter2);
            v16 = v75;
            v58 = v94;
            if ( v75 < 0 )
            {
              v47->IoStatus.Status = v75;
              goto LABEL_103;
            }
            goto LABEL_102;
          }
          goto LABEL_101;
        }
      }
      else
      {
        if ( v9 != FileShortNameInformation )
        {
          switch ( v9 )
          {
            case FileDispositionInformation:
            case FileDispositionInformationEx:
              v66 = v47->AssociatedIrp.MasterIrp->Type;
              if ( v9 == FileDispositionInformationEx )
                v66 &= 1u;
              if ( v66 )
                CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)FileHandle;
LABEL_101:
              v58 = v94;
              v59 = BugCheckParameter2;
LABEL_102:
              v16 = IopCallDriverReference(DeviceObject, v47, 2);
LABEL_103:
              v60 = v93;
              goto LABEL_104;
            case FileCompletionInformation:
              v67 = v47->AssociatedIrp.MasterIrp;
              v59 = BugCheckParameter2;
              if ( !*(_QWORD *)(BugCheckParameter2 + 176) && (*(_DWORD *)(BugCheckParameter2 + 80) & 2) == 0 )
              {
                v68 = *(void **)&v67->Type;
                v103 = 0LL;
                v16 = ObReferenceObjectByHandle(v68, 2u, IoCompletionObjectType, v93, &v103, 0LL);
                if ( v16 >= 0 )
                {
                  v69 = (PVOID *)ExAllocatePool2(0x40uLL);
                  if ( !v69 )
                  {
                    ObfDereferenceObjectWithTag(v103, 0x746C6644u);
                    v16 = -1073741670;
                    v47->IoStatus.Status = -1073741670;
                    v47->IoStatus.Information = 0LL;
                    v58 = v94;
                    goto LABEL_103;
                  }
                  v70 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v59 + 184));
                  v71 = (KSPIN_LOCK *)(v59 + 184);
                  if ( *(_QWORD *)(v59 + 176) )
                  {
                    KeReleaseSpinLock(v71, v70);
                    ExFreePoolWithTag(v69, 0);
                    ObfDereferenceObjectWithTag(v103, 0x746C6644u);
                    v16 = -1073741752;
                  }
                  else
                  {
                    *(_DWORD *)(v59 + 80) &= ~0x400u;
                    *v69 = v103;
                    v69[1] = v67->MdlAddress;
                    *(_QWORD *)(v59 + 176) = v69;
                    v16 = 0;
                    KeReleaseSpinLock(v71, v70);
                  }
                }
                goto LABEL_153;
              }
              break;
            case FileReplaceCompletionInformation:
              v82 = v47->AssociatedIrp.MasterIrp;
              v83 = 0LL;
              v59 = BugCheckParameter2;
              if ( *(_QWORD *)(BugCheckParameter2 + 176) )
              {
                v84 = *(void **)&v82->Type;
                if ( *(_QWORD *)&v82->Type )
                {
                  v107 = 0LL;
                  v16 = ObReferenceObjectByHandle(v84, 2u, IoCompletionObjectType, v93, &v107, 0LL);
                  v83 = v107;
                }
                if ( v16 < 0 )
                  goto LABEL_153;
                v16 = IopReplaceCompletionPort(v59, v83, v82->MdlAddress);
                if ( !v83 )
                  goto LABEL_153;
                ObfDereferenceObjectWithTag(v83, 0x746C6644u);
                v47->IoStatus.Information = 0LL;
                goto LABEL_137;
              }
              break;
            case FileIoCompletionNotificationInformation:
              v77 = v47->AssociatedIrp.MasterIrp;
              v59 = BugCheckParameter2;
              v78 = *(_DWORD *)(BugCheckParameter2 + 80);
              if ( (v78 & 2) != 0 )
              {
                v16 = -1073741811;
                v47->IoStatus.Information = 0LL;
                v47->IoStatus.Status = -1073741811;
                v58 = v94;
              }
              else
              {
                v16 = 0;
                if ( (*(_DWORD *)&v77->Type & 1) != 0 )
                {
                  v78 |= 0x2000000u;
                  *(_DWORD *)(BugCheckParameter2 + 80) = v78;
                }
                if ( (*(_DWORD *)&v77->Type & 2) != 0 )
                {
                  v78 |= 0x4000000u;
                  *(_DWORD *)(v59 + 80) = v78;
                }
                if ( (*(_DWORD *)&v77->Type & 4) != 0 )
                  *(_DWORD *)(v59 + 80) = v78 | 0x8000000;
                v47->IoStatus.Information = 0LL;
                v47->IoStatus.Status = 0;
                v58 = v94;
              }
              goto LABEL_103;
            case FileIoStatusBlockRangeInformation:
              v88 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v93);
              v59 = BugCheckParameter2;
              if ( v88 )
              {
                if ( (*(_DWORD *)(BugCheckParameter2 + 80) & 2) != 0 )
                  v16 = -1073741811;
                else
                  v16 = IopSetFileObjectIosbRange(BugCheckParameter2, v47);
              }
              else
              {
                v16 = -1073741727;
              }
              v47->IoStatus.Information = 0LL;
LABEL_137:
              v47->IoStatus.Status = v16;
              v58 = v94;
              goto LABEL_103;
            case FileIoPriorityHintInformation:
              v85 = *(_DWORD *)v47->AssociatedIrp.MasterIrp;
              v59 = BugCheckParameter2;
              if ( v85 <= 2 )
              {
                v86 = v85 + 1;
                v108 = 0LL;
                v16 = IopAllocateFileObjectExtension(BugCheckParameter2, &v108, 0LL);
                if ( v16 >= 0 )
                {
                  *(_DWORD *)(v108 + 88) = v86;
                  v47->IoStatus.Status = v16;
                  v47->IoStatus.Information = 0LL;
                  v58 = v94;
                  goto LABEL_103;
                }
                goto LABEL_153;
              }
              break;
            case FileMemoryPartitionInformation:
              v60 = v93;
              v59 = BugCheckParameter2;
              if ( v93 )
              {
                v16 = -1073741790;
              }
              else
              {
                v16 = IopSetFileMemoryPartitionInformation(
                        BugCheckParameter2,
                        v47->AssociatedIrp.MasterIrp,
                        (unsigned int)v5);
                v60 = 0;
              }
              v47->IoStatus.Status = v16;
              v47->IoStatus.Information = 0LL;
              v58 = v94;
LABEL_104:
              if ( v16 == 259 )
              {
                if ( !v58 )
                {
                  v73 = KeWaitForSingleObject(&v104, Executive, v60, 0, 0LL);
                  if ( v73 == 257 || v73 == 192 )
                    IopCancelAlertedRequest(&v104, v47);
                  v16 = v111;
                  *(_OWORD *)&IoStatusBlock->Status = v111;
                  v62 = v100;
                  goto LABEL_114;
                }
                v16 = IopWaitForSynchronousIo(v47);
              }
              else
              {
                v109 = 0LL;
                if ( !v58 )
                  v47->UserEvent = 0LL;
                v47->UserIosb = IoStatusBlock;
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(1uLL);
                if ( KiIrqlFlags )
                  KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
                IopCompleteRequest((__int64)&v47->Tail, (__int64)v114, &v109, &BugCheckParameter2, &v109);
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                __writecr8(CurrentIrql);
                if ( !v58 )
                  goto LABEL_113;
              }
              IopReleaseFileObjectLock(v59);
LABEL_113:
              v62 = v100;
LABEL_114:
              if ( v62 )
              {
                v63 = KeGetCurrentThread();
                if ( (*((_DWORD *)&v63->0 + 1) & 0x40) == 0 )
                  _interlockedbittestandset((volatile signed __int32 *)&v63->116 + 1, 6u);
              }
              if ( v110 )
                ObCloseHandle(v110, 0);
              return v16;
            default:
              goto LABEL_101;
          }
LABEL_172:
          v16 = -1073741811;
LABEL_153:
          v47->IoStatus.Status = v16;
          v47->IoStatus.Information = 0LL;
          v58 = v94;
          goto LABEL_103;
        }
        v87 = v47->AssociatedIrp.MasterIrp;
        if ( (unsigned int)(v5 - 4) >= *(_DWORD *)&v87->Type )
        {
          v59 = BugCheckParameter2;
          v58 = v94;
          if ( *(&v87->Size + 1) == 92 )
          {
            v16 = -1073741811;
            v47->IoStatus.Status = -1073741811;
            goto LABEL_103;
          }
          goto LABEL_102;
        }
      }
      v16 = -1073741811;
      v59 = BugCheckParameter2;
      goto LABEL_137;
    }
    IopAllocateIrpCleanup((ULONG_PTR)v17, 0LL);
    return -1073741670;
  }
}
