/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x140B569AC
 * Callers:
 *     PopTransitionSystemPowerState @ 0x140B3B194 (PopTransitionSystemPowerState.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     PopSetPowerActionState @ 0x140354C84 (PopSetPowerActionState.c)
 *     PopExecuteOnTargetProcessors @ 0x1403B2EE8 (PopExecuteOnTargetProcessors.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140428138 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140431D24 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     StringCchPrintfW @ 0x140471850 (StringCchPrintfW.c)
 *     PoSetUserPresent @ 0x140476670 (PoSetUserPresent.c)
 *     PopCheckForWork @ 0x14047697C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1404769F4 (PopGetPolicyWorker.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14048E044 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14048E088 (PpmCheckResumePpmEngineFromSx.c)
 *     PopRunMaximumIrpWorkers @ 0x1404971B8 (PopRunMaximumIrpWorkers.c)
 *     IoRaiseInformationalHardError @ 0x1404AD170 (IoRaiseInformationalHardError.c)
 *     PopActionRetrieveInitialState @ 0x1404AD894 (PopActionRetrieveInitialState.c)
 *     PopFanSxEntry @ 0x1404B4AEC (PopFanSxEntry.c)
 *     ExWakeTimersPause @ 0x1404BCF7C (ExWakeTimersPause.c)
 *     PopSetPowerActionWatchdogState @ 0x1404BDE2C (PopSetPowerActionWatchdogState.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1404CD69C (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopFanSxExit @ 0x1404D1374 (PopFanSxExit.c)
 *     PopIgnoreBatteryStatusChange @ 0x1404D9E4C (PopIgnoreBatteryStatusChange.c)
 *     PopThermalSxEntry @ 0x1404DA77C (PopThermalSxEntry.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1404F26E4 (PopFxPrepareDevicesForShutdown.c)
 *     PsIumResumeAfterHibernate @ 0x1404F463C (PsIumResumeAfterHibernate.c)
 *     RtlBootStatusDisableFlushing @ 0x1404F85D8 (RtlBootStatusDisableFlushing.c)
 *     PopReadShutdownPolicy @ 0x1405C8DC4 (PopReadShutdownPolicy.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405CF7C8 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExDeleteWakeTimerInfo @ 0x14064B3B4 (ExDeleteWakeTimerInfo.c)
 *     ExWakeTimersResume @ 0x14064B3D0 (ExWakeTimersResume.c)
 *     WheaResumedFromHibernate @ 0x14064F77C (WheaResumedFromHibernate.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopResetActionDefaults @ 0x1406F01AC (PopResetActionDefaults.c)
 *     PopTransitionGetWakeTimerType @ 0x1406F0240 (PopTransitionGetWakeTimerType.c)
 *     PopSetShutdownMarker @ 0x1406F0310 (PopSetShutdownMarker.c)
 *     PpmPerfReApplyStates @ 0x140743AA4 (PpmPerfReApplyStates.c)
 *     PopBootLoaderTraceProcess @ 0x140745A2C (PopBootLoaderTraceProcess.c)
 *     PopZeroHiberFile @ 0x14074724C (PopZeroHiberFile.c)
 *     PopSaveLidReliabilityState @ 0x140747FB8 (PopSaveLidReliabilityState.c)
 *     PopDeferDoze @ 0x140748DF8 (PopDeferDoze.c)
 *     PopDiagTraceStateTransitionFailurePoint @ 0x14074BF78 (PopDiagTraceStateTransitionFailurePoint.c)
 *     PopPowerAggregatorNotifySystemWake @ 0x14074D66C (PopPowerAggregatorNotifySystemWake.c)
 *     MmZeroPageFileAtShutdown @ 0x1407D8444 (MmZeroPageFileAtShutdown.c)
 *     PsLookupThreadByThreadId @ 0x14084E700 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x140921F20 (PsLookupProcessByProcessId.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409CCD20 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409CCD84 (ExReleaseTimeRefreshLockExclusive.c)
 *     PopFilterCapabilities @ 0x140A10C3C (PopFilterCapabilities.c)
 *     PopUpdateSystemIdleContext @ 0x140A1112C (PopUpdateSystemIdleContext.c)
 *     PopInitSystemSleeperThread @ 0x140A16CC8 (PopInitSystemSleeperThread.c)
 *     PopTransitionCheckpoint @ 0x140A1C604 (PopTransitionCheckpoint.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopCurrentPowerStatePrecise @ 0x140A22BFC (PopCurrentPowerStatePrecise.c)
 *     PopCurrentPowerState @ 0x140A22CB0 (PopCurrentPowerState.c)
 *     PoInitializeBroadcast @ 0x140A3C114 (PoInitializeBroadcast.c)
 *     MmLockPagableSectionByHandle @ 0x140A4B850 (MmLockPagableSectionByHandle.c)
 *     ExSwapinWorkerThreads @ 0x140A4E204 (ExSwapinWorkerThreads.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x140A6DE14 (SshSessionManagerTracePostSleepNotification.c)
 *     RtlSetSystemBootStatusEx @ 0x140A72D90 (RtlSetSystemBootStatusEx.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140A7BD60 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopInitializePowerPolicySimulate @ 0x140A81578 (PopInitializePowerPolicySimulate.c)
 *     PoClearBroadcast @ 0x140A86FE8 (PoClearBroadcast.c)
 *     PopIsDozeSupported @ 0x140A870C0 (PopIsDozeSupported.c)
 *     PopSetSleepMarker @ 0x140A8BFA8 (PopSetSleepMarker.c)
 *     PopFastS4Check @ 0x140A93394 (PopFastS4Check.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x140A97C9C (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x140A98914 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopFindNextSystemPowerState @ 0x140A997A4 (PopFindNextSystemPowerState.c)
 *     CmSetLazyFlushState @ 0x140A9AAA0 (CmSetLazyFlushState.c)
 *     PopNotifyTelemetryOsState @ 0x140AA6A14 (PopNotifyTelemetryOsState.c)
 *     PopEnforceResiliencyScenarios @ 0x140AA6AF0 (PopEnforceResiliencyScenarios.c)
 *     PopEsExitSleep @ 0x140AA85C0 (PopEsExitSleep.c)
 *     PopQueryPowerSettingUlong @ 0x140AAF530 (PopQueryPowerSettingUlong.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140AB1DB4 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopEsEnterSleepShutdown @ 0x140AB3EFC (PopEsEnterSleepShutdown.c)
 *     PopAdvanceSystemPowerState @ 0x140AB570C (PopAdvanceSystemPowerState.c)
 *     PopNotifyCallbacksPreSleep @ 0x140AB62D0 (PopNotifyCallbacksPreSleep.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140AB7310 (PopCancelIgnoreBatteryStatusChange.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 *     PopDiagTracePreSleepNotification @ 0x140AC1AA0 (PopDiagTracePreSleepNotification.c)
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140B4BE20 (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140B4C0F0 (PopProcessDeviceWakeSource.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140B4F858 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x140B4FB3C (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x140B4FBCC (PopDiagTraceMtrrError.c)
 *     PopSetDevicesSystemState @ 0x140B54ABC (PopSetDevicesSystemState.c)
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140B57CC4 (PopAcquireTransitionLockAfterSleep.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 *     PopFlushVolumes @ 0x140B57F10 (PopFlushVolumes.c)
 *     PopNewWakeInfo @ 0x140B58114 (PopNewWakeInfo.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B581F0 (ExUpdateSystemTimeFromCmos.c)
 *     PopDiagTracePostSleepNotification @ 0x140B582E4 (PopDiagTracePostSleepNotification.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B5A8B4 (PoDelistPowerStateTransitionBlocker.c)
 *     PopQpcTimeInMs @ 0x140B5AA60 (PopQpcTimeInMs.c)
 *     PfPowerActionNotify @ 0x140B5C910 (PfPowerActionNotify.c)
 *     IoFreePoDeviceNotifyList @ 0x140B5E3F4 (IoFreePoDeviceNotifyList.c)
 *     PopIsMostRecentWakeAttended @ 0x140B5EA58 (PopIsMostRecentWakeAttended.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140B5ECB0 (PopDiagComputeEarlyHiberStats.c)
 *     ExGetNextWakeTime @ 0x140B5EEBC (ExGetNextWakeTime.c)
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
  int v35; // eax
  char v36; // al
  int v37; // eax
  char NextSystemPowerState; // al
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // r8d
  int HiberContext; // eax
  __int64 v44; // rcx
  LONG v45; // ecx
  int inited; // eax
  unsigned __int64 v47; // r10
  __int64 v48; // rsi
  char v49; // r11
  __int64 v50; // rcx
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  __int64 *v58; // rbx
  int v59; // r8d
  _DWORD *v60; // rsi
  _DWORD *v61; // r12
  __int64 *v62; // rcx
  unsigned __int64 v63; // rcx
  int v64; // edx
  unsigned __int64 v65; // rax
  __int64 *v66; // rbx
  __int64 *v67; // rsi
  char NextWakeTime; // al
  char v69; // al
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  unsigned int v73; // r8d
  PETHREAD v74; // rdx
  PEPROCESS v75; // rcx
  int v76; // ebx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v82; // ecx
  int v83; // r8d
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  unsigned int v98; // r8d
  void *v99; // rcx
  int v100; // edx
  void *ExplicitScope; // [rsp+20h] [rbp-99h]
  void *ExplicitScopea; // [rsp+20h] [rbp-99h]
  int CheckStamp; // [rsp+30h] [rbp-89h]
  PETHREAD Thread; // [rsp+50h] [rbp-69h] BYREF
  __int64 v106; // [rsp+58h] [rbp-61h] BYREF
  unsigned __int16 *v107; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int16 *v108; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v109[2]; // [rsp+70h] [rbp-49h] BYREF
  HANDLE ProcessId[2]; // [rsp+80h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-29h] BYREF
  int v112; // [rsp+A0h] [rbp-19h] BYREF
  char *v113; // [rsp+A8h] [rbp-11h]
  int v114; // [rsp+B0h] [rbp-9h]
  int v115; // [rsp+B8h] [rbp-1h]
  unsigned __int64 v116; // [rsp+C0h] [rbp+7h]
  int v117; // [rsp+C8h] [rbp+Fh]
  char v118; // [rsp+120h] [rbp+67h] BYREF
  int v119; // [rsp+128h] [rbp+6Fh] BYREF
  int v120; // [rsp+130h] [rbp+77h] BYREF
  PEPROCESS Process; // [rsp+138h] [rbp+7Fh] BYREF

  v109[0] = 0x20000LL;
  v109[1] = &word_140B5FBD0;
  v2 = 0LL;
  v119 = 0;
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
  v108 = (unsigned __int16 *)v109;
  v120 = 0;
  Process = 0LL;
  Thread = 0LL;
  v106 = 0LL;
  v107 = (unsigned __int16 *)v109;
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
  PopCurrentPowerStatePrecise((__int64)(a1 + 30), (__int64)&v106);
  PopAcquirePolicyLock(v9, v8);
  *((_BYTE *)a1 + 48) = 1;
  PopFilterCapabilities((__int64)&PopCapabilities, (__int64)&unk_140F0AF38);
  if ( byte_140F0AE61 )
  {
    if ( byte_140F0AE61 != 2 )
    {
      PopReleasePolicyLock(v11, v10, v12, v13, ExplicitScope);
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
  *(_QWORD *)&qword_140F0AEA8 = qword_140F0AA30;
  PopIgnoreBatteryStatusChange();
  PopCheckResiliencyScenarios();
  PopEnforceResiliencyScenarios(a1 + 52);
  PopExecuteOnTargetProcessors((__int64)&KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
  v17 = 6;
  if ( *a1 == 6 )
    dword_140F0AE64 = 6;
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
    if ( !dword_140F0AE64 )
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
      if ( (a1[26] & 2) != 0 && dword_140F0AE6C >= 0 && (dword_140F0AE6C & 3) != 0 )
      {
        PopGetPolicyWorker(2);
        *v3 = 8;
        goto LABEL_68;
      }
      PopActionRetrieveInitialState(&dword_140F0AE68, a1 + 4, &dword_140F0AE8C, (_BYTE *)a1 + 72);
      if ( (unsigned int)(dword_140F0AE64 - 4) <= 2 )
      {
        byte_140F0AE62 = 1;
        dword_140F0AE6C = a1[2];
      }
      a1[22] = 0;
    }
    else if ( v24 < 0 )
    {
      goto LABEL_68;
    }
    PopReleasePolicyLock(v21, v14, v15, v16, ExplicitScope);
    *v23 = 0;
    *((_BYTE *)a1 + 48) = 0;
    *v4 = 1;
    PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, v4, v23);
    if ( (dword_140F0AE6C & 0x40000000) != 0 )
    {
      *v4 = 0;
      *v23 = 0;
    }
    if ( !byte_140F0AF56 && !byte_140F0AF44 && !byte_140F0AF4B )
      *v23 = 0;
    PopInitializePowerPolicySimulate();
    dword_140F0AE90 = dword_140F0AE8C;
    v25 = ((unsigned int)dword_140F0AE6C >> 27) & 2;
    a1[23] = v25;
    PopAdvanceSystemPowerState(&dword_140F0AE90, v25, dword_140F0AE68, *v22);
    if ( (a1[2] & 8) != 0 )
    {
      byte_140F0ADA0 = 1;
      *((_BYTE *)a1 + 24) = 0;
      dword_140F0AE94 = 5;
      a1[8] = 6;
      v26 = dword_140F0AE8C;
    }
    else
    {
      if ( PopFastS4Check() )
      {
        a1[8] = dword_140F0AE8C;
        v27 = 6;
        dword_140F0AE94 = 5;
        *((_BYTE *)a1 + 24) = 1;
        a1[13] = 6;
        goto LABEL_46;
      }
      dword_140F0AE94 = dword_140F0AE8C;
      a1[8] = dword_140F0AE8C;
      v26 = dword_140F0AE8C;
      *((_BYTE *)a1 + 24) = 0;
    }
    v27 = PopPowerStateHandlerLookup[v26];
    a1[13] = v27;
    if ( v27 > 6 )
      goto LABEL_63;
LABEL_46:
    if ( !qword_140F0B548[3 * (int)v27] )
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
    if ( !byte_140F0AE62 )
    {
      v28 = dword_140F0AE8C;
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
    PopReleasePolicyLock(v32, v14, v15, v16, ExplicitScope);
    PopCheckpointSystemSleep(10);
    byte_140F0AE88 = 3;
    PopDiagTraceKernelQueriesAllowed(*v20);
    if ( !*v20 )
      goto LABEL_61;
    v35 = PopSetDevicesSystemState();
    a1[22] = v35;
    if ( v35 >= 0 )
      break;
    if ( v35 == -1073741536 )
      goto LABEL_61;
    v36 = PopFindNextSystemPowerState(*v22, *((_BYTE *)a1 + 24), (_BYTE *)a1 + 72);
    *((_BYTE *)a1 + 36) = v36;
    if ( !v36 )
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
  v37 = a1[22];
  if ( v37 == -1073741536 )
  {
    v4 = a1 + 82;
    v23 = a1 + 83;
    goto LABEL_65;
  }
  if ( v37 >= 0 )
  {
    PopCheckpointSystemSleep(13);
    HiberContext = PopAllocateHiberContext(v3);
    a1[22] = HiberContext;
    if ( HiberContext >= 0 )
    {
      a1[25] = PopNotifyTelemetryOsState(dword_140F0AE64, dword_140F0AE8C, dword_140F0AE94, a1[2], 1);
      PopTransitionCheckpoint(9, 0);
      if ( !byte_140F0AE62 )
      {
        PopCurrentPowerState(a1 + 30);
        PopDiagTracePreSleepNotification(
          (unsigned int)a1[8],
          (unsigned int)dword_140F0AE94,
          dword_140F0AE74,
          dword_140F0AE78,
          a1[25],
          (__int64)(a1 + 30),
          (__int64)qword_140F0AE80);
        PopCheckpointSystemSleep(16);
        PopUmpoSendFlushSleepStudyLoggerNotification();
      }
      PopEsEnterSleepShutdown();
      PopThermalSxEntry();
      PopFanSxEntry();
      if ( !*((_BYTE *)a1 + 12) )
      {
        if ( byte_140F0AE62 )
        {
          v118 = 1;
          v112 = 5;
          v113 = &v118;
          v114 = 1;
          v115 = 11;
          v116 = 0xFFFFF780000002C4uLL;
          v117 = 4;
          RtlSetSystemBootStatusEx((__int64)&v112, 2u);
        }
        *((_BYTE *)a1 + 12) = 1;
      }
      v44 = 5LL;
      if ( !*((_BYTE *)a1 + 24) )
        v44 = (unsigned int)dword_140F0AE8C;
      PopFlushVolumes(v44);
      if ( dword_140F0AE94 < dword_140F0AE8C )
        dword_140F0AE94 = dword_140F0AE8C;
      byte_140F0AE88 = 2;
      if ( byte_140F0AE62 )
      {
        PopFxPrepareDevicesForShutdown();
        IoFreePoDeviceNotifyList(*(_QWORD *)&qword_140F0AEA8 + 48LL);
        if ( dword_140F0AE74 == 2 )
          PopCriticalShutdownInProgress = 1;
        PopTransitionCheckpoint(8, 2);
        PopGracefulShutdown();
      }
      v45 = a1[13];
      KeMtrrComparisonFailed = 0;
      inited = PopInitSystemSleeperThread(v45, (struct _KEVENT *)(a1 + 56), ProcessId);
      a1[22] = inited;
      if ( inited < 0 )
      {
        *v3 = 20;
        goto LABEL_68;
      }
      if ( !byte_140F0AF20 )
      {
        ExWakeTimersPause();
        byte_140F0AF20 = 1;
      }
      *((_QWORD *)a1 + 19) = MEMORY[0xFFFFF78000000008];
      v47 = MEMORY[0xFFFFF78000000014];
      v48 = PopWakeAlarmTimeOverrideAc;
      *((_QWORD *)a1 + 20) = MEMORY[0xFFFFF78000000014];
      *((_QWORD *)a1 + 23) = 0LL;
      if ( v48 || PopWakeAlarmTimeOverrideDc )
      {
        *((_QWORD *)a1 + 23) = -3LL;
      }
      else
      {
        v49 = byte_140F0B8D4;
        if ( byte_140F0B8D4
          && dword_140F0AE8C == 5
          && !byte_140F0ADA0
          && dword_140F0AE74 != 2
          && v33
          && v34 != -1LL
          && v34 > v47 )
        {
          v50 = *((_QWORD *)a1 + 19);
          v51 = v34 - v47;
          *((_QWORD *)a1 + 39) = v51;
          v52 = v51 + v50;
          goto LABEL_115;
        }
        if ( !*((_DWORD *)PopPolicy + 22)
          || dword_140F0AE8C == 5
          || !PopIsDozeSupported((__int64)&PopCapabilities)
          || (dword_140F0AE6C & 0x40000000) != 0 )
        {
          if ( v49 && dword_140F0AE8C == 5 && !byte_140F0ADA0 && qword_140F0A9B8 && dword_140F0AE74 == 11 )
          {
            v56 = qword_140F0A9B8 - v47;
            *((_QWORD *)a1 + 39) = qword_140F0A9B8 - v47;
            v57 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset + v56;
            v52 = v57 + *((_QWORD *)a1 + 19);
            *((_QWORD *)a1 + 39) = v57;
LABEL_115:
            *((_QWORD *)a1 + 22) = v52;
            *((_QWORD *)a1 + 23) = -2LL;
          }
        }
        else
        {
          v54 = *((_QWORD *)a1 + 19);
          *((_QWORD *)a1 + 22) = v54;
          v55 = v54 + 10000000LL * *(unsigned int *)(v53 + 88);
          *((_QWORD *)a1 + 23) = -1LL;
          *((_QWORD *)a1 + 22) = v55;
        }
      }
      if ( *((_QWORD *)a1 + 23) == -1LL && !qword_140F0AF30 )
        qword_140F0AF30 = *((_QWORD *)a1 + 19);
      v58 = &qword_140F0AED8;
      memset_0(&qword_140F0AED8, 0, 0x48uLL);
      dword_140F0AED0 = 3;
      if ( *((_QWORD *)a1 + 23) == -3LL )
      {
        qword_140F0AEE8[0] = -3LL;
        qword_140F0AED8 = v48;
        qword_140F0AF00 = *((_QWORD *)a1 + 23);
        qword_140F0AEF0 = PopWakeAlarmTimeOverrideDc;
      }
      else if ( !byte_140F0ADA0 && dword_140F0AE74 != 14 )
      {
        v60 = a1 + 82;
        v61 = a1 + 83;
        if ( dword_140F0AE8C == 5 && *v60 != 1 && *v61 != 1 )
        {
          PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, a1 + 48, a1 + 49);
          if ( a1[48] || a1[49] )
          {
            *v60 = 0;
            *v61 = 0;
          }
        }
        if ( *((_QWORD *)a1 + 22) )
        {
          if ( *((_QWORD *)a1 + 23) == -2LL )
          {
            if ( *v60 )
            {
              qword_140F0AED8 = *((_QWORD *)a1 + 22);
              qword_140F0AEE8[0] = *((_QWORD *)a1 + 23);
            }
            if ( *v61 )
            {
              qword_140F0AEF0 = *((_QWORD *)a1 + 22);
              qword_140F0AF00 = *((_QWORD *)a1 + 23);
            }
          }
          else
          {
            do
            {
              *v58 = *((_QWORD *)a1 + 22);
              v58 += 3;
            }
            while ( (__int64)v58 < (__int64)&unk_140F0AF08 );
            v62 = qword_140F0AEE8;
            do
            {
              *v62 = *((_QWORD *)a1 + 23);
              v62 += 3;
            }
            while ( (__int64)v62 < (__int64)&qword_140F0AF18 );
          }
        }
        v63 = qword_140F0AF28;
        *((_QWORD *)a1 + 8) = qword_140F0AF28;
        v64 = v63;
        if ( v63 )
        {
          v65 = *((_QWORD *)a1 + 19) + 20000000LL;
          if ( v63 < v65 )
          {
            *((_QWORD *)a1 + 8) = v65;
            v64 = v65;
          }
        }
        if ( *v60 )
        {
          LOBYTE(v59) = *v60 == 2 && PopSimulate >= 0;
          *((_BYTE *)a1 + 169) = v59;
          v66 = (__int64 *)(a1 + 10);
          v67 = (__int64 *)(a1 + 50);
          NextWakeTime = ExGetNextWakeTime(v64 + 1, *((_QWORD *)a1 + 22), v59, (int)a1 + 40, (__int64)(a1 + 50));
          *((_BYTE *)a1 + 336) = NextWakeTime;
          if ( NextWakeTime )
          {
            qword_140F0AED8 = *v66;
            qword_140F0AEE8[0] = *v67;
          }
        }
        else
        {
          v66 = (__int64 *)(a1 + 10);
          v67 = (__int64 *)(a1 + 50);
        }
        if ( *v61 )
        {
          if ( *v61 != 2 || (LOBYTE(v59) = 1, PopSimulate < 0) )
            LOBYTE(v59) = 0;
          *((_BYTE *)a1 + 169) = v59;
          v69 = ExGetNextWakeTime(
                  (unsigned int)*((_QWORD *)a1 + 8) + 1,
                  *((_QWORD *)a1 + 22),
                  v59,
                  (_DWORD)v66,
                  (__int64)v67);
          *((_BYTE *)a1 + 336) = v69;
          if ( v69 )
          {
            qword_140F0AEF0 = *v66;
            qword_140F0AF00 = *v67;
          }
        }
      }
      qword_140F0AEE0[0] = qword_140F0AED8;
      if ( qword_140F0AED8 && qword_140F0AED8 < *((_QWORD *)a1 + 19) + (unsigned __int64)(unsigned int)a1[85] )
        qword_140F0AEE0[0] = *((_QWORD *)a1 + 19) + (unsigned int)a1[85];
      qword_140F0AEF8 = qword_140F0AEF0;
      if ( qword_140F0AEF0 && qword_140F0AEF0 < *((_QWORD *)a1 + 19) + (unsigned __int64)(unsigned int)a1[85] )
        qword_140F0AEF8 = *((_QWORD *)a1 + 19) + (unsigned int)a1[85];
      a1[80] = PopTransitionGetWakeTimerType(qword_140F0AEE8[0]);
      a1[81] = PopTransitionGetWakeTimerType(qword_140F0AF00);
      qword_140F0B070 = KeQueryPerformanceCounter(0LL).QuadPart;
      ExAcquireTimeRefreshLockExclusive();
      LOBYTE(v70) = 1;
      ExUpdateSystemTimeFromCmos(v70, 1LL);
      ExReleaseTimeRefreshLockExclusive();
      guard_dispatch_icall_no_overrides(qword_140F0AEE0[0]);
      PopBootStatCheckpointAvailable = 0;
      PpmCheckPausePpmEngineForSx(v72, v71, v73);
      PsLookupProcessByProcessId(ProcessId[0], &Process);
      PsLookupThreadByThreadId(ProcessId[1], &Thread);
      PopSetDevicesSystemState();
      *((_BYTE *)a1 + 96) = 1;
      PopNewWakeInfo();
      v74 = Thread;
      v75 = Process;
      *((_QWORD *)a1 + 38) = MEMORY[0xFFFFF78000000008];
      a1[28] = dword_140F0B70C;
      v76 = PopPushPowerStateTransitionRecordWithCallback((LARGE_INTEGER)v75, (LONGLONG)v74, 0LL, 0, 0LL);
      KeSetEvent((PRKEVENT)(a1 + 62), 0, 1u);
      KeWaitForSingleObject(a1 + 68, Executive, 0, 0, 0LL);
      if ( v76 >= 0 )
        PoDelistPowerStateTransitionBlocker(v78, v77, v79, v80);
      qword_140F0AE40 = 0LL;
      a1[22] = a1[75];
      PopSetPowerActionWatchdogState(2);
      CurrentThread = KeGetCurrentThread();
      v82 = dword_140F0AE8C;
      if ( PoResumeFromHibernate )
        v82 = dword_140F0AE94;
      dword_140F0AE98 = v82;
      PopTransitionCritialResumeThread = (__int64)CurrentThread;
      if ( (a1[2] & 8) != 0 )
      {
        a1[8] = 6;
      }
      else
      {
        a1[8] = dword_140F0AE8C;
        v17 = dword_140F0AE8C;
      }
      v83 = dword_140F0AE98;
      CheckStamp = a1[81];
      v84 = a1[80];
      a1[7] = dword_140F0AE98;
      PopDiagTracePostSleepNotification(v17, dword_140F0AE94, v83, qword_140F0AEE0[0], qword_140F0AEF8, v84, CheckStamp);
      if ( KeMtrrComparisonFailed )
        PopDiagTraceMtrrError();
      v16 = (unsigned int)a1[22];
      if ( (int)v16 < 0 && dword_140F0AE8C == 5 )
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
    PopReleasePolicyLock(v21, v14, v15, v16, ExplicitScope);
  if ( byte_140F0ADA0 )
  {
    qword_140F0B268 = KeQueryPerformanceCounter(0LL).QuadPart;
    dword_140F0AD84 = PopQpcTimeInMs(&qword_140F0B260, &qword_140F0B268);
  }
  if ( a1[22] >= 0 )
  {
    LOBYTE(v21) = 1;
    qword_140F0AEC0 = *((_QWORD *)a1 + 38);
    ExUpdateSystemTimeFromCmos(v21, 1LL);
    LOBYTE(v39) = 1;
    if ( (unsigned int)guard_dispatch_icall_no_overrides(v39) )
      *((_BYTE *)a1 + 168) = 1;
    qword_140F0B088 = KeQueryPerformanceCounter(0LL).QuadPart;
    PfPowerActionNotify(2LL, 0LL);
    qword_140F0AEB8 = MEMORY[0xFFFFF78000000008];
    PopDiagComputeEarlyHiberStats();
    if ( a1[7] == 4 )
      PopDiagTraceFirmwareS3Stats();
  }
  byte_140F0AE89 = 1;
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
  PpmCheckResumePpmEngineFromSx(v41, v40, v42);
  PopCurrentPowerStatePrecise((__int64)(a1 + 30), (__int64)&v106);
  if ( *((_BYTE *)a1 + 168) )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( PopIsDetailedSleepReliabilityDiagEnabled() )
    PopBootStatCheckpointAvailable = 1;
  else
    RtlBootStatusDisableFlushing(1);
  PopCheckpointSystemSleep(56);
  guard_dispatch_icall_no_overrides(0LL);
  a1[25] = PopNotifyTelemetryOsState(dword_140F0AE64, dword_140F0AE8C, dword_140F0AE94, a1[2], 0);
  PopCancelIgnoreBatteryStatusChange();
  PopExecuteOnTargetProcessors((__int64)&KeActiveProcessors, (__int64)PpmStartIllegalProcessorThrottleLogging, 0LL, 0LL);
  if ( *((_BYTE *)a1 + 48) )
  {
    PopReleasePolicyLock(v86, v85, v87, v88, ExplicitScopea);
    *((_BYTE *)a1 + 48) = 0;
  }
  if ( *((_BYTE *)a1 + 96) )
    PopProcessDeviceWakeSource();
  PoClearBroadcast();
  *(_QWORD *)&qword_140F0AEA8 = 0LL;
  PopFanSxExit();
  PopEsExitSleep();
  a1[29] = dword_140F0B70C;
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
    PopQueryMostRecentWakeSourceAttributes(&v119, &v108, &v107, &v120);
    SshSessionManagerTracePostSleepNotification(
      qword_140F0AEE0[0],
      qword_140F0AEF8,
      a1[80],
      a1[81],
      a1[33],
      a1[32],
      v108,
      v107,
      v119);
  }
  if ( !*((_BYTE *)a1 + 48) )
  {
    PopAcquirePolicyLock(v90, v89);
    *((_BYTE *)a1 + 48) = 1;
  }
  if ( a1[22] >= 0 )
  {
    PopUpdateSystemIdleContext(1);
    PopPowerAggregatorNotifySystemWake(a1[7]);
    LOBYTE(PopAction) = 0;
    if ( (unsigned __int64)dword_140F0AED0 >= 3 )
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
      qword_140F0AF28 = qword_140F0AEE0[3 * dword_140F0AED0];
      v91 = qword_140F0AEE8[3 * dword_140F0AED0];
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      switch ( v91 )
      {
        case -1LL:
          if ( PopDeferDoze(a1[82], a1[83], (_BYTE *)a1 + 120) )
          {
            dword_140F0AE64 = *a1;
            dword_140F0AE68 = a1[1];
          }
          else
          {
            dword_140F0AE64 = 2;
            dword_140F0AE68 = 5;
          }
          LOBYTE(PopAction) = PopAction | 2;
LABEL_214:
          *((_BYTE *)a1 + 216) = 0;
          break;
        case -2LL:
          if ( !qword_140F0AEC8 )
            qword_140F0AEC8 = qword_140F0AEB8;
          break;
        case -3LL:
          PopWakeAlarmTimeOverrideAc = 0LL;
          PopWakeAlarmTimeOverrideDc = 0LL;
          break;
        default:
          if ( dword_140F0B70C == 1 )
          {
            if ( !a1[83] )
            {
              dword_140F0AE64 = *a1;
              dword_140F0AE68 = a1[1];
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
  if ( byte_140F0AF20 && *((_BYTE *)a1 + 216) )
  {
    ExWakeTimersResume();
    byte_140F0AF20 = 0;
    qword_140F0AF28 = 0LL;
  }
  if ( PoResumeFromHibernate )
    PopBootLoaderTraceProcess();
  byte_140F0ADA0 = 0;
  PopResetActionDefaults();
  PopSetPowerActionState(2);
  PopReleasePolicyLock(v93, v92, v94, v95, ExplicitScopea);
  if ( PopPendingUserPresenceDuringSystemSleep )
    PoSetUserPresent(PopPendingUserPresenceMonitorOnReason);
  ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
  PopCheckForWork();
  if ( a1[22] >= 0 )
    PpmPerfReApplyStates(v97, v96, v98);
  dword_140F0AE74 = 17;
  qword_140F0B1F8 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140F06530;
  v99 = (void *)*((_QWORD *)a1 + 25);
  if ( v99 )
  {
    ExDeleteWakeTimerInfo(v99);
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
  v100 = a1[27];
  if ( v100 )
    PopDiagTraceStateTransitionFailurePoint(a1[22], v100);
  return (unsigned int)a1[22];
}
