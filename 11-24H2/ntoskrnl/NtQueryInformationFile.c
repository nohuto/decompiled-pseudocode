/*
 * XREFs of NtQueryInformationFile @ 0x14096F610
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x14046F0F0 (PfpFileCheckAttributesForPrefetch.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x140785430 (RtlIsPartialPlaceholderFileHandle.c)
 *     SdbpGetFileTimestamp @ 0x14080125C (SdbpGetFileTimestamp.c)
 *     PfSnGetPrefetchInstructions @ 0x140970C24 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IopResetEvent @ 0x1403C4670 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x1403C4FC0 (IoGetAttachedDevice.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403C5CE0 (ObDereferenceObjectDeferDelete.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IoGetIoPriorityHint @ 0x14040C7C0 (IoGetIoPriorityHint.c)
 *     KeSetKernelStackSwapEnable @ 0x140448E90 (KeSetKernelStackSwapEnable.c)
 *     IoSetActivityIdThread @ 0x14045C3B0 (IoSetActivityIdThread.c)
 *     IopGetFileVolumeNameInformation @ 0x14049B84C (IopGetFileVolumeNameInformation.c)
 *     MmIsDriverVerifying @ 0x14049E430 (MmIsDriverVerifying.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopGetNumaNodeInformation @ 0x140717B98 (IopGetNumaNodeInformation.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x14085D560 (PsIsProcessAppContainer.c)
 *     IopQueryProcessIdsUsingFile @ 0x1408EF610 (IopQueryProcessIdsUsingFile.c)
 *     IopValidateQueryInformationParameters @ 0x1409704A0 (IopValidateQueryInformationParameters.c)
 *     IopExceptionCleanupEx @ 0x140970628 (IopExceptionCleanupEx.c)
 *     IopGetModeInformation @ 0x1409706E4 (IopGetModeInformation.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
 *     IopCancelAlertedRequest @ 0x140A7BD74 (IopCancelAlertedRequest.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140BA9450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BA97CC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  FILE_INFORMATION_CLASS v8; // ebx
  NTSTATUS result; // eax
  ACCESS_MASK v10; // edx
  int v11; // esi
  struct _FILE_OBJECT *v12; // rdi
  ULONG *p_Flags; // r15
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v15; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  bool v17; // si
  struct _KTHREAD *v18; // rax
  volatile __int32 *v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // rdx
  ULONG_PTR FastIoQueryBasicInfo; // rax
  PFAST_IO_QUERY_STANDARD_INFO FastIoQueryStandardInfo; // r14
  char v24; // si
  __int64 Irp; // rax
  __int64 v26; // rcx
  __int64 v27; // r14
  struct _KEVENT *p_Event; // rax
  unsigned int *v29; // rdi
  _QWORD *v30; // rax
  ULONG_PTR v31; // r15
  __int64 Pool2; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  _DWORD *v35; // rax
  ULONG v36; // r15d
  __int64 v37; // rdx
  __int64 v38; // r8
  struct _KTHREAD *v39; // rax
  char v40; // r10
  NTSTATUS NumaNodeInformation; // edi
  ULONG_PTR v42; // r15
  _DWORD *v43; // r9
  unsigned int v44; // r8d
  int v45; // edx
  int v46; // ecx
  int v47; // eax
  __int64 v48; // rbx
  struct _KTHREAD *v49; // rcx
  int v50; // ebx
  unsigned __int64 v51; // rax
  int v52; // eax
  int v53; // ebx
  unsigned int *v54; // rdi
  unsigned int v55; // eax
  int v56; // ebx
  _BYTE *v57; // rax
  char v58; // cl
  int v59; // edi
  ULONG_PTR v60; // rcx
  _DWORD *v61; // rax
  bool IsProcessAppContainer; // al
  void *v63; // rax
  char v64; // al
  ULONG_PTR v65; // r14
  KPROCESSOR_MODE v66; // r8
  NTSTATUS v67; // eax
  bool v68; // r12
  unsigned __int8 CurrentIrql; // si
  PIO_STATUS_BLOCK v70; // rax
  unsigned __int8 v71; // bl
  NTSTATUS v72; // eax
  NTSTATUS FileVolumeNameInformation; // ebx
  int v74; // ebx
  int ModeInformation; // eax
  _DWORD *v76; // r9
  __int64 v77; // rcx
  PIO_STATUS_BLOCK v78; // rax
  struct _KTHREAD *v79; // rax
  PIO_STATUS_BLOCK v80; // rax
  struct _LIST_ENTRY *v81; // rbx
  _DWORD *v82; // rdx
  int v83; // r8d
  int *v84; // rcx
  int v85; // edx
  __int64 v86; // rax
  int v87; // ecx
  int v88; // eax
  PVOID *Object; // [rsp+20h] [rbp-158h]
  char v90; // [rsp+30h] [rbp-148h]
  char v91; // [rsp+32h] [rbp-146h]
  unsigned __int8 v92; // [rsp+33h] [rbp-145h]
  BOOLEAN v93; // [rsp+34h] [rbp-144h]
  char v94; // [rsp+37h] [rbp-141h] BYREF
  char v95; // [rsp+38h] [rbp-140h]
  char v96; // [rsp+39h] [rbp-13Fh]
  unsigned __int8 v97; // [rsp+3Ah] [rbp-13Eh]
  int v98; // [rsp+3Ch] [rbp-13Ch]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-138h] BYREF
  ULONG v100; // [rsp+48h] [rbp-130h]
  PVOID v101; // [rsp+50h] [rbp-128h] BYREF
  PIO_STATUS_BLOCK v102; // [rsp+58h] [rbp-120h]
  __int64 v103; // [rsp+60h] [rbp-118h]
  _DWORD *v104; // [rsp+68h] [rbp-110h]
  ULONG_PTR v105; // [rsp+70h] [rbp-108h]
  __int64 v106; // [rsp+78h] [rbp-100h] BYREF
  unsigned int *v107; // [rsp+80h] [rbp-F8h]
  PVOID Entry; // [rsp+88h] [rbp-F0h]
  PVOID CurrentThread; // [rsp+90h] [rbp-E8h]
  PIO_STATUS_BLOCK v110; // [rsp+98h] [rbp-E0h]
  PDEVICE_OBJECT v111; // [rsp+A0h] [rbp-D8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A8h] [rbp-D0h] BYREF
  _DWORD *v113; // [rsp+B0h] [rbp-C8h]
  PIO_STATUS_BLOCK v114; // [rsp+B8h] [rbp-C0h]
  PVOID v115; // [rsp+C0h] [rbp-B8h]
  __int64 v116; // [rsp+C8h] [rbp-B0h]
  PIO_STATUS_BLOCK v117; // [rsp+D0h] [rbp-A8h]
  __int128 v118; // [rsp+D8h] [rbp-A0h] BYREF
  void *v119; // [rsp+E8h] [rbp-90h]
  __int64 *v120; // [rsp+F0h] [rbp-88h]
  __int64 v121; // [rsp+F8h] [rbp-80h]
  __int128 v122; // [rsp+100h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+110h] [rbp-68h] BYREF
  struct _LIST_ENTRY v124; // [rsp+128h] [rbp-50h] BYREF

  v100 = Length;
  v104 = FileInformation;
  v102 = IoStatusBlock;
  v117 = IoStatusBlock;
  v110 = IoStatusBlock;
  v114 = IoStatusBlock;
  v115 = FileInformation;
  LODWORD(v107) = Length;
  v8 = FileInformationClass;
  LODWORD(v103) = FileInformationClass;
  memset(&Event, 0, sizeof(Event));
  v122 = 0LL;
  HandleInformation = 0LL;
  v93 = 0;
  v91 = 0;
  CurrentThread = KeGetCurrentThread();
  v92 = *((_BYTE *)CurrentThread + 562);
  v97 = v92;
  result = IopValidateQueryInformationParameters(
             v92,
             (_DWORD)CurrentThread,
             (_DWORD)IoStatusBlock,
             (_DWORD)FileInformation,
             Length,
             FileInformationClass);
  if ( result < 0 )
    return result;
  if ( !v92 && FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
  {
    v8 = FileCaseSensitiveInformation;
    LODWORD(v103) = 71;
    v91 = 1;
  }
  v10 = IopQueryOperationAccess[v8];
  v101 = 0LL;
  v11 = ObReferenceObjectByHandle(FileHandle, v10, (POBJECT_TYPE)IoFileObjectType, v92, &v101, &HandleInformation);
  v12 = (struct _FILE_OBJECT *)v101;
  v105 = (ULONG_PTR)v101;
  BugCheckParameter2 = (ULONG_PTR)v101;
  if ( v11 >= 0 )
  {
    v61 = (_DWORD *)*((_QWORD *)v101 + 26);
    if ( v61 )
    {
      if ( (*v61 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process);
        v12 = (struct _FILE_OBJECT *)v101;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(v101);
          v11 = -1073739504;
        }
        v105 = BugCheckParameter2;
      }
    }
  }
  v98 = v11;
  if ( v11 < 0 )
    return v11;
  if ( v8 == FileAccessInformation )
  {
    v79 = KeGetCurrentThread();
    ++v79->OtherOperationCount;
    __incgsdword(0x2EE4u);
    if ( Length < 4 )
    {
      ObfDereferenceObject(v101);
      return -1073741820;
    }
    *(_DWORD *)FileInformation = HandleInformation.GrantedAccess;
    v80 = v102;
    v102->Status = 0;
    v80->Information = 4LL;
    v11 = v98;
    ObfDereferenceObject(v101);
    return v11;
  }
  p_Flags = &v12->Flags;
  v116 = (__int64)&v12->Flags;
  if ( (v12->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v12->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v12);
  v15 = AttachedDevice;
  v111 = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  if ( v8 == FileIsRemoteDeviceInformation )
  {
    if ( v100 )
    {
      *(_BYTE *)v104 = (v12->DeviceObject->Characteristics & 0x10) != 0;
      v78 = v102;
      v102->Status = 0;
      v78->Information = 1LL;
      goto LABEL_93;
    }
    ObfDereferenceObject(v12);
    return -1073741820;
  }
  else
  {
    if ( v8 == FileVolumeNameInformation )
    {
      FileVolumeNameInformation = IopGetFileVolumeNameInformation(v12->DeviceObject, (__int64)v102, v104, v100);
      ObfDereferenceObject(v12);
      return FileVolumeNameInformation;
    }
    if ( (*p_Flags & 2) != 0 )
    {
      v17 = (*p_Flags & 4) != 0;
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      v19 = (volatile __int32 *)v101;
      v20 = KeAbPreAcquire((__int64)v101 + 128, 0LL);
      v94 = 0;
      if ( _InterlockedExchange(v19 + 29, 1) )
      {
        v12 = (struct _FILE_OBJECT *)v101;
        v11 = IopWaitAndAcquireFileObjectLock((_DWORD)v101, v92, v17, (_DWORD)v20, (__int64)&v94);
      }
      else
      {
        if ( v20 )
          *((_BYTE *)v20 + 10) = 1;
        v12 = (struct _FILE_OBJECT *)v101;
        PsReferenceSiloContext(v101);
        v11 = 0;
      }
      v98 = v11;
      if ( v94 )
        goto LABEL_93;
      if ( v8 == FilePositionInformation )
      {
        v95 = 1;
        if ( v100 < 8 )
        {
          v11 = -1073741820;
        }
        else
        {
          *(_QWORD *)v104 = v12->CurrentByteOffset.QuadPart;
          v95 = 0;
          v70 = v102;
          v102->Status = 0;
          v70->Information = 8LL;
        }
LABEL_92:
        IopReleaseFileObjectLock((ULONG_PTR)v12);
LABEL_93:
        ObfDereferenceObject(v12);
        return v11;
      }
      if ( FastIoDispatch )
      {
        if ( (FastIoQueryBasicInfo = (ULONG_PTR)FastIoDispatch->FastIoQueryBasicInfo,
              v105 = FastIoQueryBasicInfo,
              v113 = (_DWORD *)FastIoQueryBasicInfo,
              FastIoQueryStandardInfo = FastIoDispatch->FastIoQueryStandardInfo,
              v8 == FileBasicInformation)
          && FastIoQueryBasicInfo
          || v8 == FileStandardInformation && FastIoQueryStandardInfo )
        {
          v118 = 0LL;
          v96 = 0;
          if ( (MmVerifierData & 0x10) != 0
            && (Entry = v15->DriverObject, MmIsDriverVerifying((struct _DRIVER_OBJECT *)Entry)) )
          {
            v63 = (void *)VfFastIoSnapState(Entry);
          }
          else
          {
            v63 = 0LL;
          }
          Entry = v63;
          v119 = v63;
          Object = (PVOID *)v15;
          LOBYTE(v21) = 1;
          if ( v8 == FileBasicInformation )
          {
            v65 = v105;
            v64 = guard_dispatch_icall_no_overrides(v12, v21, v104, &v118);
            v90 = v64;
          }
          else
          {
            v64 = guard_dispatch_icall_no_overrides(v12, v21, v104, &v118);
            v90 = v64;
            v65 = v105;
          }
          if ( Entry )
          {
            VfFastIoCheckState(Entry, v65);
            v64 = v90;
          }
          if ( v64 )
          {
            v11 = v118;
            v98 = v118;
            v96 = 1;
            *(_OWORD *)&v102->Status = v118;
            v64 = v90;
          }
          if ( v64 )
            goto LABEL_92;
        }
      }
      v24 = 1;
      v105 = BugCheckParameter2;
    }
    else
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v24 = 0;
    }
    IopResetEvent((__int64)v12);
    Irp = IopAllocateIrpExReturn((__int64)v15, (unsigned __int8)v15->StackSize, 0LL);
    v26 = Irp;
    v103 = Irp;
    v27 = Irp;
    v116 = Irp;
    v121 = Irp;
    if ( Irp )
    {
      *(_QWORD *)(Irp + 192) = v12;
      v120 = (__int64 *)(Irp + 152);
      *(_QWORD *)(Irp + 152) = CurrentThread;
      Entry = (PVOID)(Irp + 64);
      *(_BYTE *)(Irp + 64) = v92;
      if ( v24 )
      {
        *(_BYTE *)(Irp + 71) |= 2u;
        p_Event = 0LL;
        v29 = (unsigned int *)(v26 + 16);
      }
      else
      {
        if ( v92 == 1 )
        {
          v93 = KeSetKernelStackSwapEnable(0);
          v26 = v27;
        }
        v29 = (unsigned int *)(v27 + 16);
        *(_DWORD *)(v27 + 16) = 4;
        v110 = (PIO_STATUS_BLOCK)&v122;
        p_Event = &Event;
      }
      v107 = v29;
      v115 = v29;
      *(_QWORD *)(v26 + 80) = p_Event;
      *(_QWORD *)(v26 + 72) = v110;
      *(_QWORD *)(v27 + 88) = 0LL;
      v30 = (_QWORD *)(*(_QWORD *)(v27 + 184) - 72LL);
      CurrentThread = v30;
      *(_BYTE *)v30 = 5;
      v31 = v105;
      v30[6] = v105;
      *(_QWORD *)(v27 + 112) = v104;
      *(_QWORD *)(v27 + 24) = 0LL;
      *(_QWORD *)(v27 + 8) = 0LL;
      Pool2 = ExAllocatePool2(0x41uLL);
      *(_QWORD *)(v27 + 24) = Pool2;
      if ( Pool2 )
      {
        v113 = v29;
        *v29 |= 0x870u;
        v35 = CurrentThread;
        v36 = v100;
        *((_DWORD *)CurrentThread + 2) = v100;
        v35[4] = v8;
        if ( v91 )
          *((_BYTE *)v35 + 2) |= 1u;
        IopQueueThreadIrp(v27, v33, v34);
        v39 = KeGetCurrentThread();
        ++v39->OtherOperationCount;
        __incgsdword(0x2EE4u);
        v40 = 0;
        NumaNodeInformation = 0;
        if ( v8 == FileModeInformation )
        {
          v42 = BugCheckParameter2;
          ModeInformation = IopGetModeInformation(BugCheckParameter2, v37, v38, *(_QWORD *)(v27 + 24), Object);
          *v76 = ModeInformation;
          *(_QWORD *)(v27 + 56) = 4LL;
        }
        else if ( v8 == FileAlignmentInformation )
        {
          **(_DWORD **)(v27 + 24) = v15->AlignmentRequirement;
          *(_QWORD *)(v27 + 56) = 4LL;
          v42 = BugCheckParameter2;
        }
        else if ( v8 == FileIoCompletionNotificationInformation )
        {
          v84 = *(int **)(v27 + 24);
          *v84 = 0;
          v42 = BugCheckParameter2;
          v85 = 0;
          if ( (*(_DWORD *)(BugCheckParameter2 + 80) & 0x4000000) != 0 )
          {
            v85 = 2;
            *v84 = 2;
          }
          if ( (*(_DWORD *)(v42 + 80) & 0x8000000) != 0 )
          {
            v85 |= 4u;
            *v84 = v85;
          }
          if ( (*(_DWORD *)(v42 + 80) & 0x2000000) != 0 )
            *v84 = v85 | 1;
          *(_QWORD *)(v27 + 56) = 4LL;
        }
        else if ( v8 == FileIoPriorityHintInformation )
        {
          v42 = BugCheckParameter2;
          v86 = *(_QWORD *)(BugCheckParameter2 + 208);
          if ( v86 && (v87 = *(_DWORD *)(v86 + 88)) != 0 )
            v88 = v87 - 1;
          else
            v88 = 2;
          **(_DWORD **)(v27 + 24) = v88;
          *(_QWORD *)(v27 + 56) = 4LL;
        }
        else
        {
          if ( v8 == FileProcessIdsUsingFileInformation )
          {
            v82 = *(_DWORD **)(v27 + 24);
            LODWORD(v106) = 0;
            v83 = v36;
            v42 = BugCheckParameter2;
            NumaNodeInformation = IopQueryProcessIdsUsingFile(BugCheckParameter2, v82, v83, &v106);
            v40 = 1;
            if ( NumaNodeInformation == -1073741820 )
              v102->Information = (unsigned int)v106;
            else
              *(_QWORD *)(v27 + 56) = (unsigned int)v106;
          }
          else
          {
            v42 = BugCheckParameter2;
            if ( v8 == FileNumaNodeInformation )
            {
              NumaNodeInformation = IopGetNumaNodeInformation(BugCheckParameter2, *(USHORT **)(v27 + 24));
              v40 = 1;
              if ( NumaNodeInformation >= 0 )
                *(_QWORD *)(v27 + 56) = 2LL;
            }
            else if ( v8 == FileAllInformation )
            {
              v43 = *(_DWORD **)(v27 + 24);
              v43[19] = HandleInformation.GrantedAccess;
              v44 = *(_DWORD *)(v42 + 80);
              v45 = (v44 >> 3) & 2 | 4;
              if ( (v44 & 0x20) == 0 )
                v45 = (*(_DWORD *)(v42 + 80) >> 3) & 2;
              v46 = v45 | 8;
              if ( (v44 & 8) == 0 )
                v46 = v45;
              if ( (v44 & 2) != 0 )
              {
                if ( (v44 & 4) != 0 )
                  v46 |= 0x10u;
                else
                  v46 |= 0x20u;
              }
              v47 = v46 | 0x1000;
              if ( (v44 & 0x10000) == 0 )
                v47 = v46;
              v43[22] = v47;
              v43[23] = v15->AlignmentRequirement;
              *(_QWORD *)(v27 + 56) = 12LL;
            }
          }
          if ( !v40 )
          {
            CurrentThread = (PVOID)v42;
            if ( !v24 )
              PsReferenceSiloContext((void *)v42);
            v48 = *(_QWORD *)(v42 + 208);
            if ( v48 && (v74 = *(_DWORD *)(v48 + 88)) != 0 )
            {
              v53 = v74 << 17;
            }
            else
            {
              v49 = KeGetCurrentThread();
              v50 = (*((_DWORD *)&v49[1].SwapListEntry + 2) >> 9) & 7;
              v51 = v49->Process[1].Padding[3];
              if ( v51 )
              {
                v52 = *(_DWORD *)(v51 + 1084);
                if ( v50 >= v52 )
                  v50 = v52;
              }
              if ( v50 < 2 && v49 == KeGetCurrentThread() && LODWORD(v49[1].Timer.TimerListEntry.Flink) )
                v50 = 2;
              v53 = (v50 << 17) + 0x20000;
              v42 = BugCheckParameter2;
            }
            v54 = v107;
            v55 = *v107 & 0xFFF1FFFF;
            v56 = v55 | v53;
            *v107 = v55;
            *v113 = v56;
            if ( IoGetIoPriorityHint((PIRP)v27) < IoPriorityNormal && !*(_BYTE *)Entry )
            {
              v77 = *v120;
              if ( !*v120 || (*(_DWORD *)(v77 + 116) & 0x400) == 0 && (*(_DWORD *)(v77 + 1444) & 0x80u) == 0 )
              {
                ++IoKernelIssuedIoBoostedCount;
                *v54 = v56 & 0xFFF1FFFF | 0x60000;
              }
            }
            if ( *(char *)(v27 + 71) >= 0 && (v57 = *(_BYTE **)(v27 + 200)) != 0LL && (*v57 & 2) != 0 )
            {
              v58 = 1;
            }
            else
            {
              v58 = 0;
              v103 = v121;
            }
            if ( v58 )
            {
              v124 = 0LL;
              v124 = *(struct _LIST_ENTRY *)(*(_QWORD *)(v103 + 200) + 24LL);
              v81 = IoSetActivityIdThread(&v124);
              NumaNodeInformation = IofCallDriver(v15, (PIRP)v27);
              IoSetActivityIdThread(v81);
            }
            else
            {
              NumaNodeInformation = IofCallDriver(v15, (PIRP)v27);
            }
            if ( !v24 )
              ObDereferenceObjectDeferDelete(CurrentThread);
LABEL_60:
            if ( NumaNodeInformation == 259 )
            {
              if ( !v24 )
              {
                v72 = KeWaitForSingleObject(&Event, Executive, v92, 0, 0LL);
                if ( v72 == 257 || v72 == 192 )
                  IopCancelAlertedRequest(&Event, (PIRP)v27);
                NumaNodeInformation = v122;
                *(_OWORD *)&v102->Status = v122;
                goto LABEL_67;
              }
              v59 = *(_DWORD *)(v42 + 80) & 4;
              while ( (*(_BYTE *)(v42 + 152) & 0x7F) != 0 || !*(_DWORD *)(v42 + 156) )
              {
                v66 = 0;
                if ( v59 )
                  v66 = v92;
                v67 = KeWaitForSingleObject((PVOID)(v42 + 152), Executive, v66, 1u, 0LL);
                if ( v67 != 192 && v67 != 257 )
                  break;
                if ( !v59 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
                {
                  v68 = 0;
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( KiIrqlFlags )
                    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
                  if ( !*(_DWORD *)(v42 + 156) )
                    v68 = *(_BYTE *)(v27 + 68) == 1;
                  if ( KiIrqlFlags )
                    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                  __writecr8(CurrentIrql);
                  if ( !v68 )
                    continue;
                }
                IopCancelAlertedRequest((PVOID)(v42 + 152), (PIRP)v27);
                break;
              }
              v60 = BugCheckParameter2;
              NumaNodeInformation = *(_DWORD *)(BugCheckParameter2 + 56);
            }
            else
            {
              v106 = 0LL;
              if ( !v24 )
                *(_QWORD *)(v27 + 80) = 0LL;
              *(_QWORD *)(v27 + 72) = v102;
              v71 = KeGetCurrentIrql();
              __writecr8(1uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(v71, 1);
              IopCompleteRequest(v27 + 120, (__int64)&v124, &v106, &BugCheckParameter2, &v106);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v71);
              __writecr8(v71);
              if ( !v24 )
                goto LABEL_67;
              v60 = v42;
            }
            IopReleaseFileObjectLock(v60);
LABEL_67:
            if ( v93 )
              KeSetKernelStackSwapEnable(1u);
            return NumaNodeInformation;
          }
        }
        *(_DWORD *)(v27 + 48) = NumaNodeInformation;
        goto LABEL_60;
      }
      IopExceptionCleanupEx(v31, (PIRP)v27, 0LL, 0LL, (*(_DWORD *)(v31 + 80) & 2) != 0);
      if ( v93 )
        KeSetKernelStackSwapEnable(1u);
      return -1073741670;
    }
    else
    {
      if ( (*p_Flags & 2) != 0 )
        IopReleaseFileObjectLock((ULONG_PTR)v12);
      ObfDereferenceObject(v12);
      return -1073741670;
    }
  }
}
