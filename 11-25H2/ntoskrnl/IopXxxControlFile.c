/*
 * XREFs of IopXxxControlFile @ 0x1408C3AD0
 * Callers:
 *     PfSnPrefetchFileMetadata @ 0x1408C3008 (PfSnPrefetchFileMetadata.c)
 *     NtFsControlFile @ 0x1408C3260 (NtFsControlFile.c)
 *     NtDeviceIoControlFile @ 0x1408C3A60 (NtDeviceIoControlFile.c)
 *     NtCopyFileChunk @ 0x140970910 (NtCopyFileChunk.c)
 *     PfpVolumePrefetchMetadata @ 0x1409C64B8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1409C6DF4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchEntireDirectory @ 0x1409C745C (PfpPrefetchEntireDirectory.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     IoSetIoCompletionEx2 @ 0x140284DA0 (IoSetIoCompletionEx2.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     IoGetAttachedDevice @ 0x1402A1E80 (IoGetAttachedDevice.c)
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1402D5878 (MmUpdateMdlTracker.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     IopDecrementCompletionContextUsageCount @ 0x140349B30 (IopDecrementCompletionContextUsageCount.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IopSetFileObjectExtensionFlag @ 0x1404383F0 (IopSetFileObjectExtensionFlag.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x14043E000 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IoThreadToProcess @ 0x140442EB0 (IoThreadToProcess.c)
 *     FsRtlGetSupportedFeatures @ 0x14046B280 (FsRtlGetSupportedFeatures.c)
 *     MmIsDriverVerifying @ 0x14049F5C0 (MmIsDriverVerifying.c)
 *     memcpy_s @ 0x1405018F0 (memcpy_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopValidateJunctionTarget @ 0x140707338 (IopValidateJunctionTarget.c)
 *     RtlIsSandboxedToken @ 0x140840280 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContextEx @ 0x1408436C0 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     PiCMFastIoDeviceDispatch @ 0x1408C53B0 (PiCMFastIoDeviceDispatch.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 *     IopExceptionCleanupEx @ 0x1409887B0 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 *     AstAddBloomFilter @ 0x140994E50 (AstAddBloomFilter.c)
 *     EtwTimLogProhibitFsctlSystemCalls @ 0x140A6B900 (EtwTimLogProhibitFsctlSystemCalls.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x140B99470 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140B997F8 (VfFastIoSnapState.c)
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
  char *v14; // r8
  PVOID v15; // r9
  LOCK_OPERATION v16; // r15d
  int v17; // r12d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 PreviousMode; // r14
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r10
  int v24; // r13d
  struct _FILE_OBJECT *v25; // rsi
  struct _LIST_ENTRY *RelatedDeviceObject; // rax
  unsigned __int64 v27; // rdx
  struct _LIST_ENTRY *v28; // r11
  __int64 v29; // r13
  unsigned __int64 v30; // r10
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int8 v33; // r10
  struct _LIST_ENTRY *v34; // r13
  struct _LIST_ENTRY *Flink; // r10
  __int64 (__fastcall *v36)(int, int, int, int, __int64, int, int, __int64, __int64); // r10
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r8
  char *v40; // rcx
  char v41; // cl
  unsigned __int64 FsContext; // rax
  __int64 (__fastcall *v43)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, _DWORD, _DWORD, __int64); // r11
  struct _FILE_OBJECT *v44; // rcx
  char v45; // al
  IRP *v46; // rax
  __int64 v47; // r9
  IRP *v48; // r13
  _DWORD *p_MajorFunction; // rdx
  char v50; // r8
  size_t v51; // rcx
  ULONG_PTR v52; // rcx
  struct _IRP *v53; // rcx
  _DWORD *v55; // rax
  char IsProcessAppContainer; // al
  _KPROCESS *Process; // rcx
  __int16 v58; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  __int64 v60; // rdi
  struct _IO_STATUS_BLOCK *v61; // rcx
  int v62; // r9d
  HANDLE v63; // rbx
  PVOID v64; // rbx
  bool v65; // r13
  struct _KTHREAD *v66; // rax
  volatile __int32 *v67; // rbx
  __int64 *v68; // rax
  unsigned int v69; // ebx
  PDEVICE_OBJECT AttachedDevice; // rax
  int SupportedFeatures; // eax
  bool v72; // zf
  size_t v73; // rbx
  ULONG_PTR v74; // rcx
  struct _IRP *Pool2; // rax
  struct _KTHREAD *Mdl; // rcx
  char IdealProcessorAssignmentBlock; // si
  char v78; // al
  char v79; // si
  int v80; // eax
  int v81; // ecx
  rsize_t v82; // r9
  struct _IRP *MasterIrp; // rax
  struct _KPROCESS *v85; // rax
  int v86; // edx
  int Object; // [rsp+20h] [rbp-248h]
  unsigned int HandleInformation; // [rsp+28h] [rbp-240h]
  char v89; // [rsp+50h] [rbp-218h]
  bool IsSandboxedToken; // [rsp+51h] [rbp-217h]
  char v91; // [rsp+52h] [rbp-216h]
  unsigned int Length; // [rsp+54h] [rbp-214h]
  char v93; // [rsp+58h] [rbp-210h]
  unsigned int v94; // [rsp+60h] [rbp-208h]
  size_t Size; // [rsp+68h] [rbp-200h] BYREF
  char v96; // [rsp+70h] [rbp-1F8h] BYREF
  char v97; // [rsp+71h] [rbp-1F7h] BYREF
  char v98; // [rsp+72h] [rbp-1F6h]
  PVOID v99; // [rsp+78h] [rbp-1F0h] BYREF
  PVOID v100; // [rsp+88h] [rbp-1E0h]
  struct _LIST_ENTRY *v101; // [rsp+90h] [rbp-1D8h]
  void *Src; // [rsp+98h] [rbp-1D0h]
  __int64 (__fastcall *v103)(int, int, int, int, __int64, int, int, __int64, __int64); // [rsp+A0h] [rbp-1C8h]
  PVOID VirtualAddress; // [rsp+A8h] [rbp-1C0h]
  HANDLE Handlea; // [rsp+B0h] [rbp-1B8h]
  __int128 v106; // [rsp+B8h] [rbp-1B0h] BYREF
  int v107; // [rsp+C8h] [rbp-1A0h] BYREF
  int v108; // [rsp+CCh] [rbp-19Ch]
  PIRP Irp; // [rsp+D0h] [rbp-198h]
  struct _IO_STATUS_BLOCK *v110; // [rsp+D8h] [rbp-190h]
  PVOID P; // [rsp+E0h] [rbp-188h] BYREF
  PETHREAD Thread; // [rsp+E8h] [rbp-180h]
  ULONG *p_Flags; // [rsp+F0h] [rbp-178h]
  unsigned int v114; // [rsp+F8h] [rbp-170h] BYREF
  int v115; // [rsp+FCh] [rbp-16Ch] BYREF
  __int64 v116; // [rsp+100h] [rbp-168h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v117; // [rsp+108h] [rbp-160h] BYREF
  PVOID v118; // [rsp+110h] [rbp-158h] BYREF
  __int64 v119; // [rsp+118h] [rbp-150h] BYREF
  __int64 v120; // [rsp+120h] [rbp-148h] BYREF
  struct _LIST_ENTRY *v121; // [rsp+128h] [rbp-140h] BYREF
  unsigned __int64 v122; // [rsp+130h] [rbp-138h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+138h] [rbp-130h] BYREF
  struct _KTHREAD *v124; // [rsp+158h] [rbp-110h]
  unsigned __int64 v125; // [rsp+160h] [rbp-108h]
  unsigned __int64 v126; // [rsp+170h] [rbp-F8h] BYREF
  unsigned __int64 v127; // [rsp+178h] [rbp-F0h]
  unsigned __int64 v128; // [rsp+180h] [rbp-E8h]
  unsigned __int64 v129; // [rsp+188h] [rbp-E0h]
  __int64 v130; // [rsp+190h] [rbp-D8h]
  __int64 v131; // [rsp+198h] [rbp-D0h]
  __int64 v132; // [rsp+1A0h] [rbp-C8h]
  __int64 v133; // [rsp+1A8h] [rbp-C0h]
  struct _EVENT_DATA_DESCRIPTOR v134; // [rsp+1B0h] [rbp-B8h] BYREF
  __int64 *v135; // [rsp+1D0h] [rbp-98h]
  __int64 v136; // [rsp+1D8h] [rbp-90h]
  struct _LIST_ENTRY **v137; // [rsp+1E0h] [rbp-88h]
  __int64 v138; // [rsp+1E8h] [rbp-80h]
  unsigned int *v139; // [rsp+1F0h] [rbp-78h]
  __int64 v140; // [rsp+1F8h] [rbp-70h]
  unsigned __int64 *v141; // [rsp+200h] [rbp-68h]
  __int64 v142; // [rsp+208h] [rbp-60h]
  int *v143; // [rsp+210h] [rbp-58h]
  __int64 v144; // [rsp+218h] [rbp-50h]

  Handlea = a2;
  v13 = a11;
  v98 = a11;
  p_Flags = (ULONG *)a2;
  v110 = a5;
  v14 = a7;
  Src = a7;
  LODWORD(Size) = a8;
  v15 = a9;
  VirtualAddress = a9;
  v94 = a10;
  v16 = IoReadAccess;
  v100 = 0LL;
  v117 = 0LL;
  v106 = 0LL;
  v17 = a6 & 3;
  LODWORD(v103) = v17;
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
      v72 = a6 == 1114140;
    }
    else
    {
      if ( a6 == 1114160 || a6 == 1114168 || a6 == 1126396 || a6 == 1130508 )
        goto LABEL_3;
      v72 = a6 == 1163287;
    }
    if ( !v72 )
    {
      IdealProcessorAssignmentBlock = (char)CurrentThread->ApcState.Process[4].IdealProcessorAssignmentBlock;
      v78 = IdealProcessorAssignmentBlock & 4;
      v79 = IdealProcessorAssignmentBlock & 2;
      if ( v79 || v78 )
      {
        EtwTimLogProhibitFsctlSystemCalls((unsigned int)(v79 != 0) + 1);
        if ( v79 )
          return 3221225506LL;
        v14 = (char *)Src;
        v15 = VirtualAddress;
      }
    }
  }
LABEL_3:
  v20 = (__int64)v110;
  if ( (unsigned __int64)v110 >= 0x7FFFFFFF0000LL )
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
      if ( v22 >= 0x7FFFFFFF0000LL || (unsigned __int64)v15 > v22 )
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
    v94 = 0;
  }
  if ( v17 != 3 )
  {
    if ( v14 )
    {
      if ( (a12 & 1) == 0
        && (_DWORD)Size
        && (&v14[(unsigned int)Size] < v14 || (unsigned __int64)&v14[(unsigned int)Size] > 0x7FFFFFFF0000LL) )
      {
        Length = v94;
      }
    }
    else
    {
      LODWORD(Size) = 0;
    }
  }
LABEL_25:
  v99 = 0LL;
  v24 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &v99, &v117);
  v25 = (struct _FILE_OBJECT *)v99;
  if ( v24 >= 0 )
  {
    v55 = (_DWORD *)*((_QWORD *)v99 + 26);
    if ( v55 )
    {
      if ( (*v55 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v25 = (struct _FILE_OBJECT *)v99;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(v99);
          v24 = -1073739504;
        }
        Length = v94;
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
    && (((unsigned __int16)a6 >> 14) & v117.GrantedAccess) != (unsigned __int16)a6 >> 14 )
  {
    ObfDereferenceObject(v25);
    return 3221225506LL;
  }
  if ( a6 == 606820 || a6 == 623208 )
  {
    v107 = 0;
    if ( (v25->Flags & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(v25->DeviceObject);
    else
      AttachedDevice = IoGetRelatedDeviceObject(v25);
    SupportedFeatures = FsRtlGetSupportedFeatures((__int64)AttachedDevice, &v107);
    LODWORD(v101) = SupportedFeatures;
    if ( SupportedFeatures >= 0 )
    {
      if ( a6 == 606820 )
      {
        if ( (v107 & 1) != 0 )
          goto LABEL_166;
        SupportedFeatures = -1073700191;
      }
      else if ( (v107 & 2) == 0 )
      {
        SupportedFeatures = -1073700190;
      }
      LODWORD(v101) = SupportedFeatures;
    }
LABEL_166:
    v24 = SupportedFeatures;
    if ( SupportedFeatures < 0 )
    {
      ObfDereferenceObject(v25);
      return (unsigned int)v101;
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
    v118 = 0LL;
    v24 = ObReferenceObjectByHandle(Handlea, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v118, 0LL);
    v100 = v118;
    if ( v24 < 0 )
    {
LABEL_175:
      ObfDereferenceObject(v25);
      return (unsigned int)v24;
    }
    KeResetEvent((PRKEVENT)v118);
  }
  P = 0LL;
  IsSandboxedToken = 0;
  v93 = 0;
  if ( PreviousMode && (a6 == 589988 && (unsigned int)Size >= 4 || a6 == 590860 && (unsigned int)Size >= 0x24) )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v85 = IoThreadToProcess(Thread);
    SeCaptureSubjectContextEx(Thread, v85, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, PreviousMode);
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
    {
      v108 = 0;
      v86 = a6 == 590860 ? *((_DWORD *)Src + 8) : *(_DWORD *)Src;
      v108 = v86;
      if ( v24 < 0 )
        goto LABEL_250;
      if ( v86 == -1610612733 )
      {
        v93 = 1;
        v24 = IopValidateJunctionTarget(a6, Src, Size, Length, &P, (unsigned int *)&Size);
      }
      if ( v24 < 0 )
      {
LABEL_250:
        if ( v100 )
          ObfDereferenceObject(v100);
        ObfDereferenceObject(v25);
        return (unsigned int)v24;
      }
    }
  }
  if ( (v25->Flags & 2) != 0 )
  {
    v65 = (v25->Flags & 4) != 0;
    v66 = KeGetCurrentThread();
    --v66->KernelApcDisable;
    v67 = (volatile __int32 *)v99;
    v68 = KeAbPreAcquire((__int64)v99 + 128, 0LL);
    v96 = 0;
    if ( _InterlockedExchange(v67 + 29, 1) )
    {
      v25 = (struct _FILE_OBJECT *)v99;
      v69 = IopWaitAndAcquireFileObjectLock((_DWORD)v99, PreviousMode, v65, (_DWORD)v68, (__int64)&v96);
    }
    else
    {
      if ( v68 )
        *((_BYTE *)v68 + 10) = 1;
      v25 = (struct _FILE_OBJECT *)v99;
      PsReferenceSiloContext(v99);
      v69 = 0;
    }
    if ( v96 )
    {
      if ( v100 )
        ObfDereferenceObject(v100);
      if ( P )
        ExFreePoolWithTag(P, 0);
      ObfDereferenceObject(v25);
      return v69;
    }
    v89 = 1;
    Length = v94;
    v13 = a11;
  }
  else
  {
    v89 = 0;
    if ( PreviousMode )
    {
      v124 = KeGetCurrentThread();
      Process = v124->ApcState.Process;
      if ( Process[1].ReadyTime )
      {
        v58 = WORD2(Process[3].PerProcessorCycleTimes);
        if ( v58 == 332 || v58 == 452 )
        {
          Status = (struct _IO_STATUS_BLOCK *)(unsigned int)v110->Status;
          Status->Status = Status->Status;
          v110 = Status;
          a3.QuadPart |= 1uLL;
        }
      }
      v25 = (struct _FILE_OBJECT *)v99;
      Length = v94;
    }
  }
  if ( (v25->Flags & 0x800) != 0 )
    RelatedDeviceObject = (struct _LIST_ENTRY *)IoGetAttachedDevice(v25->DeviceObject);
  else
    RelatedDeviceObject = (struct _LIST_ENTRY *)IoGetRelatedDeviceObject(v25);
  v28 = RelatedDeviceObject;
  v101 = RelatedDeviceObject;
  if ( v13 && AstIsActive && dword_140E06EF0 )
  {
    v29 = (BYTE2(RelatedDeviceObject[-2].Blink) & 2) != 0
        ? (__int64)&RelatedDeviceObject[-3] - ObpInfoMaskToOffset[BYTE2(RelatedDeviceObject[-2].Blink) & 3]
        : 0LL;
    if ( v29 )
    {
      v125 = ((unsigned __int64)RelatedDeviceObject >> 4) ^ ((unsigned __int64)a6 << 32);
      LODWORD(v103) = ((HIBYTE(v125)
                      + 37
                      * (BYTE6(v125)
                       + 37
                       * (BYTE5(v125)
                        + 37
                        * (BYTE4(v125)
                         + 37
                         * (((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 24)
                          + 37
                          * ((unsigned __int8)((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 16)
                           + 37
                           * ((unsigned __int8)((unsigned __int16)((unsigned __int64)RelatedDeviceObject >> 4) >> 8)
                            + 37
                            * ((unsigned __int8)((unsigned __int64)RelatedDeviceObject >> 4) + 37 * dword_140F8BB50)))))))) >> 16)
                    % AstIoctlBloomFilter;
      v30 = v125 % (unsigned int)AstIoctlBloomFilter;
      LODWORD(v27) = ((HIBYTE(v125)
                     + 37
                     * (BYTE6(v125)
                      + 37
                      * (BYTE5(v125)
                       + 37
                       * (BYTE4(v125)
                        + 37
                        * (((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 24)
                         + 37
                         * ((unsigned __int8)((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 16)
                          + 37
                          * ((unsigned __int8)((unsigned __int16)((unsigned __int64)RelatedDeviceObject >> 4) >> 8)
                           + 37 * ((unsigned __int8)((unsigned __int64)RelatedDeviceObject >> 4) + 37 * dword_140F8BB50))))))))
                    % AstIoctlBloomFilter) & 7;
      v31 = (unsigned int)v27;
      if ( ((*(char *)((((HIBYTE(v125)
                        + 37
                        * (BYTE6(v125)
                         + 37
                         * (BYTE5(v125)
                          + 37
                          * (BYTE4(v125)
                           + 37
                           * (((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 24)
                            + 37
                            * ((unsigned __int8)((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 16)
                             + 37
                             * ((unsigned __int8)((unsigned __int16)((unsigned __int64)RelatedDeviceObject >> 4) >> 8)
                              + 37
                              * ((unsigned __int8)((unsigned __int64)RelatedDeviceObject >> 4) + 37 * dword_140F8BB50))))))))
                       % AstIoctlBloomFilter) >> 3)
                     + qword_140F8BB48) >> (((HIBYTE(v125)
                                            + 37
                                            * (BYTE6(v125)
                                             + 37
                                             * (BYTE5(v125)
                                              + 37
                                              * (BYTE4(v125)
                                               + 37
                                               * (((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 24)
                                                + 37
                                                * ((unsigned __int8)((unsigned int)((unsigned __int64)RelatedDeviceObject >> 4) >> 16)
                                                 + 37
                                                 * ((unsigned __int8)((unsigned __int16)((unsigned __int64)RelatedDeviceObject >> 4) >> 8)
                                                  + 37
                                                  * ((unsigned __int8)((unsigned __int64)RelatedDeviceObject >> 4)
                                                   + 37 * dword_140F8BB50))))))))
                                           % AstIoctlBloomFilter) & 7)) & 1) == 0
        || (v31 = (unsigned __int8)v103 & 7,
            ((*(char *)(((unsigned __int64)(unsigned int)v103 >> 3) + qword_140F8BB48) >> ((unsigned __int8)v103 & 7)) & 1) == 0)
        || (v32 = (unsigned __int64)(unsigned int)v30 >> 3,
            v33 = v30 & 7,
            v31 = v33,
            ((*(char *)(v32 + qword_140F8BB48) >> v33) & 1) == 0) )
      {
        AstAddBloomFilter(v31, v28, a6);
        memset_0(&v126, 0, 0x40uLL);
        v82 = *(unsigned __int16 *)(v29 + 8);
        if ( *(unsigned __int16 *)(v29 + 8) >= 0x40u )
          v82 = 64LL;
        memcpy_s(&v126, 0x40uLL, *(const void **)(v29 + 16), v82);
        v126 ^= v130 << 8;
        v127 ^= v131 << 8;
        v128 ^= v132 << 8;
        v129 ^= v133 << 8;
        v27 = HIBYTE(v129)
            + 0x288D4C21D6A4D26DLL * (unsigned __int8)v128
            + 0xDC6C00E405D269C1uLL * HIBYTE(v127)
            + 0x40B7CD9739B584A1LL * HIBYTE(v126)
            + 0x407AFAF12AFB592DLL * (unsigned __int8)v126
            + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v127
            + 0x65EC3D53F206D09DLL * BYTE4(v127)
            + 0x8BA4A57B9C3D7391uLL * BYTE3(v126)
            + 0xC8228AB72E6AE889uLL * BYTE1(v127)
            + 0x2ECBEADD94E1B3F5LL * BYTE2(v126)
            + 0xC53F5E946719795LL * BYTE2(v127)
            + 0x4FE1DAF580C363FDLL * BYTE4(v126)
            + 0xBB24DD21FAFC26B1uLL * BYTE3(v127)
            + 0x5A90B6DB573C2B45LL * BYTE6(v126)
            + 0x8B7970C2A4EFB2A9uLL * BYTE1(v128)
            + 0xBD90C36322378919uLL * BYTE5(v127)
            + 0x16EA6DB39BB240F9LL * BYTE5(v126)
            + 0xDB9C20F4D76948E5uLL * BYTE6(v127)
            + 0xC378F206849F0269uLL * BYTE1(v126)
            + 0x3433B6F080FF8F35LL * BYTE2(v128)
            + 37
            * (BYTE6(v129)
             + 37
             * (BYTE5(v129)
              + 37
              * (BYTE4(v129)
               + 37
               * (BYTE3(v129)
                + 37
                * (BYTE2(v129)
                 + 37
                 * (BYTE1(v129)
                  + 37
                  * ((unsigned __int8)v129
                   + 37
                   * (HIBYTE(v128) + 37 * (BYTE6(v128) + 37 * (BYTE5(v128) + 37 * (BYTE4(v128) + 37LL * BYTE3(v128))))))))))))
            + 0x4D9751421B9040BLL;
        if ( (unsigned int)dword_140E06EF0 > 5
          && (qword_140E06F00 & 0x200000000000LL) != 0
          && (qword_140E06F08 & 0x200000000000LL) == qword_140E06F08 )
        {
          v120 = 0x80000000LL;
          v135 = &v120;
          v136 = 8LL;
          v121 = v101;
          v137 = &v121;
          v138 = 8LL;
          v114 = a6;
          v139 = &v114;
          v140 = 4LL;
          v122 = HIBYTE(v129)
               + 0x288D4C21D6A4D26DLL * (unsigned __int8)v128
               + 0xDC6C00E405D269C1uLL * HIBYTE(v127)
               + 0x40B7CD9739B584A1LL * HIBYTE(v126)
               + 0x407AFAF12AFB592DLL * (unsigned __int8)v126
               + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v127
               + 0x65EC3D53F206D09DLL * BYTE4(v127)
               + 0x8BA4A57B9C3D7391uLL * BYTE3(v126)
               + 0xC8228AB72E6AE889uLL * BYTE1(v127)
               + 0x2ECBEADD94E1B3F5LL * BYTE2(v126)
               + 0xC53F5E946719795LL * BYTE2(v127)
               + 0x4FE1DAF580C363FDLL * BYTE4(v126)
               + 0xBB24DD21FAFC26B1uLL * BYTE3(v127)
               + 0x5A90B6DB573C2B45LL * BYTE6(v126)
               + 0x8B7970C2A4EFB2A9uLL * BYTE1(v128)
               + 0xBD90C36322378919uLL * BYTE5(v127)
               + 0x16EA6DB39BB240F9LL * BYTE5(v126)
               + 0xDB9C20F4D76948E5uLL * BYTE6(v127)
               + 0xC378F206849F0269uLL * BYTE1(v126)
               + 0x3433B6F080FF8F35LL * BYTE2(v128)
               + 37
               * (BYTE6(v129)
                + 37
                * (BYTE5(v129)
                 + 37
                 * (BYTE4(v129)
                  + 37
                  * (BYTE3(v129)
                   + 37
                   * (BYTE2(v129)
                    + 37
                    * (BYTE1(v129)
                     + 37
                     * ((unsigned __int8)v129
                      + 37
                      * (HIBYTE(v128) + 37
                                      * (BYTE6(v128) + 37 * (BYTE5(v128) + 37 * (BYTE4(v128) + 37LL * BYTE3(v128))))))))))))
               + 0x4D9751421B9040BLL;
          v141 = &v122;
          v142 = 8LL;
          v115 = *(unsigned __int16 *)(v29 + 8);
          v143 = &v115;
          v144 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06EF0,
            (unsigned __int8 *)&word_140045D9E,
            0LL,
            0LL,
            7u,
            &v134);
        }
      }
    }
  }
  v34 = v101;
  if ( !v13 )
    goto LABEL_85;
  if ( IsSandboxedToken )
    goto LABEL_85;
  Flink = v101->Blink[5].Flink;
  if ( !Flink )
    goto LABEL_85;
  v36 = (__int64 (__fastcall *)(int, int, int, int, __int64, int, int, __int64, __int64))Flink[5].Flink;
  v103 = v36;
  if ( !v36 )
    goto LABEL_85;
  if ( PreviousMode )
  {
    LODWORD(v27) = (_DWORD)VirtualAddress;
    if ( VirtualAddress )
    {
      if ( v17 == 1 )
      {
        if ( Length )
        {
          v40 = (char *)VirtualAddress + Length;
          if ( v40 < VirtualAddress || (unsigned __int64)v40 > 0x7FFFFFFF0000LL )
          {
            v25 = (struct _FILE_OBJECT *)v99;
            Length = v94;
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
        v25 = (struct _FILE_OBJECT *)v99;
        Length = v94;
      }
    }
  }
  if ( a6 == 589856 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
    v25 = (struct _FILE_OBJECT *)v99;
    Length = v94;
  }
  if ( (MmVerifierData & 0x10) == 0 )
    goto LABEL_75;
  Irp = (PIRP)v34->Blink;
  if ( !MmIsDriverVerifying((struct _DRIVER_OBJECT *)Irp) )
  {
    v36 = v103;
LABEL_75:
    Irp = 0LL;
    goto LABEL_76;
  }
  Irp = (PIRP)VfFastIoSnapState(Irp);
  v36 = v103;
LABEL_76:
  if ( v36 != PiDaFastIoDispatch )
  {
    HandleInformation = Length;
    Object = (int)VirtualAddress;
    v44 = v25;
LABEL_262:
    v45 = guard_dispatch_icall_no_overrides(v44);
    goto LABEL_81;
  }
  v41 = 0;
  v91 = 0;
  FsContext = (unsigned __int64)v25->FsContext;
  if ( FsContext >= 5 )
    goto LABEL_82;
  v43 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, _DWORD, _DWORD, __int64))qword_1400020C0[3 * FsContext];
  if ( !v43 )
    goto LABEL_82;
  LOBYTE(v27) = 1;
  v44 = v25;
  HandleInformation = Length;
  Object = (int)VirtualAddress;
  if ( v43 != PiCMFastIoDeviceDispatch )
    goto LABEL_262;
  v45 = PiCMFastIoDeviceDispatch(
          (_DWORD)v25,
          v27,
          (_DWORD)Src,
          Size,
          (__int64)VirtualAddress,
          Length,
          a6,
          (__int64)&v106);
LABEL_81:
  v41 = v45;
  v91 = v45;
  v36 = v103;
LABEL_82:
  if ( Irp )
  {
    VfFastIoCheckState(Irp, (ULONG_PTR)v36);
    v41 = v91;
  }
  if ( !v41 )
  {
LABEL_85:
    p_Flags = &v25->Flags;
    if ( (v25->Flags & 0x4000000) == 0 )
      KeResetEvent(&v25->Event);
    v46 = (IRP *)IopAllocateIrpExReturn((__int64)v34, BYTE4(v34[4].Blink), (unsigned __int8)v89 ^ 1u);
    v48 = v46;
    Irp = v46;
    if ( v46 )
    {
      v46->Tail.Overlay.OriginalFileObject = v25;
      v46->Tail.Overlay.Thread = Thread;
      v46->Tail.Overlay.AuxiliaryBuffer = 0LL;
      v46->RequestorMode = PreviousMode;
      v46->PendingReturned = 0;
      v46->Cancel = 0;
      v46->CancelRoutine = 0LL;
      v46->UserEvent = (PKEVENT)v100;
      v46->UserIosb = v110;
      v46->Overlay.AllocationSize = a3;
      v46->Overlay.AsynchronousParameters.UserApcContext = (PVOID)a4;
      p_MajorFunction = &v46->Tail.Overlay.CurrentStackLocation[-1].MajorFunction;
      Handlea = p_MajorFunction;
      v50 = v98;
      *p_MajorFunction = (v98 != 0) + 13;
      *((_QWORD *)p_MajorFunction + 6) = v25;
      p_MajorFunction[2] = Length;
      v51 = (unsigned int)Size;
      p_MajorFunction[4] = Size;
      p_MajorFunction[6] = a6;
      v46->MdlAddress = 0LL;
      v46->AssociatedIrp.MasterIrp = 0LL;
      if ( ((__int64)v101[3].Flink & 0x80000) != 0 && !IsSandboxedToken )
        v17 = 3;
      if ( v17 )
      {
        if ( v17 == 1 || v17 == 2 )
        {
          v46->Flags = 0;
          *((_QWORD *)p_MajorFunction + 4) = 0LL;
          if ( (_DWORD)v51 && Src )
          {
            v73 = v51;
            v74 = 107LL;
            if ( !v50 )
              v74 = 99LL;
            Pool2 = (struct _IRP *)ExAllocatePool2(v74);
            v48->AssociatedIrp.MasterIrp = Pool2;
            memmove(Pool2, Src, v73);
            v48->Flags = 48;
            v13 = a11;
          }
          if ( Length )
          {
            Mdl = (struct _KTHREAD *)IoAllocateMdl(VirtualAddress, Length, 0, 1u, v48);
            Thread = Mdl;
            v48->MdlAddress = (PMDL)Mdl;
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            LODWORD(v103) = *(_DWORD *)Handlea;
            LOBYTE(v16) = v17 != 1;
            MmProbeAndLockPages((PMDL)Mdl, PreviousMode, v16);
            if ( (MmTrackLockedPages & 1) != 0 )
              MmUpdateMdlTracker((unsigned __int64)Thread, *(&v101->Blink[7].Flink + (unsigned int)v103), v101);
          }
          p_MajorFunction = Handlea;
        }
        else if ( v17 == 3 )
        {
          v46->Flags = 0;
          v46->UserBuffer = VirtualAddress;
          *((_QWORD *)p_MajorFunction + 4) = Src;
        }
      }
      else
      {
        *((_QWORD *)p_MajorFunction + 4) = 0LL;
        if ( (_DWORD)v51 || Length )
        {
          if ( P )
          {
            v46->AssociatedIrp.MasterIrp = (struct _IRP *)P;
          }
          else
          {
            v52 = 105LL;
            if ( !v50 )
              v52 = 97LL;
            v53 = (struct _IRP *)ExAllocatePool2(v52);
            v48->AssociatedIrp.MasterIrp = v53;
            if ( Src )
              memmove(v53, Src, (unsigned int)Size);
            p_MajorFunction = Handlea;
            v51 = (unsigned int)Size;
          }
          v48->Flags = 48;
          v48->UserBuffer = VirtualAddress;
          if ( Length )
            v48->Flags = 112;
        }
        else
        {
          v46->Flags = 0;
          v46->UserBuffer = 0LL;
        }
        if ( (unsigned int)v51 < Length )
        {
          memset_0((char *)v48->AssociatedIrp.MasterIrp + v51, 0, Length - (unsigned int)v51);
          p_MajorFunction = Handlea;
        }
      }
      *((_BYTE *)p_MajorFunction + 2) |= v117.GrantedAccess & 1 | (unsigned __int8)(2 * (v117.GrantedAccess & 2));
      if ( !v13 )
        v48->Flags |= 0x800u;
      if ( a6 == 589856 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
        v25 = (struct _FILE_OBJECT *)v99;
      }
      if ( !IsSandboxedToken || v93 )
        goto LABEL_109;
      MasterIrp = v48->AssociatedIrp.MasterIrp;
      if ( a6 == 590860 )
        MasterIrp = (struct _IRP *)((char *)MasterIrp + 32);
      if ( *(_DWORD *)&MasterIrp->Type == -1610612733 )
      {
        IopExceptionCleanupEx((ULONG_PTR)v25, v48, v100, 0LL, (*p_Flags & 2) != 0);
        return 3221225485LL;
      }
      else
      {
LABEL_109:
        LOBYTE(v47) = v98 == 0;
        LOBYTE(HandleInformation) = v89;
        LOBYTE(Object) = PreviousMode;
        return IopSynchronousServiceTail(v101, v48, v25, v47, Object, HandleInformation, 2);
      }
    }
    else
    {
      if ( v100 )
        ObfDereferenceObject(v100);
      if ( (*p_Flags & 2) != 0 )
        IopReleaseFileObjectLock((ULONG_PTR)v25);
      ObfDereferenceObject(v25);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 3221225626LL;
    }
  }
  v60 = 0LL;
  v116 = 0LL;
  v119 = 0LL;
  v97 = 0;
  if ( (a3.LowPart & 1) != 0 )
  {
    v61 = v110;
    HIDWORD(v110->Pointer) = DWORD2(v106);
    v61->Status = v106;
  }
  else
  {
    *(_OWORD *)&v110->Status = v106;
  }
  v62 = v106;
  v63 = Handlea;
  if ( v25->CompletionContext
    && ((v25->Flags & 0x2000000) == 0 || (v106 & 0xC0000000) == 0x80000000)
    && (v106 & 0xC0000000) != 0xC0000000 )
  {
    IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v25, &v97, &v116, &v119);
    v62 = v106;
    v60 = v116;
  }
  if ( v63 )
  {
    if ( (v25->Flags & 0x8000000) == 0 || v60 && (v62 & 0xC0000000) == 0x80000000 )
    {
      v64 = v100;
      KeSetEvent((PRKEVENT)v100, 0, 0);
    }
    else
    {
      v64 = v100;
    }
    ObfDereferenceObject(v64);
    v62 = v106;
  }
  if ( v89 )
  {
    IopReleaseFileObjectLock((ULONG_PTR)v25);
    v62 = v106;
  }
  if ( v60 && a4 )
  {
    v80 = IoSetIoCompletionEx2(v60, v119, a4, v62, *((__int64 *)&v106 + 1), 1u, 0LL);
    v81 = v106;
    if ( v80 < 0 )
      v81 = -1073741670;
    if ( (v81 & 0xC0000000) == 0x80000000 )
      v81 = 259;
    LODWORD(v106) = v81;
  }
  if ( v97 )
    IopDecrementCompletionContextUsageCount((ULONG_PTR)v25);
  ObfDereferenceObject(v25);
  return (unsigned int)v106;
}
