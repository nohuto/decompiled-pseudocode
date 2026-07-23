/*
 * XREFs of PoInitSystem @ 0x140C50674
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x140203AF8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140460B30 (ExInitializeNPagedLookasideListInternal.c)
 *     PopInitilizeAcDcSettings @ 0x1404765A0 (PopInitilizeAcDcSettings.c)
 *     HviIsAnyHypervisorPresent @ 0x1404A3870 (HviIsAnyHypervisorPresent.c)
 *     PopBatteryQueueWork @ 0x1404A406C (PopBatteryQueueWork.c)
 *     HalGetInterruptTargetInformation @ 0x1404B7D60 (HalGetInterruptTargetInformation.c)
 *     PopComputeCounterShifts @ 0x1404F4598 (PopComputeCounterShifts.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1405C86A4 (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmInitIllegalThrottleLogging @ 0x1405C86F8 (PpmInitIllegalThrottleLogging.c)
 *     PopLidReliabilityInit @ 0x1405CF0EC (PopLidReliabilityInit.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1405CF764 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopDiagTraceAbnormalReset @ 0x1405CFAC4 (PopDiagTraceAbnormalReset.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D23A8 (PpmHeteroHgsDetectContainmentPresence.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopResetActionDefaults @ 0x1406F01AC (PopResetActionDefaults.c)
 *     KeRegisterProcessorChangeCallback @ 0x140730040 (KeRegisterProcessorChangeCallback.c)
 *     PopCheckSkipTick @ 0x14073CC0C (PopCheckSkipTick.c)
 *     PopDefaultPolicy @ 0x14073CC64 (PopDefaultPolicy.c)
 *     PopSetupAirplaneModeNotification @ 0x14073CD30 (PopSetupAirplaneModeNotification.c)
 *     PopSetupAudioEventNotification @ 0x14073CD6C (PopSetupAudioEventNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x14073CDA8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x14073CDE4 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupHighPerfPowerRequest @ 0x14073CE20 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupMixedRealitytNotification @ 0x14073CE5C (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x14073CED8 (PopSetupMobileHotspotNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x14073CF14 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x14073CF50 (PopSetupUserPresencePredictionNotification.c)
 *     PopInitializeWorkItem @ 0x14073D3C8 (PopInitializeWorkItem.c)
 *     PopUpdateUpgradeInProgress @ 0x14073D9B0 (PopUpdateUpgradeInProgress.c)
 *     PpmIdleRegisterDefaultStates @ 0x14073E1EC (PpmIdleRegisterDefaultStates.c)
 *     PopThermalHandlePreviousShutdown @ 0x140748274 (PopThermalHandlePreviousShutdown.c)
 *     PopDiagTraceSkipTick @ 0x14074B9B8 (PopDiagTraceSkipTick.c)
 *     PpmEnableWmiInterface @ 0x14074F964 (PpmEnableWmiInterface.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14074FBF0 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopSendFanNoiseChangeWnf @ 0x140750630 (PopSendFanNoiseChangeWnf.c)
 *     PopIdleWakeInitialize @ 0x1407525E0 (PopIdleWakeInitialize.c)
 *     TtmInit @ 0x14075A160 (TtmInit.c)
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 *     PopLogSleepDisabled @ 0x140A0FAF0 (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x140A1DEFC (PopUpdateConsoleDisplayState.c)
 *     PopInitializeHeteroProcessors @ 0x140A2061C (PopInitializeHeteroProcessors.c)
 *     PopResetCurrentPolicies @ 0x140A65B7C (PopResetCurrentPolicies.c)
 *     PopInitializePowerPolicySimulate @ 0x140A81578 (PopInitializePowerPolicySimulate.c)
 *     EmpProviderRegister @ 0x140AAEEF0 (EmpProviderRegister.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140AB8564 (PopUpdateBackgroundCoolingStatus.c)
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140B584B0 (EmClientQueryRuleState.c)
 *     HalReportResourceUsage @ 0x140BFC6E0 (HalReportResourceUsage.c)
 *     PopCreateTimebrokerServiceSid @ 0x140C1C01C (PopCreateTimebrokerServiceSid.c)
 *     PopInitDripsWakeAccounting @ 0x140C1C0C8 (PopInitDripsWakeAccounting.c)
 *     PopInitVideoWnfState @ 0x140C1C168 (PopInitVideoWnfState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140C1C1FC (PopInitializeHighPerfPowerRequest.c)
 *     PpmInitCoreParkingPolicy @ 0x140C1C330 (PpmInitCoreParkingPolicy.c)
 *     PpmInitIdlePolicy @ 0x140C1C3D8 (PpmInitIdlePolicy.c)
 *     PopCheckAndClearBootError @ 0x140C1C52C (PopCheckAndClearBootError.c)
 *     PopCheckShutdownMarker @ 0x140C1C5B4 (PopCheckShutdownMarker.c)
 *     PopRecordFirmwareResetReason @ 0x140C1CD3C (PopRecordFirmwareResetReason.c)
 *     PopPowerRequestInitialize @ 0x140C1CD8C (PopPowerRequestInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140C1D194 (PopInitializeDirectedDrips.c)
 *     PopInitializePowerSettingCallbacks @ 0x140C1D1C8 (PopInitializePowerSettingCallbacks.c)
 *     PopInitializeWin32kActivator @ 0x140C1D2A4 (PopInitializeWin32kActivator.c)
 *     PoFxInitPowerManagement @ 0x140C1D31C (PoFxInitPowerManagement.c)
 *     PpmPerfInitialize @ 0x140C1D610 (PpmPerfInitialize.c)
 *     PopInitShutdownList @ 0x140C1D7F4 (PopInitShutdownList.c)
 *     PopCoalescingInitialize @ 0x140C1D890 (PopCoalescingInitialize.c)
 *     PopInitializePowerSettings @ 0x140C1D950 (PopInitializePowerSettings.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140C1DA08 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopUserShutdownScenarioInitialize @ 0x140C1DBAC (PopUserShutdownScenarioInitialize.c)
 *     PopThermalInit @ 0x140C1DC0C (PopThermalInit.c)
 *     PopSetupKsrCallbacks @ 0x140C1DD00 (PopSetupKsrCallbacks.c)
 *     PopDiagInitialize @ 0x140C1DDA4 (PopDiagInitialize.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140C1EFB8 (PopTriggerDiagTraceAoAcCapability.c)
 *     PpmCheckInit @ 0x140C1F05C (PpmCheckInit.c)
 *     PpmInitPolicyConfiguration @ 0x140C1F1E8 (PpmInitPolicyConfiguration.c)
 *     PopInitializeSystemIdleDetection @ 0x140C1F3CC (PopInitializeSystemIdleDetection.c)
 *     PopDeepSleepInitialize @ 0x140C1F4B0 (PopDeepSleepInitialize.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140C1F4FC (PopEvaluateInputSuppressionRequired.c)
 *     PopPowerButtonSuppressionInit @ 0x140C1F5E0 (PopPowerButtonSuppressionInit.c)
 *     PopInitializeIrpWorkers @ 0x140C1F744 (PopInitializeIrpWorkers.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140C1F8B8 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmInitHeteroPolicy @ 0x140C207AC (PpmInitHeteroPolicy.c)
 *     PopBatteryInit @ 0x140C209C0 (PopBatteryInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140C20C4C (PopBatteryInitPhaseTwo.c)
 *     PopSmartSuspendInit @ 0x140C20DB0 (PopSmartSuspendInit.c)
 *     PopNetInitialize @ 0x140C20E04 (PopNetInitialize.c)
 *     PopInitializePowerButtonHold @ 0x140C20FEC (PopInitializePowerButtonHold.c)
 *     PopRecorderInit @ 0x140C21264 (PopRecorderInit.c)
 *     PopFanReportBootStartDevices @ 0x140C212E0 (PopFanReportBootStartDevices.c)
 *     PopUmpoInitializeChannel @ 0x140C21334 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C215B0 (PopUmpoInitializeMonitorChannel.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140C21764 (PopCreateIdlePhaseWatchdog.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140C217E0 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopEsInit @ 0x140C21968 (PopEsInit.c)
 *     PopEtInit @ 0x140C21A5C (PopEtInit.c)
 *     PopWatchdogInit @ 0x140C21D80 (PopWatchdogInit.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140C21E78 (PopReadErrataForIncorrectLidNotification.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140C21EC4 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PoFxRegisterDebugger @ 0x140C21F30 (PoFxRegisterDebugger.c)
 *     PpmParkInitialize @ 0x140C221F0 (PpmParkInitialize.c)
 *     PopModernStandbyNotificationInit @ 0x140C2227C (PopModernStandbyNotificationInit.c)
 *     PopInitializeAdpm @ 0x140C22450 (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140C224E0 (PopDripsWatchdogInitialize.c)
 *     SshInitialize @ 0x140C22EE0 (SshInitialize.c)
 *     PopSleepstudyInitialize @ 0x140C551E8 (PopSleepstudyInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140C5611C (PopPowerAggregatorInitialize.c)
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
  unsigned int v14; // r8d
  __int64 v15; // rdx
  unsigned int v16; // r8d
  int v17; // esi
  unsigned __int8 v18; // r14
  int v19; // eax
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  int v29; // [rsp+58h] [rbp-8h]
  int v30; // [rsp+A0h] [rbp+40h] BYREF
  int Buffer; // [rsp+B0h] [rbp+50h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp+58h] BYREF

  PopOsInitPhase = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v28 = 0LL;
  v29 = 0;
  v27 = 0LL;
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
      qword_140F0B3F8 = (__int64)&PopIrpList;
      PopIrpList = (__int64)&PopIrpList;
      qword_140F0B3D8 = (__int64)&PopInrushIrpList;
      PopInrushIrpList = (__int64)&PopInrushIrpList;
      qword_140F08238 = 0LL;
      PopPowerEventLock = 0LL;
      qword_140F07F08 = 0LL;
      PopSystemIdleLock = 0LL;
      qword_140F0CB48 = 0LL;
      PopCoalRegistrationListLock = 0LL;
      LOWORD(PopIdleLoopExecuted.Header.Lock) = 0;
      PopIdleLoopExecuted.Header.Size = 6;
      PopIdleLoopExecuted.Header.SignalState = 0;
      PopDeepSleepDisengageReasonLock = 0LL;
      PopIrpLock = 0LL;
      ExInitializeNPagedLookasideListInternal((__int64)&PopIrpDataLookaside, 0LL, 0LL, 512, 312, 1917415248, 0, 0);
      PopShutdownNotificationCallbackLock = 0LL;
      qword_140F07DF8 = (__int64)&PopShutdownNotificationCallbackList;
      PopShutdownNotificationCallbackList = &PopShutdownNotificationCallbackList;
      memset_0(PopStateTransitonBlameStack, 0, 0xC18uLL);
      dword_140F0C920 = -1;
      PopDevicePowerTransitionInProgressWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDevicePowerTransitionInProgressWorker;
      PopPendingPowerTransitionLock = 0LL;
      BootStatDisableFlush = (qword_140EFE818 & 4) != 0;
      PopDevicePowerTransitionInProgressWorkItem.Parameter = 0LL;
      xmmword_140F0C928 = 0LL;
      PopBsdFlushInactiveEvent.Header.WaitListHead.Blink = &PopBsdFlushInactiveEvent.Header.WaitListHead;
      PopBsdFlushInactiveEvent.Header.WaitListHead.Flink = &PopBsdFlushInactiveEvent.Header.WaitListHead;
      *(_QWORD *)&xmmword_140F0C928 = 0LL;
      PopDevicePowerTransitionInProgressWorkItem.List.Flink = 0LL;
      BootStatFileHandle = 0LL;
      BootStatFileHandleAcquired = 0;
      BootStatKeepHandleOpen = 0;
      BootStatDataCache = 0LL;
      PopBsdSkipLogging = 0;
      qword_140F0DCD8 = 0LL;
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
      qword_140F07DD8 = 0LL;
      qword_140F0DBA8 = (__int64)&PopTransitionCheckpoints;
      PopTransitionCheckpoints = &PopTransitionCheckpoints;
      PopInputSuppressionLock = 0LL;
      qword_140F07D88 = 0LL;
      PopPowerButtonSuppressionLock = 0LL;
      qword_140F0DBC8 = 0LL;
      PopTransitionCheckpointLock = 0LL;
      PopMonitorOffDueToSleep = 0;
      PpmCheckInit();
      TimebrokerServiceSid = PopInitializeIrpWorkers();
      if ( TimebrokerServiceSid >= 0 )
      {
        PopIrpSerialLock = 0LL;
        qword_140F0B518 = (__int64)&qword_140F0B510;
        qword_140F0B510 = (__int64)&qword_140F0B510;
        qword_140F0B4B8 = (__int64)&PopIrpSerialList;
        PopIrpSerialList = (__int64)&PopIrpSerialList;
        qword_140F0B4C8 = (__int64)&PopRequestedIrps;
        PopRequestedIrps = (__int64)&PopRequestedIrps;
        PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
        PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
        qword_140F0B488 = (__int64)&PowerStateDisableReasonListHead;
        PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        qword_140F0D5F8 = (__int64)&PopDisableSleepList;
        PopDisableSleepList = (__int64)&PopDisableSleepList;
        qword_140F0B4E8 = 0LL;
        PpmIdlePolicyLock = 0LL;
        PpmIdleVetoLock = 0LL;
        PpmParkStateLock = 0LL;
        qword_140E27B88 = 0LL;
        word_140F0B508 = 1;
        byte_140F0B50A = 6;
        dword_140F0B50C = 1;
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
        qword_140F0B4A8 = (__int64)&PopIdleDetectList;
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
        qword_140F0B898 = (__int64)&PopVolumeDevices;
        PopVolumeDevices = (__int64)&PopVolumeDevices;
        qword_140F0B878 = (__int64)&PopSwitches;
        PopSwitches = (__int64)&PopSwitches;
        qword_140F0B888 = (__int64)&PopFans;
        PopFans = (__int64)&PopFans;
        PopVolumeLock.Owner = 0LL;
        PopVolumeLock.Contention = 0;
        LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
        PopVolumeLock.Event.Header.Size = 6;
        PopVolumeLock.Event.Header.SignalState = 0;
        LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
        PopPowerSettingCallbackReturned.Header.Size = 6;
        PopPowerSettingCallbackReturned.Header.SignalState = 0;
        qword_140F0B608 = (__int64)&PopThermal;
        PopThermal = &PopThermal;
        PopWaitingForTransitionLock = 0;
        qword_140F0A228 = 0LL;
        PopUnlockAfterSleepLock = 0LL;
        IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
        qword_140F0B5F8 = (__int64)&PopActionWaiters;
        PopActionWaiters = (__int64)&PopActionWaiters;
        PopResetActionDefaults();
        PopPolicy = dword_140F0B624;
        PopDefaultPolicy(dword_140F0B624);
        LODWORD(PopAdminPolicy) = 2;
        *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
        HIDWORD(PopAdminPolicy) = -1;
        qword_140F0B790 = 0xFFFFFFFF00000000uLL;
        PopFullWake = 1;
        PopCoolingMode = 0;
        dword_140E27B80 = -1;
        dword_140E27B84 = 2;
        PpmInitPolicyConfiguration(v11, v10, v12);
        PpmInitIdlePolicy();
        PpmPerfInitialize();
        PpmInitCoreParkingPolicy();
        PpmInitHeteroPolicy();
        PpmIdleRegisterDefaultStates();
        PopDeepSleepInitialize(0);
        PopInitializePowerSettings();
        PopInitilizeAcDcSettings();
        qword_140F0B9F8 = 0LL;
        PopPolicyDeviceLock = 0LL;
        PopBatteryInit();
        PopThermalInit();
        qword_140F0A888 = 0LL;
        qword_140F0A878 = (__int64)&PopCoolingExtensionList;
        PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
        PopCoolingExtensionLock = 0LL;
        qword_140F0A898 = 0LL;
        PopPowerLimitExtensionLock = 0LL;
        qword_140F0A8A8 = (__int64)&PopPowerLimitExtensionList;
        PopPowerLimitExtensionList = (__int64)&PopPowerLimitExtensionList;
        qword_140F0B5A8 = (__int64)PopShutdownHandler;
        qword_140F0CA28 = (__int64)&PopWakeInfoList;
        PopWakeInfoList = (__int64)&PopWakeInfoList;
        PopWakeSourceAvailable.Header.WaitListHead.Blink = &PopWakeSourceAvailable.Header.WaitListHead;
        PopWakeSourceAvailable.Header.WaitListHead.Flink = &PopWakeSourceAvailable.Header.WaitListHead;
        qword_140F0CA48 = (__int64)&PopWakeSourceWorkList;
        PopWakeSourceWorkList = &PopWakeSourceWorkList;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        qword_140F07B38 = (__int64)PpmWmiIdleAccountingProcedure;
        PopUserPresentWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUserPresentSetWorker;
        qword_140E671D0 = (__int64)&qword_140E671C8;
        qword_140E671C8 = (__int64)&qword_140E671C8;
        *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
        PopAwayModeUserPresenceTimer = 8LL;
        PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        dword_140F0B5A0 = 4;
        byte_140F0B5A4 = 0;
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
        qword_140F07B40 = 0LL;
        qword_140F07B58 = 0LL;
        qword_140F07B30 = 0LL;
        PopUserPresentLock = 0LL;
        PopUserPresentWorkItem.Parameter = 0LL;
        PopUserPresentWorkItem.List.Flink = 0LL;
        qword_140E671D8 = 0LL;
        dword_140E671FC = 0;
        word_140E671F8 = 0;
        LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
        PopUserPresentCompletedEvent.Header.Size = 6;
        PopUserPresentCompletedEvent.Header.SignalState = 0;
        PopSmartSuspendInit();
        word_140F0D308 = 1;
        qword_140F0D318 = (__int64)&qword_140F0D310;
        qword_140F0D310 = (__int64)&qword_140F0D310;
        byte_140F0D30A = 6;
        dword_140F0D30C = 1;
        PoFxInitPowerManagement();
        dword_140F0B72C = 0;
        qword_140F0B730 = 100LL;
        qword_140F0B738 = 100LL;
        dword_140F0B740 = 100;
        PopNetInitialize(0);
        PopInitializePowerButtonHold(0);
        qword_140F07028 = 0LL;
        PopSleepReliabilityDiagLock = 0LL;
        PopRecorderInit();
        PopRecordFirmwareResetReason(a2);
        TimebrokerServiceSid = PopCreateTimebrokerServiceSid();
        if ( TimebrokerServiceSid >= 0 )
        {
          PopInitializeDirectedDrips(0);
          SshInitialize(0);
LABEL_67:
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
    qword_140F0B9E8 = 0LL;
    PopFanLock = 0LL;
    dword_140F0BA4C = 0;
    PopSendFanNoiseChangeWnf(0);
    if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 0x10 )
      PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
    qword_140F0BCB0 = 0LL;
    qword_140F0BCB8 = 0LL;
    qword_140F0BCA8 = 0LL;
    PopSuspendResumeNotification = 0LL;
    SshInitialize(1);
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    PopPdcDeviceListLock = 0LL;
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
            PopWatchdogInit();
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
              v30 = 1;
              PopErrataDisablePrimaryDeviceFastResume = 0;
              EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &v30);
              if ( v30 == 2 )
                PopErrataDisablePrimaryDeviceFastResume = 1;
              PopDetectSimulatedHeteroProcessors();
              PpmHeteroHgsDetectContainmentPresence(0LL, 0);
              goto LABEL_67;
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
      goto LABEL_67;
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
    v17 = 2;
    v18 = 1;
    if ( PopSkipTickPolicy )
    {
      if ( PopSkipTickPolicy != 1 )
      {
        v17 = 0;
        v19 = 0;
LABEL_44:
        PoSkipTickMode = v19;
        PopDiagTraceSkipTick(v17 == 2, v18);
        goto LABEL_45;
      }
      v18 = 0;
      if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v27) >= 0 )
      {
        PopApicMode = HIDWORD(v28);
        if ( HIDWORD(v28) == 3 )
        {
          PopApicClusterSize = v29;
          PoSkipTickMaxOpportunisticProcessors = 8;
        }
        PoSkipTickMode = !PopCheckSkipTick();
LABEL_45:
        PpmInitIllegalThrottleLogging();
        PopCheckShutdownMarker(a2);
        PopCheckAndClearBootError();
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v20)
          || (unsigned int)(PoOffCrashConfigTable - 1) <= 2 && DWORD1(PoOffCrashConfigTable) )
        {
          PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
        }
        PopIdleWakeInitialize();
        PopAcquirePolicyLock();
        PopUpdateUpgradeInProgress(0LL);
        if ( InitIsWinPEMode )
          PopLogSleepDisabled(16, 15, 0LL, 0LL);
        if ( byte_140F0B8D4 )
          PopLogSleepDisabled(17, 7, 0LL, 0LL);
        v21 = 0;
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2648LL) & 8) != 0 )
        {
          PopSecureLaunched = 1;
          v21 = 4;
        }
        if ( (HvlpFlags & 2) != 0 || !VslVsmEnabled )
        {
          if ( !v21 )
          {
LABEL_60:
            PopDeepSleepInitialize(3);
            PopInitializePowerPolicySimulate();
            if ( (PopSimulate & 1) != 0 )
            {
              byte_140F0B8DE = 1;
              *(_QWORD *)&xmmword_140F0B8E0 = 0x19000000064LL;
              *((_QWORD *)&xmmword_140F0B8E0 + 1) = 0xFFFF0000000ALL;
              LODWORD(qword_140F0B900) = 4;
              dword_140F0B908 = 2;
            }
            if ( (PopSimulate & 2) != 0 )
            {
              PopCapabilities = 16843009;
              word_140F0B8C4 = 257;
              byte_140F0B8C6 = 1;
              unk_140F0B8D1 = 257;
            }
            PopResetCurrentPolicies();
            PopInitializeAdpm();
            PopEsInit(3);
            PopInitilizeAcDcSettings();
            Buffer = 1;
            PopUpdateConsoleDisplayState(1LL);
            ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
            PopNetInitialize(3);
            PopReleasePolicyLock();
            PopIdleInitAoAcDozeS4Timer();
            PopCreateIdlePhaseWatchdog();
            PopInitializeSystemIdleDetection();
            PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 132LL) & 0x10000000) != 0;
            PopSetupHighPerfPowerRequest((unsigned __int8)PopHiberResumeXhciHandoffSkip, v22, v23);
            PpmEnableWmiInterface();
            v24 = *(_QWORD *)(a2 + 240);
            if ( (*(_DWORD *)(v24 + 2648) & 0x8000LL) != 0 )
              PopFasr = 1;
            BootAppSvnInfo = *(_OWORD *)(v24 + 4384);
            PopAcquirePolicyLock();
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
            PopLidReliabilityInit(v25);
            PopEvaluateInputSuppressionRequired();
            PopPowerButtonSuppressionInit();
            PopBatteryQueueWork(1u);
            PopSetupKsrCallbacks();
            PopHiberEvaluateSkippingMemoryMapValidation();
            PopReadErrataSkipMemoryOverwriteRequestControlLockAction();
            goto LABEL_67;
          }
        }
        else
        {
          LOBYTE(v21) = 23;
        }
        PopLogSleepDisabled(21, v21, 0LL, 0LL);
        goto LABEL_60;
      }
    }
    v19 = 2;
    goto LABEL_44;
  }
  PoFxRegisterDebugger();
  HalReportResourceUsage(1);
  PopBatteryInitPhaseTwo();
  TimebrokerServiceSid = EtwRegister(
                           &PPM_ETW_PROVIDER,
                           (PETWENABLECALLBACK)PpmEventTraceControlCallback,
                           0LL,
                           &PpmEtwHandle);
  if ( TimebrokerServiceSid >= 0 )
  {
    PpmEtwRegistered = 1;
    KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v13, v14);
    PopInitializeHeteroProcessors(1);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmPerfArtificialDomainSetting != -1 )
      PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
    PpmIdleRegisterDefaultStates();
    TimebrokerServiceSid = PpmParkInitialize();
    if ( TimebrokerServiceSid >= 0 )
    {
      PpmCheckInitProcessors(0, 1);
      PpmAcquireLock(&PopFxSystemLatencyLock, v15, v16);
      PoFxSendSystemLatencyUpdate();
      PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
      PopPdcCsCheckSystemVolumeDevice();
      PopUpdateBackgroundCoolingStatus(0);
      ZwUpdateWnfStateData(&WNF_PO_MULTIMEDIA_POWER_MODEL, &PpmPerfMultimediaPowerModel, 4u, 0LL, 0LL, 0, 0);
      PopInitVideoWnfState();
      goto LABEL_67;
    }
  }
  return TimebrokerServiceSid >= 0;
}
