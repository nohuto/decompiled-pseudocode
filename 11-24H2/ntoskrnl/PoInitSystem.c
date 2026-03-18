/*
 * XREFs of PoInitSystem @ 0x140C61990
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     ExInitializeResourceLite2 @ 0x140365350 (ExInitializeResourceLite2.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1403B5638 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     PopInitilizeAcDcSettings @ 0x1403F29B0 (PopInitilizeAcDcSettings.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14045FB10 (ExInitializeNPagedLookasideListInternal.c)
 *     HviIsAnyHypervisorPresent @ 0x1404A37D0 (HviIsAnyHypervisorPresent.c)
 *     PopBatteryQueueWork @ 0x1404A42EC (PopBatteryQueueWork.c)
 *     HalGetInterruptTargetInformation @ 0x1404B7620 (HalGetInterruptTargetInformation.c)
 *     PopComputeCounterShifts @ 0x1404F7108 (PopComputeCounterShifts.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F96CC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1405CCC74 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline @ 0x1405CCCC8 (Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmInitIllegalThrottleLogging @ 0x1405CCD1C (PpmInitIllegalThrottleLogging.c)
 *     PopLidReliabilityInit @ 0x1405D3AF8 (PopLidReliabilityInit.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1405D4174 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopDiagTraceAbnormalReset @ 0x1405D4480 (PopDiagTraceAbnormalReset.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D6E5C (PpmHeteroHgsDetectContainmentPresence.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopResetActionDefaults @ 0x1406FBF94 (PopResetActionDefaults.c)
 *     KeRegisterProcessorChangeCallback @ 0x14073C2D0 (KeRegisterProcessorChangeCallback.c)
 *     PopCheckSkipTick @ 0x140748C1C (PopCheckSkipTick.c)
 *     PopDefaultPolicy @ 0x140748C74 (PopDefaultPolicy.c)
 *     PopSetupAirplaneModeNotification @ 0x140748D40 (PopSetupAirplaneModeNotification.c)
 *     PopSetupAudioEventNotification @ 0x140748D7C (PopSetupAudioEventNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x140748DB8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140748DF4 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupHighPerfPowerRequest @ 0x140748E30 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupMixedRealitytNotification @ 0x140748E6C (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x140748EE8 (PopSetupMobileHotspotNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140748F24 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140748F60 (PopSetupUserPresencePredictionNotification.c)
 *     PopInitializeWorkItem @ 0x1407493D8 (PopInitializeWorkItem.c)
 *     PopUpdateUpgradeInProgress @ 0x140749A30 (PopUpdateUpgradeInProgress.c)
 *     PpmIdleRegisterDefaultStates @ 0x14074A2C0 (PpmIdleRegisterDefaultStates.c)
 *     PopThermalHandlePreviousShutdown @ 0x14075433C (PopThermalHandlePreviousShutdown.c)
 *     PopDiagTraceSkipTick @ 0x140757A6C (PopDiagTraceSkipTick.c)
 *     PpmEnableWmiInterface @ 0x14075C1E4 (PpmEnableWmiInterface.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14075C48C (PopIdleInitAoAcDozeS4Timer.c)
 *     PopSendFanNoiseChangeWnf @ 0x14075CF60 (PopSendFanNoiseChangeWnf.c)
 *     PopIdleWakeInitialize @ 0x14075F008 (PopIdleWakeInitialize.c)
 *     TtmInit @ 0x140769B20 (TtmInit.c)
 *     PopLogSleepDisabled @ 0x1409B80F8 (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x140A26E9C (PopUpdateConsoleDisplayState.c)
 *     PopInitializeHeteroProcessors @ 0x140A2A138 (PopInitializeHeteroProcessors.c)
 *     PopResetCurrentPolicies @ 0x140A688CC (PopResetCurrentPolicies.c)
 *     PopInitializePowerPolicySimulate @ 0x140A85F80 (PopInitializePowerPolicySimulate.c)
 *     EmpProviderRegister @ 0x140AB3EE0 (EmpProviderRegister.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140ABC6E4 (PopUpdateBackgroundCoolingStatus.c)
 *     PpmCheckInitProcessors @ 0x140AC75E0 (PpmCheckInitProcessors.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140B682E0 (EmClientQueryRuleState.c)
 *     HalReportResourceUsage @ 0x140C0D6E0 (HalReportResourceUsage.c)
 *     PopCreateTimebrokerServiceSid @ 0x140C2D120 (PopCreateTimebrokerServiceSid.c)
 *     PopInitDripsWakeAccounting @ 0x140C2D1CC (PopInitDripsWakeAccounting.c)
 *     PopInitVideoWnfState @ 0x140C2D264 (PopInitVideoWnfState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140C2D2F8 (PopInitializeHighPerfPowerRequest.c)
 *     PpmInitCoreParkingPolicy @ 0x140C2D42C (PpmInitCoreParkingPolicy.c)
 *     PpmInitIdlePolicy @ 0x140C2D4D4 (PpmInitIdlePolicy.c)
 *     PopCheckAndClearBootError @ 0x140C2D62C (PopCheckAndClearBootError.c)
 *     PopCheckShutdownMarker @ 0x140C2D6B4 (PopCheckShutdownMarker.c)
 *     PopRecordFirmwareResetReason @ 0x140C2DE3C (PopRecordFirmwareResetReason.c)
 *     PopPowerRequestInitialize @ 0x140C2DE8C (PopPowerRequestInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140C2E294 (PopInitializeDirectedDrips.c)
 *     PopInitializePowerSettingCallbacks @ 0x140C2E2C8 (PopInitializePowerSettingCallbacks.c)
 *     PopInitializeWin32kActivator @ 0x140C2E3A4 (PopInitializeWin32kActivator.c)
 *     PoFxInitPowerManagement @ 0x140C2E41C (PoFxInitPowerManagement.c)
 *     PpmPerfInitialize @ 0x140C2E714 (PpmPerfInitialize.c)
 *     PopInitShutdownList @ 0x140C2E8F8 (PopInitShutdownList.c)
 *     PopCoalescingInitialize @ 0x140C2E994 (PopCoalescingInitialize.c)
 *     PopInitializePowerSettings @ 0x140C2EA54 (PopInitializePowerSettings.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140C2EB0C (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopUserShutdownScenarioInitialize @ 0x140C2ECB0 (PopUserShutdownScenarioInitialize.c)
 *     PopThermalInit @ 0x140C2ED08 (PopThermalInit.c)
 *     PopSetupKsrCallbacks @ 0x140C2EDFC (PopSetupKsrCallbacks.c)
 *     PopDiagInitialize @ 0x140C2EEA0 (PopDiagInitialize.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140C300B4 (PopTriggerDiagTraceAoAcCapability.c)
 *     PpmCheckInit @ 0x140C30158 (PpmCheckInit.c)
 *     PpmInitPolicyConfiguration @ 0x140C302E8 (PpmInitPolicyConfiguration.c)
 *     PopInitializeSystemIdleDetection @ 0x140C304CC (PopInitializeSystemIdleDetection.c)
 *     PopDeepSleepInitialize @ 0x140C305B0 (PopDeepSleepInitialize.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140C305FC (PopEvaluateInputSuppressionRequired.c)
 *     PopPowerButtonSuppressionInit @ 0x140C306E0 (PopPowerButtonSuppressionInit.c)
 *     PopInitializeIrpWorkers @ 0x140C30844 (PopInitializeIrpWorkers.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140C309B8 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmInitHeteroPolicy @ 0x140C318AC (PpmInitHeteroPolicy.c)
 *     PopBatteryInit @ 0x140C31AC0 (PopBatteryInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140C31D4C (PopBatteryInitPhaseTwo.c)
 *     PopSmartSuspendInit @ 0x140C31EA0 (PopSmartSuspendInit.c)
 *     PopNetInitialize @ 0x140C31EF4 (PopNetInitialize.c)
 *     PopInitializePowerButtonHold @ 0x140C320F0 (PopInitializePowerButtonHold.c)
 *     PopRecorderInit @ 0x140C32368 (PopRecorderInit.c)
 *     PopFanReportBootStartDevices @ 0x140C323E4 (PopFanReportBootStartDevices.c)
 *     PopUmpoInitializeChannel @ 0x140C32438 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C326B4 (PopUmpoInitializeMonitorChannel.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140C32868 (PopCreateIdlePhaseWatchdog.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140C328E4 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopEsInit @ 0x140C32A6C (PopEsInit.c)
 *     PopEtInit @ 0x140C32B60 (PopEtInit.c)
 *     PopWatchdogInit @ 0x140C32E78 (PopWatchdogInit.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140C32F70 (PopReadErrataForIncorrectLidNotification.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140C32FBC (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PoFxRegisterDebugger @ 0x140C33028 (PoFxRegisterDebugger.c)
 *     PpmEventInitialize @ 0x140C332E8 (PpmEventInitialize.c)
 *     PpmParkInitialize @ 0x140C33334 (PpmParkInitialize.c)
 *     PopModernStandbyNotificationInit @ 0x140C33490 (PopModernStandbyNotificationInit.c)
 *     PopInitializeAdpm @ 0x140C33664 (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140C3371C (PopDripsWatchdogInitialize.c)
 *     SshInitialize @ 0x140C341AC (SshInitialize.c)
 *     PopSleepstudyInitialize @ 0x140C66E70 (PopSleepstudyInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140C6809C (PopPowerAggregatorInitialize.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  int TimebrokerServiceSid; // eax
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  unsigned int v22; // r8d
  int v23; // esi
  unsigned __int8 v24; // r14
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  unsigned int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int128 v44; // [rsp+40h] [rbp-20h] BYREF
  __int64 v45; // [rsp+50h] [rbp-10h]
  int v46; // [rsp+58h] [rbp-8h]
  int v47; // [rsp+A0h] [rbp+40h] BYREF
  int v48; // [rsp+B0h] [rbp+50h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp+58h] BYREF

  PopOsInitPhase = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v45 = 0LL;
  v46 = 0;
  v44 = 0LL;
  if ( !a1 )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    PopQpcFrequency = PerformanceFrequency.QuadPart;
    PopComputeCounterShifts(
      PerformanceFrequency.QuadPart,
      &PpmPerformanceDistributionShift,
      &PpmPerformanceCounterShift);
    PopComputeCounterShifts(0x989680uLL, &PpmHvPerformanceDistributionShift, &PpmHvPerformanceCounterShift);
    PopCsResiliencyStatsLock = 0LL;
    PopSleepstudyInitialize(0LL);
    TimebrokerServiceSid = PopPowerAggregatorInitialize(0LL);
    if ( TimebrokerServiceSid >= 0 )
    {
      PopIdleLoopExecuted.Header.WaitListHead.Blink = &PopIdleLoopExecuted.Header.WaitListHead;
      PopIdleLoopExecuted.Header.WaitListHead.Flink = &PopIdleLoopExecuted.Header.WaitListHead;
      qword_140F0B688 = (__int64)&PopIrpList;
      PopIrpList = (__int64)&PopIrpList;
      qword_140F0B698 = (__int64)&PopInrushIrpList;
      PopInrushIrpList = (__int64)&PopInrushIrpList;
      qword_140F088D8 = 0LL;
      PopPowerEventLock = 0LL;
      qword_140F085B8 = 0LL;
      PopSystemIdleLock = 0LL;
      qword_140F0D1A8 = 0LL;
      PopCoalRegistrationListLock = 0LL;
      LOWORD(PopIdleLoopExecuted.Header.Lock) = 0;
      PopIdleLoopExecuted.Header.Size = 6;
      PopIdleLoopExecuted.Header.SignalState = 0;
      PopDeepSleepDisengageReasonLock = 0LL;
      PopIrpLock = 0LL;
      ExInitializeNPagedLookasideListInternal((__int64)&PopIrpDataLookaside, 0LL, 0LL, 512, 312, 1917415248, 0, 0);
      PopShutdownNotificationCallbackLock = 0LL;
      qword_140F084B8 = (__int64)&PopShutdownNotificationCallbackList;
      PopShutdownNotificationCallbackList = &PopShutdownNotificationCallbackList;
      memset_0(PopStateTransitonBlameStack, 0, 0xC18uLL);
      dword_140F0CF60 = -1;
      PopDevicePowerTransitionInProgressWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDevicePowerTransitionInProgressWorker;
      PopPendingPowerTransitionLock = 0LL;
      BootStatDisableFlush = (qword_140EFEAF8 & 4) != 0;
      PopDevicePowerTransitionInProgressWorkItem.Parameter = 0LL;
      *(_OWORD *)&xmmword_140F0CF68 = 0LL;
      PopBsdFlushInactiveEvent.Header.WaitListHead.Blink = &PopBsdFlushInactiveEvent.Header.WaitListHead;
      PopBsdFlushInactiveEvent.Header.WaitListHead.Flink = &PopBsdFlushInactiveEvent.Header.WaitListHead;
      xmmword_140F0CF68 = 0LL;
      PopDevicePowerTransitionInProgressWorkItem.List.Flink = 0LL;
      BootStatFileHandle = 0LL;
      BootStatFileHandleAcquired = 0;
      BootStatKeepHandleOpen = 0;
      BootStatDataCache = 0LL;
      PopBsdSkipLogging = 0;
      qword_140F0E3D8 = 0LL;
      PopBsdUpdateLock = 0LL;
      LOWORD(PopBsdFlushInactiveEvent.Header.Lock) = 1;
      PopBsdFlushInactiveEvent.Header.Size = 6;
      PopBsdFlushInactiveEvent.Header.SignalState = 1;
      PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
      PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v4);
      PopInitializeWorkItem((__int64)&PopBsdFlushWorkItem, (__int64)PopBsdFlushWorker, v5);
      PopInitializeWorkItem((__int64)&PopBsdUpdateWorkItem, (__int64)PopBsdUpdateWorker, v6);
      PopWdiCurrentScenarioInstanceId = 0LL;
      PopWdiCurrentScenario = (__int64)&CPER_EMPTY_GUID;
      PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, v7);
      PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, v8);
      qword_140F08478 = 0LL;
      qword_140F0E248 = (__int64)&PopTransitionCheckpoints;
      PopTransitionCheckpoints = &PopTransitionCheckpoints;
      PopInputSuppressionLock = 0LL;
      qword_140F08438 = 0LL;
      PopPowerButtonSuppressionLock = 0LL;
      qword_140F0E238 = 0LL;
      PopTransitionCheckpointLock = 0LL;
      PopMonitorOffDueToSleep = 0;
      PpmCheckInit();
      TimebrokerServiceSid = PopInitializeIrpWorkers();
      if ( TimebrokerServiceSid >= 0 )
      {
        PopIrpSerialLock = 0LL;
        qword_140F0B898 = (__int64)&qword_140F0B890;
        qword_140F0B890 = (__int64)&qword_140F0B890;
        qword_140F0B848 = (__int64)&PopIrpSerialList;
        PopIrpSerialList = (__int64)&PopIrpSerialList;
        qword_140F0B858 = (__int64)&PopRequestedIrps;
        PopRequestedIrps = (__int64)&PopRequestedIrps;
        PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
        PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
        qword_140F0B828 = (__int64)&PowerStateDisableReasonListHead;
        PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        qword_140F0DA88 = (__int64)&PopDisableSleepList;
        PopDisableSleepList = (__int64)&PopDisableSleepList;
        qword_140F0B6C8 = 0LL;
        PpmIdlePolicyLock = 0LL;
        PpmIdleVetoLock = 0LL;
        PpmParkStateLock = 0LL;
        qword_140E27DC8 = 0LL;
        word_140F0B888 = 1;
        byte_140F0B88A = 6;
        dword_140F0B88C = 1;
        PopWorkerLock = 0LL;
        LOWORD(PopTransitionLock.Header.Lock) = 1;
        PopTransitionLock.Header.Size = 6;
        PopTransitionLock.Header.SignalState = 1;
        PopDisableSleepMutex.Count = 1;
        PopDisableSleepMutex.Owner = 0LL;
        PopDisableSleepMutex.Contention = 0;
        LOWORD(PopDisableSleepMutex.Event.Header.Lock) = 1;
        PopDisableSleepMutex.Event.Header.Size = 6;
        PopDisableSleepMutex.Event.Header.SignalState = 0;
        PopInitShutdownList();
        v9 = PopIdleScanInterval;
        qword_140F0B818 = (__int64)&PopIdleDetectList;
        PopIdleDetectList = (__int64)&PopIdleDetectList;
        PopDopeGlobalLock = 0LL;
        if ( PopIdleScanInterval )
        {
          if ( PopIdleScanInterval == -1 )
          {
            v9 = 30;
            PopIdleScanInterval = 30;
          }
          else if ( (unsigned int)PopIdleScanInterval > 0x12C )
          {
            v9 = 300;
            PopIdleScanInterval = 300;
          }
          PopIdleBackgroundIgnoreCount = (v9 + 59) / v9;
          PopBackgroundTaskIgnoreCount = (v9 + 179) / v9;
        }
        PopWorkerSpinLock = 0LL;
        PopPolicyWorker.WorkerRoutine = (void (__fastcall *)(void *))PopPolicyWorkerThread;
        PopPolicyWorker.List.Flink = 0LL;
        PopPolicyWorker.Parameter = (void *)0x80000000LL;
        PopWorkerStatus = -1;
        ExInitializeResourceLite2(&PopPolicyLock, -1);
        PopAwaymodeLock = 0LL;
        PopVolumeLock.Event.Header.WaitListHead.Blink = &PopVolumeLock.Event.Header.WaitListHead;
        PopVolumeLock.Event.Header.WaitListHead.Flink = &PopVolumeLock.Event.Header.WaitListHead;
        PopVolumeLock.Count = 1;
        PopPowerSettingCallbackReturned.Header.WaitListHead.Blink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
        PopPowerSettingCallbackReturned.Header.WaitListHead.Flink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
        qword_140F0BB08 = (__int64)&PopVolumeDevices;
        PopVolumeDevices = (__int64)&PopVolumeDevices;
        qword_140F0BB18 = (__int64)&PopSwitches;
        PopSwitches = (__int64)&PopSwitches;
        qword_140F0BB28 = (__int64)&PopFans;
        PopFans = (__int64)&PopFans;
        PopVolumeLock.Owner = 0LL;
        PopVolumeLock.Contention = 0;
        LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
        PopVolumeLock.Event.Header.Size = 6;
        PopVolumeLock.Event.Header.SignalState = 0;
        LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
        PopPowerSettingCallbackReturned.Header.Size = 6;
        PopPowerSettingCallbackReturned.Header.SignalState = 0;
        qword_140F0BAE8 = (__int64)&PopThermal;
        PopThermal = &PopThermal;
        PopWaitingForTransitionLock = 0;
        qword_140F0A8C8 = 0LL;
        PopUnlockAfterSleepLock = 0LL;
        IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
        qword_140F0BAF8 = (__int64)&PopActionWaiters;
        PopActionWaiters = (__int64)&PopActionWaiters;
        PopResetActionDefaults();
        PopPolicy = dword_140F0B964;
        PopDefaultPolicy(dword_140F0B964);
        LODWORD(PopAdminPolicy) = 2;
        *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
        HIDWORD(PopAdminPolicy) = -1;
        qword_140F0BAD0 = 0xFFFFFFFF00000000uLL;
        PopFullWake = 1;
        if ( (unsigned int)Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline() )
        {
          PopSstNotificationHandlerListLock = 0LL;
          qword_140F0D108 = (__int64)&PopSstNotificationHandlerList;
          PopSstNotificationHandlerList = &PopSstNotificationHandlerList;
        }
        PopCoolingMode = 0;
        dword_140E27DC0 = -1;
        dword_140E27DC4 = 2;
        PpmInitPolicyConfiguration(v11, v10, v12);
        PpmInitIdlePolicy();
        PpmPerfInitialize();
        PpmInitCoreParkingPolicy();
        PpmInitHeteroPolicy();
        PpmIdleRegisterDefaultStates();
        PopDeepSleepInitialize(0);
        PopInitializePowerSettings();
        PopInitilizeAcDcSettings();
        qword_140F0C0C8 = 0LL;
        PopPolicyDeviceLock = 0LL;
        PopBatteryInit();
        PopThermalInit();
        *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
        qword_140F0BC58 = (__int64)&PopCoolingExtensionList;
        PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
        qword_140F0BC78 = (__int64)&PopPowerLimitExtensionList;
        PopPowerLimitExtensionList = (__int64)&PopPowerLimitExtensionList;
        qword_140F0B908 = (__int64)PopShutdownHandler;
        qword_140F0D0B8 = (__int64)&PopWakeInfoList;
        PopWakeInfoList = (__int64)&PopWakeInfoList;
        PopWakeSourceAvailable.Header.WaitListHead.Blink = &PopWakeSourceAvailable.Header.WaitListHead;
        PopWakeSourceAvailable.Header.WaitListHead.Flink = &PopWakeSourceAvailable.Header.WaitListHead;
        qword_140F0D058 = (__int64)&PopWakeSourceWorkList;
        PopWakeSourceWorkList = &PopWakeSourceWorkList;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        qword_140F081F8 = (__int64)PpmWmiIdleAccountingProcedure;
        PopUserPresentWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUserPresentSetWorker;
        qword_140E674A0 = (__int64)&qword_140E67498;
        qword_140E67498 = (__int64)&qword_140E67498;
        PopAwayModeUserPresenceTimer = 8LL;
        PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        qword_140F0BC68 = 0LL;
        PopCoolingExtensionLock = 0LL;
        qword_140F0BC88 = 0LL;
        PopPowerLimitExtensionLock = 0LL;
        dword_140F0B900 = 4;
        byte_140F0B904 = 0;
        PopWakeInfoCount = 0;
        PopCurrentWakeInfo = 0LL;
        PopWakeSourceLock = 0LL;
        LOWORD(PopWakeSourceAvailable.Header.Lock) = 0;
        PopWakeSourceAvailable.Header.Size = 6;
        PopWakeSourceAvailable.Header.SignalState = 1;
        PopWakeSourceWorkState = 0;
        PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
        PpmWmiIdleAccountingTimer.Period = 0;
        PpmWmiIdleAccountingTimer.Processor = 0;
        PpmWmiIdleAccountingDpc = 275;
        qword_140F08200 = 0LL;
        qword_140F08218 = 0LL;
        qword_140F081F0 = 0LL;
        PopUserPresentLock = 0LL;
        PopUserPresentWorkItem.Parameter = 0LL;
        PopUserPresentWorkItem.List.Flink = 0LL;
        qword_140E674A8 = 0LL;
        dword_140E674CC = 0;
        word_140E674C8 = 0;
        LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
        PopUserPresentCompletedEvent.Header.Size = 6;
        PopUserPresentCompletedEvent.Header.SignalState = 0;
        PopSmartSuspendInit();
        word_140F0D4C8 = 1;
        qword_140F0D4D8 = (__int64)&qword_140F0D4D0;
        qword_140F0D4D0 = (__int64)&qword_140F0D4D0;
        byte_140F0D4CA = 6;
        dword_140F0D4CC = 1;
        PoFxInitPowerManagement();
        dword_140F0BA6C = 0;
        qword_140F0BA70 = 100LL;
        qword_140F0BA78 = 100LL;
        dword_140F0BA80 = 100;
        PopNetInitialize(0);
        PopInitializePowerButtonHold(0);
        qword_140F076F8 = 0LL;
        PopSleepReliabilityDiagLock = 0LL;
        PopRecorderInit();
        PopRecordFirmwareResetReason(a2);
        TimebrokerServiceSid = PopCreateTimebrokerServiceSid();
        if ( TimebrokerServiceSid >= 0 )
        {
          PopInitializeDirectedDrips(0);
          SshInitialize(0);
LABEL_71:
          TimebrokerServiceSid = 0;
          return TimebrokerServiceSid >= 0;
        }
      }
    }
    return TimebrokerServiceSid >= 0;
  }
  if ( a1 == 1 )
  {
    if ( HviIsAnyHypervisorPresent() )
    {
      PpmExitLatencyCheckEnabled = 0;
      PpmExitLatencySamplingPercentage = 0;
    }
    qword_140F0C0B8 = 0LL;
    PopFanLock = 0LL;
    dword_140F0C0EC = 0;
    PopSendFanNoiseChangeWnf(0);
    if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 0x10 )
      PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
    qword_140F0C330 = 0LL;
    qword_140F0C338 = 0LL;
    qword_140F0C328 = 0LL;
    PopSuspendResumeNotification = 0LL;
    SshInitialize(1);
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    PopPdcDeviceListLock = 0LL;
    if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
    {
      PopDelayedPdcRegistrationWorkItem.Parameter = 0LL;
      PopDelayedPdcRegistrationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDelayedPdcRegistrationWorker;
      PopDelayedPdcRegistrationWorkItem.List.Flink = 0LL;
    }
    PopEsInit(1);
    PopInitializePowerSettingCallbacks();
    TimebrokerServiceSid = PopEtInit();
    if ( TimebrokerServiceSid >= 0 )
    {
      TimebrokerServiceSid = PopPowerRequestInitialize();
      if ( TimebrokerServiceSid >= 0 )
      {
        TimebrokerServiceSid = PopPowerAggregatorInitialize(1LL);
        if ( TimebrokerServiceSid >= 0 )
        {
          TimebrokerServiceSid = PopInitializeHighPerfPowerRequest();
          if ( TimebrokerServiceSid >= 0 )
          {
            PopCheckPowerSourceAfterRtcWakeInitialize();
            PopWatchdogInit(v14, v13, v15);
            PopInitializePowerButtonHold(1);
            PopInitDripsWakeAccounting();
            TimebrokerServiceSid = EmpProviderRegister(
                                     0LL,
                                     (__int64)&PopEmEntry,
                                     1u,
                                     (__int64)&PopEmCallback,
                                     2u,
                                     (__int64 *)&PerformanceFrequency);
            if ( TimebrokerServiceSid >= 0 )
            {
              v47 = 1;
              PopErrataDisablePrimaryDeviceFastResume = 0;
              EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &v47);
              if ( v47 == 2 )
                PopErrataDisablePrimaryDeviceFastResume = 1;
              PopDetectSimulatedHeteroProcessors();
              PpmHeteroHgsDetectContainmentPresence(0LL, 0);
              goto LABEL_71;
            }
          }
        }
      }
    }
    return TimebrokerServiceSid >= 0;
  }
  if ( a1 != 2 )
  {
    if ( a1 != 3 )
      goto LABEL_71;
    TimebrokerServiceSid = PopDiagInitialize();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    SshInitialize(3);
    PopSleepstudyInitialize(3LL);
    PopTriggerDiagTraceAoAcCapability(PopPlatformAoAcCapabilityInitialized != 0 ? PopPlatformAoAc : 0);
    PopFanReportBootStartDevices();
    PopInitializeWin32kActivator();
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
      PopModernStandbyNotificationInit();
    PopPowerAggregatorInitialize(3LL);
    TimebrokerServiceSid = PopUserShutdownScenarioInitialize();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    v23 = 2;
    v24 = 1;
    if ( PopSkipTickPolicy )
    {
      if ( PopSkipTickPolicy != 1 )
      {
        v23 = 0;
        v25 = 0;
LABEL_48:
        PoSkipTickMode = v25;
        PopDiagTraceSkipTick(v23 == 2, v24);
        goto LABEL_49;
      }
      v24 = 0;
      if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v44) >= 0 )
      {
        PopApicMode = HIDWORD(v45);
        if ( HIDWORD(v45) == 3 )
        {
          PopApicClusterSize = v46;
          PoSkipTickMaxOpportunisticProcessors = 8;
        }
        PoSkipTickMode = !PopCheckSkipTick();
LABEL_49:
        PpmInitIllegalThrottleLogging();
        PopCheckShutdownMarker(a2);
        PopCheckAndClearBootError();
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v27, v26, v28, v29)
          || (unsigned int)(PoOffCrashConfigTable - 1) <= 2 && DWORD1(PoOffCrashConfigTable) )
        {
          PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
        }
        PopIdleWakeInitialize();
        PopAcquirePolicyLock(v31, v30, v32);
        PopUpdateUpgradeInProgress(0LL);
        if ( InitIsWinPEMode )
          PopLogSleepDisabled(16, 15, 0LL, 0LL);
        if ( byte_140F0BB54 )
          PopLogSleepDisabled(17, 7, 0LL, 0LL);
        v33 = 0;
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2648LL) & 8) != 0 )
        {
          PopSecureLaunched = 1;
          v33 = 4;
        }
        if ( (HvlpFlags & 2) != 0 || !VslVsmEnabled )
        {
          if ( !v33 )
          {
LABEL_64:
            PopDeepSleepInitialize(3);
            PopInitializePowerPolicySimulate();
            if ( (PopSimulate & 1) != 0 )
            {
              byte_140F0BB5E = 1;
              *(_QWORD *)&xmmword_140F0BB60 = 0x19000000064LL;
              *((_QWORD *)&xmmword_140F0BB60 + 1) = 0xFFFF0000000ALL;
              LODWORD(qword_140F0BB80) = 4;
              dword_140F0BB88 = 2;
            }
            if ( (PopSimulate & 2) != 0 )
            {
              PopCapabilities = 16843009;
              word_140F0BB44 = 257;
              byte_140F0BB46 = 1;
              unk_140F0BB51 = 257;
            }
            PopResetCurrentPolicies();
            PopInitializeAdpm();
            PopEsInit(3);
            PopInitilizeAcDcSettings();
            v48 = 1;
            PopUpdateConsoleDisplayState(1LL, v34, v35, v36);
            ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)&v48);
            PopNetInitialize(3);
            PopReleasePolicyLock();
            PopIdleInitAoAcDozeS4Timer();
            PopCreateIdlePhaseWatchdog();
            PopInitializeSystemIdleDetection();
            PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 132LL) & 0x10000000) != 0;
            PopSetupHighPerfPowerRequest((unsigned __int8)PopHiberResumeXhciHandoffSkip, v37, v38);
            PpmEnableWmiInterface();
            v41 = *(_QWORD *)(a2 + 240);
            if ( (*(_DWORD *)(v41 + 2648) & 0x8000LL) != 0 )
              PopFasr = 1;
            BootAppSvnInfo = *(_OWORD *)(v41 + 4384);
            PopAcquirePolicyLock(v39, v41, v40);
            PopCoalescingInitialize();
            PopReleasePolicyLock();
            PopInitializeDirectedDrips(3);
            PopDripsWatchdogInitialize();
            PopSetupAudioEventNotification();
            PopSetupMixedRealitytNotification();
            PopSetupFullScrenVideoNotification();
            PopSetupUserPresencePredictionNotification();
            PopSetupSprActiveSessionChangeNotification();
            PopSetupAirplaneModeNotification();
            PopSetupBluetoothChargingNotification();
            PopSetupMobileHotspotNotification();
            PopThermalHandlePreviousShutdown();
            PopCheckpointEfiRuntimeRedirected = (*(_DWORD *)(a2 + 264) & 2) != 0;
            TtmInit();
            PopReadErrataForIncorrectLidNotification();
            PopLidReliabilityInit(v42);
            PopEvaluateInputSuppressionRequired();
            PopPowerButtonSuppressionInit();
            PopBatteryQueueWork(1u);
            PopSetupKsrCallbacks();
            PopHiberEvaluateSkippingMemoryMapValidation();
            PopReadErrataSkipMemoryOverwriteRequestControlLockAction();
            goto LABEL_71;
          }
        }
        else
        {
          LOBYTE(v33) = 23;
        }
        PopLogSleepDisabled(21, v33, 0LL, 0LL);
        goto LABEL_64;
      }
    }
    v25 = 2;
    goto LABEL_48;
  }
  PoFxRegisterDebugger();
  HalReportResourceUsage(1, v16, v17, v18);
  PopBatteryInitPhaseTwo();
  TimebrokerServiceSid = PpmEventInitialize();
  if ( TimebrokerServiceSid >= 0 )
  {
    KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v19, v20);
    PopInitializeHeteroProcessors(1);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmPerfArtificialDomainSetting != -1 )
      PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
    PpmIdleRegisterDefaultStates();
    TimebrokerServiceSid = PpmParkInitialize();
    if ( TimebrokerServiceSid >= 0 )
    {
      PpmCheckInitProcessors(0, 1);
      PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock, v21, v22);
      PoFxSendSystemLatencyUpdate();
      PpmReleaseLock(&PopFxSystemLatencyLock);
      PopPdcCsCheckSystemVolumeDevice();
      PopUpdateBackgroundCoolingStatus(0);
      ZwUpdateWnfStateData((__int64)&WNF_PO_MULTIMEDIA_POWER_MODEL, (__int64)&PpmPerfMultimediaPowerModel);
      PopInitVideoWnfState();
      goto LABEL_71;
    }
  }
  return TimebrokerServiceSid >= 0;
}
