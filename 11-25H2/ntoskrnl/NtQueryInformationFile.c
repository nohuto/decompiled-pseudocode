/*
 * XREFs of NtQueryInformationFile @ 0x140987790
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x140470B00 (PfpFileCheckAttributesForPrefetch.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1407761E0 (RtlIsPartialPlaceholderFileHandle.c)
 *     SdbpGetFileTimestamp @ 0x1407F139C (SdbpGetFileTimestamp.c)
 *     PfSnGetPrefetchInstructions @ 0x140987464 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     IopResetEvent @ 0x1402A1570 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x1402A1E80 (IoGetAttachedDevice.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403F2E60 (ObDereferenceObjectDeferDelete.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     IoGetIoPriorityHint @ 0x140404E50 (IoGetIoPriorityHint.c)
 *     KeSetKernelStackSwapEnable @ 0x14044AF70 (KeSetKernelStackSwapEnable.c)
 *     IoSetActivityIdThread @ 0x14045CC40 (IoSetActivityIdThread.c)
 *     IopGetFileVolumeNameInformation @ 0x14049B5AC (IopGetFileVolumeNameInformation.c)
 *     MmIsDriverVerifying @ 0x14049F5C0 (MmIsDriverVerifying.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopGetNumaNodeInformation @ 0x14070BA98 (IopGetNumaNodeInformation.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 *     IopQueryProcessIdsUsingFile @ 0x140986140 (IopQueryProcessIdsUsingFile.c)
 *     IopCancelAlertedRequest @ 0x1409868F0 (IopCancelAlertedRequest.c)
 *     IopValidateQueryInformationParameters @ 0x140988620 (IopValidateQueryInformationParameters.c)
 *     IopExceptionCleanupEx @ 0x1409887B0 (IopExceptionCleanupEx.c)
 *     IopGetModeInformation @ 0x14098886C (IopGetModeInformation.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140B99470 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140B997F8 (VfFastIoSnapState.c)
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
  __int64 *v20; // rax
  ULONG_PTR FastIoQueryBasicInfo; // rax
  PFAST_IO_QUERY_STANDARD_INFO FastIoQueryStandardInfo; // r14
  char v23; // si
  __int64 Irp; // rax
  __int64 v25; // rcx
  __int64 v26; // r14
  struct _KEVENT *p_Event; // rax
  unsigned int *v28; // rdi
  _QWORD *v29; // rax
  ULONG_PTR v30; // r15
  __int64 Pool2; // rax
  _DWORD *v32; // rax
  ULONG v33; // r15d
  __int64 v34; // rdx
  __int64 v35; // r8
  struct _KTHREAD *v36; // rax
  char v37; // r10
  NTSTATUS NumaNodeInformation; // edi
  ULONG_PTR v39; // r15
  _DWORD *v40; // r9
  unsigned int v41; // r8d
  int v42; // edx
  int v43; // ecx
  int v44; // eax
  __int64 v45; // rbx
  struct _KTHREAD *v46; // rcx
  int v47; // ebx
  unsigned __int64 v48; // rax
  int v49; // eax
  int v50; // ebx
  unsigned int *v51; // rdi
  unsigned int v52; // eax
  int v53; // ebx
  _BYTE *v54; // rax
  char v55; // cl
  int v56; // edi
  ULONG_PTR v57; // rcx
  _DWORD *v58; // rax
  bool IsProcessAppContainer; // al
  void *v60; // rax
  char v61; // al
  ULONG_PTR v62; // r14
  KPROCESSOR_MODE v63; // r8
  NTSTATUS v64; // eax
  bool v65; // r12
  unsigned __int8 CurrentIrql; // si
  PIO_STATUS_BLOCK v67; // rax
  unsigned __int8 v68; // bl
  NTSTATUS v69; // eax
  NTSTATUS FileVolumeNameInformation; // ebx
  int v71; // ebx
  int ModeInformation; // eax
  _DWORD *v73; // r9
  __int64 v74; // rcx
  PIO_STATUS_BLOCK v75; // rax
  struct _KTHREAD *v76; // rax
  PIO_STATUS_BLOCK v77; // rax
  struct _LIST_ENTRY *v78; // rbx
  _DWORD *v79; // rdx
  int v80; // r8d
  int *v81; // rcx
  int v82; // edx
  __int64 v83; // rax
  int v84; // ecx
  int v85; // eax
  PVOID *Object; // [rsp+20h] [rbp-158h]
  char v87; // [rsp+30h] [rbp-148h]
  char v88; // [rsp+32h] [rbp-146h]
  unsigned __int8 v89; // [rsp+33h] [rbp-145h]
  BOOLEAN v90; // [rsp+34h] [rbp-144h]
  char v91; // [rsp+37h] [rbp-141h] BYREF
  char v92; // [rsp+38h] [rbp-140h]
  char v93; // [rsp+39h] [rbp-13Fh]
  unsigned __int8 v94; // [rsp+3Ah] [rbp-13Eh]
  int v95; // [rsp+3Ch] [rbp-13Ch]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-138h] BYREF
  ULONG v97; // [rsp+48h] [rbp-130h]
  PVOID v98; // [rsp+50h] [rbp-128h] BYREF
  PIO_STATUS_BLOCK v99; // [rsp+58h] [rbp-120h]
  __int64 v100; // [rsp+60h] [rbp-118h]
  _DWORD *v101; // [rsp+68h] [rbp-110h]
  ULONG_PTR v102; // [rsp+70h] [rbp-108h]
  __int64 v103; // [rsp+78h] [rbp-100h] BYREF
  unsigned int *v104; // [rsp+80h] [rbp-F8h]
  PVOID Entry; // [rsp+88h] [rbp-F0h]
  PVOID CurrentThread; // [rsp+90h] [rbp-E8h]
  PIO_STATUS_BLOCK v107; // [rsp+98h] [rbp-E0h]
  PDEVICE_OBJECT v108; // [rsp+A0h] [rbp-D8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A8h] [rbp-D0h] BYREF
  _DWORD *v110; // [rsp+B0h] [rbp-C8h]
  PIO_STATUS_BLOCK v111; // [rsp+B8h] [rbp-C0h]
  PVOID v112; // [rsp+C0h] [rbp-B8h]
  __int64 v113; // [rsp+C8h] [rbp-B0h]
  PIO_STATUS_BLOCK v114; // [rsp+D0h] [rbp-A8h]
  __int128 v115; // [rsp+D8h] [rbp-A0h]
  void *v116; // [rsp+E8h] [rbp-90h]
  __int64 *v117; // [rsp+F0h] [rbp-88h]
  __int64 v118; // [rsp+F8h] [rbp-80h]
  __int128 v119; // [rsp+100h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+110h] [rbp-68h] BYREF
  struct _LIST_ENTRY v121; // [rsp+128h] [rbp-50h] BYREF

  v97 = Length;
  v101 = FileInformation;
  v99 = IoStatusBlock;
  v114 = IoStatusBlock;
  v107 = IoStatusBlock;
  v111 = IoStatusBlock;
  v112 = FileInformation;
  LODWORD(v104) = Length;
  v8 = FileInformationClass;
  LODWORD(v100) = FileInformationClass;
  memset(&Event, 0, sizeof(Event));
  v119 = 0LL;
  HandleInformation = 0LL;
  v90 = 0;
  v88 = 0;
  CurrentThread = KeGetCurrentThread();
  v89 = *((_BYTE *)CurrentThread + 562);
  v94 = v89;
  result = IopValidateQueryInformationParameters(
             v89,
             (_DWORD)CurrentThread,
             (_DWORD)IoStatusBlock,
             (_DWORD)FileInformation,
             Length,
             FileInformationClass);
  if ( result < 0 )
    return result;
  if ( !v89 && FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
  {
    v8 = FileCaseSensitiveInformation;
    LODWORD(v100) = 71;
    v88 = 1;
  }
  v10 = IopQueryOperationAccess[v8];
  v98 = 0LL;
  v11 = ObReferenceObjectByHandle(FileHandle, v10, (POBJECT_TYPE)IoFileObjectType, v89, &v98, &HandleInformation);
  v12 = (struct _FILE_OBJECT *)v98;
  v102 = (ULONG_PTR)v98;
  BugCheckParameter2 = (ULONG_PTR)v98;
  if ( v11 >= 0 )
  {
    v58 = (_DWORD *)*((_QWORD *)v98 + 26);
    if ( v58 )
    {
      if ( (*v58 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process);
        v12 = (struct _FILE_OBJECT *)v98;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(v98);
          v11 = -1073739504;
        }
        v102 = BugCheckParameter2;
      }
    }
  }
  v95 = v11;
  if ( v11 < 0 )
    return v11;
  if ( v8 == FileAccessInformation )
  {
    v76 = KeGetCurrentThread();
    ++v76->OtherOperationCount;
    __incgsdword(0x2EE4u);
    if ( Length < 4 )
    {
      ObfDereferenceObject(v98);
      return -1073741820;
    }
    *(_DWORD *)FileInformation = HandleInformation.GrantedAccess;
    v77 = v99;
    v99->Status = 0;
    v77->Information = 4LL;
    v11 = v95;
    ObfDereferenceObject(v98);
    return v11;
  }
  p_Flags = &v12->Flags;
  v113 = (__int64)&v12->Flags;
  if ( (v12->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v12->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v12);
  v15 = AttachedDevice;
  v108 = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  if ( v8 == FileIsRemoteDeviceInformation )
  {
    if ( v97 )
    {
      *(_BYTE *)v101 = (v12->DeviceObject->Characteristics & 0x10) != 0;
      v75 = v99;
      v99->Status = 0;
      v75->Information = 1LL;
      goto LABEL_93;
    }
    ObfDereferenceObject(v12);
    return -1073741820;
  }
  else
  {
    if ( v8 == FileVolumeNameInformation )
    {
      FileVolumeNameInformation = IopGetFileVolumeNameInformation(v12->DeviceObject, (__int64)v99, v101, v97);
      ObfDereferenceObject(v12);
      return FileVolumeNameInformation;
    }
    if ( (*p_Flags & 2) != 0 )
    {
      v17 = (*p_Flags & 4) != 0;
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      v19 = (volatile __int32 *)v98;
      v20 = KeAbPreAcquire((__int64)v98 + 128, 0LL);
      v91 = 0;
      if ( _InterlockedExchange(v19 + 29, 1) )
      {
        v12 = (struct _FILE_OBJECT *)v98;
        v11 = IopWaitAndAcquireFileObjectLock((_DWORD)v98, v89, v17, (_DWORD)v20, (__int64)&v91);
      }
      else
      {
        if ( v20 )
          *((_BYTE *)v20 + 10) = 1;
        v12 = (struct _FILE_OBJECT *)v98;
        PsReferenceSiloContext(v98);
        v11 = 0;
      }
      v95 = v11;
      if ( v91 )
        goto LABEL_93;
      if ( v8 == FilePositionInformation )
      {
        v92 = 1;
        if ( v97 < 8 )
        {
          v11 = -1073741820;
        }
        else
        {
          *(_QWORD *)v101 = v12->CurrentByteOffset.QuadPart;
          v92 = 0;
          v67 = v99;
          v99->Status = 0;
          v67->Information = 8LL;
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
              v102 = FastIoQueryBasicInfo,
              v110 = (_DWORD *)FastIoQueryBasicInfo,
              FastIoQueryStandardInfo = FastIoDispatch->FastIoQueryStandardInfo,
              v8 == FileBasicInformation)
          && FastIoQueryBasicInfo
          || v8 == FileStandardInformation && FastIoQueryStandardInfo )
        {
          v115 = 0LL;
          v93 = 0;
          if ( (MmVerifierData & 0x10) != 0
            && (Entry = v15->DriverObject, MmIsDriverVerifying((struct _DRIVER_OBJECT *)Entry)) )
          {
            v60 = (void *)VfFastIoSnapState(Entry);
          }
          else
          {
            v60 = 0LL;
          }
          Entry = v60;
          v116 = v60;
          Object = (PVOID *)v15;
          if ( v8 == FileBasicInformation )
          {
            v62 = v102;
            v61 = guard_dispatch_icall_no_overrides(v12);
            v87 = v61;
          }
          else
          {
            v61 = guard_dispatch_icall_no_overrides(v12);
            v87 = v61;
            v62 = v102;
          }
          if ( Entry )
          {
            VfFastIoCheckState(Entry, v62);
            v61 = v87;
          }
          if ( v61 )
          {
            v11 = v115;
            v95 = v115;
            v93 = 1;
            *(_OWORD *)&v99->Status = v115;
            v61 = v87;
          }
          if ( v61 )
            goto LABEL_92;
        }
      }
      v23 = 1;
      v102 = BugCheckParameter2;
    }
    else
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v23 = 0;
    }
    IopResetEvent((__int64)v12);
    Irp = IopAllocateIrpExReturn((__int64)v15, (unsigned __int8)v15->StackSize, 0LL);
    v25 = Irp;
    v100 = Irp;
    v26 = Irp;
    v113 = Irp;
    v118 = Irp;
    if ( Irp )
    {
      *(_QWORD *)(Irp + 192) = v12;
      v117 = (__int64 *)(Irp + 152);
      *(_QWORD *)(Irp + 152) = CurrentThread;
      Entry = (PVOID)(Irp + 64);
      *(_BYTE *)(Irp + 64) = v89;
      if ( v23 )
      {
        *(_BYTE *)(Irp + 71) |= 2u;
        p_Event = 0LL;
        v28 = (unsigned int *)(v25 + 16);
      }
      else
      {
        if ( v89 == 1 )
        {
          v90 = KeSetKernelStackSwapEnable(0);
          v25 = v26;
        }
        v28 = (unsigned int *)(v26 + 16);
        *(_DWORD *)(v26 + 16) = 4;
        v107 = (PIO_STATUS_BLOCK)&v119;
        p_Event = &Event;
      }
      v104 = v28;
      v112 = v28;
      *(_QWORD *)(v25 + 80) = p_Event;
      *(_QWORD *)(v25 + 72) = v107;
      *(_QWORD *)(v26 + 88) = 0LL;
      v29 = (_QWORD *)(*(_QWORD *)(v26 + 184) - 72LL);
      CurrentThread = v29;
      *(_BYTE *)v29 = 5;
      v30 = v102;
      v29[6] = v102;
      *(_QWORD *)(v26 + 112) = v101;
      *(_QWORD *)(v26 + 24) = 0LL;
      *(_QWORD *)(v26 + 8) = 0LL;
      Pool2 = ExAllocatePool2(0x41uLL);
      *(_QWORD *)(v26 + 24) = Pool2;
      if ( Pool2 )
      {
        v110 = v28;
        *v28 |= 0x870u;
        v32 = CurrentThread;
        v33 = v97;
        *((_DWORD *)CurrentThread + 2) = v97;
        v32[4] = v8;
        if ( v88 )
          *((_BYTE *)v32 + 2) |= 1u;
        IopQueueThreadIrp(v26);
        v36 = KeGetCurrentThread();
        ++v36->OtherOperationCount;
        __incgsdword(0x2EE4u);
        v37 = 0;
        NumaNodeInformation = 0;
        if ( v8 == FileModeInformation )
        {
          v39 = BugCheckParameter2;
          ModeInformation = IopGetModeInformation(BugCheckParameter2, v34, v35, *(_QWORD *)(v26 + 24), Object);
          *v73 = ModeInformation;
          *(_QWORD *)(v26 + 56) = 4LL;
        }
        else if ( v8 == FileAlignmentInformation )
        {
          **(_DWORD **)(v26 + 24) = v15->AlignmentRequirement;
          *(_QWORD *)(v26 + 56) = 4LL;
          v39 = BugCheckParameter2;
        }
        else if ( v8 == FileIoCompletionNotificationInformation )
        {
          v81 = *(int **)(v26 + 24);
          *v81 = 0;
          v39 = BugCheckParameter2;
          v82 = 0;
          if ( (*(_DWORD *)(BugCheckParameter2 + 80) & 0x4000000) != 0 )
          {
            v82 = 2;
            *v81 = 2;
          }
          if ( (*(_DWORD *)(v39 + 80) & 0x8000000) != 0 )
          {
            v82 |= 4u;
            *v81 = v82;
          }
          if ( (*(_DWORD *)(v39 + 80) & 0x2000000) != 0 )
            *v81 = v82 | 1;
          *(_QWORD *)(v26 + 56) = 4LL;
        }
        else if ( v8 == FileIoPriorityHintInformation )
        {
          v39 = BugCheckParameter2;
          v83 = *(_QWORD *)(BugCheckParameter2 + 208);
          if ( v83 && (v84 = *(_DWORD *)(v83 + 88)) != 0 )
            v85 = v84 - 1;
          else
            v85 = 2;
          **(_DWORD **)(v26 + 24) = v85;
          *(_QWORD *)(v26 + 56) = 4LL;
        }
        else
        {
          if ( v8 == FileProcessIdsUsingFileInformation )
          {
            v79 = *(_DWORD **)(v26 + 24);
            LODWORD(v103) = 0;
            v80 = v33;
            v39 = BugCheckParameter2;
            NumaNodeInformation = IopQueryProcessIdsUsingFile(BugCheckParameter2, v79, v80, &v103);
            v37 = 1;
            if ( NumaNodeInformation == -1073741820 )
              v99->Information = (unsigned int)v103;
            else
              *(_QWORD *)(v26 + 56) = (unsigned int)v103;
          }
          else
          {
            v39 = BugCheckParameter2;
            if ( v8 == FileNumaNodeInformation )
            {
              NumaNodeInformation = IopGetNumaNodeInformation(BugCheckParameter2, *(USHORT **)(v26 + 24));
              v37 = 1;
              if ( NumaNodeInformation >= 0 )
                *(_QWORD *)(v26 + 56) = 2LL;
            }
            else if ( v8 == FileAllInformation )
            {
              v40 = *(_DWORD **)(v26 + 24);
              v40[19] = HandleInformation.GrantedAccess;
              v41 = *(_DWORD *)(v39 + 80);
              v42 = (v41 >> 3) & 2 | 4;
              if ( (v41 & 0x20) == 0 )
                v42 = (*(_DWORD *)(v39 + 80) >> 3) & 2;
              v43 = v42 | 8;
              if ( (v41 & 8) == 0 )
                v43 = v42;
              if ( (v41 & 2) != 0 )
              {
                if ( (v41 & 4) != 0 )
                  v43 |= 0x10u;
                else
                  v43 |= 0x20u;
              }
              v44 = v43 | 0x1000;
              if ( (v41 & 0x10000) == 0 )
                v44 = v43;
              v40[22] = v44;
              v40[23] = v15->AlignmentRequirement;
              *(_QWORD *)(v26 + 56) = 12LL;
            }
          }
          if ( !v37 )
          {
            CurrentThread = (PVOID)v39;
            if ( !v23 )
              PsReferenceSiloContext((void *)v39);
            v45 = *(_QWORD *)(v39 + 208);
            if ( v45 && (v71 = *(_DWORD *)(v45 + 88)) != 0 )
            {
              v50 = v71 << 17;
            }
            else
            {
              v46 = KeGetCurrentThread();
              v47 = (*((_DWORD *)&v46[1].SwapListEntry + 2) >> 9) & 7;
              v48 = v46->Process[1].Padding[3];
              if ( v48 )
              {
                v49 = *(_DWORD *)(v48 + 1084);
                if ( v47 >= v49 )
                  v47 = v49;
              }
              if ( v47 < 2 && v46 == KeGetCurrentThread() && LODWORD(v46[1].Timer.TimerListEntry.Flink) )
                v47 = 2;
              v50 = (v47 << 17) + 0x20000;
              v39 = BugCheckParameter2;
            }
            v51 = v104;
            v52 = *v104 & 0xFFF1FFFF;
            v53 = v52 | v50;
            *v104 = v52;
            *v110 = v53;
            if ( IoGetIoPriorityHint((PIRP)v26) < IoPriorityNormal && !*(_BYTE *)Entry )
            {
              v74 = *v117;
              if ( !*v117 || (*(_DWORD *)(v74 + 116) & 0x400) == 0 && (*(_DWORD *)(v74 + 1444) & 0x80u) == 0 )
              {
                ++IoKernelIssuedIoBoostedCount;
                *v51 = v53 & 0xFFF1FFFF | 0x60000;
              }
            }
            if ( *(char *)(v26 + 71) >= 0 && (v54 = *(_BYTE **)(v26 + 200)) != 0LL && (*v54 & 2) != 0 )
            {
              v55 = 1;
            }
            else
            {
              v55 = 0;
              v100 = v118;
            }
            if ( v55 )
            {
              v121 = 0LL;
              v121 = *(struct _LIST_ENTRY *)(*(_QWORD *)(v100 + 200) + 24LL);
              v78 = IoSetActivityIdThread(&v121);
              NumaNodeInformation = IofCallDriver(v15, (PIRP)v26);
              IoSetActivityIdThread(v78);
            }
            else
            {
              NumaNodeInformation = IofCallDriver(v15, (PIRP)v26);
            }
            if ( !v23 )
              ObDereferenceObjectDeferDelete(CurrentThread);
LABEL_60:
            if ( NumaNodeInformation == 259 )
            {
              if ( !v23 )
              {
                v69 = KeWaitForSingleObject(&Event, Executive, v89, 0, 0LL);
                if ( v69 == 257 || v69 == 192 )
                  IopCancelAlertedRequest(&Event, (PIRP)v26);
                NumaNodeInformation = v119;
                *(_OWORD *)&v99->Status = v119;
                goto LABEL_67;
              }
              v56 = *(_DWORD *)(v39 + 80) & 4;
              while ( (*(_BYTE *)(v39 + 152) & 0x7F) != 0 || !*(_DWORD *)(v39 + 156) )
              {
                v63 = 0;
                if ( v56 )
                  v63 = v89;
                v64 = KeWaitForSingleObject((PVOID)(v39 + 152), Executive, v63, 1u, 0LL);
                if ( v64 != 192 && v64 != 257 )
                  break;
                if ( !v56 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
                {
                  v65 = 0;
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( KiIrqlFlags )
                    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
                  if ( !*(_DWORD *)(v39 + 156) )
                    v65 = *(_BYTE *)(v26 + 68) == 1;
                  if ( KiIrqlFlags )
                    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                  __writecr8(CurrentIrql);
                  if ( !v65 )
                    continue;
                }
                IopCancelAlertedRequest((_DWORD *)(v39 + 152), (PIRP)v26);
                break;
              }
              v57 = BugCheckParameter2;
              NumaNodeInformation = *(_DWORD *)(BugCheckParameter2 + 56);
            }
            else
            {
              v103 = 0LL;
              if ( !v23 )
                *(_QWORD *)(v26 + 80) = 0LL;
              *(_QWORD *)(v26 + 72) = v99;
              v68 = KeGetCurrentIrql();
              __writecr8(1uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(v68, 1);
              IopCompleteRequest(v26 + 120, (__int64)&v121, &v103, &BugCheckParameter2, &v103);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v68);
              __writecr8(v68);
              if ( !v23 )
                goto LABEL_67;
              v57 = v39;
            }
            IopReleaseFileObjectLock(v57);
LABEL_67:
            if ( v90 )
              KeSetKernelStackSwapEnable(1u);
            return NumaNodeInformation;
          }
        }
        *(_DWORD *)(v26 + 48) = NumaNodeInformation;
        goto LABEL_60;
      }
      IopExceptionCleanupEx(v30, (PIRP)v26, 0LL, 0LL, (*(_DWORD *)(v30 + 80) & 2) != 0);
      if ( v90 )
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
