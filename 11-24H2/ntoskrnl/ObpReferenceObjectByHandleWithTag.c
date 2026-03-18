/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x14084B7E0
 * Callers:
 *     NtResumeProcess @ 0x1406F79E0 (NtResumeProcess.c)
 *     HalpAcquirePccInterface @ 0x140703E24 (HalpAcquirePccInterface.c)
 *     DbgkpCreateNotificationEvent @ 0x140706D80 (DbgkpCreateNotificationEvent.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407475F4 (PfSnAppLaunchScenarioControl.c)
 *     PfSnSetAltPrefetchParam @ 0x140747784 (PfSnSetAltPrefetchParam.c)
 *     PopCreateHiberFile @ 0x140751D30 (PopCreateHiberFile.c)
 *     PopGetPolicyDeviceObject @ 0x14075A584 (PopGetPolicyDeviceObject.c)
 *     PspConvertSiloToServerSilo @ 0x140772754 (PspConvertSiloToServerSilo.c)
 *     NtChangeProcessState @ 0x1407755B0 (NtChangeProcessState.c)
 *     NtCreateProcessStateChange @ 0x140775A70 (NtCreateProcessStateChange.c)
 *     PspReferenceCpuPartitionByHandle @ 0x140776EF0 (PspReferenceCpuPartitionByHandle.c)
 *     PspAssignPrimaryToken @ 0x140777070 (PspAssignPrimaryToken.c)
 *     PspCreatePicoProcess @ 0x140779E60 (PspCreatePicoProcess.c)
 *     NtAlertResumeThread @ 0x14077A3D0 (NtAlertResumeThread.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14077A800 (PsIumEnableOnDemandDebugWithResponse.c)
 *     ExpProfileCreate @ 0x1407C3C30 (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407C4840 (NtPssCaptureVaSpaceBulk.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x1407EF2F0 (MiInsertPageFileInList.c)
 *     MiInjectThreadForHotPatch @ 0x1407F3144 (MiInjectThreadForHotPatch.c)
 *     NtCreateEnclave @ 0x1407F7960 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407F7D50 (NtInitializeEnclave.c)
 *     MmGetSectionStrongImageReference @ 0x1407FB42C (MmGetSectionStrongImageReference.c)
 *     MmStoreRegister @ 0x1407FD3A8 (MmStoreRegister.c)
 *     MmScrubMemory @ 0x1407FDC70 (MmScrubMemory.c)
 *     MiCreateMemoryEvent @ 0x1407FFA98 (MiCreateMemoryEvent.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408293FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x14082991C (VrpHandleIoctlModifyFlags.c)
 *     NtDuplicateObject @ 0x14083FDD0 (NtDuplicateObject.c)
 *     ObWaitForSingleObject @ 0x14084ADE0 (ObWaitForSingleObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14084B7A0 (ObReferenceObjectByHandleWithTag.c)
 *     NtOpenProcessTokenEx @ 0x1408541D0 (NtOpenProcessTokenEx.c)
 *     MiMapViewOfSectionCommon @ 0x140899F20 (MiMapViewOfSectionCommon.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     NtCreateThreadEx @ 0x1408A2B60 (NtCreateThreadEx.c)
 *     PspBuildCreateProcessContext @ 0x1408A2E70 (PspBuildCreateProcessContext.c)
 *     PspCreateThread @ 0x1408A42C8 (PspCreateThread.c)
 *     NtTerminateThread @ 0x1408A7BD0 (NtTerminateThread.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     NtLoadEnclaveData @ 0x1408D9D70 (NtLoadEnclaveData.c)
 *     MiMapImageForEnclaveUse @ 0x1408DB088 (MiMapImageForEnclaveUse.c)
 *     MmFreeVirtualMemory @ 0x1408DB8A0 (MmFreeVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1408DC680 (NtProtectVirtualMemory.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1408DEC10 (MiAllocateVirtualMemoryPrepare.c)
 *     NtUnmapViewOfSection @ 0x1408E4C70 (NtUnmapViewOfSection.c)
 *     NtUnmapViewOfSectionEx @ 0x1408E4D20 (NtUnmapViewOfSectionEx.c)
 *     NtGetNextProcess @ 0x1408EFDC0 (NtGetNextProcess.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14092974C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1409299A4 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14092A298 (VrpHandleIoctlLoadDifferencingHive.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x140932FDC (PfpDeprioritizeOldPagesInWs.c)
 *     PsReferencePartitionByHandle @ 0x140934434 (PsReferencePartitionByHandle.c)
 *     NtSuspendThread @ 0x14093A420 (NtSuspendThread.c)
 *     NtChangeThreadState @ 0x14093ADE0 (NtChangeThreadState.c)
 *     NtTerminateProcess @ 0x14093B030 (NtTerminateProcess.c)
 *     NtSuspendProcess @ 0x14093B510 (NtSuspendProcess.c)
 *     NtGetNextThread @ 0x14093B590 (NtGetNextThread.c)
 *     NtQuerySection @ 0x14093C3B0 (NtQuerySection.c)
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 *     NtExtendSection @ 0x1409469D0 (NtExtendSection.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     MmPrefetchVirtualMemory @ 0x140953128 (MmPrefetchVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 *     NtCreateWorkerFactory @ 0x1409A6CF0 (NtCreateWorkerFactory.c)
 *     NtQueryInformationThread @ 0x1409A7C80 (NtQueryInformationThread.c)
 *     MiReadWriteVirtualMemory @ 0x1409A9710 (MiReadWriteVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     PspSetQuotaLimits @ 0x1409AFD58 (PspSetQuotaLimits.c)
 *     PspQueryQuotaLimits @ 0x1409B7AE0 (PspQueryQuotaLimits.c)
 *     NtFlushVirtualMemory @ 0x1409D18A0 (NtFlushVirtualMemory.c)
 *     MiLockUnlockCommon @ 0x1409E3730 (MiLockUnlockCommon.c)
 *     NtRemoveProcessDebug @ 0x1409E80B0 (NtRemoveProcessDebug.c)
 *     NtDebugActiveProcess @ 0x1409E8220 (NtDebugActiveProcess.c)
 *     NtSetInformationVirtualMemory @ 0x1409E8FB0 (NtSetInformationVirtualMemory.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409ECF70 (ExpWnfCaptureScopeInstanceId.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409FE37C (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtResumeThread @ 0x140A14290 (NtResumeThread.c)
 *     PspQueryWorkingSetWatch @ 0x140A147AC (PspQueryWorkingSetWatch.c)
 *     PopPowerRequestActionInfo @ 0x140A14DA0 (PopPowerRequestActionInfo.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140A14F84 (PopPowerRequestSpecialRequestSet.c)
 *     NtAssignProcessToJobObject @ 0x140A17020 (NtAssignProcessToJobObject.c)
 *     NtIsProcessInJob @ 0x140A179F0 (NtIsProcessInJob.c)
 *     PspCreateProcess @ 0x140A1B354 (PspCreateProcess.c)
 *     PsCreateSystemThreadEx @ 0x140A224A0 (PsCreateSystemThreadEx.c)
 *     NtResetWriteWatch @ 0x140A3C540 (NtResetWriteWatch.c)
 *     MmProcessWorkingSetControl @ 0x140A4C914 (MmProcessWorkingSetControl.c)
 *     MiResolveMemoryEvent @ 0x140A59870 (MiResolveMemoryEvent.c)
 *     NtCreateThreadStateChange @ 0x140A5FDF0 (NtCreateThreadStateChange.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140A63480 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtAlertThread @ 0x140A73ED0 (NtAlertThread.c)
 *     NtAcquireProcessActivityReference @ 0x140A77130 (NtAcquireProcessActivityReference.c)
 *     PspCreatePicoThread @ 0x140A94DC0 (PspCreatePicoThread.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140A9B198 (DbgkpWerInitializeDeferredLiveDump.c)
 *     MiCombineIdenticalPages @ 0x140A9C0E0 (MiCombineIdenticalPages.c)
 *     MiLoadHotPatch @ 0x140A9F9D4 (MiLoadHotPatch.c)
 *     MiQueryProcessActivePatches @ 0x140AAE3A8 (MiQueryProcessActivePatches.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140AB27D4 (PsIumGetOnDemandDebugChallenge.c)
 *     PspQueryPooledQuotaLimits @ 0x140AB3704 (PspQueryPooledQuotaLimits.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB6F10 (MiForceCrashForInvalidAccess.c)
 *     PfpSourceGetPrefetchSupport @ 0x140AB7630 (PfpSourceGetPrefetchSupport.c)
 *     PopEtEnergyTrackerQuery @ 0x140AC9770 (PopEtEnergyTrackerQuery.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140247210 (ExfAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     ExGetHandlePointer @ 0x1404275E0 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14043AC30 (ExHandleLogBadReference.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140445670 (ExSlowReplenishHandleTableEntry.c)
 *     ExFastReplenishHandleTableEntry @ 0x140472650 (ExFastReplenishHandleTableEntry.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExpLookupHandleTableEntry @ 0x14084BF30 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x14084D528 (ExpGetHandleExtraInfo.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x140989024 (ObpAuditObjectAccess.c)
 *     VfCheckUserHandle @ 0x140BA9228 (VfCheckUserHandle.c)
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
