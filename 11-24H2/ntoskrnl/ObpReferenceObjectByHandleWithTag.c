/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x140847AA0
 * Callers:
 *     NtResumeProcess @ 0x1406F59E0 (NtResumeProcess.c)
 *     HalpAcquirePccInterface @ 0x1407019E4 (HalpAcquirePccInterface.c)
 *     DbgkpCreateNotificationEvent @ 0x140704940 (DbgkpCreateNotificationEvent.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407458E4 (PfSnAppLaunchScenarioControl.c)
 *     PfSnSetAltPrefetchParam @ 0x140745A74 (PfSnSetAltPrefetchParam.c)
 *     PopCreateHiberFile @ 0x140750050 (PopCreateHiberFile.c)
 *     PopGetPolicyDeviceObject @ 0x140758C74 (PopGetPolicyDeviceObject.c)
 *     PspConvertSiloToServerSilo @ 0x140772974 (PspConvertSiloToServerSilo.c)
 *     NtChangeProcessState @ 0x1407757D0 (NtChangeProcessState.c)
 *     NtCreateProcessStateChange @ 0x140775C90 (NtCreateProcessStateChange.c)
 *     PspReferenceCpuPartitionByHandle @ 0x140777110 (PspReferenceCpuPartitionByHandle.c)
 *     PspAssignPrimaryToken @ 0x140777290 (PspAssignPrimaryToken.c)
 *     PspCreatePicoProcess @ 0x140779F60 (PspCreatePicoProcess.c)
 *     NtAlertResumeThread @ 0x14077A4D0 (NtAlertResumeThread.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14077A6B0 (PsIumEnableOnDemandDebugWithResponse.c)
 *     ExpProfileCreate @ 0x1407C1A4C (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C51A0 (NtPssCaptureVaSpaceBulk.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x1407EF8C0 (MiInsertPageFileInList.c)
 *     MiInjectThreadForHotPatch @ 0x1407F3738 (MiInjectThreadForHotPatch.c)
 *     NtCreateEnclave @ 0x1407F80D0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407F84C0 (NtInitializeEnclave.c)
 *     MmGetSectionStrongImageReference @ 0x1407FBB9C (MmGetSectionStrongImageReference.c)
 *     MmStoreRegister @ 0x1407FDB18 (MmStoreRegister.c)
 *     MmScrubMemory @ 0x1407FE3E0 (MmScrubMemory.c)
 *     MiCreateMemoryEvent @ 0x1408001D8 (MiCreateMemoryEvent.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140829C2C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x14082A14C (VrpHandleIoctlModifyFlags.c)
 *     NtDuplicateObject @ 0x14083C090 (NtDuplicateObject.c)
 *     ObWaitForSingleObject @ 0x1408470A0 (ObWaitForSingleObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140847A60 (ObReferenceObjectByHandleWithTag.c)
 *     NtOpenProcessTokenEx @ 0x140850490 (NtOpenProcessTokenEx.c)
 *     NtGetNextProcess @ 0x1408615C0 (NtGetNextProcess.c)
 *     NtUnmapViewOfSection @ 0x140896C80 (NtUnmapViewOfSection.c)
 *     NtUnmapViewOfSectionEx @ 0x140896D30 (NtUnmapViewOfSectionEx.c)
 *     MiMapViewOfSectionCommon @ 0x1408A25C0 (MiMapViewOfSectionCommon.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     MmFreeVirtualMemory @ 0x1408D9AD0 (MmFreeVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1408DA8B0 (NtProtectVirtualMemory.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408F5AF4 (PfpDeprioritizeOldPagesInWs.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 *     NtCreateThreadEx @ 0x1408F8F00 (NtCreateThreadEx.c)
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     PspCreateThread @ 0x1408FA8F0 (PspCreateThread.c)
 *     NtTerminateThread @ 0x1408FDE30 (NtTerminateThread.c)
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409157C0 (MiAllocateVirtualMemoryPrepare.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14092B88C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14092BAE4 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14092C3D8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     MmPrefetchVirtualMemory @ 0x140936AD8 (MmPrefetchVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     NtExtendSection @ 0x140989CF0 (NtExtendSection.c)
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 *     NtCreateWorkerFactory @ 0x1409901C0 (NtCreateWorkerFactory.c)
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
 *     MiReadWriteVirtualMemory @ 0x140992B20 (MiReadWriteVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 *     PspQueryQuotaLimits @ 0x1409AF220 (PspQueryQuotaLimits.c)
 *     NtFlushVirtualMemory @ 0x1409C16D0 (NtFlushVirtualMemory.c)
 *     MiLockUnlockCommon @ 0x1409DE190 (MiLockUnlockCommon.c)
 *     NtRemoveProcessDebug @ 0x1409E3070 (NtRemoveProcessDebug.c)
 *     NtDebugActiveProcess @ 0x1409E31E0 (NtDebugActiveProcess.c)
 *     NtSetInformationVirtualMemory @ 0x1409E3F70 (NtSetInformationVirtualMemory.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409E62A0 (ExpWnfCaptureScopeInstanceId.c)
 *     NtQuerySection @ 0x1409E9AC0 (NtQuerySection.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409F75EC (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspCreateProcess @ 0x1409F98C4 (PspCreateProcess.c)
 *     NtSuspendProcess @ 0x140A0CAA0 (NtSuspendProcess.c)
 *     NtChangeThreadState @ 0x140A0CB20 (NtChangeThreadState.c)
 *     NtSuspendThread @ 0x140A0CE40 (NtSuspendThread.c)
 *     NtResumeThread @ 0x140A0D170 (NtResumeThread.c)
 *     PspQueryWorkingSetWatch @ 0x140A0D6C8 (PspQueryWorkingSetWatch.c)
 *     PopPowerRequestActionInfo @ 0x140A0DBB8 (PopPowerRequestActionInfo.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140A0DD9C (PopPowerRequestSpecialRequestSet.c)
 *     NtAssignProcessToJobObject @ 0x140A10200 (NtAssignProcessToJobObject.c)
 *     NtIsProcessInJob @ 0x140A10B60 (NtIsProcessInJob.c)
 *     NtGetNextThread @ 0x140A1A3A0 (NtGetNextThread.c)
 *     NtLoadEnclaveData @ 0x140A29800 (NtLoadEnclaveData.c)
 *     MiMapImageForEnclaveUse @ 0x140A2AB18 (MiMapImageForEnclaveUse.c)
 *     NtResetWriteWatch @ 0x140A31D20 (NtResetWriteWatch.c)
 *     MmProcessWorkingSetControl @ 0x140A434A4 (MmProcessWorkingSetControl.c)
 *     MiResolveMemoryEvent @ 0x140A51130 (MiResolveMemoryEvent.c)
 *     NtCreateThreadStateChange @ 0x140A58340 (NtCreateThreadStateChange.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140A5BD80 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtAlertThread @ 0x140A6D830 (NtAlertThread.c)
 *     NtAcquireProcessActivityReference @ 0x140A71250 (NtAcquireProcessActivityReference.c)
 *     PspCreatePicoThread @ 0x140A91570 (PspCreatePicoThread.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140A96708 (DbgkpWerInitializeDeferredLiveDump.c)
 *     MiCombineIdenticalPages @ 0x140A97650 (MiCombineIdenticalPages.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 *     MiQueryProcessActivePatches @ 0x140AA9284 (MiQueryProcessActivePatches.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140AAD744 (PsIumGetOnDemandDebugChallenge.c)
 *     PspQueryPooledQuotaLimits @ 0x140AAE674 (PspQueryPooledQuotaLimits.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB11E8 (MiForceCrashForInvalidAccess.c)
 *     PfpSourceGetPrefetchSupport @ 0x140AB1900 (PfpSourceGetPrefetchSupport.c)
 *     PopEtEnergyTrackerQuery @ 0x140AC7690 (PopEtEnergyTrackerQuery.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     NtTerminateProcess @ 0x140ACF260 (NtTerminateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14042D470 (ExHandleLogBadReference.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14043D820 (ExSlowReplenishHandleTableEntry.c)
 *     ExFastReplenishHandleTableEntry @ 0x14046E920 (ExFastReplenishHandleTableEntry.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x1408497E8 (ExpGetHandleExtraInfo.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x140863834 (ObpAuditObjectAccess.c)
 *     VfCheckUserHandle @ 0x140BAB228 (VfCheckUserHandle.c)
 */

__int64 __fastcall ObpReferenceObjectByHandleWithTag(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __int64 a3,
        char a4,
        ULONG Tag,
        _QWORD *a6,
        unsigned int *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v9; // ebp
  ULONG_PTR v10; // rbx
  _KPROCESS *Process; // r12
  ULONG_PTR KernelTime; // r13
  signed __int64 *v13; // rax
  signed __int64 *v14; // rdi
  __int64 v15; // rax
  signed __int64 v16; // r14
  __int64 v17; // rsi
  __int128 v18; // rt0
  unsigned __int8 v19; // tt
  unsigned __int64 HandlePointer; // rbx
  unsigned __int8 v21; // al
  PVOID v22; // r8
  unsigned __int64 v23; // rtt
  ULONG_PTR v25; // rdi
  signed __int64 BugCheckParameter4; // r12
  signed __int64 v27; // r8
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // r14d
  __int64 v31; // rsi
  unsigned int v32; // esi
  char v33; // si
  ULONG_PTR v34; // r10
  bool v35; // zf
  unsigned __int64 v36; // rtt
  signed __int64 v37; // r12
  unsigned __int64 v38; // rtt
  unsigned __int64 v39; // rcx
  _QWORD *HandleExtraInfo; // rax
  _QWORD *v41; // r11
  volatile signed __int64 *v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  signed __int32 v45[8]; // [rsp+0h] [rbp-A8h] BYREF
  char v46; // [rsp+30h] [rbp-78h]
  unsigned __int64 v47[4]; // [rsp+48h] [rbp-60h] BYREF
  ULONG_PTR v48; // [rsp+B0h] [rbp+8h]

  v48 = BugCheckParameter1;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = BugCheckParameter1;
  v46 = 0;
  Process = CurrentThread->ApcState.Process;
  *a6 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    if ( BugCheckParameter1 == -1LL )
    {
      if ( (POBJECT_TYPE *)a3 == PsProcessType || !a3 )
      {
        v25 = (ULONG_PTR)CurrentThread->ApcState.Process;
        if ( (a2 & 0xFFE00000) == 0 || !a4 )
        {
          if ( a7 )
          {
            a7[1] = 0x1FFFFF;
            *a7 = 0;
          }
          ObpTraceObjectReferenceIfActive(v25 - 48);
          BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v25 - 48));
          if ( BugCheckParameter4 <= 1 )
            KeBugCheckEx(0x18u, 0LL, v25, 0x10uLL, BugCheckParameter4);
          *a6 = v25;
          return v9;
        }
        return (unsigned int)-1073741790;
      }
    }
    else
    {
      if ( BugCheckParameter1 != -2LL )
      {
        if ( a4 )
          return 3221225480LL;
        KernelTime = ObpKernelHandleTable;
        v10 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
        --CurrentThread->KernelApcDisable;
        v48 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
        goto LABEL_10;
      }
      if ( (POBJECT_TYPE *)a3 == PsThreadType || !a3 )
      {
        if ( (a2 & 0xFFE00000) == 0 || !a4 )
        {
          if ( a7 )
          {
            a7[1] = 0x1FFFFF;
            *a7 = 0;
          }
          ObpTraceObjectReferenceIfActive((_DWORD)CurrentThread - 48);
          v37 = _InterlockedIncrement64(&CurrentThread[-1].SchedulerAssistLastYieldBoostTime);
          if ( v37 <= 1 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v37);
          *a6 = CurrentThread;
          return v9;
        }
        return (unsigned int)-1073741790;
      }
    }
    return (unsigned int)-1073741788;
  }
  if ( (MmVerifierData & 0x100) != 0 && !a4 )
    VfCheckUserHandle(BugCheckParameter1);
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    {
LABEL_84:
      v9 = -1073741816;
LABEL_30:
      KeLeaveCriticalRegionThread();
      return v9;
    }
    KernelTime = Process[1].KernelTime;
  }
  else
  {
    KernelTime = 0LL;
    _m_prefetchw(&Process[1].ProfileListHead.Blink);
    v38 = (unsigned __int64)Process[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v38 == _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&Process[1].ProfileListHead.Blink,
                  v38 + 2,
                  v38)
      || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    {
      KernelTime = Process[1].KernelTime;
      if ( !KernelTime )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
    }
    v46 = 1;
  }
  if ( !KernelTime )
    goto LABEL_84;
  if ( KernelTime == ObpKernelHandleTable )
  {
LABEL_83:
    v9 = -1073741816;
LABEL_27:
    if ( v46 )
    {
      _m_prefetchw(&Process[1].ProfileListHead.Blink);
      v23 = (unsigned __int64)Process[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v23 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&Process[1].ProfileListHead.Blink,
                    v23 - 2,
                    v23) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
    }
    goto LABEL_30;
  }
LABEL_10:
  if ( (v10 & 0x3FC) == 0 || (v13 = (signed __int64 *)ExpLookupHandleTableEntry(KernelTime, v10), (v14 = v13) == 0LL) )
  {
LABEL_81:
    if ( v10 )
      ExHandleLogBadReference(KernelTime, v10, KeGetCurrentThread()->PreviousMode);
    goto LABEL_83;
  }
  _m_prefetchw(v13);
  v15 = *v13;
LABEL_13:
  v16 = v14[1];
  v47[0] = v15;
  v17 = v15;
  v47[1] = v16;
  do
  {
    if ( (v17 & 0x1FFFE) == 0 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v14);
          v27 = *v14;
          if ( (*v14 & 1) != 0 )
            break;
          if ( !v27 )
          {
            v10 = v48;
            goto LABEL_81;
          }
          ExpBlockOnLockedHandleEntry(KernelTime, v14);
        }
      }
      while ( v27 != _InterlockedCompareExchange64(v14, v27 - 1, v27) );
      HandlePointer = ExGetHandlePointer(v14);
      *(_OWORD *)v47 = *(_OWORD *)v14;
      v28 = (int)(ExSlowReplenishHandleTableEntry((unsigned __int64 *)v14) + 1);
      v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, v28);
      if ( v29 <= 0 )
        KeBugCheckEx(0x18u, 0LL, HandlePointer + 48, 0x10uLL, v28 + v29);
      _InterlockedIncrement64(v14);
      _InterlockedOr(v45, 0);
      if ( *(_QWORD *)(KernelTime + 48) )
        ExfUnblockPushLock(KernelTime + 48, 0LL);
LABEL_47:
      LODWORD(v16) = v47[1];
      v17 = v47[0];
      goto LABEL_20;
    }
    if ( (v17 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(KernelTime, v14);
      _m_prefetchw(v14);
      v15 = *v14;
      goto LABEL_13;
    }
    *(_QWORD *)&v18 = v17;
    *((_QWORD *)&v18 + 1) = v16;
    v19 = _InterlockedCompareExchange128(v14, v16, v17 - 2, (signed __int64 *)&v18);
    v17 = v18;
    *(_OWORD *)v47 = v18;
    v16 = *((_QWORD *)&v18 + 1);
  }
  while ( !v19 );
  if ( (unsigned __int16)((unsigned __int64)v17 >> 1) != 16 )
  {
    HandlePointer = ExGetHandlePointer((__int64 *)v47);
    goto LABEL_20;
  }
  v47[0] = v17 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)(((unsigned __int64)v17 >> 1) - 1));
  v42 = (volatile signed __int64 *)ExGetHandlePointer((__int64 *)v47);
  HandlePointer = (unsigned __int64)v42;
  v43 = _InterlockedExchangeAdd64(v42, 0x7FF0uLL);
  if ( v43 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v42 + 6), 0x10uLL, v43 + 32752);
  v44 = ExFastReplenishHandleTableEntry(v14, v47, 32752);
  if ( !v44 )
    goto LABEL_47;
  _InterlockedAdd64((volatile signed __int64 *)HandlePointer, -v44);
  LODWORD(v16) = v47[1];
  v17 = v47[0];
LABEL_20:
  ObpTraceObjectReferenceIfActive(HandlePointer);
  v21 = ObHeaderCookie ^ *(_BYTE *)(HandlePointer + 24) ^ BYTE1(HandlePointer);
  if ( !a3 || *(_BYTE *)(a3 + 40) != v21 )
  {
    v22 = (PVOID)ObTypeIndexTable[v21];
    if ( !v22 || v22 == MmBadPointer )
      KeBugCheckEx(0x189u, HandlePointer, (ULONG_PTR)v22, 0LL, 0LL);
    if ( a3 )
    {
      v9 = -1073741788;
      goto LABEL_26;
    }
  }
  v30 = v16 & 0x1FFFFFF;
  if ( a4 )
  {
    if ( (~v30 & a2) != 0 )
    {
      v9 = -1073741790;
    }
    else
    {
      if ( (*(_BYTE *)(HandlePointer + 26) & 0x40) == 0 )
        goto LABEL_51;
      v39 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x7F];
      if ( !*(_BYTE *)(*(_QWORD *)v39 + 24LL) )
        goto LABEL_51;
      if ( *(_QWORD *)(*(_QWORD *)v39 + 16LL) != 1LL )
      {
        v17 = v47[0];
        goto LABEL_51;
      }
      v9 = -1073700858;
    }
LABEL_26:
    ObfDereferenceObjectWithTag((PVOID)(HandlePointer + 48), Tag);
    goto LABEL_27;
  }
LABEL_51:
  v31 = v17 >> 17;
  if ( a7 )
  {
    v32 = v31 & 7;
    a7[1] = v30;
    *a7 = v32;
    LODWORD(v31) = v32 >> 2;
  }
  else
  {
    LOBYTE(v31) = (unsigned __int8)v31 >> 2;
  }
  v33 = v31 & 1;
  v34 = v48;
  if ( a8 )
  {
    if ( *(_DWORD *)(KernelTime + 4) )
    {
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(KernelTime, v48);
      if ( HandleExtraInfo )
        *v41 = *HandleExtraInfo;
    }
  }
  if ( v33 && a2 && !(unsigned __int8)ObpAuditObjectAccess(KernelTime, v34, v14, HandlePointer, a2) )
  {
    v9 = -1073741816;
    goto LABEL_26;
  }
  v35 = v46 == 0;
  *a6 = HandlePointer + 48;
  if ( !v35 )
  {
    _m_prefetchw(&Process[1].ProfileListHead.Blink);
    v36 = (unsigned __int64)Process[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v36 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&Process[1].ProfileListHead.Blink,
                  v36 - 2,
                  v36) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  }
  KeLeaveCriticalRegionThread();
  return 0LL;
}
