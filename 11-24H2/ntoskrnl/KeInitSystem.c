/*
 * XREFs of KeInitSystem @ 0x140C60CE0
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeGetTopologySiblingGroupAffinityForProcessor @ 0x1402021F4 (KeGetTopologySiblingGroupAffinityForProcessor.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     HviIsAnyHypervisorPresent @ 0x1404A37D0 (HviIsAnyHypervisorPresent.c)
 *     KiDetectTsx @ 0x1404D8E7C (KiDetectTsx.c)
 *     KeInitializeCatRegisters @ 0x1404F9894 (KeInitializeCatRegisters.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x14051AC68 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KdEncodeDataBlock @ 0x1405AF6B0 (KdEncodeDataBlock.c)
 *     KeRelaxTimingConstraints @ 0x1405B492C (KeRelaxTimingConstraints.c)
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B5004 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     KiApplyDpcVerificationScaleSettings @ 0x1405B5FA0 (KiApplyDpcVerificationScaleSettings.c)
 *     KiInitializeNormalPriorityAntiStarvationPolicies @ 0x1405B7108 (KiInitializeNormalPriorityAntiStarvationPolicies.c)
 *     KiInitMachineDependent @ 0x1405C0470 (KiInitMachineDependent.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1405C0790 (KiInitializeIdealProcessorRebalancer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KiStartDpcThread @ 0x14073B3D8 (KiStartDpcThread.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     KeInitializeTimerTable @ 0x140A7BB0C (KeInitializeTimerTable.c)
 *     KiInitializeProcessor @ 0x140B565CC (KiInitializeProcessor.c)
 *     KeFreeInitializationCode @ 0x140BDF4F0 (KeFreeInitializationCode.c)
 *     KiComputeDispatchInterruptCost @ 0x140C27598 (KiComputeDispatchInterruptCost.c)
 *     KiComputeNumaCosts @ 0x140C278AC (KiComputeNumaCosts.c)
 *     KiInitDpcThresholds @ 0x140C280F0 (KiInitDpcThresholds.c)
 *     KiInitializeVelocity @ 0x140C2866C (KiInitializeVelocity.c)
 *     KiInitSupervisorStateExtensionHost @ 0x140C2881C (KiInitSupervisorStateExtensionHost.c)
 *     KiInitializeReservedCpuSets @ 0x140C29BDC (KiInitializeReservedCpuSets.c)
 *     KiEpfInitialize @ 0x140C29DF0 (KiEpfInitialize.c)
 *     KiIntSteerInit @ 0x140C2A074 (KiIntSteerInit.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140C2A1E8 (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     KiInitDynamicTraceSupport @ 0x140C2A2A0 (KiInitDynamicTraceSupport.c)
 *     KiVerifyScopes @ 0x140C2A438 (KiVerifyScopes.c)
 *     MmFreeLoaderBlock @ 0x140C4E7EC (MmFreeLoaderBlock.c)
 *     KiRcuSystemInitialize @ 0x140C66764 (KiRcuSystemInitialize.c)
 *     KeInitializeSchedulerAssist @ 0x140C67DA4 (KeInitializeSchedulerAssist.c)
 */

char __fastcall KeInitSystem(int a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  ULONG ActiveProcessorCount; // esi
  int v8; // ecx
  unsigned int v9; // eax
  ULONG v10; // edi
  __int64 *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  int v18; // edx
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edi
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // [rsp+38h] [rbp-39h] BYREF
  __int64 v32; // [rsp+40h] [rbp-31h] BYREF
  __int128 v33; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 *v35; // [rsp+78h] [rbp+7h]
  __int64 v36; // [rsp+80h] [rbp+Fh]
  __int64 *v37; // [rsp+88h] [rbp+17h]
  __int64 v38; // [rsp+90h] [rbp+1Fh]
  __int128 *v39; // [rsp+98h] [rbp+27h]
  __int64 v40; // [rsp+A0h] [rbp+2Fh]

  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
          (__int64)&dword_140E07080,
          (__int64)KiTraceLogControlCallback,
          (__int64)&dword_140E07080);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E070B8, 0LL, 0LL);
        if ( KiDisablePointerParameterAlignmentValidation
          && (unsigned int)dword_140E07080 > 5
          && tlgKeywordOn((__int64)&dword_140E07080, 0x400000000000LL) )
        {
          LODWORD(v31) = v22;
          v36 = 4LL;
          v35 = &v31;
          v32 = 0x1000000LL;
          v37 = &v32;
          v38 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E07080,
            (unsigned __int8 *)byte_1400591A1,
            0LL,
            0LL,
            4u,
            v34);
        }
        KiIntSteerInit(2);
        if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(v24, v23, v25, v26) )
        {
          v27 = 0;
          if ( (_DWORD)KeNumberProcessors_0 )
          {
            while ( 1 )
            {
              v33 = 0LL;
              v28 = KiProcessorBlock[v27];
              v29 = *(_QWORD *)(v28 + 36464);
              KeGetTopologySiblingGroupAffinityForProcessor(v28, 5, &v33);
              if ( v29 != (_QWORD)v33 )
                break;
              if ( ++v27 >= (unsigned int)KeNumberProcessors_0 )
                return 1;
            }
            if ( (unsigned int)dword_140E07080 > 5 && tlgKeywordOn((__int64)&dword_140E07080, 0x400000000000LL) )
            {
              v32 = v30;
              v35 = &v32;
              v36 = 8LL;
              v37 = &v31;
              v31 = v29;
              v39 = &v33;
              v38 = 8LL;
              *(_QWORD *)&v33 = 0x1000000LL;
              v40 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E07080,
                (unsigned __int8 *)byte_140059153,
                0LL,
                0LL,
                5u,
                v34);
            }
          }
        }
      }
      else if ( a1 == 3 )
      {
        KiInitializeReservedCpuSets();
      }
      else
      {
        ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
        MmFreeLoaderBlock();
        KeLoaderBlock_0 = 0LL;
        ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
        KiInitializeNormalPriorityAntiStarvationPolicies();
        if ( KiForceBugcheckForDpcWatchdog || !HviIsAnyHypervisorPresent() )
          KeEnableWatchdogTimeout = 1;
        KiEpfInitialize();
        KeFreeInitializationCode();
        KiDiscardableInitState = -336860181;
      }
      return 1;
    }
    KiInitDynamicTraceSupport();
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    KiDpcWatchdogConfigurationLock = 0LL;
    KiClockKeepAliveCycle = (ActiveProcessorCount
                           + (KeMaximumIncrement + 29999999) / (unsigned int)KeMaximumIncrement
                           - 1)
                          / ActiveProcessorCount;
    if ( !KiForceBugcheckForDpcWatchdog && HviIsAnyHypervisorPresent() )
    {
      if ( !HvlHypervisorConnected || (HvlEnlightenments & 0x20) != 0 )
      {
        v8 = 1;
        KeDpcWatchdogPeriodMs = 0;
        KeDpcTimeoutMs = 0;
        KeDpcSoftTimeoutMs = 0;
        KeDpcCumulativeSoftTimeoutMs = 0;
        KeDpcWatchdogProfileCumulativeDpcThresholdMs = 0;
        KeDpcWatchdogProfileSingleDpcThresholdMs = 0;
      }
      else
      {
        v8 = 0;
      }
      KeRelaxTimingConstraints(v8);
    }
    KiInitDpcThresholds();
    if ( ViVerifierEnabled )
    {
      v9 = KeVerifierDpcScalingFactor;
      if ( !KeVerifierDpcScalingFactor )
      {
        v9 = 1;
        KeVerifierDpcScalingFactor = 1;
      }
      if ( v9 > 0x64 )
        KeVerifierDpcScalingFactor = 100;
      KiApplyDpcVerificationScaleSettings();
    }
    v10 = 0;
    if ( ActiveProcessorCount )
    {
      v11 = KiProcessorBlock;
      while ( 1 )
      {
        v12 = *v11;
        KiInitializeProcessor(*v11);
        if ( KeThreadDpcEnable )
        {
          if ( (int)KiStartDpcThread(v12) < 0 )
            break;
        }
        ++v10;
        ++v11;
        if ( v10 >= ActiveProcessorCount )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      if ( KiComputeNumaCosts()
        && (int)KiComputeDispatchInterruptCost() >= 0
        && (int)KiInitializeDpcRuntimeHistoryHashTables() >= 0 )
      {
        if ( (_BYTE)KiKernelCetEnabled )
        {
          LOBYTE(KiKernelCetLogging) = 1;
          dword_140FC7088 = 10;
        }
        SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x670009u);
        KiIntSteerInit(1);
        KiInitSupervisorStateExtensionHost(v14, v13);
        if ( KiInitMachineDependent() )
        {
          v15 = *(unsigned int *)(KiProcessorBlock[0] + 68);
          v16 = v15 * (unsigned __int64)(unsigned int)KeMaximumIncrement / 0xA;
          KiShortExecutionCycles = v16 / 0xF0;
          v17 = v16 / 3;
          KiCyclesPerClockQuantum = v16 / 3;
          KiDirectQuantumTarget = v16 / 3;
          KiLockQuantumTarget = 3 * (v16 / 3);
          if ( (KiVelocityFlags & 0x40000) != 0 )
          {
            KiCyclesPerClockQuantum = (unsigned int)v17 / 6;
            KiLockQuantumTarget = 2 * ((unsigned int)v17 / 6);
          }
          v18 = KiLongDpcRuntimeThreshold;
          _BitScanReverse64(&v19, 6000000 * v15);
          KiFavoredCoreCycleTimeBits = v19;
          if ( (unsigned int)KiLongDpcRuntimeThreshold < 0x32 )
          {
            v18 = 50;
            KiLongDpcRuntimeThreshold = 50;
          }
          if ( (unsigned int)KiLongDpcQueueThreshold < 2 )
            KiLongDpcQueueThreshold = 2;
          v20 = *(unsigned int *)(KiProcessorBlock[0] + 68);
          KiLongDpcRuntimeThresholdCycles = v18 * *(_DWORD *)(KiProcessorBlock[0] + 68);
          qword_140FC43D8 = v20 * (unsigned int)dword_140FC43D4;
          qword_140FC43E8 = *(unsigned int *)(KiProcessorBlock[0] + 68)
                          * (unsigned __int64)(unsigned int)dword_140FC43E0;
          KdEncodeDataBlock();
          KiVerifyScopes();
          KiInitializeIdealProcessorRebalancer();
          KiPristineTriageDumpSize = 268288;
          KiPristineTriageDumpAllocationDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)KiPristineTriageDumpAllocationWorker;
          KiPristineTriageDumpAllocationDpc.TargetInfoAsUlong = 275;
          KiPristineTriageDumpAllocationDpc.DeferredContext = 0LL;
          KiPristineTriageDumpAllocationDpc.DpcData = 0LL;
          KiPristineTriageDumpAllocationDpc.ProcessorHistory = 0LL;
          return 1;
        }
      }
    }
    return 0;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx && (CurrentPrcb->MsrIa32TsxCtrl & 3) != 3 )
  {
    v2 = CurrentPrcb->MsrIa32TsxCtrl | 3;
    CurrentPrcb->MsrIa32TsxCtrl = v2;
    __writemsr(0x122u, v2);
  }
  KiTsxSupported = KiDetectTsx();
  KiRcuSystemInitialize(CurrentPrcb);
  KeInitializeSchedulerAssist(CurrentPrcb);
  KeInitializeCatRegisters();
  v6 = KeInitializeTimerTable((__int64)CurrentPrcb, v3, v4, v5);
  if ( v6 < 0 )
    KeBugCheckEx(0x31u, v6, 1uLL, 0LL, 0LL);
  KiInitializeVelocity();
  return 1;
}
