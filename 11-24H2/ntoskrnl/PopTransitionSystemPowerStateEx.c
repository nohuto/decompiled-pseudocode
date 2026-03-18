/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x140B667DC
 * Callers:
 *     PopTransitionSystemPowerState @ 0x140B4B194 (PopTransitionSystemPowerState.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     PopExecuteOnTargetProcessors @ 0x1403529A4 (PopExecuteOnTargetProcessors.c)
 *     PopSetPowerActionState @ 0x1403CB224 (PopSetPowerActionState.c)
 *     PoSetUserPresent @ 0x1403F2A80 (PoSetUserPresent.c)
 *     PopCheckForWork @ 0x1403F2D8C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1403F2E04 (PopGetPolicyWorker.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140428294 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     StringCchPrintfW @ 0x14046FE5C (StringCchPrintfW.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14048D954 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14048D998 (PpmCheckResumePpmEngineFromSx.c)
 *     PopRunMaximumIrpWorkers @ 0x140496CF8 (PopRunMaximumIrpWorkers.c)
 *     IoRaiseInformationalHardError @ 0x1404ADFA0 (IoRaiseInformationalHardError.c)
 *     PopActionRetrieveInitialState @ 0x1404AE7B8 (PopActionRetrieveInitialState.c)
 *     PopFanSxEntry @ 0x1404B440C (PopFanSxEntry.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1404B9204 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     ExWakeTimersPause @ 0x1404BC0DC (ExWakeTimersPause.c)
 *     PopSetPowerActionWatchdogState @ 0x1404BCE5C (PopSetPowerActionWatchdogState.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1404CD2B0 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopFanSxExit @ 0x1404D1444 (PopFanSxExit.c)
 *     PopIgnoreBatteryStatusChange @ 0x1404D8DFC (PopIgnoreBatteryStatusChange.c)
 *     PopThermalSxEntry @ 0x1404D972C (PopThermalSxEntry.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1404F501C (PopFxPrepareDevicesForShutdown.c)
 *     PsIumResumeAfterHibernate @ 0x1404F71AC (PsIumResumeAfterHibernate.c)
 *     RtlBootStatusDisableFlushing @ 0x1404FAA78 (RtlBootStatusDisableFlushing.c)
 *     PopReadShutdownPolicy @ 0x1405CD2D4 (PopReadShutdownPolicy.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405D41D8 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExDeleteWakeTimerInfo @ 0x1406572B4 (ExDeleteWakeTimerInfo.c)
 *     ExWakeTimersResume @ 0x140657334 (ExWakeTimersResume.c)
 *     WheaResumedFromHibernate @ 0x14065B70C (WheaResumedFromHibernate.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopResetActionDefaults @ 0x1406FBF94 (PopResetActionDefaults.c)
 *     PopTransitionGetWakeTimerType @ 0x1406FC028 (PopTransitionGetWakeTimerType.c)
 *     PopSetShutdownMarker @ 0x1406FC0F0 (PopSetShutdownMarker.c)
 *     PpmPerfReApplyStates @ 0x14074FB74 (PpmPerfReApplyStates.c)
 *     PopBootLoaderTraceProcess @ 0x140751AFC (PopBootLoaderTraceProcess.c)
 *     PopZeroHiberFile @ 0x14075333C (PopZeroHiberFile.c)
 *     PopSaveLidReliabilityState @ 0x1407540A8 (PopSaveLidReliabilityState.c)
 *     PopDeferDoze @ 0x140754EC8 (PopDeferDoze.c)
 *     PopDiagTraceStateTransitionFailurePoint @ 0x14075802C (PopDiagTraceStateTransitionFailurePoint.c)
 *     PopPowerAggregatorNotifySystemWake @ 0x140759AB0 (PopPowerAggregatorNotifySystemWake.c)
 *     MmZeroPageFileAtShutdown @ 0x1407E8304 (MmZeroPageFileAtShutdown.c)
 *     PsLookupThreadByThreadId @ 0x14084A4B0 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409B1FC0 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409B2024 (ExReleaseTimeRefreshLockExclusive.c)
 *     PopFilterCapabilities @ 0x1409B923C (PopFilterCapabilities.c)
 *     PopUpdateSystemIdleContext @ 0x1409B99D4 (PopUpdateSystemIdleContext.c)
 *     PopInitSystemSleeperThread @ 0x140A219E8 (PopInitSystemSleeperThread.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopCurrentPowerStatePrecise @ 0x140A2C144 (PopCurrentPowerStatePrecise.c)
 *     PopCurrentPowerState @ 0x140A2C1F8 (PopCurrentPowerState.c)
 *     MmLockPagableSectionByHandle @ 0x140A3FE90 (MmLockPagableSectionByHandle.c)
 *     PoInitializeBroadcast @ 0x140A40934 (PoInitializeBroadcast.c)
 *     ExSwapinWorkerThreads @ 0x140A51B34 (ExSwapinWorkerThreads.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x140A70024 (SshSessionManagerTracePostSleepNotification.c)
 *     RtlSetSystemBootStatusEx @ 0x140A753E0 (RtlSetSystemBootStatusEx.c)
 *     PopTransitionCheckpoint @ 0x140A77528 (PopTransitionCheckpoint.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7F278 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopInitializePowerPolicySimulate @ 0x140A85F80 (PopInitializePowerPolicySimulate.c)
 *     PoClearBroadcast @ 0x140A8BD00 (PoClearBroadcast.c)
 *     PopIsDozeSupported @ 0x140A8BDD8 (PopIsDozeSupported.c)
 *     PopSetSleepMarker @ 0x140A910AC (PopSetSleepMarker.c)
 *     PopFastS4Check @ 0x140A976C4 (PopFastS4Check.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x140A9D7CC (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x140A9E32C (PopDiagTraceKernelQueriesAllowed.c)
 *     PopFindNextSystemPowerState @ 0x140A9E5E8 (PopFindNextSystemPowerState.c)
 *     CmSetLazyFlushState @ 0x140AA0860 (CmSetLazyFlushState.c)
 *     PopNotifyTelemetryOsState @ 0x140AABFD4 (PopNotifyTelemetryOsState.c)
 *     PopEnforceResiliencyScenarios @ 0x140AAC0B0 (PopEnforceResiliencyScenarios.c)
 *     PopEsExitSleep @ 0x140AADAA0 (PopEsExitSleep.c)
 *     PopQueryPowerSettingUlong @ 0x140AB4520 (PopQueryPowerSettingUlong.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140AB6DC0 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopEsEnterSleepShutdown @ 0x140AB82C4 (PopEsEnterSleepShutdown.c)
 *     PopAdvanceSystemPowerState @ 0x140AB9AF8 (PopAdvanceSystemPowerState.c)
 *     PopNotifyCallbacksPreSleep @ 0x140ABA610 (PopNotifyCallbacksPreSleep.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140ABB650 (PopCancelIgnoreBatteryStatusChange.c)
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 *     PopDiagTracePreSleepNotification @ 0x140AC7308 (PopDiagTracePreSleepNotification.c)
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140B5BE24 (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140B5C0F4 (PopProcessDeviceWakeSource.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140B5F998 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x140B5FC68 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x140B5FCF8 (PopDiagTraceMtrrError.c)
 *     PopSetDevicesSystemState @ 0x140B64BCC (PopSetDevicesSystemState.c)
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140B67AF4 (PopAcquireTransitionLockAfterSleep.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 *     PopFlushVolumes @ 0x140B67D40 (PopFlushVolumes.c)
 *     PopNewWakeInfo @ 0x140B67F44 (PopNewWakeInfo.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B68020 (ExUpdateSystemTimeFromCmos.c)
 *     PopDiagTracePostSleepNotification @ 0x140B68114 (PopDiagTracePostSleepNotification.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B6A3B4 (PoDelistPowerStateTransitionBlocker.c)
 *     PopQpcTimeInMs @ 0x140B6A560 (PopQpcTimeInMs.c)
 *     PfPowerActionNotify @ 0x140B6B9F8 (PfPowerActionNotify.c)
 *     IoFreePoDeviceNotifyList @ 0x140B6D4D4 (IoFreePoDeviceNotifyList.c)
 *     PopIsMostRecentWakeAttended @ 0x140B6DB08 (PopIsMostRecentWakeAttended.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140B6DD64 (PopDiagComputeEarlyHiberStats.c)
 *     ExGetNextWakeTime @ 0x140B6DF68 (ExGetNextWakeTime.c)
 */

__int64 __fastcall PopTransitionSystemPowerStateEx(int *a1)
{
  PEPROCESS v2; // rsi
  _DWORD *v3; // r14
  _DWORD *v4; // r15
  PETHREAD v5; // rbx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r13d
  int v18; // ecx
  int v19; // eax
  unsigned __int8 *v20; // rsi
  __int64 v21; // rcx
  int *v22; // r12
  _DWORD *v23; // rbx
  int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int v27; // ecx
  char v28; // cl
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  char v33; // r15
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // eax
  char v38; // al
  int v39; // eax
  char NextSystemPowerState; // al
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // r8d
  __int64 v47; // rdx
  __int64 v48; // r8
  int HiberContext; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rcx
  LONG v53; // ecx
  int inited; // eax
  unsigned __int64 v55; // r10
  __int64 v56; // rsi
  char v57; // r11
  __int64 v58; // rcx
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rcx
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rdx
  __int64 *v66; // rbx
  int v67; // r8d
  _DWORD *v68; // rsi
  _DWORD *v69; // r12
  __int64 *v70; // rcx
  unsigned __int64 v71; // rcx
  int v72; // edx
  unsigned __int64 v73; // rax
  __int64 *v74; // rbx
  __int64 *v75; // rsi
  char NextWakeTime; // al
  char v77; // al
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned int v83; // r8d
  PETHREAD v84; // rdx
  PEPROCESS v85; // rcx
  int v86; // ebx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v92; // ecx
  int v93; // r8d
  int v94; // eax
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // rcx
  unsigned int v110; // r8d
  void *v111; // rcx
  int v112; // edx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-99h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-99h]
  int v116; // [rsp+30h] [rbp-89h]
  PETHREAD Thread; // [rsp+50h] [rbp-69h] BYREF
  __int64 v118; // [rsp+58h] [rbp-61h] BYREF
  unsigned __int16 *v119; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int16 *v120; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v121[2]; // [rsp+70h] [rbp-49h] BYREF
  HANDLE ProcessId[2]; // [rsp+80h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-29h] BYREF
  int v124; // [rsp+A0h] [rbp-19h] BYREF
  char *v125; // [rsp+A8h] [rbp-11h]
  int v126; // [rsp+B0h] [rbp-9h]
  int v127; // [rsp+B8h] [rbp-1h]
  unsigned __int64 v128; // [rsp+C0h] [rbp+7h]
  int v129; // [rsp+C8h] [rbp+Fh]
  char v130; // [rsp+120h] [rbp+67h] BYREF
  int v131; // [rsp+128h] [rbp+6Fh] BYREF
  int v132; // [rsp+130h] [rbp+77h] BYREF
  PEPROCESS Process; // [rsp+138h] [rbp+7Fh] BYREF

  v121[0] = 0x20000LL;
  v121[1] = &word_140B6FE00;
  v2 = 0LL;
  v131 = 0;
  *((_BYTE *)a1 + 12) = 0;
  v3 = a1 + 27;
  *((_BYTE *)a1 + 24) = 0;
  a1[7] = 0;
  v4 = a1 + 82;
  *((_QWORD *)a1 + 8) = 0LL;
  v5 = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  a1[25] = 0;
  a1[27] = 0;
  *((_QWORD *)a1 + 25) = 0LL;
  *((_QWORD *)a1 + 22) = 0LL;
  *((_QWORD *)a1 + 23) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  *((_BYTE *)a1 + 336) = 0;
  *((_QWORD *)a1 + 40) = 0LL;
  a1[83] = 0;
  v120 = (unsigned __int16 *)v121;
  v132 = 0;
  Process = 0LL;
  Thread = 0LL;
  v118 = 0LL;
  v119 = (unsigned __int16 *)v121;
  a1[28] = 1;
  a1[29] = 1;
  *((_BYTE *)a1 + 216) = 1;
  a1[82] = 1;
  *((_QWORD *)a1 + 24) = 0LL;
  v6 = PopSimulate & 0x10000;
  a1[22] = 0;
  *(_OWORD *)ProcessId = 0LL;
  a1[85] = v6 != 0 ? 300000000 : 600000000;
  PopTransitionCheckpoint(8, 1);
  if ( *a1 == 2 )
    PnpSurpriseFailUnsafeDmaDevices();
  if ( *a1 == 4 )
    PopReadShutdownPolicy();
  PopAcquireTransitionLockAfterSleep();
  MmLockPagableSectionByHandle(ExPageLockHandle);
  PopRunMaximumIrpWorkers();
  PopUnlockAfterSleepWorkItem.Parameter = 0LL;
  PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
  PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
  CmSetLazyFlushState(0);
  PopNotifyCallbacksPreSleep();
  ExSwapinWorkerThreads(0);
  v7 = PoInitializeBroadcast();
  a1[22] = v7;
  if ( v7 < 0 )
  {
    ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
    *v3 = 5;
    goto LABEL_232;
  }
  PopCheckPowerSourceAfterRtcWakeCancel();
  PopCurrentPowerStatePrecise((__int64)(a1 + 30), (__int64)&v118);
  PopAcquirePolicyLock(v9, v8);
  *((_BYTE *)a1 + 48) = 1;
  PopFilterCapabilities((__int64)&PopCapabilities, (__int64)&unk_140F0B1D8);
  if ( byte_140F0B101 )
  {
    if ( byte_140F0B101 != 2 )
    {
      PopReleasePolicyLock(v11, v10, v12, v13, Timeout);
      PoClearBroadcast();
      ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
      *v3 = 6;
      a1[22] = -1073741791;
      goto LABEL_232;
    }
  }
  else
  {
    PopResetActionDefaults();
  }
  PopSetPowerActionState(3);
  *(_QWORD *)&qword_140F0B148 = qword_140F0BDF0;
  PopIgnoreBatteryStatusChange();
  PopCheckResiliencyScenarios();
  PopEnforceResiliencyScenarios(a1 + 52);
  PopExecuteOnTargetProcessors((__int64)&KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
  v17 = 6;
  if ( *a1 == 6 )
    dword_140F0B104 = 6;
  v18 = *a1;
  if ( (unsigned int)(*a1 - 4) <= 2 )
  {
    PoPowerDownActionInProgress = 1;
    if ( v18 == 5 )
      PoPowerResetActionInProgress = 1;
    if ( PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(PopHiberInfo, (__int64)FileObject);
  }
  v19 = *a1;
  v20 = (unsigned __int8 *)(a1 + 18);
  *((_BYTE *)a1 + 72) = 0;
  v21 = 2LL;
  v22 = a1 + 4;
  a1[4] = 0;
  if ( (unsigned int)(v19 - 2) <= 1 )
    PoPowerDownActionInProgress = 1;
  *((_BYTE *)a1 + 96) = 0;
  v23 = a1 + 83;
  a1[22] = -1073741536;
  while ( 1 )
  {
    if ( !*((_BYTE *)a1 + 48) )
    {
      PopAcquirePolicyLock(2LL, v14);
      v21 = 2LL;
      *((_BYTE *)a1 + 48) = 1;
    }
    if ( !dword_140F0B104 )
    {
      *v3 = 6;
      a1[22] = 0;
      goto LABEL_68;
    }
    *((_BYTE *)a1 + 104) = PopAction;
    LOBYTE(PopAction) = 0;
    v24 = a1[22];
    if ( v24 == -1073741536 )
    {
      if ( (a1[26] & 2) != 0 && dword_140F0B10C >= 0 && (dword_140F0B10C & 3) != 0 )
      {
        PopGetPolicyWorker(2);
        *v3 = 8;
        goto LABEL_68;
      }
      PopActionRetrieveInitialState(&dword_140F0B108, a1 + 4, &dword_140F0B12C, (_BYTE *)a1 + 72);
      if ( (unsigned int)(dword_140F0B104 - 4) <= 2 )
      {
        byte_140F0B102 = 1;
        dword_140F0B10C = a1[2];
      }
      a1[22] = 0;
    }
    else if ( v24 < 0 )
    {
      goto LABEL_68;
    }
    PopReleasePolicyLock(v21, v14, v15, v16, Timeout);
    *v23 = 0;
    *((_BYTE *)a1 + 48) = 0;
    *v4 = 1;
    PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, v4, v23);
    if ( (dword_140F0B10C & 0x40000000) != 0 )
    {
      *v4 = 0;
      *v23 = 0;
    }
    if ( !byte_140F0B1F6 && !byte_140F0B1E4 && !byte_140F0B1EB )
      *v23 = 0;
    PopInitializePowerPolicySimulate();
    dword_140F0B130 = dword_140F0B12C;
    v25 = ((unsigned int)dword_140F0B10C >> 27) & 2;
    a1[23] = v25;
    PopAdvanceSystemPowerState(&dword_140F0B130, v25, dword_140F0B108, *v22);
    if ( (a1[2] & 8) != 0 )
    {
      byte_140F0AD80 = 1;
      *((_BYTE *)a1 + 24) = 0;
      dword_140F0B134 = 5;
      a1[8] = 6;
      v26 = dword_140F0B12C;
    }
    else
    {
      if ( PopFastS4Check() )
      {
        a1[8] = dword_140F0B12C;
        v27 = 6;
        dword_140F0B134 = 5;
        *((_BYTE *)a1 + 24) = 1;
        a1[13] = 6;
        goto LABEL_46;
      }
      dword_140F0B134 = dword_140F0B12C;
      a1[8] = dword_140F0B12C;
      v26 = dword_140F0B12C;
      *((_BYTE *)a1 + 24) = 0;
    }
    v27 = PopPowerStateHandlerLookup[v26];
    a1[13] = v27;
    if ( v27 > 6 )
      goto LABEL_63;
LABEL_46:
    if ( !qword_140F0B8A8[3 * (int)v27] )
    {
LABEL_63:
      NextSystemPowerState = PopFindNextSystemPowerState(*v22, *((_BYTE *)a1 + 24), (_BYTE *)a1 + 72);
      *((_BYTE *)a1 + 36) = NextSystemPowerState;
      if ( !NextSystemPowerState )
        goto LABEL_68;
      goto LABEL_64;
    }
    if ( (a1[2] & 8) != 0 )
    {
      v28 = 6;
LABEL_51:
      PopSetSleepMarker(v28);
      goto LABEL_53;
    }
    if ( !byte_140F0B102 )
    {
      v28 = dword_140F0B12C;
      goto LABEL_51;
    }
    PopSetShutdownMarker();
    PopSaveLidReliabilityState(v31);
LABEL_53:
    PopAcquirePolicyLock(v30, v29);
    if ( (PopAction & 6) != 0 )
    {
      *((_BYTE *)a1 + 48) = 1;
      a1[22] = -1073741536;
      goto LABEL_65;
    }
    v33 = *(_BYTE *)(PopSmartSuspendDecision + 2);
    v34 = *(_QWORD *)(PopSmartSuspendDecision + 56);
    PopReleasePolicyLock(v32, v14, v15, v16, Timeout);
    PopCheckpointSystemSleep(10, v35, v36);
    byte_140F0B128 = 3;
    PopDiagTraceKernelQueriesAllowed(*v20);
    if ( !*v20 )
      goto LABEL_61;
    v37 = PopSetDevicesSystemState();
    a1[22] = v37;
    if ( v37 >= 0 )
      break;
    if ( v37 == -1073741536 )
      goto LABEL_61;
    v38 = PopFindNextSystemPowerState(*v22, *((_BYTE *)a1 + 24), (_BYTE *)a1 + 72);
    *((_BYTE *)a1 + 36) = v38;
    if ( !v38 )
    {
      *v3 = 9;
      goto LABEL_68;
    }
    v4 = a1 + 82;
    v23 = a1 + 83;
LABEL_64:
    a1[22] = 0;
LABEL_65:
    v21 = 2LL;
  }
  *((_BYTE *)a1 + 96) = 1;
LABEL_61:
  v39 = a1[22];
  if ( v39 == -1073741536 )
  {
    v4 = a1 + 82;
    v23 = a1 + 83;
    goto LABEL_65;
  }
  if ( v39 >= 0 )
  {
    PopCheckpointSystemSleep(13, v14, v15);
    HiberContext = PopAllocateHiberContext(v3);
    a1[22] = HiberContext;
    if ( HiberContext >= 0 )
    {
      a1[25] = PopNotifyTelemetryOsState(dword_140F0B104, dword_140F0B12C, dword_140F0B134, a1[2], 1);
      PopTransitionCheckpoint(9, 0);
      if ( !byte_140F0B102 )
      {
        PopCurrentPowerState(a1 + 30);
        PopDiagTracePreSleepNotification(
          (unsigned int)a1[8],
          (unsigned int)dword_140F0B134,
          dword_140F0B114,
          dword_140F0B118,
          a1[25],
          (__int64)(a1 + 30),
          (__int64)qword_140F0B120);
        PopCheckpointSystemSleep(16, v50, v51);
        PopUmpoSendFlushSleepStudyLoggerNotification();
      }
      PopEsEnterSleepShutdown();
      PopThermalSxEntry();
      PopFanSxEntry();
      if ( !*((_BYTE *)a1 + 12) )
      {
        if ( byte_140F0B102 )
        {
          v130 = 1;
          v124 = 5;
          v125 = &v130;
          v126 = 1;
          v127 = 11;
          v128 = 0xFFFFF780000002C4uLL;
          v129 = 4;
          RtlSetSystemBootStatusEx((__int64)&v124, 2u);
        }
        *((_BYTE *)a1 + 12) = 1;
      }
      v52 = 5LL;
      if ( !*((_BYTE *)a1 + 24) )
        v52 = (unsigned int)dword_140F0B12C;
      PopFlushVolumes(v52);
      if ( dword_140F0B134 < dword_140F0B12C )
        dword_140F0B134 = dword_140F0B12C;
      byte_140F0B128 = 2;
      if ( byte_140F0B102 )
      {
        PopFxPrepareDevicesForShutdown();
        IoFreePoDeviceNotifyList(*(_QWORD *)&qword_140F0B148 + 48LL);
        if ( dword_140F0B114 == 2 )
          PopCriticalShutdownInProgress = 1;
        PopTransitionCheckpoint(8, 2);
        PopGracefulShutdown();
      }
      v53 = a1[13];
      KeMtrrComparisonFailed = 0;
      inited = PopInitSystemSleeperThread(v53, (struct _KEVENT *)(a1 + 56), ProcessId);
      a1[22] = inited;
      if ( inited < 0 )
      {
        *v3 = 20;
        goto LABEL_68;
      }
      if ( !byte_140F0B1C0 )
      {
        ExWakeTimersPause();
        byte_140F0B1C0 = 1;
      }
      *((_QWORD *)a1 + 19) = MEMORY[0xFFFFF78000000008];
      v55 = MEMORY[0xFFFFF78000000014];
      v56 = PopWakeAlarmTimeOverrideAc;
      *((_QWORD *)a1 + 20) = MEMORY[0xFFFFF78000000014];
      *((_QWORD *)a1 + 23) = 0LL;
      if ( v56 || PopWakeAlarmTimeOverrideDc )
      {
        *((_QWORD *)a1 + 23) = -3LL;
      }
      else
      {
        v57 = byte_140F0BB54;
        if ( byte_140F0BB54
          && dword_140F0B12C == 5
          && !byte_140F0AD80
          && dword_140F0B114 != 2
          && v33
          && v34 != -1LL
          && v34 > v55 )
        {
          v58 = *((_QWORD *)a1 + 19);
          v59 = v34 - v55;
          *((_QWORD *)a1 + 39) = v59;
          v60 = v59 + v58;
          goto LABEL_115;
        }
        if ( !*((_DWORD *)PopPolicy + 22)
          || dword_140F0B12C == 5
          || !PopIsDozeSupported((__int64)&PopCapabilities)
          || (dword_140F0B10C & 0x40000000) != 0 )
        {
          if ( v57 && dword_140F0B12C == 5 && !byte_140F0AD80 && qword_140F0BD98 && dword_140F0B114 == 11 )
          {
            v64 = qword_140F0BD98 - v55;
            *((_QWORD *)a1 + 39) = qword_140F0BD98 - v55;
            v65 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset + v64;
            v60 = v65 + *((_QWORD *)a1 + 19);
            *((_QWORD *)a1 + 39) = v65;
LABEL_115:
            *((_QWORD *)a1 + 22) = v60;
            *((_QWORD *)a1 + 23) = -2LL;
          }
        }
        else
        {
          v62 = *((_QWORD *)a1 + 19);
          *((_QWORD *)a1 + 22) = v62;
          v63 = v62 + 10000000LL * *(unsigned int *)(v61 + 88);
          *((_QWORD *)a1 + 23) = -1LL;
          *((_QWORD *)a1 + 22) = v63;
        }
      }
      if ( *((_QWORD *)a1 + 23) == -1LL && !qword_140F0B1D0 )
        qword_140F0B1D0 = *((_QWORD *)a1 + 19);
      v66 = &qword_140F0B178;
      memset_0(&qword_140F0B178, 0, 0x48uLL);
      dword_140F0B170 = 3;
      if ( *((_QWORD *)a1 + 23) == -3LL )
      {
        qword_140F0B188[0] = -3LL;
        qword_140F0B178 = v56;
        qword_140F0B1A0 = *((_QWORD *)a1 + 23);
        qword_140F0B190 = PopWakeAlarmTimeOverrideDc;
      }
      else if ( !byte_140F0AD80 && dword_140F0B114 != 14 )
      {
        v68 = a1 + 82;
        v69 = a1 + 83;
        if ( dword_140F0B12C == 5 && *v68 != 1 && *v69 != 1 )
        {
          PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, a1 + 48, a1 + 49);
          if ( a1[48] || a1[49] )
          {
            *v68 = 0;
            *v69 = 0;
          }
        }
        if ( *((_QWORD *)a1 + 22) )
        {
          if ( *((_QWORD *)a1 + 23) == -2LL )
          {
            if ( *v68 )
            {
              qword_140F0B178 = *((_QWORD *)a1 + 22);
              qword_140F0B188[0] = *((_QWORD *)a1 + 23);
            }
            if ( *v69 )
            {
              qword_140F0B190 = *((_QWORD *)a1 + 22);
              qword_140F0B1A0 = *((_QWORD *)a1 + 23);
            }
          }
          else
          {
            do
            {
              *v66 = *((_QWORD *)a1 + 22);
              v66 += 3;
            }
            while ( (__int64)v66 < (__int64)&unk_140F0B1A8 );
            v70 = qword_140F0B188;
            do
            {
              *v70 = *((_QWORD *)a1 + 23);
              v70 += 3;
            }
            while ( (__int64)v70 < (__int64)&qword_140F0B1B8 );
          }
        }
        v71 = qword_140F0B1C8;
        *((_QWORD *)a1 + 8) = qword_140F0B1C8;
        v72 = v71;
        if ( v71 )
        {
          v73 = *((_QWORD *)a1 + 19) + 20000000LL;
          if ( v71 < v73 )
          {
            *((_QWORD *)a1 + 8) = v73;
            v72 = v73;
          }
        }
        if ( *v68 )
        {
          LOBYTE(v67) = *v68 == 2 && PopSimulate >= 0;
          *((_BYTE *)a1 + 169) = v67;
          v74 = (__int64 *)(a1 + 10);
          v75 = (__int64 *)(a1 + 50);
          NextWakeTime = ExGetNextWakeTime(v72 + 1, *((_QWORD *)a1 + 22), v67, (int)a1 + 40, (__int64)(a1 + 50));
          *((_BYTE *)a1 + 336) = NextWakeTime;
          if ( NextWakeTime )
          {
            qword_140F0B178 = *v74;
            qword_140F0B188[0] = *v75;
          }
        }
        else
        {
          v74 = (__int64 *)(a1 + 10);
          v75 = (__int64 *)(a1 + 50);
        }
        if ( *v69 )
        {
          if ( *v69 != 2 || (LOBYTE(v67) = 1, PopSimulate < 0) )
            LOBYTE(v67) = 0;
          *((_BYTE *)a1 + 169) = v67;
          v77 = ExGetNextWakeTime(
                  (unsigned int)*((_QWORD *)a1 + 8) + 1,
                  *((_QWORD *)a1 + 22),
                  v67,
                  (_DWORD)v74,
                  (__int64)v75);
          *((_BYTE *)a1 + 336) = v77;
          if ( v77 )
          {
            qword_140F0B190 = *v74;
            qword_140F0B1A0 = *v75;
          }
        }
      }
      qword_140F0B180[0] = qword_140F0B178;
      if ( qword_140F0B178 && qword_140F0B178 < *((_QWORD *)a1 + 19) + (unsigned __int64)(unsigned int)a1[85] )
        qword_140F0B180[0] = *((_QWORD *)a1 + 19) + (unsigned int)a1[85];
      qword_140F0B198 = qword_140F0B190;
      if ( qword_140F0B190 && qword_140F0B190 < *((_QWORD *)a1 + 19) + (unsigned __int64)(unsigned int)a1[85] )
        qword_140F0B198 = *((_QWORD *)a1 + 19) + (unsigned int)a1[85];
      a1[80] = PopTransitionGetWakeTimerType(qword_140F0B188[0]);
      a1[81] = PopTransitionGetWakeTimerType(qword_140F0B1A0);
      qword_140F0B310 = KeQueryPerformanceCounter(0LL).QuadPart;
      ExAcquireTimeRefreshLockExclusive();
      LOBYTE(v78) = 1;
      ExUpdateSystemTimeFromCmos(v78, 1LL);
      ExReleaseTimeRefreshLockExclusive();
      guard_dispatch_icall_no_overrides(qword_140F0B180[0], qword_140F0B198, v79, v80);
      PopBootStatCheckpointAvailable = 0;
      PpmCheckPausePpmEngineForSx(v82, v81, v83);
      PsLookupProcessByProcessId(ProcessId[0], &Process);
      PsLookupThreadByThreadId(ProcessId[1], &Thread);
      PopSetDevicesSystemState();
      *((_BYTE *)a1 + 96) = 1;
      PopNewWakeInfo();
      v84 = Thread;
      v85 = Process;
      *((_QWORD *)a1 + 38) = MEMORY[0xFFFFF78000000008];
      a1[28] = dword_140F0BA4C;
      v86 = PopPushPowerStateTransitionRecordWithCallback((__int64)v85, (__int64)v84, 0LL, 0, 0LL);
      KeSetEvent((PRKEVENT)(a1 + 62), 0, 1u);
      KeWaitForSingleObject(a1 + 68, Executive, 0, 0, 0LL);
      if ( v86 >= 0 )
        PoDelistPowerStateTransitionBlocker(v88, v87, v89, v90);
      qword_140F0AE20 = 0LL;
      a1[22] = a1[75];
      PopSetPowerActionWatchdogState(2);
      CurrentThread = KeGetCurrentThread();
      v92 = dword_140F0B12C;
      if ( PoResumeFromHibernate )
        v92 = dword_140F0B134;
      dword_140F0B138 = v92;
      PopTransitionCritialResumeThread = (__int64)CurrentThread;
      if ( (a1[2] & 8) != 0 )
      {
        a1[8] = 6;
      }
      else
      {
        a1[8] = dword_140F0B12C;
        v17 = dword_140F0B12C;
      }
      v93 = dword_140F0B138;
      v116 = a1[81];
      v94 = a1[80];
      a1[7] = dword_140F0B138;
      PopDiagTracePostSleepNotification(v17, dword_140F0B134, v93, qword_140F0B180[0], qword_140F0B198, v94, v116);
      if ( KeMtrrComparisonFailed )
        PopDiagTraceMtrrError();
      v16 = (unsigned int)a1[22];
      if ( (int)v16 < 0 && dword_140F0B12C == 5 )
      {
        DestinationString = 0LL;
        StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
        RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
        IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
        PopDiagTraceHibernateErrorStatus(a1[22]);
      }
    }
  }
LABEL_68:
  if ( *((_BYTE *)a1 + 48) )
    PopReleasePolicyLock(v21, v14, v15, v16, Timeout);
  if ( byte_140F0AD80 )
  {
    qword_140F0B508 = KeQueryPerformanceCounter(0LL).QuadPart;
    dword_140F0AD64 = PopQpcTimeInMs(&qword_140F0B500, &qword_140F0B508);
  }
  if ( a1[22] >= 0 )
  {
    LOBYTE(v21) = 1;
    qword_140F0B160 = *((_QWORD *)a1 + 38);
    ExUpdateSystemTimeFromCmos(v21, 1LL);
    LOBYTE(v41) = 1;
    if ( (unsigned int)guard_dispatch_icall_no_overrides(v41, 0LL, v42, v43) )
      *((_BYTE *)a1 + 168) = 1;
    qword_140F0B328 = KeQueryPerformanceCounter(0LL).QuadPart;
    PfPowerActionNotify(2LL, 0LL);
    qword_140F0B158 = MEMORY[0xFFFFF78000000008];
    PopDiagComputeEarlyHiberStats();
    if ( a1[7] == 4 )
      PopDiagTraceFirmwareS3Stats();
  }
  byte_140F0B129 = 1;
  PoPowerDownActionInProgress = 0;
  PoPowerResetActionInProgress = 0;
  PsIumResumeAfterHibernate();
  if ( *((_BYTE *)a1 + 96) )
  {
    PfPowerActionNotify(3LL, 0LL);
    PopSetDevicesSystemState();
    PfPowerActionNotify(3LL, 1LL);
  }
  if ( a1[22] >= 0 )
    WheaResumedFromHibernate();
  PpmCheckResumePpmEngineFromSx(v45, v44, v46);
  PopCurrentPowerStatePrecise((__int64)(a1 + 30), (__int64)&v118);
  if ( *((_BYTE *)a1 + 168) )
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
  if ( PopIsDetailedSleepReliabilityDiagEnabled() )
    PopBootStatCheckpointAvailable = 1;
  else
    RtlBootStatusDisableFlushing(1);
  PopCheckpointSystemSleep(56, v47, v48);
  guard_dispatch_icall_no_overrides(0LL, 0LL, v95, v96);
  a1[25] = PopNotifyTelemetryOsState(dword_140F0B104, dword_140F0B12C, dword_140F0B134, a1[2], 0);
  PopCancelIgnoreBatteryStatusChange();
  PopExecuteOnTargetProcessors((__int64)&KeActiveProcessors, (__int64)PpmStartIllegalProcessorThrottleLogging, 0LL, 0LL);
  if ( *((_BYTE *)a1 + 48) )
  {
    PopReleasePolicyLock(v98, v97, v99, v100, Timeouta);
    *((_BYTE *)a1 + 48) = 0;
  }
  if ( *((_BYTE *)a1 + 96) )
    PopProcessDeviceWakeSource();
  PoClearBroadcast();
  *(_QWORD *)&qword_140F0B148 = 0LL;
  PopFanSxExit();
  PopEsExitSleep();
  a1[29] = dword_140F0BA4C;
  PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
  PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
  PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
  ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
  if ( a1[22] >= 0 )
    PopCurrentPowerState(a1 + 30);
  if ( *((_BYTE *)a1 + 96) )
    PopHandleWakeSources();
  if ( a1[22] >= 0 )
  {
    PopQueryMostRecentWakeSourceAttributes(&v131, &v120, &v119, &v132);
    SshSessionManagerTracePostSleepNotification(
      qword_140F0B180[0],
      qword_140F0B198,
      a1[80],
      a1[81],
      a1[33],
      a1[32],
      v120,
      v119,
      v131);
  }
  if ( !*((_BYTE *)a1 + 48) )
  {
    PopAcquirePolicyLock(v102, v101);
    *((_BYTE *)a1 + 48) = 1;
  }
  if ( a1[22] >= 0 )
  {
    PopUpdateSystemIdleContext(1);
    PopPowerAggregatorNotifySystemWake(a1[7]);
    LOBYTE(PopAction) = 0;
    if ( (unsigned __int64)dword_140F0B170 >= 3 )
    {
      if ( !(unsigned __int8)PopIsMostRecentWakeAttended() )
      {
        PopFullWake = 0;
        PopPendingUserPresenceDuringSystemSleep = 0;
        PopPendingUserPresenceMonitorOnReason = 0;
      }
    }
    else
    {
      qword_140F0B1C8 = qword_140F0B180[3 * dword_140F0B170];
      v103 = qword_140F0B188[3 * dword_140F0B170];
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      switch ( v103 )
      {
        case -1LL:
          if ( PopDeferDoze(a1[82], a1[83], (_BYTE *)a1 + 120) )
          {
            dword_140F0B104 = *a1;
            dword_140F0B108 = a1[1];
          }
          else
          {
            dword_140F0B104 = 2;
            dword_140F0B108 = 5;
          }
          LOBYTE(PopAction) = PopAction | 2;
LABEL_214:
          *((_BYTE *)a1 + 216) = 0;
          break;
        case -2LL:
          if ( !qword_140F0B168 )
            qword_140F0B168 = qword_140F0B158;
          break;
        case -3LL:
          PopWakeAlarmTimeOverrideAc = 0LL;
          PopWakeAlarmTimeOverrideDc = 0LL;
          break;
        default:
          if ( dword_140F0BA4C == 1 )
          {
            if ( !a1[83] )
            {
              dword_140F0B104 = *a1;
              dword_140F0B108 = a1[1];
              LOBYTE(PopAction) = 2;
              goto LABEL_214;
            }
          }
          else if ( !a1[83] && a1[28] == a1[29] )
          {
            PopCheckPowerSourceAfterRtcWakeSet();
          }
          break;
      }
    }
  }
  if ( byte_140F0B1C0 && *((_BYTE *)a1 + 216) )
  {
    ExWakeTimersResume();
    byte_140F0B1C0 = 0;
    qword_140F0B1C8 = 0LL;
  }
  if ( PoResumeFromHibernate )
    PopBootLoaderTraceProcess();
  byte_140F0AD80 = 0;
  PopResetActionDefaults();
  PopSetPowerActionState(2);
  PopReleasePolicyLock(v105, v104, v106, v107, Timeouta);
  if ( PopPendingUserPresenceDuringSystemSleep )
    PoSetUserPresent(PopPendingUserPresenceMonitorOnReason);
  ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
  PopCheckForWork();
  if ( a1[22] >= 0 )
    PpmPerfReApplyStates(v109, v108, v110);
  dword_140F0B114 = 17;
  qword_140F0B498 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06970;
  v111 = (void *)*((_QWORD *)a1 + 25);
  if ( v111 )
  {
    ExDeleteWakeTimerInfo(v111);
    *((_QWORD *)a1 + 25) = 0LL;
  }
  v2 = Process;
  v5 = Thread;
  PopTransitionCritialResumeThread = 0LL;
LABEL_232:
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( v5 )
    ObfDereferenceObject(v5);
  v112 = a1[27];
  if ( v112 )
    PopDiagTraceStateTransitionFailurePoint(a1[22], v112);
  return (unsigned int)a1[22];
}
