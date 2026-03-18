/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x14084FA30
 * Callers:
 *     NtResumeProcess @ 0x1406EC100 (NtResumeProcess.c)
 *     HalpAcquirePccInterface @ 0x1406F7F44 (HalpAcquirePccInterface.c)
 *     DbgkpCreateNotificationEvent @ 0x1406FAEA0 (DbgkpCreateNotificationEvent.c)
 *     PfSnAppLaunchScenarioControl @ 0x14073B5D4 (PfSnAppLaunchScenarioControl.c)
 *     PfSnSetAltPrefetchParam @ 0x14073B764 (PfSnSetAltPrefetchParam.c)
 *     PopCreateHiberFile @ 0x140745C64 (PopCreateHiberFile.c)
 *     PopGetPolicyDeviceObject @ 0x14074DFB0 (PopGetPolicyDeviceObject.c)
 *     PspConvertSiloToServerSilo @ 0x140762D94 (PspConvertSiloToServerSilo.c)
 *     NtChangeProcessState @ 0x140765BE0 (NtChangeProcessState.c)
 *     NtCreateProcessStateChange @ 0x1407660A0 (NtCreateProcessStateChange.c)
 *     PspReferenceCpuPartitionByHandle @ 0x140767520 (PspReferenceCpuPartitionByHandle.c)
 *     PspAssignPrimaryToken @ 0x1407676A0 (PspAssignPrimaryToken.c)
 *     PspCreatePicoProcess @ 0x14076A1B0 (PspCreatePicoProcess.c)
 *     NtAlertResumeThread @ 0x14076A720 (NtAlertResumeThread.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14076AC60 (PsIumEnableOnDemandDebugWithResponse.c)
 *     ExpProfileCreate @ 0x1407B1E2C (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x1407B5720 (NtPssCaptureVaSpaceBulk.c)
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 *     MiInsertPageFileInList @ 0x1407DF450 (MiInsertPageFileInList.c)
 *     MiInjectThreadForHotPatch @ 0x1407E32BC (MiInjectThreadForHotPatch.c)
 *     NtCreateEnclave @ 0x1407E7AD0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x1407E7EC0 (NtInitializeEnclave.c)
 *     MmGetSectionStrongImageReference @ 0x1407EB59C (MmGetSectionStrongImageReference.c)
 *     MmStoreRegister @ 0x1407ED518 (MmStoreRegister.c)
 *     MmScrubMemory @ 0x1407EDDE0 (MmScrubMemory.c)
 *     MiCreateMemoryEvent @ 0x1407EFBD8 (MiCreateMemoryEvent.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408195FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x140819B1C (VrpHandleIoctlModifyFlags.c)
 *     NtDuplicateObject @ 0x140843860 (NtDuplicateObject.c)
 *     ObWaitForSingleObject @ 0x14084F030 (ObWaitForSingleObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14084F9F0 (ObReferenceObjectByHandleWithTag.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     PopPowerRequestActionInfo @ 0x140862028 (PopPowerRequestActionInfo.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140862C10 (PopPowerRequestSpecialRequestSet.c)
 *     NtUnmapViewOfSection @ 0x1408B4300 (NtUnmapViewOfSection.c)
 *     NtUnmapViewOfSectionEx @ 0x1408B43B0 (NtUnmapViewOfSectionEx.c)
 *     NtQuerySection @ 0x1408B64C0 (NtQuerySection.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     NtQueryWnfStateData @ 0x1408E34F0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408EA00C (PfpDeprioritizeOldPagesInWs.c)
 *     NtCreateThreadEx @ 0x1408EFF10 (NtCreateThreadEx.c)
 *     PspBuildCreateProcessContext @ 0x1408F0220 (PspBuildCreateProcessContext.c)
 *     PspCreateThread @ 0x1408F1680 (PspCreateThread.c)
 *     NtTerminateThread @ 0x1408F4810 (NtTerminateThread.c)
 *     MmFreeVirtualMemory @ 0x1408F6740 (MmFreeVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1408F7510 (NtProtectVirtualMemory.c)
 *     MiMapViewOfSectionCommon @ 0x1408FC770 (MiMapViewOfSectionCommon.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1408FD950 (MiAllocateVirtualMemoryPrepare.c)
 *     NtExtendSection @ 0x14093A250 (NtExtendSection.c)
 *     PsReferencePartitionByHandle @ 0x14093B9BC (PsReferencePartitionByHandle.c)
 *     MiCreateImageOrDataSection @ 0x14093D200 (MiCreateImageOrDataSection.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14094A72C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14094A984 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14094ACCC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14094B860 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14094BD98 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PopEtEnergyTrackerQuery @ 0x140960110 (PopEtEnergyTrackerQuery.c)
 *     NtCreateWorkerFactory @ 0x1409A67B0 (NtCreateWorkerFactory.c)
 *     NtChangeThreadState @ 0x1409B9840 (NtChangeThreadState.c)
 *     NtSuspendThread @ 0x1409BA1C0 (NtSuspendThread.c)
 *     NtGetNextThread @ 0x1409BA4F0 (NtGetNextThread.c)
 *     NtRemoveProcessDebug @ 0x1409BA890 (NtRemoveProcessDebug.c)
 *     NtDebugActiveProcess @ 0x1409BB6C0 (NtDebugActiveProcess.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
 *     MiReadWriteVirtualMemory @ 0x1409C4CE0 (MiReadWriteVirtualMemory.c)
 *     PfpSourceGetPrefetchSupport @ 0x1409C6350 (PfpSourceGetPrefetchSupport.c)
 *     MmPrefetchVirtualMemory @ 0x1409C69F8 (MmPrefetchVirtualMemory.c)
 *     NtLoadEnclaveData @ 0x1409CAD50 (NtLoadEnclaveData.c)
 *     MiMapImageForEnclaveUse @ 0x1409CC068 (MiMapImageForEnclaveUse.c)
 *     PspQueryQuotaLimits @ 0x1409CDB50 (PspQueryQuotaLimits.c)
 *     NtFlushVirtualMemory @ 0x1409CE8E0 (NtFlushVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     NtOpenProcessTokenEx @ 0x1409D8850 (NtOpenProcessTokenEx.c)
 *     MiLockUnlockCommon @ 0x1409EAC40 (MiLockUnlockCommon.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409F6738 (ExpWnfCaptureScopeInstanceId.c)
 *     NtSetInformationVirtualMemory @ 0x1409FCFF0 (NtSetInformationVirtualMemory.c)
 *     NtResumeThread @ 0x140A0A4C0 (NtResumeThread.c)
 *     PspQueryWorkingSetWatch @ 0x140A0AC88 (PspQueryWorkingSetWatch.c)
 *     NtAssignProcessToJobObject @ 0x140A0E5B0 (NtAssignProcessToJobObject.c)
 *     NtIsProcessInJob @ 0x140A0EFA0 (NtIsProcessInJob.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 *     NtGetNextProcess @ 0x140A32180 (NtGetNextProcess.c)
 *     NtResetWriteWatch @ 0x140A37110 (NtResetWriteWatch.c)
 *     MmProcessWorkingSetControl @ 0x140A4A36C (MmProcessWorkingSetControl.c)
 *     MiResolveMemoryEvent @ 0x140A562D0 (MiResolveMemoryEvent.c)
 *     NtCreateThreadStateChange @ 0x140A5DB20 (NtCreateThreadStateChange.c)
 *     NtTerminateProcess @ 0x140A6C390 (NtTerminateProcess.c)
 *     NtAlertThread @ 0x140A71AF0 (NtAlertThread.c)
 *     NtAcquireProcessActivityReference @ 0x140A74DA0 (NtAcquireProcessActivityReference.c)
 *     PspCreateProcess @ 0x140A8F360 (PspCreateProcess.c)
 *     PspCreatePicoThread @ 0x140A90CA0 (PspCreatePicoThread.c)
 *     NtSuspendProcess @ 0x140A92250 (NtSuspendProcess.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140A95478 (DbgkpWerInitializeDeferredLiveDump.c)
 *     MiCombineIdenticalPages @ 0x140A961D0 (MiCombineIdenticalPages.c)
 *     MiLoadHotPatch @ 0x140A98E64 (MiLoadHotPatch.c)
 *     MiQueryProcessActivePatches @ 0x140AA8E54 (MiQueryProcessActivePatches.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140AAD734 (PsIumGetOnDemandDebugChallenge.c)
 *     PspQueryPooledQuotaLimits @ 0x140AAE718 (PspQueryPooledQuotaLimits.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB2078 (MiForceCrashForInvalidAccess.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14043BEE0 (ExHandleLogBadReference.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14044CB0C (ExSlowReplenishHandleTableEntry.c)
 *     ExFastReplenishHandleTableEntry @ 0x1404736AC (ExFastReplenishHandleTableEntry.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x140851804 (ExpGetHandleExtraInfo.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 *     ObpAuditObjectAccess @ 0x140971330 (ObpAuditObjectAccess.c)
 *     VfCheckUserHandle @ 0x140B99248 (VfCheckUserHandle.c)
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
  _QWORD *HandleExtraInfo; // rax
  _QWORD *v40; // r11
  volatile signed __int64 *v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  unsigned __int64 v44; // rcx
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
LABEL_78:
      v9 = -1073741816;
LABEL_30:
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
    goto LABEL_78;
  if ( KernelTime == ObpKernelHandleTable )
  {
LABEL_77:
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
LABEL_75:
    if ( v10 )
      ExHandleLogBadReference(KernelTime, v10, KeGetCurrentThread()->PreviousMode);
    goto LABEL_77;
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
            goto LABEL_75;
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
  v41 = (volatile signed __int64 *)ExGetHandlePointer((__int64 *)v47);
  HandlePointer = (unsigned __int64)v41;
  v42 = _InterlockedExchangeAdd64(v41, 0x7FF0uLL);
  if ( v42 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v41 + 6), 0x10uLL, v42 + 32752);
  v43 = ExFastReplenishHandleTableEntry(v14, v47, 32752);
  if ( !v43 )
    goto LABEL_47;
  _InterlockedAdd64((volatile signed __int64 *)HandlePointer, -v43);
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
      v44 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x7F];
      if ( !*(_BYTE *)(*(_QWORD *)v44 + 24LL) )
        goto LABEL_51;
      if ( *(_QWORD *)(*(_QWORD *)v44 + 16LL) != 1LL )
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
        *v40 = *HandleExtraInfo;
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return 0LL;
}
