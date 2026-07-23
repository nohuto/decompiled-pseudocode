/*
 * XREFs of KeInitSystem @ 0x140C4FA10
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     HviIsAnyHypervisorPresent @ 0x1404A3870 (HviIsAnyHypervisorPresent.c)
 *     KiDetectTsx @ 0x1404D9ECC (KiDetectTsx.c)
 *     Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage @ 0x1404F3B38 (Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage.c)
 *     Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage @ 0x1404F3BA0 (Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage.c)
 *     Feature_ShortThreadQuantum__private_ReportDeviceUsage @ 0x1404F3C08 (Feature_ShortThreadQuantum__private_ReportDeviceUsage.c)
 *     KeInitializeCatRegisters @ 0x1404F7094 (KeInitializeCatRegisters.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1405184E8 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KdEncodeDataBlock @ 0x1405ABD20 (KdEncodeDataBlock.c)
 *     KeRelaxTimingConstraints @ 0x1405B0F80 (KeRelaxTimingConstraints.c)
 *     Feature_Servicing_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline @ 0x1405B15F4 (Feature_Servicing_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline @ 0x1405B1648 (Feature_Servicing_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline.c)
 *     KiApplyDpcVerificationScaleSettings @ 0x1405B20D4 (KiApplyDpcVerificationScaleSettings.c)
 *     KiInitializeNormalPriorityAntiStarvationPolicies @ 0x1405B3238 (KiInitializeNormalPriorityAntiStarvationPolicies.c)
 *     KiInitMachineDependent @ 0x1405BC408 (KiInitMachineDependent.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1405BC728 (KiInitializeIdealProcessorRebalancer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KiStartDpcThread @ 0x14072F148 (KiStartDpcThread.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     KeInitializeTimerTable @ 0x140A79D74 (KeInitializeTimerTable.c)
 *     KiInitializeProcessor @ 0x140B46628 (KiInitializeProcessor.c)
 *     KeFreeInitializationCode @ 0x140BCE4F0 (KeFreeInitializationCode.c)
 *     KiComputeDispatchInterruptCost @ 0x140C16508 (KiComputeDispatchInterruptCost.c)
 *     KiComputeNumaCosts @ 0x140C1681C (KiComputeNumaCosts.c)
 *     KiInitDpcThresholds @ 0x140C17060 (KiInitDpcThresholds.c)
 *     KiInitSupervisorStateExtensionHost @ 0x140C1770C (KiInitSupervisorStateExtensionHost.c)
 *     KiInitializeReservedCpuSets @ 0x140C18ACC (KiInitializeReservedCpuSets.c)
 *     KiEpfInitialize @ 0x140C18CE0 (KiEpfInitialize.c)
 *     KiIntSteerInit @ 0x140C18F78 (KiIntSteerInit.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140C190EC (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     KiInitDynamicTraceSupport @ 0x140C191A4 (KiInitDynamicTraceSupport.c)
 *     KiVerifyScopes @ 0x140C1933C (KiVerifyScopes.c)
 *     MmFreeLoaderBlock @ 0x140C3D564 (MmFreeLoaderBlock.c)
 *     KiRcuSystemInitialize @ 0x140C54868 (KiRcuSystemInitialize.c)
 */

char __fastcall KeInitSystem(int a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v2; // rdx
  BOOL v3; // eax
  int v4; // eax
  ULONG ActiveProcessorCount; // ebp
  int v6; // ecx
  unsigned int v7; // eax
  ULONG v8; // edi
  __int64 *v9; // rsi
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
  int v21; // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+38h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+40h] [rbp-68h] BYREF
  int *v24; // [rsp+60h] [rbp-48h]
  __int64 v25; // [rsp+68h] [rbp-40h]
  __int64 *v26; // [rsp+70h] [rbp-38h]
  __int64 v27; // [rsp+78h] [rbp-30h]

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
          v21 = v20;
          v25 = 4LL;
          v24 = &v21;
          v22 = 0x1000000LL;
          v26 = &v22;
          v27 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E070B8,
            (unsigned __int8 *)byte_140057CE9,
            0LL,
            0LL,
            4u,
            &v23);
        }
        KiIntSteerInit(2);
      }
      else if ( a1 == 3 )
      {
        KiInitializeReservedCpuSets();
      }
      else
      {
        ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
        MmFreeLoaderBlock();
        *(_QWORD *)&KeNumberProcessorsGroup0[1] = 0LL;
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
          goto LABEL_39;
      }
    }
    else
    {
LABEL_39:
      if ( KiComputeNumaCosts()
        && (int)KiComputeDispatchInterruptCost() >= 0
        && (int)KiInitializeDpcRuntimeHistoryHashTables() >= 0 )
      {
        if ( (_BYTE)KiKernelCetEnabled )
        {
          LOBYTE(KiKernelCetLogging) = 1;
          dword_140FC70A8 = 10;
        }
        SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x670008u);
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
          qword_140FC43C8 = v18 * (unsigned int)dword_140FC43C4;
          qword_140FC43D8 = *(unsigned int *)(KiProcessorBlock[0] + 68)
                          * (unsigned __int64)(unsigned int)dword_140FC43D0;
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
  v3 = 0;
  if ( CurrentPrcb->SchedulerAssist )
  {
    v3 = 1;
    if ( KiSchedulerAssistThreadFlagOverride != 1 )
      v3 = KiSchedulerAssistThreadFlagOverride != 2;
  }
  KiSchedulerAssistThreadFlagEnabled = v3;
  if ( v3 )
    _interlockedbittestandset(&CurrentPrcb->IdleThread->Header.Lock, 0x16u);
  if ( (unsigned int)(KiVpThreadSystemWorkPriority - 1) > 0x1E )
    KiVpThreadSystemWorkPriority = 1;
  if ( CurrentPrcb->SchedulerAssist )
    KiIrqlFlags |= 1u;
  KeInitializeCatRegisters();
  v4 = KeInitializeTimerTable((__int64)CurrentPrcb);
  if ( v4 < 0 )
    KeBugCheckEx(0x31u, v4, 1uLL, 0LL, 0LL);
  Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x10000u;
  Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x20000u;
  Feature_ShortThreadQuantum__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x40000u;
  if ( (unsigned int)Feature_Servicing_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x200000u;
  if ( (unsigned int)Feature_Servicing_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x800000u;
  return 1;
}
