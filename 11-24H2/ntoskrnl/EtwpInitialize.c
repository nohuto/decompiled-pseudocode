/*
 * XREFs of EtwpInitialize @ 0x140C3F24C
 * Callers:
 *     EtwInitialize @ 0x1407A65A0 (EtwInitialize.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KiInitializeTimer2 @ 0x1403AE058 (KiInitializeTimer2.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x140445120 (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 *     KeRegisterBugCheckReasonCallback @ 0x1404606D0 (KeRegisterBugCheckReasonCallback.c)
 *     ExRegisterCallback @ 0x1404AE560 (ExRegisterCallback.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x14064AE1C (EtwpGetCurrentSiloMaxLoggers.c)
 *     UcInitialize @ 0x140695608 (UcInitialize.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     TlgRegisterAggregateProvider @ 0x1406F971C (TlgRegisterAggregateProvider.c)
 *     WdipSemInitialize @ 0x1407A05A8 (WdipSemInitialize.c)
 *     EtwInitializeProcessor @ 0x1407A671C (EtwInitializeProcessor.c)
 *     EtwInitializeProcessorActivityId @ 0x1407A68EC (EtwInitializeProcessorActivityId.c)
 *     EtwpInitializeSiloState @ 0x1407A829C (EtwpInitializeSiloState.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407A85A8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpPreInitializeSiloState @ 0x1407A8F1C (EtwpPreInitializeSiloState.c)
 *     EtwpInitializeCoverage @ 0x1407AB8D8 (EtwpInitializeCoverage.c)
 *     EtwpInitializeStackLookasideList @ 0x1407AB918 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1407AD7B4 (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeLastBranchTracing @ 0x1407B1D44 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeProcessorTrace @ 0x1407B208C (EtwpInitializeProcessorTrace.c)
 *     EtwpInitializeProviderTraits @ 0x1407B2214 (EtwpInitializeProviderTraits.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14085A8A0 (EtwpUpdateFileInfoDriverState.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x1409EA180 (EtwRegister.c)
 *     EtwpMapEnableFlags @ 0x140A2E1B4 (EtwpMapEnableFlags.c)
 *     TlgRegisterAggregateProviderEx @ 0x140ABDA7C (TlgRegisterAggregateProviderEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     PerfDiagInitialize @ 0x140C3E7DC (PerfDiagInitialize.c)
 *     EtwpFixBootSystemTime @ 0x140C3F178 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140C3F888 (EtwpInitializeBootTimeStamps.c)
 *     EtwpReadConfigParameters @ 0x140C3F978 (EtwpReadConfigParameters.c)
 *     EtwpTraceSystemInitialization @ 0x140C3FD6C (EtwpTraceSystemInitialization.c)
 *     EtwpInitializeRegistration @ 0x140C40338 (EtwpInitializeRegistration.c)
 *     EtwpInitializeSecurity @ 0x140C4043C (EtwpInitializeSecurity.c)
 *     EtwpFixBootLoggers @ 0x140C406E8 (EtwpFixBootLoggers.c)
 *     EtwpStartBootLogger @ 0x140C408C0 (EtwpStartBootLogger.c)
 *     EtwpInitializeKsrSupport @ 0x140C40AA4 (EtwpInitializeKsrSupport.c)
 *     EtwpInitializeRealTimeConnection @ 0x140C40B48 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x140C40C20 (EtwpInitializeCoverageSampler.c)
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
  __int64 v20; // rcx
  __int64 Pool2; // rax

  if ( !a3 || (v5 = 1, *(_QWORD *)(a3 + 8) == a3 + 8) )
    v5 = 0;
  if ( !a1 )
  {
    KiInitializeMutant(&EtwpGroupMaskMutex, 0LL, 1u, 0);
    KiInitializeMutant(&EtwpCrimsonMaskMutex, 0LL, 1u, 0);
    EtwpSecurityLock = 0LL;
    EtwpInitializeStackLookasideList();
    dword_140FC757C |= 0x880000u;
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
    qword_140E0EBD8 = *(_QWORD *)(EtwpHostSiloState + 712);
    qword_140E0EBE0 = EtwpHostSiloState;
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
  EtwpInitializeLastBranchTracing();
  EtwpInitializeProcessorTrace(v20, v19);
  dword_140EFEEF0 = 0;
  EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
  EtwpMdlTable = 0;
  qword_140EFEEE8 = 0LL;
  EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
  dword_140EFEEE4 = 12;
  EtwpBufferAdjustmentCount = 8;
  EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
  word_140EFF182 = 0;
  KiInitializeTimer2((unsigned __int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8);
  EtwpInitializeProviderTraits();
  if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
    goto LABEL_39;
  EtwpInitializeKsrSupport();
  EtwpLoadMicroarchitecturalPmcs();
  EtwpSiloAllowedGroupMask[0] |= 0x1600370Fu;
  dword_140FC6F34 |= 0x8206u;
  dword_140FC6F38 |= 0x10040u;
  dword_140FC6F48 |= 0x1FFFFFFFu;
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
  dword_140EFEF70 = -849937013;
  EtwpTiQueryVadBloomFilter = 0x8000;
  qword_140EFEF68 = Pool2;
  EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
  TlgRegisterAggregateProvider((__int64)&dword_140E09198);
  EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
  TlgRegisterAggregateProviderEx(
    (__int64)&dword_140E09160,
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
  ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
  EtwpTraceSystemInitialization();
  if ( (int)guard_dispatch_icall_no_overrides(45LL, 4LL) < 0 )
    EtwpMaxPmcCounter = 8;
  EtwpMaxProfilingSources = EtwpMaxPmcCounter;
  UcInitialize(1);
}
