/*
 * XREFs of NtSetInformationFile @ 0x1403B2080
 * Callers:
 *     DifNtSetInformationFileWrapper @ 0x1406340E0 (DifNtSetInformationFileWrapper.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     IopCallDriverReference @ 0x14025C740 (IopCallDriverReference.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeAreAllApcsDisabled @ 0x1403B2000 (KeAreAllApcsDisabled.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403B2040 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     IopProcessUpdateTransferCount @ 0x1403B31E0 (IopProcessUpdateTransferCount.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     IopWaitForSynchronousIo @ 0x1403B3490 (IopWaitForSynchronousIo.c)
 *     IoGetAttachedDevice @ 0x1403B3B80 (IoGetAttachedDevice.c)
 *     IopAllocateFileObjectExtension @ 0x1403B4640 (IopAllocateFileObjectExtension.c)
 *     KeSetKernelStackSwapEnable @ 0x1404415E0 (KeSetKernelStackSwapEnable.c)
 *     IopReplaceCompletionPort @ 0x1404AD178 (IopReplaceCompletionPort.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopSetFileObjectIosbRange @ 0x140710988 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140712BD4 (IopSetFileMemoryPartitionInformation.c)
 *     SeCaptureSubjectContextEx @ 0x14083BF00 (SeCaptureSubjectContextEx.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     RtlIsSandboxedToken @ 0x1408E3950 (RtlIsSandboxedToken.c)
 *     IopOpenLinkOrRenameTarget @ 0x140955124 (IopOpenLinkOrRenameTarget.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 *     IopAllocateIrpCleanup @ 0x140A0B2A4 (IopAllocateIrpCleanup.c)
 *     IopTrackLink @ 0x140A21314 (IopTrackLink.c)
 *     IopCancelAlertedRequest @ 0x140A76074 (IopCancelAlertedRequest.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  int v6; // r12d
  struct _KTHREAD *CurrentThread; // r11
  KPROCESSOR_MODE PreviousMode; // r14
  FILE_INFORMATION_CLASS v9; // edi
  ULONG v10; // eax
  __int64 v11; // rcx
  _KPROCESS *Process; // rax
  __int16 v13; // cx
  __int64 v14; // rax
  ACCESS_MASK v15; // esi
  NTSTATUS v16; // r13d
  struct _FILE_OBJECT *v17; // rbx
  PVPB Vpb; // rcx
  PVPB v19; // rcx
  struct _DEVICE_OBJECT *v20; // rcx
  PVOID FileObjectExtension; // rax
  struct _DEVICE_OBJECT **v22; // r8
  struct _DEVICE_OBJECT *i; // rax
  ULONG *p_Flags; // r15
  bool v25; // r14
  struct _KTHREAD *v26; // rax
  volatile __int32 *v27; // rbx
  _QWORD *v28; // rax
  LARGE_INTEGER v29; // rax
  unsigned __int64 v30; // rdx
  PVOID v31; // rbx
  __int64 v32; // rbx
  signed __int64 v33; // rsi
  bool v34; // cc
  signed __int64 v35; // rsi
  _DWORD *v37; // rax
  char IsProcessAppContainer; // al
  char *v39; // rbx
  signed __int64 v40; // rax
  signed __int64 v41; // rax
  struct _DEVICE_OBJECT *v42; // r8
  struct _DEVICE_OBJECT *v43; // rax
  char IsSandboxedToken; // bl
  char v45; // r15
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
  ULONG_PTR v58; // rbx
  KPROCESSOR_MODE v59; // al
  unsigned __int8 CurrentIrql; // di
  char v61; // al
  struct _KTHREAD *v62; // rcx
  struct _IRP *v63; // r8
  ULONG Flags; // ecx
  char v65; // al
  struct _IRP *v66; // rdi
  void *v67; // rcx
  PVOID *v68; // r14
  KIRQL v69; // al
  KSPIN_LOCK *v70; // rcx
  BOOL v71; // r8d
  NTSTATUS v72; // eax
  __int64 v73; // rcx
  struct _IRP *MasterIrp; // r9
  BOOLEAN Type; // al
  int v76; // eax
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
  __int64 v88; // rax
  BOOLEAN v89; // al
  int v90; // r11d
  int v91; // edx
  unsigned int v92; // edx
  unsigned int v93; // edx
  unsigned __int8 v94; // [rsp+30h] [rbp-F8h]
  char v95; // [rsp+31h] [rbp-F7h]
  _BYTE v96[2]; // [rsp+33h] [rbp-F5h] BYREF
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
  HANDLE Handle; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v111; // [rsp+A8h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-70h] BYREF
  LARGE_INTEGER v113; // [rsp+D8h] [rbp-50h]
  char v114[72]; // [rsp+E0h] [rbp-48h] BYREF

  v104 = 0LL;
  v105 = 0LL;
  v111 = 0LL;
  v6 = 0;
  Handle = 0LL;
  v100 = 0;
  v95 = 0;
  v97 = 0;
  CurrentThread = KeGetCurrentThread();
  v106 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v94 = PreviousMode;
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
    v37 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v37 )
    {
      if ( (*v37 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v17 = (struct _FILE_OBJECT *)Object;
        if ( IsProcessAppContainer )
        {
          v39 = (char *)Object - 48;
          if ( ObpTraceFlags )
            ObpPushStackInfo((__int64)v39, 0, 1u, 0x746C6644u);
          v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)v39, 0xFFFFFFFFFFFFFFFFuLL);
          v34 = v40 <= 1;
          v41 = v40 - 1;
          if ( v34 )
          {
            if ( *((_QWORD *)v39 + 1) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v39[24] ^ (unsigned __int64)BYTE1(v39)],
                (ULONG_PTR)Object,
                1uLL,
                *((_QWORD *)v39 + 1));
            if ( v41 < 0 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v41);
            if ( KeAreAllApcsDisabled() )
            {
              ObpDeferObjectDeletion(v39);
            }
            else
            {
              v88 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO((__int64)v39);
              if ( v88 )
                ObpHandleRevocationBlockRemoveObject(v88);
              if ( ObpTraceFlags )
                ObpDeregisterObject(v39);
              ObpRemoveObjectRoutine(v39, 0LL);
            }
          }
          v16 = -1073739504;
          v17 = (struct _FILE_OBJECT *)Object;
        }
      }
    }
  }
  if ( v16 < 0 )
    return v16;
  if ( (v17->Flags & 0x800) != 0 )
  {
    DeviceObject = IoGetAttachedDevice(v17->DeviceObject);
    goto LABEL_35;
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
LABEL_34:
    DeviceObject = v20;
    goto LABEL_35;
  }
  FileObjectExtension = v17->FileObjectExtension;
  if ( !FileObjectExtension
    || (v22 = (struct _DEVICE_OBJECT **)*((_QWORD *)FileObjectExtension + 2)) == 0LL
    || (v42 = *v22, (DeviceObject = v42) == 0LL) )
  {
LABEL_31:
    for ( i = v20->AttachedDevice; i; i = i->AttachedDevice )
      v20 = i;
    v17 = (struct _FILE_OBJECT *)Object;
    goto LABEL_34;
  }
  v43 = v20;
  while ( v43 != v42 )
  {
    v43 = v43->AttachedDevice;
    if ( !v43 )
      goto LABEL_31;
  }
  v17 = (struct _FILE_OBJECT *)Object;
LABEL_35:
  p_Flags = &v17->Flags;
  if ( (v17->Flags & 2) != 0 )
  {
    v25 = (v17->Flags & 4) != 0;
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    v27 = (volatile __int32 *)Object;
    v28 = KeAbPreAcquire((__int64)Object + 128, 0LL);
    v96[0] = 0;
    if ( _InterlockedExchange(v27 + 29, 1) )
    {
      v71 = v25;
      PreviousMode = v94;
      v17 = (struct _FILE_OBJECT *)Object;
      v16 = IopWaitAndAcquireFileObjectLock((_DWORD)Object, v94, v71, (_DWORD)v28, (__int64)v96);
    }
    else
    {
      if ( v28 )
        *((_BYTE *)v28 + 10) = 1;
      v17 = (struct _FILE_OBJECT *)Object;
      PsReferenceSiloContext(Object);
      v16 = 0;
      PreviousMode = v94;
    }
    LODWORD(Irp) = v16;
    if ( v96[0] )
    {
      ObfDereferenceObjectWithTag(v17, 0x746C6644u);
      return v16;
    }
    if ( v9 == FilePositionInformation )
    {
      if ( Length >= 8 )
      {
        v29 = *(LARGE_INTEGER *)FileInformation;
        v113 = *(LARGE_INTEGER *)FileInformation;
        if ( (*p_Flags & 8) != 0
          && (SectorSize = DeviceObject->SectorSize, (_WORD)SectorSize)
          && ((SectorSize - 1) & v29.LowPart) != 0
          || v29.HighPart < 0 )
        {
          v16 = -1073741811;
        }
        else
        {
          v17->CurrentByteOffset = v29;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 0LL;
        }
        IopProcessUpdateTransferCount(0LL, Length, 936LL);
        __addgsqword(0x2EF8u, v30);
        v31 = Object;
        IopReleaseFileObjectLock((ULONG_PTR)Object);
        v32 = (__int64)v31 - 48;
        if ( ObpTraceFlags )
          ObpPushStackInfo(v32, 0, 1u, 0x746C6644u);
        v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL);
        v34 = v33 <= 1;
        v35 = v33 - 1;
        if ( v34 )
        {
          if ( *(_QWORD *)(v32 + 8) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v32 + 24) ^ (unsigned __int64)BYTE1(v32)],
              (ULONG_PTR)Object,
              1uLL,
              *(_QWORD *)(v32 + 8));
          if ( v35 < 0 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v35);
          if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
          {
            ObpDeferObjectDeletion(v32);
          }
          else
          {
            if ( (*(_BYTE *)(v32 + 26) & 0x40) != 0 )
            {
              v73 = *(_QWORD *)(v32 - ObpInfoMaskToOffset[*(_BYTE *)(v32 + 26) & 0x7F]);
              if ( *(_BYTE *)(v73 + 24) )
                ObpHandleRevocationBlockRemoveObject(v73);
            }
            LOBYTE(v6) = ObpTraceFlags != 0;
            if ( v6 )
              ObpDeregisterObject(v32);
            ObpRemoveObjectRoutine(v32, 0LL);
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
  }
  v96[1] = v45;
  IopResetEvent(v17);
  if ( v9 == FileTrackingInformation )
  {
    if ( Length >= 0x10 )
    {
      if ( v45 )
        p_Event = &v17->Event;
      else
        p_Event = (KEVENT *)&v104;
      v80 = IopTrackLink(v17, (__int64)p_Event, PreviousMode);
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
      v46->RequestorMode = v94;
      if ( v45 )
      {
        v46->AllocationFlags |= 2u;
        v51 = IoStatusBlock;
        v52 = 0LL;
      }
      else
      {
        if ( v94 == 1 )
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
      Pool2 = (struct _IRP *)ExAllocatePool2(0x61uLL, Length, 0x42536F49u);
      v106 = (struct _KTHREAD *)Pool2;
      v47->AssociatedIrp.MasterIrp = Pool2;
      memmove(Pool2, FileInformation, Length);
      if ( ((unsigned int)(v9 - 19) <= 1 || v9 == FilePositionInformation) && v106->Header.SignalState < 0 )
        RtlRaiseStatus(-1073741811);
      v47->Flags |= 0x830u;
      CurrentStackLocation[-1].Parameters.Read.Length = Length;
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
        v58 = BugCheckParameter2;
        if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) == 0 )
        {
          v90 = *(_DWORD *)&MasterIrp->Type & 0x30;
          v91 = *(_DWORD *)(BugCheckParameter2 + 80);
          if ( (v90 == 0 || (v91 & 2) != 0) && (v90 != 0 || (v91 & 2) == 0) && v90 != 48 )
          {
            if ( (v91 & 8) == 0 )
            {
              if ( (*(_DWORD *)&MasterIrp->Type & 2) != 0 )
                v91 |= 0x10u;
              else
                v91 &= ~0x10u;
              *(_DWORD *)(BugCheckParameter2 + 80) = v91;
            }
            if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
              v92 = v91 | 0x20;
            else
              v92 = v91 & 0xFFFFFFDF;
            *(_DWORD *)(v58 + 80) = v92;
            if ( (v92 & 2) != 0 )
            {
              if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
                v93 = v92 | 4;
              else
                v93 = v92 & 0xFFFFFFFB;
              *(_DWORD *)(v58 + 80) = v93;
            }
            v16 = 0;
            goto LABEL_147;
          }
        }
      }
      else
      {
        v56 = (unsigned int)(v9 - 10);
        if ( (unsigned int)v56 <= 0x3E )
        {
          v57 = 0x4080000000200003LL;
          if ( _bittest64(&v57, v56) )
          {
            v63 = v47->AssociatedIrp.MasterIrp;
            Flags = v63->Flags;
            if ( !Flags || (Flags & 1) != 0 || Length - 20 < Flags )
            {
              v16 = -1073741811;
              v47->IoStatus.Status = -1073741811;
              v58 = BugCheckParameter2;
              goto LABEL_107;
            }
            if ( v9 == FileMoveClusterInformation )
            {
              CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)&v63->Type;
            }
            else
            {
              if ( v9 == FileRenameInformationEx || v9 == FileLinkInformationEx )
                Type = v63->Type & 1;
              else
                Type = v63->Type;
              CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = Type;
            }
            if ( *((_WORD *)&v63->Flags + 2) == 92 || v63->MdlAddress )
            {
              v58 = BugCheckParameter2;
              v76 = IopOpenLinkOrRenameTarget(&Handle, v47, v63, BugCheckParameter2);
              v16 = v76;
              if ( v76 < 0 )
              {
                v47->IoStatus.Status = v76;
                goto LABEL_107;
              }
              goto LABEL_106;
            }
            goto LABEL_105;
          }
        }
        switch ( v9 )
        {
          case FileShortNameInformation:
            v87 = v47->AssociatedIrp.MasterIrp;
            v58 = BugCheckParameter2;
            if ( Length - 4 < *(_DWORD *)&v87->Type )
            {
              v16 = -1073741811;
              v47->IoStatus.Status = -1073741811;
              goto LABEL_107;
            }
            if ( *(&v87->Size + 1) == 92 )
            {
              v16 = -1073741811;
              v47->IoStatus.Status = -1073741811;
              goto LABEL_107;
            }
            goto LABEL_106;
          case FileDispositionInformation:
          case FileDispositionInformationEx:
            v65 = v47->AssociatedIrp.MasterIrp->Type;
            if ( v9 == FileDispositionInformationEx )
              v65 &= 1u;
            if ( v65 )
              CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)FileHandle;
LABEL_105:
            v58 = BugCheckParameter2;
LABEL_106:
            v16 = IopCallDriverReference(DeviceObject, v47, v45, (_QWORD *)v58, 2);
LABEL_107:
            v59 = v94;
            goto LABEL_108;
          case FileCompletionInformation:
            v66 = v47->AssociatedIrp.MasterIrp;
            v58 = BugCheckParameter2;
            if ( !*(_QWORD *)(BugCheckParameter2 + 176) && (*(_DWORD *)(BugCheckParameter2 + 80) & 2) == 0 )
            {
              v67 = *(void **)&v66->Type;
              v103 = 0LL;
              v16 = ObReferenceObjectByHandle(v67, 2u, IoCompletionObjectType, v94, &v103, 0LL);
              if ( v16 >= 0 )
              {
                v68 = (PVOID *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x63436F49u);
                if ( !v68 )
                {
                  ObfDereferenceObjectWithTag(v103, 0x746C6644u);
                  v16 = -1073741670;
                  v47->IoStatus.Status = -1073741670;
                  v47->IoStatus.Information = 0LL;
                  goto LABEL_107;
                }
                v69 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v58 + 184));
                v70 = (KSPIN_LOCK *)(v58 + 184);
                if ( *(_QWORD *)(v58 + 176) )
                {
                  KeReleaseSpinLock(v70, v69);
                  ExFreePoolWithTag(v68, 0);
                  ObfDereferenceObjectWithTag(v103, 0x746C6644u);
                  v16 = -1073741752;
                }
                else
                {
                  *(_DWORD *)(v58 + 80) &= ~0x400u;
                  *v68 = v103;
                  v68[1] = v66->MdlAddress;
                  *(_QWORD *)(v58 + 176) = v68;
                  v16 = 0;
                  KeReleaseSpinLock(v70, v69);
                }
              }
              goto LABEL_147;
            }
            break;
          case FileReplaceCompletionInformation:
            v82 = v47->AssociatedIrp.MasterIrp;
            v83 = 0LL;
            v58 = BugCheckParameter2;
            if ( *(_QWORD *)(BugCheckParameter2 + 176) )
            {
              v84 = *(void **)&v82->Type;
              if ( *(_QWORD *)&v82->Type )
              {
                v107 = 0LL;
                v16 = ObReferenceObjectByHandle(v84, 2u, IoCompletionObjectType, v94, &v107, 0LL);
                v83 = v107;
              }
              if ( v16 >= 0 )
              {
                v16 = IopReplaceCompletionPort(v58, v83, v82->MdlAddress);
                if ( v83 )
                {
                  ObfDereferenceObjectWithTag(v83, 0x746C6644u);
                  v47->IoStatus.Status = v16;
                  v47->IoStatus.Information = 0LL;
                  goto LABEL_107;
                }
              }
              goto LABEL_147;
            }
            break;
          case FileIoCompletionNotificationInformation:
            v77 = v47->AssociatedIrp.MasterIrp;
            v58 = BugCheckParameter2;
            v78 = *(_DWORD *)(BugCheckParameter2 + 80);
            if ( (v78 & 2) != 0 )
            {
              v16 = -1073741811;
              v47->IoStatus.Status = -1073741811;
              v47->IoStatus.Information = 0LL;
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
                *(_DWORD *)(v58 + 80) = v78;
              }
              if ( (*(_DWORD *)&v77->Type & 4) != 0 )
                *(_DWORD *)(v58 + 80) = v78 | 0x8000000;
              v47->IoStatus.Status = 0;
              v47->IoStatus.Information = 0LL;
            }
            goto LABEL_107;
          case FileIoStatusBlockRangeInformation:
            v89 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v94);
            v58 = BugCheckParameter2;
            if ( v89 )
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
            v47->IoStatus.Status = v16;
            v47->IoStatus.Information = 0LL;
            goto LABEL_107;
          case FileIoPriorityHintInformation:
            v85 = *(_DWORD *)v47->AssociatedIrp.MasterIrp;
            v58 = BugCheckParameter2;
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
                goto LABEL_107;
              }
              goto LABEL_147;
            }
            break;
          case FileMemoryPartitionInformation:
            v59 = v94;
            if ( v94 )
            {
              v16 = -1073741790;
              v58 = BugCheckParameter2;
            }
            else
            {
              v58 = BugCheckParameter2;
              v16 = IopSetFileMemoryPartitionInformation(BugCheckParameter2, v47->AssociatedIrp.MasterIrp, Length);
              v59 = 0;
            }
            v47->IoStatus.Status = v16;
            v47->IoStatus.Information = 0LL;
LABEL_108:
            if ( v16 == 259 )
            {
              if ( !v45 )
              {
                v72 = KeWaitForSingleObject(&v104, Executive, v59, 0, 0LL);
                if ( v72 == 257 || v72 == 192 )
                  IopCancelAlertedRequest(&v104, v47);
                v16 = v111;
                *(_OWORD *)&IoStatusBlock->Status = v111;
                v61 = v100;
                goto LABEL_118;
              }
              v16 = IopWaitForSynchronousIo(v47);
            }
            else
            {
              v109 = 0LL;
              if ( !v45 )
                v47->UserEvent = 0LL;
              v47->UserIosb = IoStatusBlock;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(1uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
              IopCompleteRequest((__int64)&v47->Tail, (__int64)v114, &v109, &BugCheckParameter2, &v109);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
              if ( !v45 )
                goto LABEL_117;
            }
            IopReleaseFileObjectLock(v58);
LABEL_117:
            v61 = v100;
LABEL_118:
            if ( v61 )
            {
              v62 = KeGetCurrentThread();
              if ( (*((_DWORD *)&v62->0 + 1) & 0x40) == 0 )
                _interlockedbittestandset((volatile signed __int32 *)&v62->116 + 1, 6u);
            }
            if ( Handle )
              ObCloseHandle(Handle, 0);
            return v16;
          default:
            goto LABEL_105;
        }
      }
      v16 = -1073741811;
LABEL_147:
      v47->IoStatus.Status = v16;
      v47->IoStatus.Information = 0LL;
      goto LABEL_107;
    }
    IopAllocateIrpCleanup((ULONG_PTR)v17, 0LL);
    return -1073741670;
  }
}
