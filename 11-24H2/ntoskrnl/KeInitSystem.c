/*
 * XREFs of KeInitSystem @ 0x140C62E30
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KeGetTopologySiblingGroupAffinityForProcessor @ 0x14032A8E4 (KeGetTopologySiblingGroupAffinityForProcessor.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     HviIsAnyHypervisorPresent @ 0x14049E730 (HviIsAnyHypervisorPresent.c)
 *     KiDetectTsx @ 0x1404D22CC (KiDetectTsx.c)
 *     KeInitializeCatRegisters @ 0x1404F7174 (KeInitializeCatRegisters.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x140518538 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KdEncodeDataBlock @ 0x1405AC620 (KdEncodeDataBlock.c)
 *     KeRelaxTimingConstraints @ 0x1405B18B0 (KeRelaxTimingConstraints.c)
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B2278 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     KiApplyDpcVerificationScaleSettings @ 0x1405B3268 (KiApplyDpcVerificationScaleSettings.c)
 *     KiInitializeAntiStarvationPolicies @ 0x1405B43A4 (KiInitializeAntiStarvationPolicies.c)
 *     KiInitializeNormalPriorityAntiStarvationPolicies @ 0x1405B4468 (KiInitializeNormalPriorityAntiStarvationPolicies.c)
 *     KiInitMachineDependent @ 0x1405BDA44 (KiInitMachineDependent.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1405BDD64 (KiInitializeIdealProcessorRebalancer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiStartDpcThread @ 0x140739308 (KiStartDpcThread.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     KeInitializeTimerTable @ 0x140A75E0C (KeInitializeTimerTable.c)
 *     KiInitializeProcessor @ 0x140B5861C (KiInitializeProcessor.c)
 *     KeFreeInitializationCode @ 0x140BE14F0 (KeFreeInitializationCode.c)
 *     KiComputeDispatchInterruptCost @ 0x140C29574 (KiComputeDispatchInterruptCost.c)
 *     KiComputeNumaCosts @ 0x140C29888 (KiComputeNumaCosts.c)
 *     KiInitDpcThresholds @ 0x140C2A14C (KiInitDpcThresholds.c)
 *     KiInitializeVelocity @ 0x140C2A6C8 (KiInitializeVelocity.c)
 *     KiInitSupervisorStateExtensionHost @ 0x140C2A8BC (KiInitSupervisorStateExtensionHost.c)
 *     KiInitializeReservedCpuSets @ 0x140C2BCFC (KiInitializeReservedCpuSets.c)
 *     KiEpfInitialize @ 0x140C2BF10 (KiEpfInitialize.c)
 *     KiIntSteerInit @ 0x140C2C194 (KiIntSteerInit.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140C2C308 (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     KiInitDynamicTraceSupport @ 0x140C2C3C0 (KiInitDynamicTraceSupport.c)
 *     KiVerifyScopes @ 0x140C2C558 (KiVerifyScopes.c)
 *     MmFreeLoaderBlock @ 0x140C5097C (MmFreeLoaderBlock.c)
 *     KiRcuSystemInitialize @ 0x140C688E0 (KiRcuSystemInitialize.c)
 *     KeInitializeSchedulerAssist @ 0x140C69F20 (KeInitializeSchedulerAssist.c)
 */

char __fastcall KeInitSystem(int a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v2; // rdx
  __int64 v3; // rdx
  int v4; // eax
  ULONG ActiveProcessorCount; // esi
  int v6; // ecx
  unsigned int v7; // eax
  ULONG v8; // edi
  __int64 *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // edx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  int v20; // r8d
  int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // [rsp+38h] [rbp-39h] BYREF
  __int64 v26; // [rsp+40h] [rbp-31h] BYREF
  __int128 v27; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 *v29; // [rsp+78h] [rbp+7h]
  __int64 v30; // [rsp+80h] [rbp+Fh]
  __int64 *v31; // [rsp+88h] [rbp+17h]
  __int64 v32; // [rsp+90h] [rbp+1Fh]
  __int128 *v33; // [rsp+98h] [rbp+27h]
  __int64 v34; // [rsp+A0h] [rbp+2Fh]

  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
          (__int64)&dword_140E070B8,
          (__int64)KiTraceLogControlCallback,
          (__int64)&dword_140E070B8);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E07080, 0LL, 0LL);
        if ( KiDisablePointerParameterAlignmentValidation
          && (unsigned int)dword_140E070B8 > 5
          && tlgKeywordOn((__int64)&dword_140E070B8, 0x400000000000LL) )
        {
          LODWORD(v25) = v20;
          v30 = 4LL;
          v29 = &v25;
          v26 = 0x1000000LL;
          v31 = &v26;
          v32 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E070B8,
            (unsigned __int8 *)byte_140059CF8,
            0LL,
            0LL,
            4u,
            v28);
        }
        KiIntSteerInit(2);
        if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline() )
        {
          v21 = 0;
          if ( (_DWORD)KeNumberProcessors_0 )
          {
            while ( 1 )
            {
              v27 = 0LL;
              v22 = KiProcessorBlock[v21];
              v23 = *(_QWORD *)(v22 + 36464);
              KeGetTopologySiblingGroupAffinityForProcessor(v22, 5, &v27);
              if ( v23 != (_QWORD)v27 )
                break;
              if ( ++v21 >= (unsigned int)KeNumberProcessors_0 )
                return 1;
            }
            if ( (unsigned int)dword_140E070B8 > 5 && tlgKeywordOn((__int64)&dword_140E070B8, 0x400000000000LL) )
            {
              v26 = v24;
              v29 = &v26;
              v30 = 8LL;
              v31 = &v25;
              v25 = v23;
              v33 = &v27;
              v32 = 8LL;
              *(_QWORD *)&v27 = 0x1000000LL;
              v34 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E070B8,
                (unsigned __int8 *)&byte_140059D6F,
                0LL,
                0LL,
                5u,
                v28);
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
    KiClockKeepAliveCycle = (ActiveProcessorCount + (KeMaximumIncrement + 29999999) / KeMaximumIncrement - 1)
                          / ActiveProcessorCount;
    if ( !KiForceBugcheckForDpcWatchdog && HviIsAnyHypervisorPresent() )
    {
      if ( !HvlHypervisorConnected || (HvlEnlightenments & 0x20) != 0 )
      {
        v6 = 1;
        KeDpcWatchdogPeriodMs = 0;
        KeDpcTimeoutMs = 0;
        KeDpcSoftTimeoutMs = 0;
        KeDpcCumulativeSoftTimeoutMs = 0;
        KeDpcWatchdogProfileCumulativeDpcThresholdMs = 0;
        KeDpcWatchdogProfileSingleDpcThresholdMs = 0;
      }
      else
      {
        v6 = 0;
      }
      KeRelaxTimingConstraints(v6);
    }
    KiInitDpcThresholds();
    if ( ViVerifierEnabled )
    {
      v7 = KeVerifierDpcScalingFactor;
      if ( !KeVerifierDpcScalingFactor )
      {
        v7 = 1;
        KeVerifierDpcScalingFactor = 1;
      }
      if ( v7 > 0x64 )
        KeVerifierDpcScalingFactor = 100;
      KiApplyDpcVerificationScaleSettings();
    }
    v8 = 0;
    if ( ActiveProcessorCount )
    {
      v9 = KiProcessorBlock;
      while ( 1 )
      {
        v10 = *v9;
        KiInitializeProcessor(*v9);
        if ( KeThreadDpcEnable )
        {
          if ( (int)KiStartDpcThread(v10) < 0 )
            break;
        }
        ++v8;
        ++v9;
        if ( v8 >= ActiveProcessorCount )
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
          dword_140FC80E8 = 10;
        }
        SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x67000Cu);
        KiIntSteerInit(1);
        KiInitSupervisorStateExtensionHost(v12, v11);
        if ( KiInitMachineDependent() )
        {
          v13 = *(unsigned int *)(KiProcessorBlock[0] + 68);
          v14 = v13 * (unsigned __int64)KeMaximumIncrement / 0xA;
          KiShortExecutionCycles = v14 / 0xF0;
          v15 = v14 / 3;
          KiCyclesPerClockQuantum = v14 / 3;
          KiDirectQuantumTarget = v14 / 3;
          KiLockQuantumTarget = 3 * (v14 / 3);
          if ( (KiVelocityFlags & 0x40000) != 0 )
          {
            KiCyclesPerClockQuantum = (unsigned int)v15 / 6;
            KiLockQuantumTarget = 2 * ((unsigned int)v15 / 6);
          }
          v16 = KiLongDpcRuntimeThreshold;
          _BitScanReverse64(&v17, 6000000 * v13);
          KiFavoredCoreCycleTimeBits = v17;
          if ( (unsigned int)KiLongDpcRuntimeThreshold < 0x32 )
          {
            v16 = 50;
            KiLongDpcRuntimeThreshold = 50;
          }
          if ( (unsigned int)KiLongDpcQueueThreshold < 2 )
            KiLongDpcQueueThreshold = 2;
          v18 = *(unsigned int *)(KiProcessorBlock[0] + 68);
          KiLongDpcRuntimeThresholdCycles = v16 * *(_DWORD *)(KiProcessorBlock[0] + 68);
          qword_140FC53E8 = v18 * (unsigned int)dword_140FC53E4;
          qword_140FC53F8 = *(unsigned int *)(KiProcessorBlock[0] + 68)
                          * (unsigned __int64)(unsigned int)dword_140FC53F0;
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
  v4 = KeInitializeTimerTable((__int64)CurrentPrcb, v3);
  if ( v4 < 0 )
    KeBugCheckEx(0x31u, v4, 1uLL, 0LL, 0LL);
  KiInitializeVelocity();
  KiInitializeAntiStarvationPolicies();
  return 1;
}
