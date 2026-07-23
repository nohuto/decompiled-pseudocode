/*
 * XREFs of IopXxxControlFile @ 0x1408BF330
 * Callers:
 *     NtFsControlFile @ 0x1408BEAC0 (NtFsControlFile.c)
 *     NtDeviceIoControlFile @ 0x1408BF2C0 (NtDeviceIoControlFile.c)
 *     PfpVolumePrefetchMetadata @ 0x140936598 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140936ED4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchEntireDirectory @ 0x14093753C (PfpPrefetchEntireDirectory.c)
 *     PfSnPrefetchFileMetadata @ 0x140954694 (PfSnPrefetchFileMetadata.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IopDecrementCompletionContextUsageCount @ 0x140230564 (IopDecrementCompletionContextUsageCount.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoSetIoCompletionEx @ 0x1402C51B0 (IoSetIoCompletionEx.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IoGetAttachedDevice @ 0x1403B3B80 (IoGetAttachedDevice.c)
 *     IopSetFileObjectExtensionFlag @ 0x1404278D0 (IopSetFileObjectExtensionFlag.c)
 *     MmUpdateMdlTracker @ 0x14042B0A4 (MmUpdateMdlTracker.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x140433F90 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IoThreadToProcess @ 0x140438740 (IoThreadToProcess.c)
 *     FsRtlGetSupportedFeatures @ 0x140462750 (FsRtlGetSupportedFeatures.c)
 *     MmIsDriverVerifying @ 0x140499230 (MmIsDriverVerifying.c)
 *     memcpy_s @ 0x140501930 (memcpy_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopValidateJunctionTarget @ 0x140710FC8 (IopValidateJunctionTarget.c)
 *     SeCaptureSubjectContextEx @ 0x14083BF00 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     PiCMFastIoDeviceDispatch @ 0x1408C0C50 (PiCMFastIoDeviceDispatch.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     RtlIsSandboxedToken @ 0x1408E3950 (RtlIsSandboxedToken.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     AstAddBloomFilter @ 0x140972BF8 (AstAddBloomFilter.c)
 *     EtwTimLogProhibitFsctlSystemCalls @ 0x140A63D9C (EtwTimLogProhibitFsctlSystemCalls.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BAB7CC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopXxxControlFile(
        HANDLE Handle,
        void *a2,
        LARGE_INTEGER a3,
        __int64 a4,
        struct _IO_STATUS_BLOCK *a5,
        unsigned int a6,
        char *a7,
        int a8,
        void *a9,
        unsigned int a10,
        char a11,
        char a12)
{
  char v13; // bl
  char *v14; // r9
  PVOID v15; // rdx
  LOCK_OPERATION v16; // r14d
  int v17; // r12d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 PreviousMode; // si
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r10
  int v24; // r13d
  struct _FILE_OBJECT *v25; // rdi
  struct _LIST_ENTRY *RelatedDeviceObject; // rax
  unsigned __int64 v27; // rdx
  struct _LIST_ENTRY *v28; // r11
  __int64 v29; // r13
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int8 v33; // r10
  struct _LIST_ENTRY *v34; // rcx
  struct _LIST_ENTRY *Flink; // r10
  __int64 (__fastcall *v36)(int, int, int, int, __int64, int, int, __int64, __int64); // r10
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r8
  char *v40; // r8
  unsigned int v41; // r13d
  char v42; // cl
  unsigned __int64 FsContext; // rax
  __int64 (__fastcall *v44)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, _DWORD, _DWORD, __int64); // r11
  struct _FILE_OBJECT *v45; // rcx
  char v46; // al
  IRP *v47; // rax
  __int64 v48; // r9
  IRP *v49; // r13
  _DWORD *p_MajorFunction; // rdx
  char v51; // r8
  ULONG_PTR v52; // rcx
  ULONG_PTR v53; // rdx
  ULONG_PTR v54; // rcx
  struct _IRP *v55; // rcx
  _DWORD *v57; // rax
  bool IsProcessAppContainer; // al
  _KPROCESS *v59; // rcx
  __int16 v60; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  __int64 v62; // rsi
  struct _IO_STATUS_BLOCK *v63; // rcx
  int v64; // r9d
  HANDLE v65; // rbx
  PVOID v66; // rbx
  bool v67; // r13
  struct _KTHREAD *v68; // rax
  volatile __int32 *v69; // rbx
  _QWORD *v70; // rax
  unsigned int v71; // ebx
  PDEVICE_OBJECT AttachedDevice; // rax
  int SupportedFeatures; // eax
  bool v74; // zf
  ULONG_PTR v75; // rbx
  ULONG_PTR v76; // rcx
  struct _IRP *Pool2; // rax
  struct _KTHREAD *Mdl; // rcx
  _KPROCESS *Process; // r8
  char IdealProcessorAssignmentBlock; // di
  char v81; // al
  char v82; // di
  int v83; // eax
  int v84; // ecx
  rsize_t v85; // r9
  struct _IRP *MasterIrp; // rax
  struct _KPROCESS *v88; // rax
  int v89; // edx
  int Object; // [rsp+20h] [rbp-248h]
  unsigned int HandleInformation; // [rsp+28h] [rbp-240h]
  char v92; // [rsp+50h] [rbp-218h]
  char IsSandboxedToken; // [rsp+51h] [rbp-217h]
  char v94; // [rsp+52h] [rbp-216h]
  ULONG Length; // [rsp+54h] [rbp-214h]
  char v96; // [rsp+58h] [rbp-210h]
  unsigned int v97; // [rsp+60h] [rbp-208h]
  size_t Size; // [rsp+68h] [rbp-200h] BYREF
  char v99; // [rsp+70h] [rbp-1F8h] BYREF
  char v100; // [rsp+71h] [rbp-1F7h] BYREF
  char v101; // [rsp+72h] [rbp-1F6h]
  PVOID v102; // [rsp+78h] [rbp-1F0h] BYREF
  struct _LIST_ENTRY *v103; // [rsp+88h] [rbp-1E0h]
  PVOID v104; // [rsp+90h] [rbp-1D8h]
  void *Src; // [rsp+98h] [rbp-1D0h]
  __int64 (__fastcall *v106)(int, int, int, int, __int64, int, int, __int64, __int64); // [rsp+A0h] [rbp-1C8h]
  PVOID VirtualAddress; // [rsp+A8h] [rbp-1C0h]
  HANDLE Handlea; // [rsp+B0h] [rbp-1B8h]
  __int128 v109; // [rsp+B8h] [rbp-1B0h] BYREF
  int v110; // [rsp+C8h] [rbp-1A0h] BYREF
  int v111; // [rsp+CCh] [rbp-19Ch]
  PIRP Irp; // [rsp+D0h] [rbp-198h]
  struct _IO_STATUS_BLOCK *v113; // [rsp+D8h] [rbp-190h]
  PVOID P; // [rsp+E0h] [rbp-188h] BYREF
  PETHREAD Thread; // [rsp+E8h] [rbp-180h]
  ULONG *p_Flags; // [rsp+F0h] [rbp-178h]
  unsigned int v117; // [rsp+F8h] [rbp-170h] BYREF
  int v118; // [rsp+FCh] [rbp-16Ch] BYREF
  __int64 v119; // [rsp+100h] [rbp-168h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v120; // [rsp+108h] [rbp-160h] BYREF
  PVOID v121; // [rsp+110h] [rbp-158h] BYREF
  __int64 v122; // [rsp+118h] [rbp-150h] BYREF
  __int64 v123; // [rsp+120h] [rbp-148h] BYREF
  struct _LIST_ENTRY *v124; // [rsp+128h] [rbp-140h] BYREF
  unsigned __int64 v125; // [rsp+130h] [rbp-138h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+138h] [rbp-130h] BYREF
  struct _KTHREAD *v127; // [rsp+158h] [rbp-110h]
  unsigned __int64 v128; // [rsp+160h] [rbp-108h]
  unsigned __int64 v129; // [rsp+170h] [rbp-F8h] BYREF
  unsigned __int64 v130; // [rsp+178h] [rbp-F0h]
  unsigned __int64 v131; // [rsp+180h] [rbp-E8h]
  unsigned __int64 v132; // [rsp+188h] [rbp-E0h]
  __int64 v133; // [rsp+190h] [rbp-D8h]
  __int64 v134; // [rsp+198h] [rbp-D0h]
  __int64 v135; // [rsp+1A0h] [rbp-C8h]
  __int64 v136; // [rsp+1A8h] [rbp-C0h]
  struct _EVENT_DATA_DESCRIPTOR v137; // [rsp+1B0h] [rbp-B8h] BYREF
  __int64 *v138; // [rsp+1D0h] [rbp-98h]
  __int64 v139; // [rsp+1D8h] [rbp-90h]
  struct _LIST_ENTRY **v140; // [rsp+1E0h] [rbp-88h]
  __int64 v141; // [rsp+1E8h] [rbp-80h]
  unsigned int *v142; // [rsp+1F0h] [rbp-78h]
  __int64 v143; // [rsp+1F8h] [rbp-70h]
  unsigned __int64 *v144; // [rsp+200h] [rbp-68h]
  __int64 v145; // [rsp+208h] [rbp-60h]
  int *v146; // [rsp+210h] [rbp-58h]
  __int64 v147; // [rsp+218h] [rbp-50h]

  Handlea = a2;
  v13 = a11;
  v101 = a11;
  p_Flags = (ULONG *)a2;
  v113 = a5;
  v14 = a7;
  Src = a7;
  LODWORD(Size) = a8;
  v15 = a9;
  VirtualAddress = a9;
  v97 = a10;
  v16 = IoReadAccess;
  v104 = 0LL;
  v120 = 0LL;
  v109 = 0LL;
  v17 = a6 & 3;
  LODWORD(v106) = v17;
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( !PreviousMode )
  {
    Length = a10;
    goto LABEL_25;
  }
  if ( !a11 && a6 != 1126400 )
  {
    if ( a6 <= 0x110028 )
    {
      if ( a6 == 1114152 || a6 == 589864 || a6 == 1114116 || a6 == 1114120 || a6 == 1114136 )
        goto LABEL_3;
      v74 = a6 == 1114140;
    }
    else
    {
      if ( a6 == 1114160 || a6 == 1114168 || a6 == 1126396 || a6 == 1130508 )
        goto LABEL_3;
      v74 = a6 == 1163287;
    }
    if ( !v74 )
    {
      Process = CurrentThread->ApcState.Process;
      IdealProcessorAssignmentBlock = (char)Process[4].IdealProcessorAssignmentBlock;
      v81 = IdealProcessorAssignmentBlock & 4;
      v82 = IdealProcessorAssignmentBlock & 2;
      if ( v82 || v81 )
      {
        EtwTimLogProhibitFsctlSystemCalls((unsigned int)(v82 != 0) + 1, Process);
        if ( v82 )
          return 3221225506LL;
        v15 = VirtualAddress;
        v14 = (char *)Src;
      }
    }
  }
LABEL_3:
  v20 = (__int64)v113;
  if ( (unsigned __int64)v113 >= 0x7FFFFFFF0000LL )
    v20 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v20 = *(_DWORD *)v20;
  if ( (a6 & 3) != 0 )
    goto LABEL_6;
  if ( v15 )
  {
    Length = a10;
    if ( a10 )
    {
      v21 = (unsigned __int64)v15;
      v22 = (unsigned __int64)v15 + a10 - 1;
      if ( (unsigned __int64)v15 > v22 || v22 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v23 = (v22 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v21 = *(_BYTE *)v21;
        v21 = (v21 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v21 != v23 );
LABEL_6:
      Length = a10;
    }
  }
  else
  {
    Length = 0;
    v97 = 0;
  }
  if ( v17 != 3 )
  {
    if ( v14 )
    {
      if ( (a12 & 1) == 0
        && (_DWORD)Size
        && (&v14[(unsigned int)Size] < v14 || (unsigned __int64)&v14[(unsigned int)Size] > 0x7FFFFFFF0000LL) )
      {
        Length = v97;
      }
    }
    else
    {
      LODWORD(Size) = 0;
    }
  }
LABEL_25:
  v102 = 0LL;
  v24 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &v102, &v120);
  v25 = (struct _FILE_OBJECT *)v102;
  if ( v24 >= 0 )
  {
    v57 = (_DWORD *)*((_QWORD *)v102 + 26);
    if ( v57 )
    {
      if ( (*v57 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process);
        v25 = (struct _FILE_OBJECT *)v102;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(v102);
          v24 = -1073739504;
        }
        Length = v97;
      }
    }
  }
  if ( v24 < 0 )
    return (unsigned int)v24;
  if ( v25->CompletionContext && (a3.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v25);
    return 3221225485LL;
  }
  if ( PreviousMode
    && (unsigned __int16)a6 >> 14
    && (((unsigned __int16)a6 >> 14) & v120.GrantedAccess) != (unsigned __int16)a6 >> 14 )
  {
    ObfDereferenceObject(v25);
    return 3221225506LL;
  }
  if ( a6 == 606820 || a6 == 623208 )
  {
    v110 = 0;
    if ( (v25->Flags & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(v25->DeviceObject);
    else
      AttachedDevice = IoGetRelatedDeviceObject(v25);
    SupportedFeatures = FsRtlGetSupportedFeatures((__int64)AttachedDevice, &v110);
    LODWORD(v103) = SupportedFeatures;
    if ( SupportedFeatures >= 0 )
    {
      if ( a6 == 606820 )
      {
        if ( (v110 & 1) != 0 )
          goto LABEL_168;
        SupportedFeatures = -1073700191;
      }
      else if ( (v110 & 2) == 0 )
      {
        SupportedFeatures = -1073700190;
      }
      LODWORD(v103) = SupportedFeatures;
    }
LABEL_168:
    v24 = SupportedFeatures;
    if ( SupportedFeatures < 0 )
    {
      ObfDereferenceObject(v25);
      return (unsigned int)v103;
    }
    goto LABEL_33;
  }
  if ( a6 == 590892 )
  {
    v24 = IopSetFileObjectExtensionFlag((__int64)v25, 0x10u);
    if ( v24 < 0 )
      goto LABEL_177;
  }
LABEL_33:
  if ( Handlea )
  {
    v121 = 0LL;
    v24 = ObReferenceObjectByHandle(Handlea, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v121, 0LL);
    v104 = v121;
    if ( v24 < 0 )
    {
LABEL_177:
      ObfDereferenceObject(v25);
      return (unsigned int)v24;
    }
    KeResetEvent((PRKEVENT)v121);
  }
  P = 0LL;
  IsSandboxedToken = 0;
  v96 = 0;
  if ( PreviousMode && (a6 == 589988 && (unsigned int)Size >= 4 || a6 == 590860 && (unsigned int)Size >= 0x24) )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v88 = IoThreadToProcess(Thread);
    SeCaptureSubjectContextEx(Thread, v88, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
    {
      v111 = 0;
      v89 = a6 == 590860 ? *((_DWORD *)Src + 8) : *(_DWORD *)Src;
      v111 = v89;
      if ( v24 < 0 )
        goto LABEL_252;
      if ( v89 == -1610612733 )
      {
        v96 = 1;
        v24 = IopValidateJunctionTarget(a6, Src, Size, Length, &P, (unsigned int *)&Size);
      }
      if ( v24 < 0 )
      {
LABEL_252:
        if ( v104 )
          ObfDereferenceObject(v104);
        ObfDereferenceObject(v25);
        return (unsigned int)v24;
      }
    }
  }
  if ( (v25->Flags & 2) != 0 )
  {
    v67 = (v25->Flags & 4) != 0;
    v68 = KeGetCurrentThread();
    --v68->KernelApcDisable;
    v69 = (volatile __int32 *)v102;
    v70 = KeAbPreAcquire((__int64)v102 + 128, 0LL);
    v99 = 0;
    if ( _InterlockedExchange(v69 + 29, 1) )
    {
      v25 = (struct _FILE_OBJECT *)v102;
      v71 = IopWaitAndAcquireFileObjectLock((_DWORD)v102, PreviousMode, v67, (_DWORD)v70, (__int64)&v99);
    }
    else
    {
      if ( v70 )
        *((_BYTE *)v70 + 10) = 1;
      v25 = (struct _FILE_OBJECT *)v102;
      PsReferenceSiloContext(v102);
      v71 = 0;
    }
    if ( v99 )
    {
      if ( v104 )
        ObfDereferenceObject(v104);
      if ( P )
        ExFreePoolWithTag(P, 0);
      ObfDereferenceObject(v25);
      return v71;
    }
    v92 = 1;
    Length = v97;
    v13 = a11;
  }
  else
  {
    v92 = 0;
    if ( PreviousMode )
    {
      v127 = KeGetCurrentThread();
      v59 = v127->ApcState.Process;
      if ( v59[1].ReadyTime )
      {
        v60 = WORD2(v59[3].PerProcessorCycleTimes);
        if ( v60 == 332 || v60 == 452 )
        {
          Status = (struct _IO_STATUS_BLOCK *)(unsigned int)v113->Status;
          Status->Status = Status->Status;
          v113 = Status;
          a3.QuadPart |= 1uLL;
        }
      }
      v25 = (struct _FILE_OBJECT *)v102;
      Length = v97;
    }
  }
  if ( (v25->Flags & 0x800) != 0 )
    RelatedDeviceObject = (struct _LIST_ENTRY *)IoGetAttachedDevice(v25->DeviceObject);
  else
    RelatedDeviceObject = (struct _LIST_ENTRY *)IoGetRelatedDeviceObject(v25);
  v28 = RelatedDeviceObject;
  v103 = RelatedDeviceObject;
  if ( !v13 )
    goto LABEL_84;
  if ( AstIsActive && dword_140E06EF0 )
  {
    v29 = (BYTE2(RelatedDeviceObject[-2].Blink) & 2) != 0
        ? (__int64)&RelatedDeviceObject[-3] - ObpInfoMaskToOffset[BYTE2(RelatedDeviceObject[-2].Blink) & 3]
        : 0LL;
    if ( v29 )
    {
      v128 = ((unsigned __int64)RelatedDeviceObject >> 4) ^ ((unsigned __int64)a6 << 32);
      LODWORD(v106) = ((HIBYTE(v128)
                      + 37
                      * (BYTE6(v128)
                       + 37
                       * (BYTE5(v128)
                        + 37
                        * (BYTE4(v128)
                         + 37
                         * (((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 24)
                          + 37
                          * ((unsigned __int8)((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 16)
                           + 37
                           * ((unsigned __int8)((unsigned __int16)((unsigned __int64)RelatedDeviceObject >> 4) >> 8)
                            + 37
                            * ((unsigned __int8)((unsigned __int64)RelatedDeviceObject >> 4) + 37 * dword_140F8C510)))))))) >> 16)
                    % AstIoctlBloomFilter;
      v30 = v128 % (unsigned int)AstIoctlBloomFilter;
      v27 = ((HIBYTE(v128)
            + 37
            * (BYTE6(v128)
             + 37
             * (BYTE5(v128)
              + 37
              * (BYTE4(v128)
               + 37
               * (((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 24)
                + 37
                * ((unsigned __int8)((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 16)
                 + 37
                 * ((unsigned __int8)((unsigned __int16)((unsigned __int64)RelatedDeviceObject >> 4) >> 8)
                  + 37 * ((unsigned __int8)((unsigned __int64)RelatedDeviceObject >> 4) + 37 * dword_140F8C510))))))))
           % AstIoctlBloomFilter) & 7;
      v31 = v27;
      if ( ((*(char *)((((HIBYTE(v128)
                        + 37
                        * (BYTE6(v128)
                         + 37
                         * (BYTE5(v128)
                          + 37
                          * (BYTE4(v128)
                           + 37
                           * (((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 24)
                            + 37
                            * ((unsigned __int8)((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 16)
                             + 37
                             * ((unsigned __int8)((unsigned __int16)((unsigned __int64)RelatedDeviceObject >> 4) >> 8)
                              + 37
                              * ((unsigned __int8)((unsigned __int64)RelatedDeviceObject >> 4) + 37 * dword_140F8C510))))))))
                       % AstIoctlBloomFilter) >> 3)
                     + qword_140F8C508) >> (((HIBYTE(v128)
                                            + 37
                                            * (BYTE6(v128)
                                             + 37
                                             * (BYTE5(v128)
                                              + 37
                                              * (BYTE4(v128)
                                               + 37
                                               * (((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 24)
                                                + 37
                                                * ((unsigned __int8)((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 16)
                                                 + 37
                                                 * ((unsigned __int8)((unsigned __int16)((unsigned __int64)RelatedDeviceObject >> 4) >> 8)
                                                  + 37
                                                  * ((unsigned __int8)((unsigned __int64)RelatedDeviceObject >> 4)
                                                   + 37 * dword_140F8C510))))))))
                                           % AstIoctlBloomFilter) & 7)) & 1) == 0
        || (v31 = (unsigned __int8)v106 & 7,
            ((*(char *)(((unsigned __int64)(unsigned int)v106 >> 3) + qword_140F8C508) >> ((unsigned __int8)v106 & 7)) & 1) == 0)
        || (v32 = (unsigned __int64)(unsigned int)v30 >> 3,
            v33 = v30 & 7,
            v31 = v33,
            ((*(char *)(v32 + qword_140F8C508) >> v33) & 1) == 0) )
      {
        AstAddBloomFilter(v31, v28, a6);
        memset_0(&v129, 0, 0x40uLL);
        v85 = *(unsigned __int16 *)(v29 + 8);
        if ( *(unsigned __int16 *)(v29 + 8) >= 0x40u )
          v85 = 64LL;
        memcpy_s(&v129, 0x40uLL, *(const void **)(v29 + 16), v85);
        v129 ^= v133 << 8;
        v130 ^= v134 << 8;
        v131 ^= v135 << 8;
        v132 ^= v136 << 8;
        v27 = HIBYTE(v132)
            + 0x288D4C21D6A4D26DLL * (unsigned __int8)v131
            + 0xDC6C00E405D269C1uLL * HIBYTE(v130)
            + 0x40B7CD9739B584A1LL * HIBYTE(v129)
            + 0x407AFAF12AFB592DLL * (unsigned __int8)v129
            + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v130
            + 0x65EC3D53F206D09DLL * BYTE4(v130)
            + 0x8BA4A57B9C3D7391uLL * BYTE3(v129)
            + 0xC8228AB72E6AE889uLL * BYTE1(v130)
            + 0x2ECBEADD94E1B3F5LL * BYTE2(v129)
            + 0xC53F5E946719795LL * BYTE2(v130)
            + 0x4FE1DAF580C363FDLL * BYTE4(v129)
            + 0xBB24DD21FAFC26B1uLL * BYTE3(v130)
            + 0x5A90B6DB573C2B45LL * BYTE6(v129)
            + 0x8B7970C2A4EFB2A9uLL * BYTE1(v131)
            + 0xBD90C36322378919uLL * BYTE5(v130)
            + 0x16EA6DB39BB240F9LL * BYTE5(v129)
            + 0xDB9C20F4D76948E5uLL * BYTE6(v130)
            + 0xC378F206849F0269uLL * BYTE1(v129)
            + 0x3433B6F080FF8F35LL * BYTE2(v131)
            + 37
            * (BYTE6(v132)
             + 37
             * (BYTE5(v132)
              + 37
              * (BYTE4(v132)
               + 37
               * (BYTE3(v132)
                + 37
                * (BYTE2(v132)
                 + 37
                 * (BYTE1(v132)
                  + 37
                  * ((unsigned __int8)v132
                   + 37
                   * (HIBYTE(v131) + 37 * (BYTE6(v131) + 37 * (BYTE5(v131) + 37 * (BYTE4(v131) + 37LL * BYTE3(v131))))))))))))
            + 0x4D9751421B9040BLL;
        if ( (unsigned int)dword_140E06EF0 > 5
          && (qword_140E06F00 & 0x200000000000LL) != 0
          && (qword_140E06F08 & 0x200000000000LL) == qword_140E06F08 )
        {
          v123 = 0x80000000LL;
          v138 = &v123;
          v139 = 8LL;
          v124 = v103;
          v140 = &v124;
          v141 = 8LL;
          v117 = a6;
          v142 = &v117;
          v143 = 4LL;
          v125 = HIBYTE(v132)
               + 0x288D4C21D6A4D26DLL * (unsigned __int8)v131
               + 0xDC6C00E405D269C1uLL * HIBYTE(v130)
               + 0x40B7CD9739B584A1LL * HIBYTE(v129)
               + 0x407AFAF12AFB592DLL * (unsigned __int8)v129
               + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v130
               + 0x65EC3D53F206D09DLL * BYTE4(v130)
               + 0x8BA4A57B9C3D7391uLL * BYTE3(v129)
               + 0xC8228AB72E6AE889uLL * BYTE1(v130)
               + 0x2ECBEADD94E1B3F5LL * BYTE2(v129)
               + 0xC53F5E946719795LL * BYTE2(v130)
               + 0x4FE1DAF580C363FDLL * BYTE4(v129)
               + 0xBB24DD21FAFC26B1uLL * BYTE3(v130)
               + 0x5A90B6DB573C2B45LL * BYTE6(v129)
               + 0x8B7970C2A4EFB2A9uLL * BYTE1(v131)
               + 0xBD90C36322378919uLL * BYTE5(v130)
               + 0x16EA6DB39BB240F9LL * BYTE5(v129)
               + 0xDB9C20F4D76948E5uLL * BYTE6(v130)
               + 0xC378F206849F0269uLL * BYTE1(v129)
               + 0x3433B6F080FF8F35LL * BYTE2(v131)
               + 37
               * (BYTE6(v132)
                + 37
                * (BYTE5(v132)
                 + 37
                 * (BYTE4(v132)
                  + 37
                  * (BYTE3(v132)
                   + 37
                   * (BYTE2(v132)
                    + 37
                    * (BYTE1(v132)
                     + 37
                     * ((unsigned __int8)v132
                      + 37
                      * (HIBYTE(v131) + 37
                                      * (BYTE6(v131) + 37 * (BYTE5(v131) + 37 * (BYTE4(v131) + 37LL * BYTE3(v131))))))))))))
               + 0x4D9751421B9040BLL;
          v144 = &v125;
          v145 = 8LL;
          v118 = *(unsigned __int16 *)(v29 + 8);
          v146 = &v118;
          v147 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06EF0,
            (unsigned __int8 *)&word_140046706,
            0LL,
            0LL,
            7u,
            &v137);
        }
      }
    }
  }
  if ( IsSandboxedToken )
    goto LABEL_84;
  v34 = v103;
  Flink = v103->Blink[5].Flink;
  if ( !Flink )
    goto LABEL_84;
  v36 = (__int64 (__fastcall *)(int, int, int, int, __int64, int, int, __int64, __int64))Flink[5].Flink;
  v106 = v36;
  if ( !v36 )
    goto LABEL_84;
  if ( PreviousMode )
  {
    v27 = (unsigned __int64)VirtualAddress;
    if ( VirtualAddress )
    {
      if ( v17 == 1 )
      {
        if ( Length )
        {
          v40 = (char *)VirtualAddress + Length;
          if ( v40 < VirtualAddress || (unsigned __int64)v40 > 0x7FFFFFFF0000LL )
          {
            v25 = (struct _FILE_OBJECT *)v102;
            Length = v97;
          }
        }
      }
      else if ( v17 == 2 && Length )
      {
        v37 = (unsigned __int64)VirtualAddress;
        v38 = (unsigned __int64)VirtualAddress + Length - 1;
        if ( (unsigned __int64)VirtualAddress > v38 || v38 >= 0x7FFFFFFF0000LL )
          ExRaiseAccessViolation();
        v39 = (v38 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v37 = *(_BYTE *)v37;
          v37 = (v37 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v37 != v39 );
        v25 = (struct _FILE_OBJECT *)v102;
        Length = v97;
        v34 = v103;
      }
    }
  }
  if ( a6 == 589856 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
    v25 = (struct _FILE_OBJECT *)v102;
    v41 = v97;
    Length = v97;
  }
  else
  {
    v41 = Length;
  }
  if ( (MmVerifierData & 0x10) == 0 )
    goto LABEL_74;
  Irp = (PIRP)v34->Blink;
  if ( !MmIsDriverVerifying((struct _DRIVER_OBJECT *)Irp) )
  {
    v36 = v106;
LABEL_74:
    Irp = 0LL;
    goto LABEL_75;
  }
  Irp = (PIRP)VfFastIoSnapState(Irp);
  v36 = v106;
LABEL_75:
  if ( v36 != PiDaFastIoDispatch )
  {
    HandleInformation = v41;
    Object = (int)VirtualAddress;
    LOBYTE(v27) = 1;
    v45 = v25;
LABEL_264:
    v46 = guard_dispatch_icall_no_overrides(v45, v27);
    goto LABEL_80;
  }
  v42 = 0;
  v94 = 0;
  FsContext = (unsigned __int64)v25->FsContext;
  if ( FsContext >= 5 )
    goto LABEL_81;
  v44 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, _DWORD, _DWORD, __int64))qword_140001BC0[3 * FsContext];
  if ( !v44 )
    goto LABEL_81;
  LOBYTE(v27) = 1;
  v45 = v25;
  HandleInformation = v41;
  Object = (int)VirtualAddress;
  if ( v44 != PiCMFastIoDeviceDispatch )
    goto LABEL_264;
  v46 = PiCMFastIoDeviceDispatch((_DWORD)v25, v27, (_DWORD)Src, Size, (__int64)VirtualAddress, v41, a6, (__int64)&v109);
LABEL_80:
  v42 = v46;
  v94 = v46;
  v36 = v106;
LABEL_81:
  if ( Irp )
  {
    VfFastIoCheckState(Irp, (ULONG_PTR)v36);
    v42 = v94;
  }
  if ( !v42 )
  {
LABEL_84:
    p_Flags = &v25->Flags;
    if ( (v25->Flags & 0x4000000) == 0 )
      KeResetEvent(&v25->Event);
    v47 = (IRP *)IopAllocateIrpExReturn((__int64)v103, BYTE4(v103[4].Blink), (unsigned __int8)v92 ^ 1u);
    v49 = v47;
    Irp = v47;
    if ( v47 )
    {
      v47->Tail.Overlay.OriginalFileObject = v25;
      v47->Tail.Overlay.Thread = Thread;
      v47->Tail.Overlay.AuxiliaryBuffer = 0LL;
      v47->RequestorMode = PreviousMode;
      v47->PendingReturned = 0;
      v47->Cancel = 0;
      v47->CancelRoutine = 0LL;
      v47->UserEvent = (PKEVENT)v104;
      v47->UserIosb = v113;
      v47->Overlay.AllocationSize = a3;
      v47->Overlay.AsynchronousParameters.UserApcContext = (PVOID)a4;
      p_MajorFunction = &v47->Tail.Overlay.CurrentStackLocation[-1].MajorFunction;
      Handlea = p_MajorFunction;
      v51 = v101;
      *p_MajorFunction = (v101 != 0) + 13;
      *((_QWORD *)p_MajorFunction + 6) = v25;
      p_MajorFunction[2] = Length;
      v52 = (unsigned int)Size;
      p_MajorFunction[4] = Size;
      p_MajorFunction[6] = a6;
      v47->MdlAddress = 0LL;
      v47->AssociatedIrp.MasterIrp = 0LL;
      if ( ((__int64)v103[3].Flink & 0x80000) != 0 && !IsSandboxedToken )
        v17 = 3;
      if ( v17 )
      {
        if ( v17 == 1 || v17 == 2 )
        {
          v47->Flags = 0;
          *((_QWORD *)p_MajorFunction + 4) = 0LL;
          if ( (_DWORD)v52 && Src )
          {
            v75 = v52;
            v76 = 107LL;
            if ( !v51 )
              v76 = 99LL;
            Pool2 = (struct _IRP *)ExAllocatePool2(v76, v75, 0x42536F49u);
            v49->AssociatedIrp.MasterIrp = Pool2;
            memmove(Pool2, Src, v75);
            v49->Flags = 48;
            v13 = a11;
          }
          if ( Length )
          {
            Mdl = (struct _KTHREAD *)IoAllocateMdl(VirtualAddress, Length, 0, 1u, v49);
            Thread = Mdl;
            v49->MdlAddress = (PMDL)Mdl;
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            LODWORD(v106) = *(_DWORD *)Handlea;
            LOBYTE(v16) = v17 != 1;
            MmProbeAndLockPages((PMDL)Mdl, PreviousMode, v16);
            if ( (MmTrackLockedPages & 1) != 0 )
              MmUpdateMdlTracker((unsigned __int64)Thread, *(&v103->Blink[7].Flink + (unsigned int)v106), v103);
          }
          p_MajorFunction = Handlea;
        }
        else if ( v17 == 3 )
        {
          v47->Flags = 0;
          v47->UserBuffer = VirtualAddress;
          *((_QWORD *)p_MajorFunction + 4) = Src;
        }
      }
      else
      {
        *((_QWORD *)p_MajorFunction + 4) = 0LL;
        if ( (_DWORD)v52 || Length )
        {
          if ( P )
          {
            v47->AssociatedIrp.MasterIrp = (struct _IRP *)P;
          }
          else
          {
            v53 = Length;
            if ( (unsigned int)v52 > Length )
              v53 = (unsigned int)v52;
            v54 = 105LL;
            if ( !v51 )
              v54 = 97LL;
            v55 = (struct _IRP *)ExAllocatePool2(v54, v53, 0x42536F49u);
            v49->AssociatedIrp.MasterIrp = v55;
            if ( Src )
              memmove(v55, Src, (unsigned int)Size);
            p_MajorFunction = Handlea;
            v52 = (unsigned int)Size;
          }
          v49->Flags = 48;
          v49->UserBuffer = VirtualAddress;
          if ( Length )
            v49->Flags = 112;
        }
        else
        {
          v47->Flags = 0;
          v47->UserBuffer = 0LL;
        }
        if ( (unsigned int)v52 < Length )
        {
          memset_0((char *)v49->AssociatedIrp.MasterIrp + v52, 0, Length - (unsigned int)v52);
          p_MajorFunction = Handlea;
        }
      }
      *((_BYTE *)p_MajorFunction + 2) |= v120.GrantedAccess & 1 | (unsigned __int8)(2 * (v120.GrantedAccess & 2));
      if ( !v13 )
        v49->Flags |= 0x800u;
      if ( a6 == 589856 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
        v25 = (struct _FILE_OBJECT *)v102;
      }
      if ( !IsSandboxedToken || v96 )
        goto LABEL_110;
      MasterIrp = v49->AssociatedIrp.MasterIrp;
      if ( a6 == 590860 )
        MasterIrp = (struct _IRP *)((char *)MasterIrp + 32);
      if ( *(_DWORD *)&MasterIrp->Type == -1610612733 )
      {
        IopExceptionCleanupEx((ULONG_PTR)v25, v49, v104, 0LL, (*p_Flags & 2) != 0);
        return 3221225485LL;
      }
      else
      {
LABEL_110:
        LOBYTE(v48) = v101 == 0;
        LOBYTE(HandleInformation) = v92;
        LOBYTE(Object) = PreviousMode;
        return IopSynchronousServiceTail(v103, v49, v25, v48, Object, HandleInformation, 2);
      }
    }
    else
    {
      if ( v104 )
        ObfDereferenceObject(v104);
      if ( (*p_Flags & 2) != 0 )
        IopReleaseFileObjectLock((ULONG_PTR)v25);
      ObfDereferenceObject(v25);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 3221225626LL;
    }
  }
  v62 = 0LL;
  v119 = 0LL;
  v122 = 0LL;
  v100 = 0;
  if ( (a3.LowPart & 1) != 0 )
  {
    v63 = v113;
    HIDWORD(v113->Pointer) = DWORD2(v109);
    v63->Status = v109;
  }
  else
  {
    *(_OWORD *)&v113->Status = v109;
  }
  v64 = v109;
  v65 = Handlea;
  if ( v25->CompletionContext
    && ((v25->Flags & 0x2000000) == 0 || (v109 & 0xC0000000) == 0x80000000)
    && (v109 & 0xC0000000) != 0xC0000000 )
  {
    IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v25, &v100, &v119, &v122);
    v64 = v109;
    v62 = v119;
  }
  if ( v65 )
  {
    if ( (v25->Flags & 0x8000000) == 0 || v62 && (v64 & 0xC0000000) == 0x80000000 )
    {
      v66 = v104;
      KeSetEvent((PRKEVENT)v104, 0, 0);
    }
    else
    {
      v66 = v104;
    }
    ObfDereferenceObject(v66);
    v64 = v109;
  }
  if ( v92 )
  {
    IopReleaseFileObjectLock((ULONG_PTR)v25);
    v64 = v109;
  }
  if ( v62 && a4 )
  {
    v83 = IoSetIoCompletionEx(v62, v122, a4, v64, *((__int64 *)&v109 + 1), 1u, 0LL);
    v84 = v109;
    if ( v83 < 0 )
      v84 = -1073741670;
    if ( (v84 & 0xC0000000) == 0x80000000 )
      v84 = 259;
    LODWORD(v109) = v84;
  }
  if ( v100 )
    IopDecrementCompletionContextUsageCount((ULONG_PTR)v25);
  ObfDereferenceObject(v25);
  return (unsigned int)v109;
}
