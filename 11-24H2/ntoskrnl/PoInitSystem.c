/*
 * XREFs of PoInitSystem @ 0x140C63AE4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x1402AD9A8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     PopInitilizeAcDcSettings @ 0x1403E66D0 (PopInitilizeAcDcSettings.c)
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404549D0 (ExInitializeNPagedLookasideListInternal.c)
 *     HviIsAnyHypervisorPresent @ 0x14049E730 (HviIsAnyHypervisorPresent.c)
 *     PopBatteryQueueWork @ 0x14049F07C (PopBatteryQueueWork.c)
 *     HalGetInterruptTargetInformation @ 0x1404B1E00 (HalGetInterruptTargetInformation.c)
 *     PopComputeCounterShifts @ 0x1404F49E8 (PopComputeCounterShifts.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F6FAC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline @ 0x1405CA438 (Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmInitIllegalThrottleLogging @ 0x1405CA48C (PpmInitIllegalThrottleLogging.c)
 *     PopLidReliabilityInit @ 0x1405D1218 (PopLidReliabilityInit.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1405D1934 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopDiagTraceAbnormalReset @ 0x1405D1C40 (PopDiagTraceAbnormalReset.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x1405D4400 (PpmHeteroHgsDetectContainmentPresence.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopResetActionDefaults @ 0x1406F9BD4 (PopResetActionDefaults.c)
 *     KeRegisterProcessorChangeCallback @ 0x14073A200 (KeRegisterProcessorChangeCallback.c)
 *     PopCheckSkipTick @ 0x140746F0C (PopCheckSkipTick.c)
 *     PopDefaultPolicy @ 0x140746F64 (PopDefaultPolicy.c)
 *     PopSetupAirplaneModeNotification @ 0x140747030 (PopSetupAirplaneModeNotification.c)
 *     PopSetupAudioEventNotification @ 0x14074706C (PopSetupAudioEventNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407470A8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407470E4 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupHighPerfPowerRequest @ 0x140747120 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupMixedRealitytNotification @ 0x14074715C (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x1407471D8 (PopSetupMobileHotspotNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140747214 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUsb4DisplayPresenceNotification @ 0x140747250 (PopSetupUsb4DisplayPresenceNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x14074728C (PopSetupUserPresencePredictionNotification.c)
 *     PopInitializeWorkItem @ 0x140747708 (PopInitializeWorkItem.c)
 *     PopUpdateUpgradeInProgress @ 0x140747D60 (PopUpdateUpgradeInProgress.c)
 *     PpmIdleRegisterDefaultStates @ 0x1407485F0 (PpmIdleRegisterDefaultStates.c)
 *     PopThermalHandlePreviousShutdown @ 0x14075265C (PopThermalHandlePreviousShutdown.c)
 *     PopDiagTraceSkipTick @ 0x140755EEC (PopDiagTraceSkipTick.c)
 *     PpmEnableWmiInterface @ 0x14075B214 (PpmEnableWmiInterface.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14075B47C (PopIdleInitAoAcDozeS4Timer.c)
 *     PopSendFanNoiseChangeWnf @ 0x14075BF00 (PopSendFanNoiseChangeWnf.c)
 *     PopIdleWakeInitialize @ 0x14075DFA8 (PopIdleWakeInitialize.c)
 *     TtmInit @ 0x140769D40 (TtmInit.c)
 *     PopLogSleepDisabled @ 0x14099E748 (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x140A1B91C (PopUpdateConsoleDisplayState.c)
 *     PopResetCurrentPolicies @ 0x140A61C7C (PopResetCurrentPolicies.c)
 *     PopInitializePowerPolicySimulate @ 0x140A80AC0 (PopInitializePowerPolicySimulate.c)
 *     EmpProviderRegister @ 0x140AAEE50 (EmpProviderRegister.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140AB7704 (PopUpdateBackgroundCoolingStatus.c)
 *     PpmCheckInitProcessors @ 0x140AC506C (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140B6A420 (EmClientQueryRuleState.c)
 *     HalReportResourceUsage @ 0x140C0F6E0 (HalReportResourceUsage.c)
 *     PopCreateTimebrokerServiceSid @ 0x140C2F240 (PopCreateTimebrokerServiceSid.c)
 *     PopInitDripsWakeAccounting @ 0x140C2F2EC (PopInitDripsWakeAccounting.c)
 *     PopInitVideoWnfState @ 0x140C2F384 (PopInitVideoWnfState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140C2F418 (PopInitializeHighPerfPowerRequest.c)
 *     PpmInitCoreParkingPolicy @ 0x140C2F54C (PpmInitCoreParkingPolicy.c)
 *     PpmInitIdlePolicy @ 0x140C2F5F4 (PpmInitIdlePolicy.c)
 *     PopCheckAndClearBootError @ 0x140C2F74C (PopCheckAndClearBootError.c)
 *     PopCheckShutdownMarker @ 0x140C2F7D4 (PopCheckShutdownMarker.c)
 *     PopRecordFirmwareResetReason @ 0x140C2FF5C (PopRecordFirmwareResetReason.c)
 *     PopPowerRequestInitialize @ 0x140C2FFAC (PopPowerRequestInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140C303B4 (PopInitializeDirectedDrips.c)
 *     PopInitializePowerSettingCallbacks @ 0x140C303E8 (PopInitializePowerSettingCallbacks.c)
 *     PopInitializeWin32kActivator @ 0x140C304C4 (PopInitializeWin32kActivator.c)
 *     PoFxInitPowerManagement @ 0x140C3053C (PoFxInitPowerManagement.c)
 *     PpmPerfInitialize @ 0x140C30834 (PpmPerfInitialize.c)
 *     PopInitShutdownList @ 0x140C30A18 (PopInitShutdownList.c)
 *     PopCoalescingInitialize @ 0x140C30AB4 (PopCoalescingInitialize.c)
 *     PopInitializePowerSettings @ 0x140C30B74 (PopInitializePowerSettings.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140C30C2C (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopUserShutdownScenarioInitialize @ 0x140C30DD0 (PopUserShutdownScenarioInitialize.c)
 *     PopThermalInit @ 0x140C30E28 (PopThermalInit.c)
 *     PopSetupKsrCallbacks @ 0x140C30F1C (PopSetupKsrCallbacks.c)
 *     PopDiagInitialize @ 0x140C30FC0 (PopDiagInitialize.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140C321D4 (PopTriggerDiagTraceAoAcCapability.c)
 *     PpmCheckInit @ 0x140C32278 (PpmCheckInit.c)
 *     PpmInitPolicyConfiguration @ 0x140C32408 (PpmInitPolicyConfiguration.c)
 *     PopInitializeSystemIdleDetection @ 0x140C325EC (PopInitializeSystemIdleDetection.c)
 *     PopDeepSleepInitialize @ 0x140C326D0 (PopDeepSleepInitialize.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140C3271C (PopEvaluateInputSuppressionRequired.c)
 *     PopPowerButtonSuppressionInit @ 0x140C32800 (PopPowerButtonSuppressionInit.c)
 *     PopInitializeIrpWorkers @ 0x140C32964 (PopInitializeIrpWorkers.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140C32AD8 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmInitHeteroPolicy @ 0x140C339CC (PpmInitHeteroPolicy.c)
 *     PopBatteryInit @ 0x140C33BE0 (PopBatteryInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140C33E6C (PopBatteryInitPhaseTwo.c)
 *     PopSmartSuspendInit @ 0x140C33FE0 (PopSmartSuspendInit.c)
 *     PopNetInitialize @ 0x140C34034 (PopNetInitialize.c)
 *     PopInitializePowerButtonHold @ 0x140C34230 (PopInitializePowerButtonHold.c)
 *     PopRecorderInit @ 0x140C344A8 (PopRecorderInit.c)
 *     PopFanReportBootStartDevices @ 0x140C34524 (PopFanReportBootStartDevices.c)
 *     PopUmpoInitializeChannel @ 0x140C34578 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C347F4 (PopUmpoInitializeMonitorChannel.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140C349A8 (PopCreateIdlePhaseWatchdog.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140C34A24 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopEsInit @ 0x140C34BAC (PopEsInit.c)
 *     PopEtInit @ 0x140C34CA0 (PopEtInit.c)
 *     PopWatchdogInit @ 0x140C34FB8 (PopWatchdogInit.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140C350B0 (PopReadErrataForIncorrectLidNotification.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140C350FC (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PoFxRegisterDebugger @ 0x140C35168 (PoFxRegisterDebugger.c)
 *     PpmEventInitialize @ 0x140C35428 (PpmEventInitialize.c)
 *     PpmParkInitialize @ 0x140C35474 (PpmParkInitialize.c)
 *     PopModernStandbyNotificationInit @ 0x140C355D0 (PopModernStandbyNotificationInit.c)
 *     PopInitializeAdpm @ 0x140C357A4 (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140C3585C (PopDripsWatchdogInitialize.c)
 *     SshInitialize @ 0x140C362EC (SshInitialize.c)
 *     PopSleepstudyInitialize @ 0x140C68FEC (PopSleepstudyInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140C6A210 (PopPowerAggregatorInitialize.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  int TimebrokerServiceSid; // eax
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  unsigned int v15; // r8d
  int v16; // esi
  unsigned __int8 v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]
  int v30; // [rsp+58h] [rbp-8h]
  int v31; // [rsp+A0h] [rbp+40h] BYREF
  int Buffer; // [rsp+B0h] [rbp+50h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp+58h] BYREF

  PopOsInitPhase = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v29 = 0LL;
  v30 = 0;
  v28 = 0LL;
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
      qword_140F0B1F8 = (__int64)&PopIrpList;
      PopIrpList = (__int64)&PopIrpList;
      qword_140F0B1E8 = (__int64)&PopInrushIrpList;
      PopInrushIrpList = (__int64)&PopInrushIrpList;
      qword_140F088F8 = 0LL;
      PopPowerEventLock = 0LL;
      qword_140F08848 = 0LL;
      PopSystemIdleLock = 0LL;
      qword_140F0D4C8 = 0LL;
      PopCoalRegistrationListLock = 0LL;
      LOWORD(PopIdleLoopExecuted.Header.Lock) = 0;
      PopIdleLoopExecuted.Header.Size = 6;
      PopIdleLoopExecuted.Header.SignalState = 0;
      PopDeepSleepDisengageReasonLock = 0LL;
      PopIrpLock = 0LL;
      ExInitializeNPagedLookasideListInternal((__int64)&PopIrpDataLookaside, 0LL, 0LL, 512, 312, 1917415248, 0, 0);
      PopShutdownNotificationCallbackLock = 0LL;
      qword_140F087D8 = (__int64)&PopShutdownNotificationCallbackList;
      PopShutdownNotificationCallbackList = &PopShutdownNotificationCallbackList;
      memset_0(PopStateTransitonBlameStack, 0, 0xC18uLL);
      dword_140F0D280 = -1;
      PopDevicePowerTransitionInProgressWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDevicePowerTransitionInProgressWorker;
      PopPendingPowerTransitionLock = 0LL;
      BootStatDisableFlush = (qword_140EFEE18 & 4) != 0;
      PopDevicePowerTransitionInProgressWorkItem.Parameter = 0LL;
      xmmword_140F0D288 = 0LL;
      PopBsdFlushInactiveEvent.Header.WaitListHead.Blink = &PopBsdFlushInactiveEvent.Header.WaitListHead;
      PopBsdFlushInactiveEvent.Header.WaitListHead.Flink = &PopBsdFlushInactiveEvent.Header.WaitListHead;
      *(_QWORD *)&xmmword_140F0D288 = 0LL;
      PopDevicePowerTransitionInProgressWorkItem.List.Flink = 0LL;
      BootStatFileHandle = 0LL;
      BootStatFileHandleAcquired = 0;
      BootStatKeepHandleOpen = 0;
      BootStatDataCache = 0LL;
      PopBsdSkipLogging = 0;
      qword_140F0E548 = 0LL;
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
      if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
        PopInitializeWorkItem(
          (__int64)&PopUsb4DisplayPresenceUpdatedWorkItem,
          (__int64)PopUsb4DisplayPresenceUpdatedWorker,
          0LL);
      PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, 0LL);
      qword_140F08748 = 0LL;
      qword_140F0E668 = (__int64)&PopTransitionCheckpoints;
      PopTransitionCheckpoints = &PopTransitionCheckpoints;
      PopInputSuppressionLock = 0LL;
      qword_140F08708 = 0LL;
      PopPowerButtonSuppressionLock = 0LL;
      qword_140F0E658 = 0LL;
      PopTransitionCheckpointLock = 0LL;
      PopMonitorOffDueToSleep = 0;
      PpmCheckInit();
      TimebrokerServiceSid = PopInitializeIrpWorkers();
      if ( TimebrokerServiceSid >= 0 )
      {
        PopIrpSerialLock = 0LL;
        qword_140F0B238 = (__int64)&qword_140F0B230;
        qword_140F0B230 = (__int64)&qword_140F0B230;
        qword_140F0B218 = (__int64)&PopIrpSerialList;
        PopIrpSerialList = (__int64)&PopIrpSerialList;
        qword_140F0B248 = (__int64)&PopRequestedIrps;
        PopRequestedIrps = (__int64)&PopRequestedIrps;
        PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
        PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
        qword_140F0B578 = (__int64)&PowerStateDisableReasonListHead;
        PowerStateDisableReasonListHead = (__int64)&PowerStateDisableReasonListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        qword_140F0DCD8 = (__int64)&PopDisableSleepList;
        PopDisableSleepList = (__int64)&PopDisableSleepList;
        qword_140F0B268 = 0LL;
        PpmIdlePolicyLock = 0LL;
        PpmIdleVetoLock = 0LL;
        PpmParkStateLock = 0LL;
        qword_140E27F08 = 0LL;
        word_140F0B228 = 1;
        byte_140F0B22A = 6;
        dword_140F0B22C = 1;
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
        v8 = PopIdleScanInterval;
        qword_140F0B568 = (__int64)&PopIdleDetectList;
        PopIdleDetectList = (__int64)&PopIdleDetectList;
        PopDopeGlobalLock = 0LL;
        if ( PopIdleScanInterval )
        {
          if ( PopIdleScanInterval == -1 )
          {
            v8 = 30;
            PopIdleScanInterval = 30;
          }
          else if ( (unsigned int)PopIdleScanInterval > 0x12C )
          {
            v8 = 300;
            PopIdleScanInterval = 300;
          }
          PopIdleBackgroundIgnoreCount = (v8 + 59) / v8;
          PopBackgroundTaskIgnoreCount = (v8 + 179) / v8;
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
        qword_140F0B478 = (__int64)&PopVolumeDevices;
        PopVolumeDevices = (__int64)&PopVolumeDevices;
        qword_140F0B468 = (__int64)&PopSwitches;
        PopSwitches = (__int64)&PopSwitches;
        qword_140F0B408 = (__int64)&PopFans;
        PopFans = (__int64)&PopFans;
        PopVolumeLock.Owner = 0LL;
        PopVolumeLock.Contention = 0;
        LOWORD(PopVolumeLock.Event.Header.Lock) = 1;
        PopVolumeLock.Event.Header.Size = 6;
        PopVolumeLock.Event.Header.SignalState = 0;
        LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
        PopPowerSettingCallbackReturned.Header.Size = 6;
        PopPowerSettingCallbackReturned.Header.SignalState = 0;
        qword_140F0B3F8 = (__int64)&PopThermal;
        PopThermal = &PopThermal;
        PopWaitingForTransitionLock = 0;
        qword_140F0AE48 = 0LL;
        PopUnlockAfterSleepLock = 0LL;
        IoAddTriageDumpDataBlock((ULONG)&PopThermal, (PVOID)0x10);
        qword_140F0B288 = (__int64)&PopActionWaiters;
        PopActionWaiters = (__int64)&PopActionWaiters;
        PopResetActionDefaults();
        PopPolicy = dword_140F0B2A4;
        PopDefaultPolicy(dword_140F0B2A4);
        LODWORD(PopAdminPolicy) = 2;
        *(_QWORD *)((char *)&PopAdminPolicy + 4) = 5LL;
        HIDWORD(PopAdminPolicy) = -1;
        qword_140F0B650 = 0xFFFFFFFF00000000uLL;
        PopFullWake = 1;
        if ( (unsigned int)Feature_VpciVscBootDiskHibernation__private_IsEnabledDeviceUsageNoInline() )
        {
          PopSstNotificationHandlerListLock = 0LL;
          qword_140F0D438 = (__int64)&PopSstNotificationHandlerList;
          PopSstNotificationHandlerList = &PopSstNotificationHandlerList;
        }
        PopCoolingMode = 0;
        dword_140E27F00 = -1;
        dword_140E27F04 = 2;
        PpmInitPolicyConfiguration(v10, v9, v11);
        PpmInitIdlePolicy();
        PpmPerfInitialize();
        PpmInitCoreParkingPolicy();
        PpmInitHeteroPolicy();
        PpmIdleRegisterDefaultStates();
        PopDeepSleepInitialize(0);
        PopInitializePowerSettings();
        PopInitilizeAcDcSettings();
        qword_140F0B088 = 0LL;
        PopPolicyDeviceLock = 0LL;
        PopBatteryInit();
        PopThermalInit();
        *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
        qword_140F0B768 = (__int64)&PopCoolingExtensionList;
        PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
        qword_140F0B798 = (__int64)&PopPowerLimitExtensionList;
        PopPowerLimitExtensionList = (__int64)&PopPowerLimitExtensionList;
        qword_140F0B5E8 = (__int64)PopShutdownHandler;
        qword_140F0D3D8 = (__int64)&PopWakeInfoList;
        PopWakeInfoList = (__int64)&PopWakeInfoList;
        PopWakeSourceAvailable.Header.WaitListHead.Blink = &PopWakeSourceAvailable.Header.WaitListHead;
        PopWakeSourceAvailable.Header.WaitListHead.Flink = &PopWakeSourceAvailable.Header.WaitListHead;
        qword_140F0D378 = (__int64)&PopWakeSourceWorkList;
        PopWakeSourceWorkList = &PopWakeSourceWorkList;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        qword_140F08478 = (__int64)PpmWmiIdleAccountingProcedure;
        PopUserPresentWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUserPresentSetWorker;
        qword_140E67610 = (__int64)&qword_140E67608;
        qword_140E67608 = (__int64)&qword_140E67608;
        PopAwayModeUserPresenceTimer = 8LL;
        PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        qword_140F0B778 = 0LL;
        PopCoolingExtensionLock = 0LL;
        qword_140F0B788 = 0LL;
        PopPowerLimitExtensionLock = 0LL;
        dword_140F0B5E0 = 4;
        byte_140F0B5E4 = 0;
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
        qword_140F08480 = 0LL;
        qword_140F08498 = 0LL;
        qword_140F08470 = 0LL;
        PopUserPresentLock = 0LL;
        PopUserPresentWorkItem.Parameter = 0LL;
        PopUserPresentWorkItem.List.Flink = 0LL;
        qword_140E67618 = 0LL;
        dword_140E6763C = 0;
        word_140E67638 = 0;
        LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
        PopUserPresentCompletedEvent.Header.Size = 6;
        PopUserPresentCompletedEvent.Header.SignalState = 0;
        PopSmartSuspendInit();
        word_140F0D7C8 = 1;
        qword_140F0D7D8 = (__int64)&qword_140F0D7D0;
        qword_140F0D7D0 = (__int64)&qword_140F0D7D0;
        byte_140F0D7CA = 6;
        dword_140F0D7CC = 1;
        PoFxInitPowerManagement();
        dword_140F0B3AC = 0;
        qword_140F0B3B0 = 100LL;
        qword_140F0B3B8 = 100LL;
        dword_140F0B3C0 = 100;
        PopNetInitialize(0);
        PopInitializePowerButtonHold(0);
        qword_140F079F8 = 0LL;
        PopSleepReliabilityDiagLock = 0LL;
        PopRecorderInit();
        PopRecordFirmwareResetReason(a2);
        TimebrokerServiceSid = PopCreateTimebrokerServiceSid();
        if ( TimebrokerServiceSid >= 0 )
        {
          PopInitializeDirectedDrips(0);
          SshInitialize(0);
LABEL_73:
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
    qword_140F0B098 = 0LL;
    PopFanLock = 0LL;
    dword_140F0B12C = 0;
    PopSendFanNoiseChangeWnf(0);
    if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 0x10 )
      PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
    qword_140F0C5F0 = 0LL;
    qword_140F0C5F8 = 0LL;
    qword_140F0C5E8 = 0LL;
    PopSuspendResumeNotification = 0LL;
    SshInitialize(1);
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    PopPdcDeviceListLock = 0LL;
    PopDelayedPdcRegistrationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDelayedPdcRegistrationWorker;
    PopDelayedPdcRegistrationWorkItem.Parameter = 0LL;
    PopDelayedPdcRegistrationWorkItem.List.Flink = 0LL;
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
              v31 = 1;
              PopErrataDisablePrimaryDeviceFastResume = 0;
              EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &v31);
              if ( v31 == 2 )
                PopErrataDisablePrimaryDeviceFastResume = 1;
              PopDetectSimulatedHeteroProcessors();
              PpmHeteroHgsDetectContainmentPresence(0LL, 0);
              goto LABEL_73;
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
      goto LABEL_73;
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
    v16 = 2;
    v17 = 1;
    if ( PopSkipTickPolicy )
    {
      if ( PopSkipTickPolicy != 1 )
      {
        v16 = 0;
        v18 = 0;
LABEL_48:
        PoSkipTickMode = v18;
        PopDiagTraceSkipTick(v16 == 2, v17);
        goto LABEL_49;
      }
      v17 = 0;
      if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v28) >= 0 )
      {
        PopApicMode = HIDWORD(v29);
        if ( HIDWORD(v29) == 3 )
        {
          PopApicClusterSize = v30;
          PoSkipTickMaxOpportunisticProcessors = 8;
        }
        PoSkipTickMode = !PopCheckSkipTick();
LABEL_49:
        PpmInitIllegalThrottleLogging();
        PopCheckShutdownMarker(a2);
        PopCheckAndClearBootError();
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v20, v19)
          || (unsigned int)(PoOffCrashConfigTable - 1) <= 2 && DWORD1(PoOffCrashConfigTable) )
        {
          PopDiagTraceAbnormalReset(SDWORD1(PoOffCrashConfigTable));
        }
        PopIdleWakeInitialize();
        PopAcquirePolicyLock();
        PopUpdateUpgradeInProgress(0LL);
        if ( InitIsWinPEMode )
          PopLogSleepDisabled(16, 15, 0LL, 0LL);
        if ( byte_140F0B674 )
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
LABEL_64:
            PopDeepSleepInitialize(3);
            PopInitializePowerPolicySimulate();
            if ( (PopSimulate & 1) != 0 )
            {
              byte_140F0B67E = 1;
              *(_QWORD *)&xmmword_140F0B680 = 0x19000000064LL;
              *((_QWORD *)&xmmword_140F0B680 + 1) = 0xFFFF0000000ALL;
              LODWORD(qword_140F0B6A0) = 4;
              dword_140F0B6A8 = 2;
            }
            if ( (PopSimulate & 2) != 0 )
            {
              PopCapabilities = 16843009;
              word_140F0B664 = 257;
              byte_140F0B666 = 1;
              unk_140F0B671 = 257;
            }
            PopResetCurrentPolicies();
            PopInitializeAdpm();
            PopEsInit(3);
            PopInitilizeAcDcSettings();
            Buffer = 1;
            PopUpdateConsoleDisplayState(1LL, v22);
            ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
            PopNetInitialize(3);
            PopReleasePolicyLock();
            PopIdleInitAoAcDozeS4Timer();
            PopCreateIdlePhaseWatchdog();
            PopInitializeSystemIdleDetection();
            PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 132LL) & 0x10000000) != 0;
            PopSetupHighPerfPowerRequest((unsigned __int8)PopHiberResumeXhciHandoffSkip, v23, v24);
            PpmEnableWmiInterface();
            v25 = *(_QWORD *)(a2 + 240);
            if ( (*(_DWORD *)(v25 + 2648) & 0x8000LL) != 0 )
              PopFasr = 1;
            BootAppSvnInfo = *(_OWORD *)(v25 + 4384);
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
            PopLidReliabilityInit(v26);
            PopEvaluateInputSuppressionRequired();
            if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
              PopSetupUsb4DisplayPresenceNotification();
            PopPowerButtonSuppressionInit();
            PopBatteryQueueWork(1u);
            PopSetupKsrCallbacks();
            PopHiberEvaluateSkippingMemoryMapValidation();
            PopReadErrataSkipMemoryOverwriteRequestControlLockAction();
            goto LABEL_73;
          }
        }
        else
        {
          LOBYTE(v21) = 23;
        }
        PopLogSleepDisabled(21, v21, 0LL, 0LL);
        goto LABEL_64;
      }
    }
    v18 = 2;
    goto LABEL_48;
  }
  PoFxRegisterDebugger();
  HalReportResourceUsage(1);
  PopBatteryInitPhaseTwo();
  TimebrokerServiceSid = PpmEventInitialize();
  if ( TimebrokerServiceSid >= 0 )
  {
    KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v12, v13);
    PopInitializeHeteroProcessors(1);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmPerfArtificialDomainSetting != -1 )
      PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
    PpmIdleRegisterDefaultStates();
    TimebrokerServiceSid = PpmParkInitialize();
    if ( TimebrokerServiceSid >= 0 )
    {
      PpmCheckInitProcessors(0, 1);
      PpmAcquireLock(&PopFxSystemLatencyLock, v14, v15);
      PoFxSendSystemLatencyUpdate();
      PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
      PopPdcCsCheckSystemVolumeDevice();
      PopUpdateBackgroundCoolingStatus(0);
      ZwUpdateWnfStateData(&WNF_PO_MULTIMEDIA_POWER_MODEL, &PpmPerfMultimediaPowerModel, 4u, 0LL, 0LL, 0, 0);
      PopInitVideoWnfState();
      goto LABEL_73;
    }
  }
  return TimebrokerServiceSid >= 0;
}
