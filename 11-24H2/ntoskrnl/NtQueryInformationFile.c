/*
 * XREFs of NtQueryInformationFile @ 0x140957E20
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x140469800 (PfpFileCheckAttributesForPrefetch.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x140785360 (RtlIsPartialPlaceholderFileHandle.c)
 *     SdbpGetFileTimestamp @ 0x14080199C (SdbpGetFileTimestamp.c)
 *     PfSnGetPrefetchInstructions @ 0x140959434 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x1403B3B80 (IoGetAttachedDevice.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403B48A0 (ObDereferenceObjectDeferDelete.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IoGetIoPriorityHint @ 0x140404E50 (IoGetIoPriorityHint.c)
 *     KeSetKernelStackSwapEnable @ 0x1404415E0 (KeSetKernelStackSwapEnable.c)
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     IopGetFileVolumeNameInformation @ 0x14049637C (IopGetFileVolumeNameInformation.c)
 *     MmIsDriverVerifying @ 0x140499230 (MmIsDriverVerifying.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopGetNumaNodeInformation @ 0x140715728 (IopGetNumaNodeInformation.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 *     IopQueryProcessIdsUsingFile @ 0x140860E10 (IopQueryProcessIdsUsingFile.c)
 *     IopValidateQueryInformationParameters @ 0x140958CB0 (IopValidateQueryInformationParameters.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     IopGetModeInformation @ 0x140958EF4 (IopGetModeInformation.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     IopCancelAlertedRequest @ 0x140A76074 (IopCancelAlertedRequest.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BAB7CC (VfFastIoSnapState.c)
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
  _DWORD *v33; // rax
  ULONG v34; // r15d
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _KTHREAD *v37; // rax
  char v38; // r10
  NTSTATUS NumaNodeInformation; // edi
  ULONG_PTR v40; // r15
  _DWORD *v41; // r9
  unsigned int v42; // r8d
  int v43; // edx
  int v44; // ecx
  int v45; // eax
  __int64 v46; // rbx
  struct _KTHREAD *v47; // rcx
  int v48; // ebx
  unsigned __int64 v49; // rax
  int v50; // eax
  int v51; // ebx
  unsigned int *v52; // rdi
  unsigned int v53; // eax
  int v54; // ebx
  _BYTE *v55; // rax
  char v56; // cl
  int v57; // edi
  ULONG_PTR v58; // rcx
  _DWORD *v59; // rax
  bool IsProcessAppContainer; // al
  void *v61; // rax
  char v62; // al
  ULONG_PTR v63; // r14
  KPROCESSOR_MODE v64; // r8
  NTSTATUS v65; // eax
  bool v66; // r12
  unsigned __int8 CurrentIrql; // si
  PIO_STATUS_BLOCK v68; // rax
  unsigned __int8 v69; // bl
  NTSTATUS v70; // eax
  NTSTATUS FileVolumeNameInformation; // ebx
  int v72; // ebx
  int ModeInformation; // eax
  _DWORD *v74; // r9
  __int64 v75; // rcx
  PIO_STATUS_BLOCK v76; // rax
  struct _KTHREAD *v77; // rax
  PIO_STATUS_BLOCK v78; // rax
  struct _LIST_ENTRY *v79; // rbx
  _DWORD *v80; // rdx
  int v81; // r8d
  int *v82; // rcx
  int v83; // edx
  __int64 v84; // rax
  int v85; // ecx
  int v86; // eax
  PVOID *Object; // [rsp+20h] [rbp-158h]
  char v88; // [rsp+30h] [rbp-148h]
  char v89; // [rsp+32h] [rbp-146h]
  unsigned __int8 v90; // [rsp+33h] [rbp-145h]
  BOOLEAN v91; // [rsp+34h] [rbp-144h]
  char v92; // [rsp+37h] [rbp-141h] BYREF
  char v93; // [rsp+38h] [rbp-140h]
  char v94; // [rsp+39h] [rbp-13Fh]
  unsigned __int8 v95; // [rsp+3Ah] [rbp-13Eh]
  int v96; // [rsp+3Ch] [rbp-13Ch]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-138h] BYREF
  ULONG v98; // [rsp+48h] [rbp-130h]
  PVOID v99; // [rsp+50h] [rbp-128h] BYREF
  PIO_STATUS_BLOCK v100; // [rsp+58h] [rbp-120h]
  __int64 v101; // [rsp+60h] [rbp-118h]
  _DWORD *v102; // [rsp+68h] [rbp-110h]
  ULONG_PTR v103; // [rsp+70h] [rbp-108h]
  __int64 v104; // [rsp+78h] [rbp-100h] BYREF
  unsigned int *v105; // [rsp+80h] [rbp-F8h]
  PVOID Entry; // [rsp+88h] [rbp-F0h]
  PVOID CurrentThread; // [rsp+90h] [rbp-E8h]
  PIO_STATUS_BLOCK v108; // [rsp+98h] [rbp-E0h]
  PDEVICE_OBJECT v109; // [rsp+A0h] [rbp-D8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A8h] [rbp-D0h] BYREF
  _DWORD *v111; // [rsp+B0h] [rbp-C8h]
  PIO_STATUS_BLOCK v112; // [rsp+B8h] [rbp-C0h]
  PVOID v113; // [rsp+C0h] [rbp-B8h]
  __int64 v114; // [rsp+C8h] [rbp-B0h]
  PIO_STATUS_BLOCK v115; // [rsp+D0h] [rbp-A8h]
  __int128 v116; // [rsp+D8h] [rbp-A0h]
  void *v117; // [rsp+E8h] [rbp-90h]
  __int64 *v118; // [rsp+F0h] [rbp-88h]
  __int64 v119; // [rsp+F8h] [rbp-80h]
  __int128 v120; // [rsp+100h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+110h] [rbp-68h] BYREF
  struct _LIST_ENTRY v122; // [rsp+128h] [rbp-50h] BYREF

  v98 = Length;
  v102 = FileInformation;
  v100 = IoStatusBlock;
  v115 = IoStatusBlock;
  v108 = IoStatusBlock;
  v112 = IoStatusBlock;
  v113 = FileInformation;
  LODWORD(v105) = Length;
  v8 = FileInformationClass;
  LODWORD(v101) = FileInformationClass;
  memset(&Event, 0, sizeof(Event));
  v120 = 0LL;
  HandleInformation = 0LL;
  v91 = 0;
  v89 = 0;
  CurrentThread = KeGetCurrentThread();
  v90 = *((_BYTE *)CurrentThread + 562);
  v95 = v90;
  result = IopValidateQueryInformationParameters(
             v90,
             (_DWORD)CurrentThread,
             (_DWORD)IoStatusBlock,
             (_DWORD)FileInformation,
             Length,
             FileInformationClass);
  if ( result < 0 )
    return result;
  if ( !v90 && FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
  {
    v8 = FileCaseSensitiveInformation;
    LODWORD(v101) = 71;
    v89 = 1;
  }
  v10 = IopQueryOperationAccess[v8];
  v99 = 0LL;
  v11 = ObReferenceObjectByHandle(FileHandle, v10, (POBJECT_TYPE)IoFileObjectType, v90, &v99, &HandleInformation);
  v12 = (struct _FILE_OBJECT *)v99;
  v103 = (ULONG_PTR)v99;
  BugCheckParameter2 = (ULONG_PTR)v99;
  if ( v11 >= 0 )
  {
    v59 = (_DWORD *)*((_QWORD *)v99 + 26);
    if ( v59 )
    {
      if ( (*v59 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process);
        v12 = (struct _FILE_OBJECT *)v99;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(v99);
          v11 = -1073739504;
        }
        v103 = BugCheckParameter2;
      }
    }
  }
  v96 = v11;
  if ( v11 < 0 )
    return v11;
  if ( v8 == FileAccessInformation )
  {
    v77 = KeGetCurrentThread();
    ++v77->OtherOperationCount;
    __incgsdword(0x2EE4u);
    if ( Length < 4 )
    {
      ObfDereferenceObject(v99);
      return -1073741820;
    }
    *(_DWORD *)FileInformation = HandleInformation.GrantedAccess;
    v78 = v100;
    v100->Status = 0;
    v78->Information = 4LL;
    v11 = v96;
    ObfDereferenceObject(v99);
    return v11;
  }
  p_Flags = &v12->Flags;
  v114 = (__int64)&v12->Flags;
  if ( (v12->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v12->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v12);
  v15 = AttachedDevice;
  v109 = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  if ( v8 == FileIsRemoteDeviceInformation )
  {
    if ( v98 )
    {
      *(_BYTE *)v102 = (v12->DeviceObject->Characteristics & 0x10) != 0;
      v76 = v100;
      v100->Status = 0;
      v76->Information = 1LL;
      goto LABEL_93;
    }
    ObfDereferenceObject(v12);
    return -1073741820;
  }
  else
  {
    if ( v8 == FileVolumeNameInformation )
    {
      FileVolumeNameInformation = IopGetFileVolumeNameInformation(v12->DeviceObject, (__int64)v100, v102, v98);
      ObfDereferenceObject(v12);
      return FileVolumeNameInformation;
    }
    if ( (*p_Flags & 2) != 0 )
    {
      v17 = (*p_Flags & 4) != 0;
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      v19 = (volatile __int32 *)v99;
      v20 = KeAbPreAcquire((__int64)v99 + 128, 0LL);
      v92 = 0;
      if ( _InterlockedExchange(v19 + 29, 1) )
      {
        v12 = (struct _FILE_OBJECT *)v99;
        v11 = IopWaitAndAcquireFileObjectLock((_DWORD)v99, v90, v17, (_DWORD)v20, (__int64)&v92);
      }
      else
      {
        if ( v20 )
          *((_BYTE *)v20 + 10) = 1;
        v12 = (struct _FILE_OBJECT *)v99;
        PsReferenceSiloContext(v99);
        v11 = 0;
      }
      v96 = v11;
      if ( v92 )
        goto LABEL_93;
      if ( v8 == FilePositionInformation )
      {
        v93 = 1;
        if ( v98 < 8 )
        {
          v11 = -1073741820;
        }
        else
        {
          *(_QWORD *)v102 = v12->CurrentByteOffset.QuadPart;
          v93 = 0;
          v68 = v100;
          v100->Status = 0;
          v68->Information = 8LL;
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
              v103 = FastIoQueryBasicInfo,
              v111 = (_DWORD *)FastIoQueryBasicInfo,
              FastIoQueryStandardInfo = FastIoDispatch->FastIoQueryStandardInfo,
              v8 == FileBasicInformation)
          && FastIoQueryBasicInfo
          || v8 == FileStandardInformation && FastIoQueryStandardInfo )
        {
          v116 = 0LL;
          v94 = 0;
          if ( (MmVerifierData & 0x10) != 0
            && (Entry = v15->DriverObject, MmIsDriverVerifying((struct _DRIVER_OBJECT *)Entry)) )
          {
            v61 = (void *)VfFastIoSnapState(Entry);
          }
          else
          {
            v61 = 0LL;
          }
          Entry = v61;
          v117 = v61;
          Object = (PVOID *)v15;
          LOBYTE(v21) = 1;
          if ( v8 == FileBasicInformation )
          {
            v63 = v103;
            v62 = guard_dispatch_icall_no_overrides(v12, v21);
            v88 = v62;
          }
          else
          {
            v62 = guard_dispatch_icall_no_overrides(v12, v21);
            v88 = v62;
            v63 = v103;
          }
          if ( Entry )
          {
            VfFastIoCheckState(Entry, v63);
            v62 = v88;
          }
          if ( v62 )
          {
            v11 = v116;
            v96 = v116;
            v94 = 1;
            *(_OWORD *)&v100->Status = v116;
            v62 = v88;
          }
          if ( v62 )
            goto LABEL_92;
        }
      }
      v24 = 1;
      v103 = BugCheckParameter2;
    }
    else
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v24 = 0;
    }
    IopResetEvent((__int64)v12);
    Irp = IopAllocateIrpExReturn((__int64)v15, (unsigned __int8)v15->StackSize, 0LL);
    v26 = Irp;
    v101 = Irp;
    v27 = Irp;
    v114 = Irp;
    v119 = Irp;
    if ( Irp )
    {
      *(_QWORD *)(Irp + 192) = v12;
      v118 = (__int64 *)(Irp + 152);
      *(_QWORD *)(Irp + 152) = CurrentThread;
      Entry = (PVOID)(Irp + 64);
      *(_BYTE *)(Irp + 64) = v90;
      if ( v24 )
      {
        *(_BYTE *)(Irp + 71) |= 2u;
        p_Event = 0LL;
        v29 = (unsigned int *)(v26 + 16);
      }
      else
      {
        if ( v90 == 1 )
        {
          v91 = KeSetKernelStackSwapEnable(0);
          v26 = v27;
        }
        v29 = (unsigned int *)(v27 + 16);
        *(_DWORD *)(v27 + 16) = 4;
        v108 = (PIO_STATUS_BLOCK)&v120;
        p_Event = &Event;
      }
      v105 = v29;
      v113 = v29;
      *(_QWORD *)(v26 + 80) = p_Event;
      *(_QWORD *)(v26 + 72) = v108;
      *(_QWORD *)(v27 + 88) = 0LL;
      v30 = (_QWORD *)(*(_QWORD *)(v27 + 184) - 72LL);
      CurrentThread = v30;
      *(_BYTE *)v30 = 5;
      v31 = v103;
      v30[6] = v103;
      *(_QWORD *)(v27 + 112) = v102;
      *(_QWORD *)(v27 + 24) = 0LL;
      *(_QWORD *)(v27 + 8) = 0LL;
      Pool2 = ExAllocatePool2(0x41uLL, v98, 0x42536F49u);
      *(_QWORD *)(v27 + 24) = Pool2;
      if ( Pool2 )
      {
        v111 = v29;
        *v29 |= 0x870u;
        v33 = CurrentThread;
        v34 = v98;
        *((_DWORD *)CurrentThread + 2) = v98;
        v33[4] = v8;
        if ( v89 )
          *((_BYTE *)v33 + 2) |= 1u;
        IopQueueThreadIrp(v27);
        v37 = KeGetCurrentThread();
        ++v37->OtherOperationCount;
        __incgsdword(0x2EE4u);
        v38 = 0;
        NumaNodeInformation = 0;
        if ( v8 == FileModeInformation )
        {
          v40 = BugCheckParameter2;
          ModeInformation = IopGetModeInformation(BugCheckParameter2, v35, v36, *(_QWORD *)(v27 + 24), Object);
          *v74 = ModeInformation;
          *(_QWORD *)(v27 + 56) = 4LL;
        }
        else if ( v8 == FileAlignmentInformation )
        {
          **(_DWORD **)(v27 + 24) = v15->AlignmentRequirement;
          *(_QWORD *)(v27 + 56) = 4LL;
          v40 = BugCheckParameter2;
        }
        else if ( v8 == FileIoCompletionNotificationInformation )
        {
          v82 = *(int **)(v27 + 24);
          *v82 = 0;
          v40 = BugCheckParameter2;
          v83 = 0;
          if ( (*(_DWORD *)(BugCheckParameter2 + 80) & 0x4000000) != 0 )
          {
            v83 = 2;
            *v82 = 2;
          }
          if ( (*(_DWORD *)(v40 + 80) & 0x8000000) != 0 )
          {
            v83 |= 4u;
            *v82 = v83;
          }
          if ( (*(_DWORD *)(v40 + 80) & 0x2000000) != 0 )
            *v82 = v83 | 1;
          *(_QWORD *)(v27 + 56) = 4LL;
        }
        else if ( v8 == FileIoPriorityHintInformation )
        {
          v40 = BugCheckParameter2;
          v84 = *(_QWORD *)(BugCheckParameter2 + 208);
          if ( v84 && (v85 = *(_DWORD *)(v84 + 88)) != 0 )
            v86 = v85 - 1;
          else
            v86 = 2;
          **(_DWORD **)(v27 + 24) = v86;
          *(_QWORD *)(v27 + 56) = 4LL;
        }
        else
        {
          if ( v8 == FileProcessIdsUsingFileInformation )
          {
            v80 = *(_DWORD **)(v27 + 24);
            LODWORD(v104) = 0;
            v81 = v34;
            v40 = BugCheckParameter2;
            NumaNodeInformation = IopQueryProcessIdsUsingFile(BugCheckParameter2, v80, v81, &v104);
            v38 = 1;
            if ( NumaNodeInformation == -1073741820 )
              v100->Information = (unsigned int)v104;
            else
              *(_QWORD *)(v27 + 56) = (unsigned int)v104;
          }
          else
          {
            v40 = BugCheckParameter2;
            if ( v8 == FileNumaNodeInformation )
            {
              NumaNodeInformation = IopGetNumaNodeInformation(BugCheckParameter2, *(USHORT **)(v27 + 24));
              v38 = 1;
              if ( NumaNodeInformation >= 0 )
                *(_QWORD *)(v27 + 56) = 2LL;
            }
            else if ( v8 == FileAllInformation )
            {
              v41 = *(_DWORD **)(v27 + 24);
              v41[19] = HandleInformation.GrantedAccess;
              v42 = *(_DWORD *)(v40 + 80);
              v43 = (v42 >> 3) & 2 | 4;
              if ( (v42 & 0x20) == 0 )
                v43 = (*(_DWORD *)(v40 + 80) >> 3) & 2;
              v44 = v43 | 8;
              if ( (v42 & 8) == 0 )
                v44 = v43;
              if ( (v42 & 2) != 0 )
              {
                if ( (v42 & 4) != 0 )
                  v44 |= 0x10u;
                else
                  v44 |= 0x20u;
              }
              v45 = v44 | 0x1000;
              if ( (v42 & 0x10000) == 0 )
                v45 = v44;
              v41[22] = v45;
              v41[23] = v15->AlignmentRequirement;
              *(_QWORD *)(v27 + 56) = 12LL;
            }
          }
          if ( !v38 )
          {
            CurrentThread = (PVOID)v40;
            if ( !v24 )
              PsReferenceSiloContext((void *)v40);
            v46 = *(_QWORD *)(v40 + 208);
            if ( v46 && (v72 = *(_DWORD *)(v46 + 88)) != 0 )
            {
              v51 = v72 << 17;
            }
            else
            {
              v47 = KeGetCurrentThread();
              v48 = (*((_DWORD *)&v47[1].SwapListEntry + 2) >> 9) & 7;
              v49 = v47->Process[1].Padding[3];
              if ( v49 )
              {
                v50 = *(_DWORD *)(v49 + 1084);
                if ( v48 >= v50 )
                  v48 = v50;
              }
              if ( v48 < 2 && v47 == KeGetCurrentThread() && LODWORD(v47[1].Timer.TimerListEntry.Flink) )
                v48 = 2;
              v51 = (v48 << 17) + 0x20000;
              v40 = BugCheckParameter2;
            }
            v52 = v105;
            v53 = *v105 & 0xFFF1FFFF;
            v54 = v53 | v51;
            *v105 = v53;
            *v111 = v54;
            if ( IoGetIoPriorityHint((PIRP)v27) < IoPriorityNormal && !*(_BYTE *)Entry )
            {
              v75 = *v118;
              if ( !*v118 || (*(_DWORD *)(v75 + 116) & 0x400) == 0 && (*(_DWORD *)(v75 + 1444) & 0x80u) == 0 )
              {
                ++IoKernelIssuedIoBoostedCount;
                *v52 = v54 & 0xFFF1FFFF | 0x60000;
              }
            }
            if ( *(char *)(v27 + 71) >= 0 && (v55 = *(_BYTE **)(v27 + 200)) != 0LL && (*v55 & 2) != 0 )
            {
              v56 = 1;
            }
            else
            {
              v56 = 0;
              v101 = v119;
            }
            if ( v56 )
            {
              v122 = 0LL;
              v122 = *(struct _LIST_ENTRY *)(*(_QWORD *)(v101 + 200) + 24LL);
              v79 = IoSetActivityIdThread(&v122);
              NumaNodeInformation = IofCallDriver(v15, (PIRP)v27);
              IoSetActivityIdThread(v79);
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
                v70 = KeWaitForSingleObject(&Event, Executive, v90, 0, 0LL);
                if ( v70 == 257 || v70 == 192 )
                  IopCancelAlertedRequest(&Event, (PIRP)v27);
                NumaNodeInformation = v120;
                *(_OWORD *)&v100->Status = v120;
                goto LABEL_67;
              }
              v57 = *(_DWORD *)(v40 + 80) & 4;
              while ( (*(_BYTE *)(v40 + 152) & 0x7F) != 0 || !*(_DWORD *)(v40 + 156) )
              {
                v64 = 0;
                if ( v57 )
                  v64 = v90;
                v65 = KeWaitForSingleObject((PVOID)(v40 + 152), Executive, v64, 1u, 0LL);
                if ( v65 != 192 && v65 != 257 )
                  break;
                if ( !v57 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
                {
                  v66 = 0;
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( KiIrqlFlags )
                    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
                  if ( !*(_DWORD *)(v40 + 156) )
                    v66 = *(_BYTE *)(v27 + 68) == 1;
                  if ( KiIrqlFlags )
                    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                  __writecr8(CurrentIrql);
                  if ( !v66 )
                    continue;
                }
                IopCancelAlertedRequest((PVOID)(v40 + 152), (PIRP)v27);
                break;
              }
              v58 = BugCheckParameter2;
              NumaNodeInformation = *(_DWORD *)(BugCheckParameter2 + 56);
            }
            else
            {
              v104 = 0LL;
              if ( !v24 )
                *(_QWORD *)(v27 + 80) = 0LL;
              *(_QWORD *)(v27 + 72) = v100;
              v69 = KeGetCurrentIrql();
              __writecr8(1uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(v69, 1);
              IopCompleteRequest(v27 + 120, (__int64)&v122, &v104, &BugCheckParameter2, &v104);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v69);
              __writecr8(v69);
              if ( !v24 )
                goto LABEL_67;
              v58 = v40;
            }
            IopReleaseFileObjectLock(v58);
LABEL_67:
            if ( v91 )
              KeSetKernelStackSwapEnable(1u);
            return NumaNodeInformation;
          }
        }
        *(_DWORD *)(v27 + 48) = NumaNodeInformation;
        goto LABEL_60;
      }
      IopExceptionCleanupEx(v31, (PIRP)v27, 0LL, 0LL, (*(_DWORD *)(v31 + 80) & 2) != 0);
      if ( v91 )
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
