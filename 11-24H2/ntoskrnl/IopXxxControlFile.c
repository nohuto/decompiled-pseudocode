/*
 * XREFs of IopXxxControlFile @ 0x1408C1970
 * Callers:
 *     NtFsControlFile @ 0x1408C1100 (NtFsControlFile.c)
 *     NtDeviceIoControlFile @ 0x1408C1900 (NtDeviceIoControlFile.c)
 *     PfpVolumePrefetchMetadata @ 0x140952BE8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140953524 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchEntireDirectory @ 0x140953B8C (PfpPrefetchEntireDirectory.c)
 *     PfSnPrefetchFileMetadata @ 0x14096BC38 (PfSnPrefetchFileMetadata.c)
 *     NtCopyFileChunk @ 0x1409886C0 (NtCopyFileChunk.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     IopDecrementCompletionContextUsageCount @ 0x14027AFD4 (IopDecrementCompletionContextUsageCount.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     IoSetIoCompletionEx @ 0x14031C620 (IoSetIoCompletionEx.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IoGetAttachedDevice @ 0x1403C4FC0 (IoGetAttachedDevice.c)
 *     IopSetFileObjectExtensionFlag @ 0x140434650 (IopSetFileObjectExtensionFlag.c)
 *     MmUpdateMdlTracker @ 0x1404384E4 (MmUpdateMdlTracker.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x14043E370 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     FsRtlGetSupportedFeatures @ 0x1404699D0 (FsRtlGetSupportedFeatures.c)
 *     MmIsDriverVerifying @ 0x14049E430 (MmIsDriverVerifying.c)
 *     memcpy_s @ 0x140504070 (memcpy_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopValidateJunctionTarget @ 0x140713438 (IopValidateJunctionTarget.c)
 *     SeCaptureSubjectContextEx @ 0x14083FC40 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     PsIsProcessAppContainer @ 0x14085D560 (PsIsProcessAppContainer.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
 *     PiCMFastIoDeviceDispatch @ 0x1408C3290 (PiCMFastIoDeviceDispatch.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     RtlIsSandboxedToken @ 0x14090C230 (RtlIsSandboxedToken.c)
 *     IopExceptionCleanupEx @ 0x140970628 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
 *     AstAddBloomFilter @ 0x14098914C (AstAddBloomFilter.c)
 *     EtwTimLogProhibitFsctlSystemCalls @ 0x140A6DAF8 (EtwTimLogProhibitFsctlSystemCalls.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x140BA9450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BA97CC (VfFastIoSnapState.c)
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
  __int64 v45; // r9
  void *v46; // r8
  struct _FILE_OBJECT *v47; // rcx
  char v48; // al
  IRP *v49; // rax
  __int64 v50; // r9
  IRP *v51; // r13
  _DWORD *p_MajorFunction; // rdx
  char v53; // r8
  size_t v54; // rcx
  ULONG_PTR v55; // rcx
  struct _IRP *v56; // rcx
  _DWORD *v58; // rax
  bool IsProcessAppContainer; // al
  _KPROCESS *v60; // rcx
  __int16 v61; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  __int64 v63; // rsi
  struct _IO_STATUS_BLOCK *v64; // rcx
  int v65; // r9d
  HANDLE v66; // rbx
  PVOID v67; // rbx
  bool v68; // r13
  struct _KTHREAD *v69; // rax
  volatile __int32 *v70; // rbx
  _QWORD *v71; // rax
  unsigned int v72; // ebx
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v74; // r8
  __int64 v75; // r9
  int SupportedFeatures; // eax
  bool v77; // zf
  size_t v78; // rbx
  ULONG_PTR v79; // rcx
  struct _IRP *Pool2; // rax
  struct _KTHREAD *Mdl; // rcx
  _KPROCESS *Process; // r8
  char IdealProcessorAssignmentBlock; // di
  char v84; // al
  char v85; // di
  int v86; // eax
  int v87; // ecx
  rsize_t v88; // r9
  struct _IRP *MasterIrp; // rax
  struct _KPROCESS *v91; // rax
  int v92; // edx
  int Object; // [rsp+20h] [rbp-248h]
  unsigned int HandleInformation; // [rsp+28h] [rbp-240h]
  char v95; // [rsp+50h] [rbp-218h]
  char IsSandboxedToken; // [rsp+51h] [rbp-217h]
  char v97; // [rsp+52h] [rbp-216h]
  unsigned int Length; // [rsp+54h] [rbp-214h]
  char v99; // [rsp+58h] [rbp-210h]
  unsigned int v100; // [rsp+60h] [rbp-208h]
  size_t Size; // [rsp+68h] [rbp-200h] BYREF
  char v102; // [rsp+70h] [rbp-1F8h] BYREF
  char v103; // [rsp+71h] [rbp-1F7h] BYREF
  char v104; // [rsp+72h] [rbp-1F6h]
  PVOID v105; // [rsp+78h] [rbp-1F0h] BYREF
  struct _LIST_ENTRY *v106; // [rsp+88h] [rbp-1E0h]
  PVOID v107; // [rsp+90h] [rbp-1D8h]
  void *Src; // [rsp+98h] [rbp-1D0h]
  __int64 (__fastcall *v109)(int, int, int, int, __int64, int, int, __int64, __int64); // [rsp+A0h] [rbp-1C8h]
  PVOID VirtualAddress; // [rsp+A8h] [rbp-1C0h]
  HANDLE Handlea; // [rsp+B0h] [rbp-1B8h]
  __int128 v112; // [rsp+B8h] [rbp-1B0h] BYREF
  int v113; // [rsp+C8h] [rbp-1A0h] BYREF
  int v114; // [rsp+CCh] [rbp-19Ch]
  PIRP Irp; // [rsp+D0h] [rbp-198h]
  struct _IO_STATUS_BLOCK *v116; // [rsp+D8h] [rbp-190h]
  PVOID P; // [rsp+E0h] [rbp-188h] BYREF
  PETHREAD Thread; // [rsp+E8h] [rbp-180h]
  ULONG *p_Flags; // [rsp+F0h] [rbp-178h]
  unsigned int v120; // [rsp+F8h] [rbp-170h] BYREF
  int v121; // [rsp+FCh] [rbp-16Ch] BYREF
  __int64 v122; // [rsp+100h] [rbp-168h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v123; // [rsp+108h] [rbp-160h] BYREF
  PVOID v124; // [rsp+110h] [rbp-158h] BYREF
  __int64 v125; // [rsp+118h] [rbp-150h] BYREF
  __int64 v126; // [rsp+120h] [rbp-148h] BYREF
  struct _LIST_ENTRY *v127; // [rsp+128h] [rbp-140h] BYREF
  unsigned __int64 v128; // [rsp+130h] [rbp-138h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+138h] [rbp-130h] BYREF
  struct _KTHREAD *v130; // [rsp+158h] [rbp-110h]
  unsigned __int64 v131; // [rsp+160h] [rbp-108h]
  unsigned __int64 v132; // [rsp+170h] [rbp-F8h] BYREF
  unsigned __int64 v133; // [rsp+178h] [rbp-F0h]
  unsigned __int64 v134; // [rsp+180h] [rbp-E8h]
  unsigned __int64 v135; // [rsp+188h] [rbp-E0h]
  __int64 v136; // [rsp+190h] [rbp-D8h]
  __int64 v137; // [rsp+198h] [rbp-D0h]
  __int64 v138; // [rsp+1A0h] [rbp-C8h]
  __int64 v139; // [rsp+1A8h] [rbp-C0h]
  struct _EVENT_DATA_DESCRIPTOR v140; // [rsp+1B0h] [rbp-B8h] BYREF
  __int64 *v141; // [rsp+1D0h] [rbp-98h]
  __int64 v142; // [rsp+1D8h] [rbp-90h]
  struct _LIST_ENTRY **v143; // [rsp+1E0h] [rbp-88h]
  __int64 v144; // [rsp+1E8h] [rbp-80h]
  unsigned int *v145; // [rsp+1F0h] [rbp-78h]
  __int64 v146; // [rsp+1F8h] [rbp-70h]
  unsigned __int64 *v147; // [rsp+200h] [rbp-68h]
  __int64 v148; // [rsp+208h] [rbp-60h]
  int *v149; // [rsp+210h] [rbp-58h]
  __int64 v150; // [rsp+218h] [rbp-50h]

  Handlea = a2;
  v13 = a11;
  v104 = a11;
  p_Flags = (ULONG *)a2;
  v116 = a5;
  v14 = a7;
  Src = a7;
  LODWORD(Size) = a8;
  v15 = a9;
  VirtualAddress = a9;
  v100 = a10;
  v16 = IoReadAccess;
  v107 = 0LL;
  v123 = 0LL;
  v112 = 0LL;
  v17 = a6 & 3;
  LODWORD(v109) = v17;
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
      v77 = a6 == 1114140;
    }
    else
    {
      if ( a6 == 1114160 || a6 == 1114168 || a6 == 1126396 || a6 == 1130508 )
        goto LABEL_3;
      v77 = a6 == 1163287;
    }
    if ( !v77 )
    {
      Process = CurrentThread->ApcState.Process;
      IdealProcessorAssignmentBlock = (char)Process[4].IdealProcessorAssignmentBlock;
      v84 = IdealProcessorAssignmentBlock & 4;
      v85 = IdealProcessorAssignmentBlock & 2;
      if ( v85 || v84 )
      {
        EtwTimLogProhibitFsctlSystemCalls((unsigned int)(v85 != 0) + 1, Process);
        if ( v85 )
          return 3221225506LL;
        v15 = VirtualAddress;
        v14 = (char *)Src;
      }
    }
  }
LABEL_3:
  v20 = (__int64)v116;
  if ( (unsigned __int64)v116 >= 0x7FFFFFFF0000LL )
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
    v100 = 0;
  }
  if ( v17 != 3 )
  {
    if ( v14 )
    {
      if ( (a12 & 1) == 0
        && (_DWORD)Size
        && (&v14[(unsigned int)Size] < v14 || (unsigned __int64)&v14[(unsigned int)Size] > 0x7FFFFFFF0000LL) )
      {
        Length = v100;
      }
    }
    else
    {
      LODWORD(Size) = 0;
    }
  }
LABEL_25:
  v105 = 0LL;
  v24 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &v105, &v123);
  v25 = (struct _FILE_OBJECT *)v105;
  if ( v24 >= 0 )
  {
    v58 = (_DWORD *)*((_QWORD *)v105 + 26);
    if ( v58 )
    {
      if ( (*v58 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process);
        v25 = (struct _FILE_OBJECT *)v105;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(v105);
          v24 = -1073739504;
        }
        Length = v100;
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
    && (((unsigned __int16)a6 >> 14) & v123.GrantedAccess) != (unsigned __int16)a6 >> 14 )
  {
    ObfDereferenceObject(v25);
    return 3221225506LL;
  }
  if ( a6 == 606820 || a6 == 623208 )
  {
    v113 = 0;
    if ( (v25->Flags & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(v25->DeviceObject);
    else
      AttachedDevice = IoGetRelatedDeviceObject(v25);
    SupportedFeatures = FsRtlGetSupportedFeatures((__int64)AttachedDevice, &v113, v74, v75);
    LODWORD(v106) = SupportedFeatures;
    if ( SupportedFeatures >= 0 )
    {
      if ( a6 == 606820 )
      {
        if ( (v113 & 1) != 0 )
          goto LABEL_166;
        SupportedFeatures = -1073700191;
      }
      else if ( (v113 & 2) == 0 )
      {
        SupportedFeatures = -1073700190;
      }
      LODWORD(v106) = SupportedFeatures;
    }
LABEL_166:
    v24 = SupportedFeatures;
    if ( SupportedFeatures < 0 )
    {
      ObfDereferenceObject(v25);
      return (unsigned int)v106;
    }
    goto LABEL_33;
  }
  if ( a6 == 590892 )
  {
    v24 = IopSetFileObjectExtensionFlag((__int64)v25, 0x10u);
    if ( v24 < 0 )
      goto LABEL_175;
  }
LABEL_33:
  if ( Handlea )
  {
    v124 = 0LL;
    v24 = ObReferenceObjectByHandle(Handlea, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v124, 0LL);
    v107 = v124;
    if ( v24 < 0 )
    {
LABEL_175:
      ObfDereferenceObject(v25);
      return (unsigned int)v24;
    }
    KeResetEvent((PRKEVENT)v124);
  }
  P = 0LL;
  IsSandboxedToken = 0;
  v99 = 0;
  if ( PreviousMode && (a6 == 589988 && (unsigned int)Size >= 4 || a6 == 590860 && (unsigned int)Size >= 0x24) )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v91 = IoThreadToProcess(Thread);
    SeCaptureSubjectContextEx(Thread, v91, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
    {
      v114 = 0;
      v92 = a6 == 590860 ? *((_DWORD *)Src + 8) : *(_DWORD *)Src;
      v114 = v92;
      if ( v24 < 0 )
        goto LABEL_250;
      if ( v92 == -1610612733 )
      {
        v99 = 1;
        v24 = IopValidateJunctionTarget(a6, Src, Size, Length, &P, (unsigned int *)&Size);
      }
      if ( v24 < 0 )
      {
LABEL_250:
        if ( v107 )
          ObfDereferenceObject(v107);
        ObfDereferenceObject(v25);
        return (unsigned int)v24;
      }
    }
  }
  if ( (v25->Flags & 2) != 0 )
  {
    v68 = (v25->Flags & 4) != 0;
    v69 = KeGetCurrentThread();
    --v69->KernelApcDisable;
    v70 = (volatile __int32 *)v105;
    v71 = KeAbPreAcquire((__int64)v105 + 128, 0LL);
    v102 = 0;
    if ( _InterlockedExchange(v70 + 29, 1) )
    {
      v25 = (struct _FILE_OBJECT *)v105;
      v72 = IopWaitAndAcquireFileObjectLock((_DWORD)v105, PreviousMode, v68, (_DWORD)v71, (__int64)&v102);
    }
    else
    {
      if ( v71 )
        *((_BYTE *)v71 + 10) = 1;
      v25 = (struct _FILE_OBJECT *)v105;
      PsReferenceSiloContext(v105);
      v72 = 0;
    }
    if ( v102 )
    {
      if ( v107 )
        ObfDereferenceObject(v107);
      if ( P )
        ExFreePoolWithTag(P, 0);
      ObfDereferenceObject(v25);
      return v72;
    }
    v95 = 1;
    Length = v100;
    v13 = a11;
  }
  else
  {
    v95 = 0;
    if ( PreviousMode )
    {
      v130 = KeGetCurrentThread();
      v60 = v130->ApcState.Process;
      if ( v60[1].ReadyTime )
      {
        v61 = WORD2(v60[3].PerProcessorCycleTimes);
        if ( v61 == 332 || v61 == 452 )
        {
          Status = (struct _IO_STATUS_BLOCK *)(unsigned int)v116->Status;
          Status->Status = Status->Status;
          v116 = Status;
          a3.QuadPart |= 1uLL;
        }
      }
      v25 = (struct _FILE_OBJECT *)v105;
      Length = v100;
    }
  }
  if ( (v25->Flags & 0x800) != 0 )
    RelatedDeviceObject = (struct _LIST_ENTRY *)IoGetAttachedDevice(v25->DeviceObject);
  else
    RelatedDeviceObject = (struct _LIST_ENTRY *)IoGetRelatedDeviceObject(v25);
  v28 = RelatedDeviceObject;
  v106 = RelatedDeviceObject;
  if ( !v13 )
    goto LABEL_84;
  if ( AstIsActive && dword_140E06EF0 )
  {
    v29 = (BYTE2(RelatedDeviceObject[-2].Blink) & 2) != 0
        ? (__int64)&RelatedDeviceObject[-3] - ObpInfoMaskToOffset[BYTE2(RelatedDeviceObject[-2].Blink) & 3]
        : 0LL;
    if ( v29 )
    {
      v131 = ((unsigned __int64)RelatedDeviceObject >> 4) ^ ((unsigned __int64)a6 << 32);
      LODWORD(v109) = ((HIBYTE(v131)
                      + 37
                      * (BYTE6(v131)
                       + 37
                       * (BYTE5(v131)
                        + 37
                        * (BYTE4(v131)
                         + 37
                         * (((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 24)
                          + 37
                          * ((unsigned __int8)((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 16)
                           + 37
                           * ((unsigned __int8)((unsigned __int16)((unsigned __int64)RelatedDeviceObject >> 4) >> 8)
                            + 37
                            * ((unsigned __int8)((unsigned __int64)RelatedDeviceObject >> 4) + 37 * dword_140F8C290)))))))) >> 16)
                    % AstIoctlBloomFilter;
      v30 = v131 % (unsigned int)AstIoctlBloomFilter;
      v27 = ((HIBYTE(v131)
            + 37
            * (BYTE6(v131)
             + 37
             * (BYTE5(v131)
              + 37
              * (BYTE4(v131)
               + 37
               * (((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 24)
                + 37
                * ((unsigned __int8)((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 16)
                 + 37
                 * ((unsigned __int8)((unsigned __int16)((unsigned __int64)RelatedDeviceObject >> 4) >> 8)
                  + 37 * ((unsigned __int8)((unsigned __int64)RelatedDeviceObject >> 4) + 37 * dword_140F8C290))))))))
           % AstIoctlBloomFilter) & 7;
      v31 = v27;
      if ( ((*(char *)((((HIBYTE(v131)
                        + 37
                        * (BYTE6(v131)
                         + 37
                         * (BYTE5(v131)
                          + 37
                          * (BYTE4(v131)
                           + 37
                           * (((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 24)
                            + 37
                            * ((unsigned __int8)((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 16)
                             + 37
                             * ((unsigned __int8)((unsigned __int16)((unsigned __int64)RelatedDeviceObject >> 4) >> 8)
                              + 37
                              * ((unsigned __int8)((unsigned __int64)RelatedDeviceObject >> 4) + 37 * dword_140F8C290))))))))
                       % AstIoctlBloomFilter) >> 3)
                     + qword_140F8C288) >> (((HIBYTE(v131)
                                            + 37
                                            * (BYTE6(v131)
                                             + 37
                                             * (BYTE5(v131)
                                              + 37
                                              * (BYTE4(v131)
                                               + 37
                                               * (((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 24)
                                                + 37
                                                * ((unsigned __int8)((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 16)
                                                 + 37
                                                 * ((unsigned __int8)((unsigned __int16)((unsigned __int64)RelatedDeviceObject >> 4) >> 8)
                                                  + 37
                                                  * ((unsigned __int8)((unsigned __int64)RelatedDeviceObject >> 4)
                                                   + 37 * dword_140F8C290))))))))
                                           % AstIoctlBloomFilter) & 7)) & 1) == 0
        || (v31 = (unsigned __int8)v109 & 7,
            ((*(char *)(((unsigned __int64)(unsigned int)v109 >> 3) + qword_140F8C288) >> ((unsigned __int8)v109 & 7)) & 1) == 0)
        || (v32 = (unsigned __int64)(unsigned int)v30 >> 3,
            v33 = v30 & 7,
            v31 = v33,
            ((*(char *)(v32 + qword_140F8C288) >> v33) & 1) == 0) )
      {
        AstAddBloomFilter(v31, v28, a6);
        memset_0(&v132, 0, 0x40uLL);
        v88 = *(unsigned __int16 *)(v29 + 8);
        if ( *(unsigned __int16 *)(v29 + 8) >= 0x40u )
          v88 = 64LL;
        memcpy_s(&v132, 0x40uLL, *(const void **)(v29 + 16), v88);
        v132 ^= v136 << 8;
        v133 ^= v137 << 8;
        v134 ^= v138 << 8;
        v135 ^= v139 << 8;
        v27 = HIBYTE(v135)
            + 0x288D4C21D6A4D26DLL * (unsigned __int8)v134
            + 0xDC6C00E405D269C1uLL * HIBYTE(v133)
            + 0x40B7CD9739B584A1LL * HIBYTE(v132)
            + 0x407AFAF12AFB592DLL * (unsigned __int8)v132
            + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v133
            + 0x65EC3D53F206D09DLL * BYTE4(v133)
            + 0x8BA4A57B9C3D7391uLL * BYTE3(v132)
            + 0xC8228AB72E6AE889uLL * BYTE1(v133)
            + 0x2ECBEADD94E1B3F5LL * BYTE2(v132)
            + 0xC53F5E946719795LL * BYTE2(v133)
            + 0x4FE1DAF580C363FDLL * BYTE4(v132)
            + 0xBB24DD21FAFC26B1uLL * BYTE3(v133)
            + 0x5A90B6DB573C2B45LL * BYTE6(v132)
            + 0x8B7970C2A4EFB2A9uLL * BYTE1(v134)
            + 0xBD90C36322378919uLL * BYTE5(v133)
            + 0x16EA6DB39BB240F9LL * BYTE5(v132)
            + 0xDB9C20F4D76948E5uLL * BYTE6(v133)
            + 0xC378F206849F0269uLL * BYTE1(v132)
            + 0x3433B6F080FF8F35LL * BYTE2(v134)
            + 37
            * (BYTE6(v135)
             + 37
             * (BYTE5(v135)
              + 37
              * (BYTE4(v135)
               + 37
               * (BYTE3(v135)
                + 37
                * (BYTE2(v135)
                 + 37
                 * (BYTE1(v135)
                  + 37
                  * ((unsigned __int8)v135
                   + 37
                   * (HIBYTE(v134) + 37 * (BYTE6(v134) + 37 * (BYTE5(v134) + 37 * (BYTE4(v134) + 37LL * BYTE3(v134))))))))))))
            + 0x4D9751421B9040BLL;
        if ( (unsigned int)dword_140E06EF0 > 5
          && (qword_140E06F00 & 0x200000000000LL) != 0
          && (qword_140E06F08 & 0x200000000000LL) == qword_140E06F08 )
        {
          v126 = 0x80000000LL;
          v141 = &v126;
          v142 = 8LL;
          v127 = v106;
          v143 = &v127;
          v144 = 8LL;
          v120 = a6;
          v145 = &v120;
          v146 = 4LL;
          v128 = HIBYTE(v135)
               + 0x288D4C21D6A4D26DLL * (unsigned __int8)v134
               + 0xDC6C00E405D269C1uLL * HIBYTE(v133)
               + 0x40B7CD9739B584A1LL * HIBYTE(v132)
               + 0x407AFAF12AFB592DLL * (unsigned __int8)v132
               + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v133
               + 0x65EC3D53F206D09DLL * BYTE4(v133)
               + 0x8BA4A57B9C3D7391uLL * BYTE3(v132)
               + 0xC8228AB72E6AE889uLL * BYTE1(v133)
               + 0x2ECBEADD94E1B3F5LL * BYTE2(v132)
               + 0xC53F5E946719795LL * BYTE2(v133)
               + 0x4FE1DAF580C363FDLL * BYTE4(v132)
               + 0xBB24DD21FAFC26B1uLL * BYTE3(v133)
               + 0x5A90B6DB573C2B45LL * BYTE6(v132)
               + 0x8B7970C2A4EFB2A9uLL * BYTE1(v134)
               + 0xBD90C36322378919uLL * BYTE5(v133)
               + 0x16EA6DB39BB240F9LL * BYTE5(v132)
               + 0xDB9C20F4D76948E5uLL * BYTE6(v133)
               + 0xC378F206849F0269uLL * BYTE1(v132)
               + 0x3433B6F080FF8F35LL * BYTE2(v134)
               + 37
               * (BYTE6(v135)
                + 37
                * (BYTE5(v135)
                 + 37
                 * (BYTE4(v135)
                  + 37
                  * (BYTE3(v135)
                   + 37
                   * (BYTE2(v135)
                    + 37
                    * (BYTE1(v135)
                     + 37
                     * ((unsigned __int8)v135
                      + 37
                      * (HIBYTE(v134) + 37
                                      * (BYTE6(v134) + 37 * (BYTE5(v134) + 37 * (BYTE4(v134) + 37LL * BYTE3(v134))))))))))))
               + 0x4D9751421B9040BLL;
          v147 = &v128;
          v148 = 8LL;
          v121 = *(unsigned __int16 *)(v29 + 8);
          v149 = &v121;
          v150 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06EF0,
            (unsigned __int8 *)&word_140046306,
            0LL,
            0LL,
            7u,
            &v140);
        }
      }
    }
  }
  if ( IsSandboxedToken )
    goto LABEL_84;
  v34 = v106;
  Flink = v106->Blink[5].Flink;
  if ( !Flink )
    goto LABEL_84;
  v36 = (__int64 (__fastcall *)(int, int, int, int, __int64, int, int, __int64, __int64))Flink[5].Flink;
  v109 = v36;
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
            v25 = (struct _FILE_OBJECT *)v105;
            Length = v100;
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
        v25 = (struct _FILE_OBJECT *)v105;
        Length = v100;
        v34 = v106;
      }
    }
  }
  if ( a6 == 589856 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
    v25 = (struct _FILE_OBJECT *)v105;
    v41 = v100;
    Length = v100;
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
    v36 = v109;
LABEL_74:
    Irp = 0LL;
    goto LABEL_75;
  }
  Irp = (PIRP)VfFastIoSnapState(Irp);
  v36 = v109;
LABEL_75:
  if ( v36 != PiDaFastIoDispatch )
  {
    HandleInformation = v41;
    Object = (int)VirtualAddress;
    v45 = (unsigned int)Size;
    v46 = Src;
    LOBYTE(v27) = 1;
    v47 = v25;
LABEL_262:
    v48 = guard_dispatch_icall_no_overrides(v47, v27, v46, v45);
    goto LABEL_80;
  }
  v42 = 0;
  v97 = 0;
  FsContext = (unsigned __int64)v25->FsContext;
  if ( FsContext >= 5 )
    goto LABEL_81;
  v44 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, _DWORD, _DWORD, __int64))qword_140001B40[3 * FsContext];
  if ( !v44 )
    goto LABEL_81;
  v45 = (unsigned int)Size;
  v46 = Src;
  LOBYTE(v27) = 1;
  v47 = v25;
  HandleInformation = v41;
  Object = (int)VirtualAddress;
  if ( v44 != PiCMFastIoDeviceDispatch )
    goto LABEL_262;
  v48 = PiCMFastIoDeviceDispatch((_DWORD)v25, v27, (_DWORD)Src, Size, (__int64)VirtualAddress, v41, a6, (__int64)&v112);
LABEL_80:
  v42 = v48;
  v97 = v48;
  v36 = v109;
LABEL_81:
  if ( Irp )
  {
    VfFastIoCheckState(Irp, (ULONG_PTR)v36);
    v42 = v97;
  }
  if ( !v42 )
  {
LABEL_84:
    p_Flags = &v25->Flags;
    if ( (v25->Flags & 0x4000000) == 0 )
      KeResetEvent(&v25->Event);
    v49 = (IRP *)IopAllocateIrpExReturn((__int64)v106, BYTE4(v106[4].Blink), (unsigned __int8)v95 ^ 1u);
    v51 = v49;
    Irp = v49;
    if ( v49 )
    {
      v49->Tail.Overlay.OriginalFileObject = v25;
      v49->Tail.Overlay.Thread = Thread;
      v49->Tail.Overlay.AuxiliaryBuffer = 0LL;
      v49->RequestorMode = PreviousMode;
      v49->PendingReturned = 0;
      v49->Cancel = 0;
      v49->CancelRoutine = 0LL;
      v49->UserEvent = (PKEVENT)v107;
      v49->UserIosb = v116;
      v49->Overlay.AllocationSize = a3;
      v49->Overlay.AsynchronousParameters.UserApcContext = (PVOID)a4;
      p_MajorFunction = &v49->Tail.Overlay.CurrentStackLocation[-1].MajorFunction;
      Handlea = p_MajorFunction;
      v53 = v104;
      *p_MajorFunction = (v104 != 0) + 13;
      *((_QWORD *)p_MajorFunction + 6) = v25;
      p_MajorFunction[2] = Length;
      v54 = (unsigned int)Size;
      p_MajorFunction[4] = Size;
      p_MajorFunction[6] = a6;
      v49->MdlAddress = 0LL;
      v49->AssociatedIrp.MasterIrp = 0LL;
      if ( ((__int64)v106[3].Flink & 0x80000) != 0 && !IsSandboxedToken )
        v17 = 3;
      if ( v17 )
      {
        if ( v17 == 1 || v17 == 2 )
        {
          v49->Flags = 0;
          *((_QWORD *)p_MajorFunction + 4) = 0LL;
          if ( (_DWORD)v54 && Src )
          {
            v78 = v54;
            v79 = 107LL;
            if ( !v53 )
              v79 = 99LL;
            Pool2 = (struct _IRP *)ExAllocatePool2(v79);
            v51->AssociatedIrp.MasterIrp = Pool2;
            memmove(Pool2, Src, v78);
            v51->Flags = 48;
            v13 = a11;
          }
          if ( Length )
          {
            Mdl = (struct _KTHREAD *)IoAllocateMdl(VirtualAddress, Length, 0, 1u, v51);
            Thread = Mdl;
            v51->MdlAddress = (PMDL)Mdl;
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            LODWORD(v109) = *(_DWORD *)Handlea;
            LOBYTE(v16) = v17 != 1;
            MmProbeAndLockPages((PMDL)Mdl, PreviousMode, v16);
            if ( (MmTrackLockedPages & 1) != 0 )
              MmUpdateMdlTracker((unsigned __int64)Thread, *(&v106->Blink[7].Flink + (unsigned int)v109), v106);
          }
          p_MajorFunction = Handlea;
        }
        else if ( v17 == 3 )
        {
          v49->Flags = 0;
          v49->UserBuffer = VirtualAddress;
          *((_QWORD *)p_MajorFunction + 4) = Src;
        }
      }
      else
      {
        *((_QWORD *)p_MajorFunction + 4) = 0LL;
        if ( (_DWORD)v54 || Length )
        {
          if ( P )
          {
            v49->AssociatedIrp.MasterIrp = (struct _IRP *)P;
          }
          else
          {
            v55 = 105LL;
            if ( !v53 )
              v55 = 97LL;
            v56 = (struct _IRP *)ExAllocatePool2(v55);
            v51->AssociatedIrp.MasterIrp = v56;
            if ( Src )
              memmove(v56, Src, (unsigned int)Size);
            p_MajorFunction = Handlea;
            v54 = (unsigned int)Size;
          }
          v51->Flags = 48;
          v51->UserBuffer = VirtualAddress;
          if ( Length )
            v51->Flags = 112;
        }
        else
        {
          v49->Flags = 0;
          v49->UserBuffer = 0LL;
        }
        if ( (unsigned int)v54 < Length )
        {
          memset_0((char *)v51->AssociatedIrp.MasterIrp + v54, 0, Length - (unsigned int)v54);
          p_MajorFunction = Handlea;
        }
      }
      *((_BYTE *)p_MajorFunction + 2) |= v123.GrantedAccess & 1 | (unsigned __int8)(2 * (v123.GrantedAccess & 2));
      if ( !v13 )
        v51->Flags |= 0x800u;
      if ( a6 == 589856 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
        v25 = (struct _FILE_OBJECT *)v105;
      }
      if ( !IsSandboxedToken || v99 )
        goto LABEL_108;
      MasterIrp = v51->AssociatedIrp.MasterIrp;
      if ( a6 == 590860 )
        MasterIrp = (struct _IRP *)((char *)MasterIrp + 32);
      if ( *(_DWORD *)&MasterIrp->Type == -1610612733 )
      {
        IopExceptionCleanupEx((ULONG_PTR)v25, v51, v107, 0LL, (*p_Flags & 2) != 0);
        return 3221225485LL;
      }
      else
      {
LABEL_108:
        LOBYTE(v50) = v104 == 0;
        LOBYTE(HandleInformation) = v95;
        LOBYTE(Object) = PreviousMode;
        return IopSynchronousServiceTail(v106, v51, v25, v50, Object, HandleInformation, 2);
      }
    }
    else
    {
      if ( v107 )
        ObfDereferenceObject(v107);
      if ( (*p_Flags & 2) != 0 )
        IopReleaseFileObjectLock((ULONG_PTR)v25);
      ObfDereferenceObject(v25);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 3221225626LL;
    }
  }
  v63 = 0LL;
  v122 = 0LL;
  v125 = 0LL;
  v103 = 0;
  if ( (a3.LowPart & 1) != 0 )
  {
    v64 = v116;
    HIDWORD(v116->Pointer) = DWORD2(v112);
    v64->Status = v112;
  }
  else
  {
    *(_OWORD *)&v116->Status = v112;
  }
  v65 = v112;
  v66 = Handlea;
  if ( v25->CompletionContext
    && ((v25->Flags & 0x2000000) == 0 || (v112 & 0xC0000000) == 0x80000000)
    && (v112 & 0xC0000000) != 0xC0000000 )
  {
    IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v25, &v103, &v122, &v125);
    v65 = v112;
    v63 = v122;
  }
  if ( v66 )
  {
    if ( (v25->Flags & 0x8000000) == 0 || v63 && (v65 & 0xC0000000) == 0x80000000 )
    {
      v67 = v107;
      KeSetEvent((PRKEVENT)v107, 0, 0);
    }
    else
    {
      v67 = v107;
    }
    ObfDereferenceObject(v67);
    v65 = v112;
  }
  if ( v95 )
  {
    IopReleaseFileObjectLock((ULONG_PTR)v25);
    v65 = v112;
  }
  if ( v63 && a4 )
  {
    v86 = IoSetIoCompletionEx(v63, v125, a4, v65, *((__int64 *)&v112 + 1), 1u, 0LL);
    v87 = v112;
    if ( v86 < 0 )
      v87 = -1073741670;
    if ( (v87 & 0xC0000000) == 0x80000000 )
      v87 = 259;
    LODWORD(v112) = v87;
  }
  if ( v103 )
    IopDecrementCompletionContextUsageCount((ULONG_PTR)v25);
  ObfDereferenceObject(v25);
  return (unsigned int)v112;
}
