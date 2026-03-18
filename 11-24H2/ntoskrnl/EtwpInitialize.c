/*
 * XREFs of EtwpInitialize @ 0x140C3D0FC
 * Callers:
 *     EtwInitialize @ 0x1407A6460 (EtwInitialize.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     KiInitializeTimer2 @ 0x1403BF498 (KiInitializeTimer2.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14044FEB0 (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140467D20 (KeRegisterBugCheckReasonCallback.c)
 *     ExRegisterCallback @ 0x1404B3D50 (ExRegisterCallback.c)
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x14064C80C (EtwpGetCurrentSiloMaxLoggers.c)
 *     UcInitialize @ 0x140694538 (UcInitialize.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     TlgRegisterAggregateProvider @ 0x1406FBADC (TlgRegisterAggregateProvider.c)
 *     WdipSemInitialize @ 0x1407A0498 (WdipSemInitialize.c)
 *     EtwInitializeProcessor @ 0x1407A65DC (EtwInitializeProcessor.c)
 *     EtwInitializeProcessorActivityId @ 0x1407A67AC (EtwInitializeProcessorActivityId.c)
 *     EtwpInitializeSiloState @ 0x1407A815C (EtwpInitializeSiloState.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407A8468 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpPreInitializeSiloState @ 0x1407A8DDC (EtwpPreInitializeSiloState.c)
 *     EtwpInitializeCoverage @ 0x1407AB408 (EtwpInitializeCoverage.c)
 *     EtwpInitializeStackLookasideList @ 0x1407AB448 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1407AD2E4 (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeLastBranchTracing @ 0x1407B18F4 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeProcessorTrace @ 0x1407B1C3C (EtwpInitializeProcessorTrace.c)
 *     EtwpInitializeProviderTraits @ 0x1407B1DC4 (EtwpInitializeProviderTraits.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1408E9078 (EtwpUpdateFileInfoDriverState.c)
 *     EtwpMapEnableFlags @ 0x140A390F4 (EtwpMapEnableFlags.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     TlgRegisterAggregateProviderEx @ 0x140AC2794 (TlgRegisterAggregateProviderEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     PerfDiagInitialize @ 0x140C3C684 (PerfDiagInitialize.c)
 *     EtwpFixBootSystemTime @ 0x140C3D028 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140C3D738 (EtwpInitializeBootTimeStamps.c)
 *     EtwpReadConfigParameters @ 0x140C3D828 (EtwpReadConfigParameters.c)
 *     EtwpTraceSystemInitialization @ 0x140C3DC1C (EtwpTraceSystemInitialization.c)
 *     EtwpInitializeRegistration @ 0x140C3E1E8 (EtwpInitializeRegistration.c)
 *     EtwpInitializeSecurity @ 0x140C3E2EC (EtwpInitializeSecurity.c)
 *     EtwpFixBootLoggers @ 0x140C3E598 (EtwpFixBootLoggers.c)
 *     EtwpStartBootLogger @ 0x140C3E770 (EtwpStartBootLogger.c)
 *     EtwpInitializeKsrSupport @ 0x140C3E954 (EtwpInitializeKsrSupport.c)
 *     EtwpInitializeRealTimeConnection @ 0x140C3E9F8 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x140C3EAD0 (EtwpInitializeCoverageSampler.c)
 */

void __fastcall EtwpInitialize(int a1, int a2, __int64 a3)
{
  char v5; // di
  __int64 v6; // rcx
  unsigned int CurrentSiloMaxLoggers; // eax
  _QWORD *v8; // rdi
  _QWORD *i; // rbx
  unsigned int v10; // ebp
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int j; // edi
  __int64 Prcb; // rax
  __int64 v16; // rsi
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  ULONG_PTR Pool2; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+60h] [rbp+8h] BYREF

  if ( !a3 || (v5 = 1, *(_QWORD *)(a3 + 8) == a3 + 8) )
    v5 = 0;
  if ( !a1 )
  {
    KiInitializeMutant(&EtwpGroupMaskMutex, 0LL, 1u, 0);
    KiInitializeMutant(&EtwpCrimsonMaskMutex, 0LL, 1u, 0);
    EtwpSecurityLock = 0LL;
    EtwpInitializeStackLookasideList();
    dword_140FC64FC |= 0x880000u;
    LOBYTE(v6) = v5;
    EtwpBootDeferredGroupMask |= 0x10000u;
    EtwpInitializeBootTimeStamps(v6);
    if ( !a3 || (CurrentSiloMaxLoggers = *(_DWORD *)a3) == 0 )
    {
      if ( a2 )
        CurrentSiloMaxLoggers = EtwpGetCurrentSiloMaxLoggers();
      else
        CurrentSiloMaxLoggers = 128;
    }
    if ( (int)EtwpPreInitializeSiloState(0LL, CurrentSiloMaxLoggers) < 0 )
      KeBugCheck(0x11Du);
    EtwpHostSiloState = *((_QWORD *)PsGetServerSiloGlobals(0LL) + 104);
    EtwInitializeProcessor((__int64)KeGetCurrentPrcb());
    qword_140E0EB18 = *(_QWORD *)(EtwpHostSiloState + 712);
    qword_140E0EB20 = EtwpHostSiloState;
    if ( a3 )
    {
      v8 = (_QWORD *)(a3 + 8);
      for ( i = *(_QWORD **)(a3 + 8); i != v8; i = (_QWORD *)*i )
        EtwpStartBootLogger(i);
    }
LABEL_42:
    ++EtwpBootPhase;
    return;
  }
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return;
    EtwpUpdateFileInfoDriverState(PerfGlobalGroupMask, PerfGlobalGroupMask, 1, (_QWORD *)EtwpHostSiloState, 0);
    goto LABEL_42;
  }
  v10 = KeNumberProcessors_0;
  if ( v5 )
    EtwpFixBootSystemTime();
  v11 = EtwpInitializeSecurity();
  if ( v11 < 0 )
    KeBugCheckEx(0x11Du, 1uLL, v11, 0LL, 0LL);
  v12 = 896LL;
  v13 = 9LL;
  do
  {
    *(_WORD *)(v12 + MmWriteableSharedUserData) = 0;
    v12 += 2LL;
    --v13;
  }
  while ( v13 );
  for ( j = 0; j < v10; ++j )
  {
    Prcb = KeGetPrcb(j);
    v16 = Prcb;
    if ( !*(_QWORD *)(Prcb + 35752) )
    {
      v17 = EtwInitializeProcessor(Prcb);
      if ( v17 < 0 )
        KeBugCheckEx(0x11Du, 2uLL, v17, j, 0LL);
    }
    v18 = EtwInitializeProcessorActivityId(v16);
    if ( v18 < 0 )
      KeBugCheckEx(0x11Du, 2uLL, v18, j, 0LL);
  }
  EtwpReadConfigParameters(v12);
  EtwpInitializeRegistration();
  EtwpInitializePrivateSessionDemuxObject();
  EtwpInitializeRealTimeConnection();
  EtwCPUSpeedInMHz = *(_DWORD *)(KeGetPrcb(0) + 68);
  EtwpInitializeLastBranchTracing((unsigned int)EtwCPUSpeedInMHz, v19, v20, v21);
  EtwpInitializeProcessorTrace(v23, v22);
  dword_140EFEBD0 = 0;
  EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
  EtwpMdlTable = 0;
  qword_140EFEBC8 = 0LL;
  EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
  dword_140EFEBC4 = 12;
  EtwpBufferAdjustmentCount = 8;
  EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
  word_140EFEF82 = 0;
  KiInitializeTimer2((unsigned __int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8);
  EtwpInitializeProviderTraits();
  if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
    goto LABEL_39;
  EtwpInitializeKsrSupport();
  EtwpLoadMicroarchitecturalPmcs();
  EtwpSiloAllowedGroupMask[0] |= 0x1600370Fu;
  dword_140FC5EF4 |= 0x8206u;
  dword_140FC5EF8 |= 0x10040u;
  dword_140FC5F08 |= 0x1FFFFFFFu;
  EtwpMapEnableFlags((__int64)EtwpSiloAllowedGroupMask, 0);
  EtwpFixBootLoggers();
  if ( (int)EtwpInitializeSiloState(0LL, a3) < 0 )
LABEL_39:
    KeBugCheck(0x11Du);
  EtwpBugCheckCallback.State = 0;
  KeRegisterBugCheckReasonCallback(
    &EtwpBugCheckCallback,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)EtwpBugCheckMultiPartCallback,
    KbCallbackSecondaryMultiPartDumpData,
    (PUCHAR)&EtwpComponentName);
  EtwRegister(
    &EventTracingProvGuid,
    (PETWENABLECALLBACK)EtwpTracingProvEnableCallback,
    0LL,
    &EtwpEventTracingProvRegHandle);
  WdipSemInitialize();
  PerfDiagInitialize();
  EtwpInitializeCoverage();
  EtwpInitializeCoverageSampler();
  Pool2 = ExAllocatePool2(0x40uLL, 0x1000uLL, 0x6E734954uLL);
  if ( !Pool2 )
    KeBugCheckEx(0x11Du, 3uLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
  dword_140EFEC50 = -849937013;
  EtwpTiQueryVadBloomFilter = 0x8000;
  qword_140EFEC48 = Pool2;
  EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
  TlgRegisterAggregateProvider((__int64)&dword_140E09128);
  EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
  TlgRegisterAggregateProviderEx(
    (__int64)&dword_140E090F0,
    (__int64)EtwpTraceLoggingProvEnableCallback,
    (__int64)PsProvTraceLoggingGuid);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06EF0, 0LL, 0LL);
  EtwRegister(&NetProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x10000, &EtwpNetProvRegHandle);
  EtwRegister(&DiskProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x100, &EtwpDiskProvRegHandle);
  EtwRegister(
    &FileProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x2000000,
    &EtwpFileProvRegHandle);
  EtwRegister(&RegistryProvGuid, (PETWENABLECALLBACK)EtwpRegTraceEnableCallback, 0LL, &EtwpRegTraceHandle);
  EtwRegister(
    &MemoryProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x20000001,
    &EtwpMemoryProvRegHandle);
  EtwRegister(&MS_Windows_Kernel_AppCompat_Provider, 0LL, 0LL, &EtwAppCompatProvRegHandle);
  EtwRegister(&KernelAuditApiCallsGuid, 0LL, 0LL, &EtwApiCallsProvRegHandle);
  EtwRegister(&CVEAuditProviderGuid, 0LL, 0LL, &EtwCVEAuditProvRegHandle);
  EtwRegister(&ThreatIntProviderGuid, 0LL, 0LL, &EtwThreatIntProvRegHandle);
  EtwRegister(&MS_Windows_Security_LPAC_Provider, 0LL, 0LL, &EtwLpacProvRegHandle);
  EtwRegister(&SecurityMitigationsProviderGuid, 0LL, 0LL, &EtwSecurityMitigationsRegHandle);
  EtwRegister(
    &CpuStarvationProvGuid,
    (PETWENABLECALLBACK)EtwpCpuStarvationProvEnableCallback,
    0LL,
    &EtwCpuStarvationProvRegHandle);
  EtwRegister(&CpuPartitionProvGuid, 0LL, 0LL, &EtwCpuPartitionProvRegHandle);
  ++EtwpBootPhase;
  ZwUpdateWnfStateData((__int64)&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL);
  EtwpTraceSystemInitialization(v26, v25, v27);
  v28 = 0;
  if ( (int)guard_dispatch_icall_no_overrides(45LL, 4LL, &EtwpMaxPmcCounter, &v28) < 0 )
    EtwpMaxPmcCounter = 8;
  EtwpMaxProfilingSources = EtwpMaxPmcCounter;
  UcInitialize(1);
}
