/*
 * XREFs of NtPowerInformation @ 0x14096E740
 * Callers:
 *     PopRecordPoIrpBlackboxInformation @ 0x1404C38F0 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1404C9650 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1405D8260 (PopRecordPepWorkorderBlackboxInformation.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x140729428 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x1407595BC (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x140759660 (TtmpCalloutWatchdogCallback.c)
 *     TtmpStartCallout @ 0x140759E84 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x14075A004 (TtmpStopCallout.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x14082F4E0 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x14096E3E0 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14096E698 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     VslRegisterIumPowerCallbacks @ 0x140C08B24 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ExNotifyCallback @ 0x1402EACD0 (ExNotifyCallback.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     PopPrintEx @ 0x1403A9514 (PopPrintEx.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x1404258AC (PopPowerRequestCreateUserModeRequest.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestReferenceRelease @ 0x14046D3D0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14046D4E0 (PopPowerRequestReferenceAcquire.c)
 *     RtlStringCbLengthW @ 0x140479D40 (RtlStringCbLengthW.c)
 *     KeQueryActiveGroupCount @ 0x1404807A0 (KeQueryActiveGroupCount.c)
 *     KeQueryPrimaryGroupThread @ 0x14048489C (KeQueryPrimaryGroupThread.c)
 *     SSHSupportIsPlatformAoAc @ 0x140491754 (SSHSupportIsPlatformAoAc.c)
 *     PopDisksRegisteredForIdle @ 0x14049A1D8 (PopDisksRegisteredForIdle.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14049C294 (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopEventCalloutDispatch @ 0x1404A9BF8 (PopEventCalloutDispatch.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404ABF8C (PopDiagTraceSessionDisplayStateChange.c)
 *     ExGetWakeTimerList @ 0x1404C1614 (ExGetWakeTimerList.c)
 *     PopUpdatePowerButtonHoldState @ 0x1404CA980 (PopUpdatePowerButtonHoldState.c)
 *     PoPowerOffMonitor @ 0x1404CC3C0 (PoPowerOffMonitor.c)
 *     PpmSetSimulatedIdle @ 0x1404CDA0C (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x1404CF2B8 (PpmClearSimulatedIdle.c)
 *     PpmParkSetLpiCap @ 0x1404CF974 (PpmParkSetLpiCap.c)
 *     PopShutdownListenerInsertCallback @ 0x1404CFAE0 (PopShutdownListenerInsertCallback.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1404D1310 (PpmSetExitLatencySamplingPercentage.c)
 *     PopCapabilityCheck @ 0x1404D6940 (PopCapabilityCheck.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1404D7E78 (PpmClearExitLatencySamplingPercentage.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1405C86A4 (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopSetHiberPersistedRegValue @ 0x1406EA010 (PopSetHiberPersistedRegValue.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1406EBB20 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopSetHiberFileType @ 0x1406EDE08 (PopSetHiberFileType.c)
 *     PopSetHiberFileSize @ 0x1406EE560 (PopSetHiberFileSize.c)
 *     PopCurrentSystemPowerSourceState @ 0x14074EA10 (PopCurrentSystemPowerSourceState.c)
 *     PopEtEnergyTrackerCreate @ 0x140751240 (PopEtEnergyTrackerCreate.c)
 *     ExCheckFullProcessInformationAccess @ 0x140824EB8 (ExCheckFullProcessInformationAccess.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140861F50 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestActionInfo @ 0x140862028 (PopPowerRequestActionInfo.c)
 *     PspIsContextAdmin @ 0x1408D9DA4 (PspIsContextAdmin.c)
 *     PopDiagTraceAppPowerMessage @ 0x1409224A8 (PopDiagTraceAppPowerMessage.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     PopEtEnergyTrackerQuery @ 0x140960110 (PopEtEnergyTrackerQuery.c)
 *     PopProcessSessionDisplayStateChange @ 0x140963FE0 (PopProcessSessionDisplayStateChange.c)
 *     TtmIsEnabled @ 0x140964038 (TtmIsEnabled.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409649CC (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x14096526C (PopDiagTraceSessionStates.c)
 *     PopGetSettingNotificationName @ 0x1409663C4 (PopGetSettingNotificationName.c)
 *     PopProcessorInformation @ 0x140A018FC (PopProcessorInformation.c)
 *     PopLogSleepDisabled @ 0x140A0FAF0 (PopLogSleepDisabled.c)
 *     PopApplyPolicy @ 0x140A0FFD0 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x140A102AC (PopVerifySystemPowerPolicy.c)
 *     PopFilterCapabilities @ 0x140A10C3C (PopFilterCapabilities.c)
 *     PopBlackBoxUpdate @ 0x140A147DC (PopBlackBoxUpdate.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopIsRunningAsLocalSystem @ 0x140A1C494 (PopIsRunningAsLocalSystem.c)
 *     PopUpdateConsoleDisplayState @ 0x140A1DEFC (PopUpdateConsoleDisplayState.c)
 *     PopSetDisplayStatus @ 0x140A22500 (PopSetDisplayStatus.c)
 *     PopSessionWinlogonNotification @ 0x140A22590 (PopSessionWinlogonNotification.c)
 *     PopSessionConnectionChange @ 0x140A226D0 (PopSessionConnectionChange.c)
 *     PopFreeSessionState @ 0x140A228FC (PopFreeSessionState.c)
 *     PopCurrentPowerStatePrecise @ 0x140A22BFC (PopCurrentPowerStatePrecise.c)
 *     PopCurrentPowerState @ 0x140A22CB0 (PopCurrentPowerState.c)
 *     PopScreenOff @ 0x140A2C5B8 (PopScreenOff.c)
 *     TtmInitCurrentSession @ 0x140A2D29C (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x140A2D58C (TtmDispatchApi.c)
 *     TtmNotifySessionDisplayBurst @ 0x140A2DB84 (TtmNotifySessionDisplayBurst.c)
 *     PopLoggingInformation @ 0x140A32E70 (PopLoggingInformation.c)
 *     PopBatteryDeviceState @ 0x140A5FF68 (PopBatteryDeviceState.c)
 *     PopDiagTraceServiceNotification @ 0x140A62924 (PopDiagTraceServiceNotification.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x140A63E84 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopChangeCapability @ 0x140A65B60 (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x140A65B7C (PopResetCurrentPolicies.c)
 *     PopGetSettingValue @ 0x140A6C700 (PopGetSettingValue.c)
 *     PopCapturePlatformRole @ 0x140A6D278 (PopCapturePlatformRole.c)
 *     PopSuspendResumePdc @ 0x140A7707C (PopSuspendResumePdc.c)
 *     PopGetPowerRequestListInfo @ 0x140A7A0E0 (PopGetPowerRequestListInfo.c)
 *     PopReadHiberbootPolicy @ 0x140A7A7B8 (PopReadHiberbootPolicy.c)
 *     PopPdcCsDeviceNotification @ 0x140A84B78 (PopPdcCsDeviceNotification.c)
 *     PopUmpoSendLegacyEvent @ 0x140A87C14 (PopUmpoSendLegacyEvent.c)
 *     PopAcquireTransitionLock @ 0x140A8DB1C (PopAcquireTransitionLock.c)
 *     PopThermalProcessUsermodeEvent @ 0x140A9AFB4 (PopThermalProcessUsermodeEvent.c)
 *     PopReleaseTransitionLock @ 0x140AA0354 (PopReleaseTransitionLock.c)
 *     PopGetWakeSource @ 0x140AA084C (PopGetWakeSource.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x140AA47F0 (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C10 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopEnforceResiliencyScenarios @ 0x140AA6AF0 (PopEnforceResiliencyScenarios.c)
 *     TtmCleanupCurrentSession @ 0x140AA7F5C (TtmCleanupCurrentSession.c)
 *     PopPdcInvocation @ 0x140AAE3A4 (PopPdcInvocation.c)
 *     PopHibernateEvaluation @ 0x140AAE8C4 (PopHibernateEvaluation.c)
 *     PpmSetSimulatedLoad @ 0x140AB0620 (PpmSetSimulatedLoad.c)
 *     PopBlackBoxDirectAccess @ 0x140AB0734 (PopBlackBoxDirectAccess.c)
 *     PpmParkApplyForcedMask @ 0x140AB1350 (PpmParkApplyForcedMask.c)
 *     PpmClearSimulatedLoad @ 0x140AB1848 (PpmClearSimulatedLoad.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140AB3E78 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopApplyAdminPolicy @ 0x140AB47E8 (PopApplyAdminPolicy.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140AB57B8 (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PpmParkClearForcedMask @ 0x140AB5804 (PpmParkClearForcedMask.c)
 *     PopSendSuspendResumeNotifications @ 0x140AB70EC (PopSendSuspendResumeNotifications.c)
 *     PopMonitorInvocation @ 0x140AC3F70 (PopMonitorInvocation.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     PopInitPlatformSettings @ 0x140C54A50 (PopInitPlatformSettings.c)
 */

NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  __int64 v9; // rcx
  char *v10; // r8
  __int64 v11; // r9
  unsigned int *Pool2; // r15
  __int64 v13; // rdx
  ULONG v14; // r13d
  void *v15; // r14
  _WNF_STATE_NAME *v16; // r12
  signed int v17; // esi
  unsigned __int64 v18; // rax
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // ebx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  LUID v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // rax
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  char **v37; // rax
  __int64 v38; // r10
  int v39; // edx
  int v40; // edx
  int v41; // edx
  int v42; // edx
  bool v43; // zf
  int v44; // esi
  int v45; // esi
  int v46; // esi
  int v47; // esi
  unsigned __int16 PrimaryGroupThread; // ax
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  bool v57; // sf
  __int64 v58; // rcx
  __int128 *v59; // rax
  int v60; // esi
  int v61; // esi
  int v62; // esi
  int v63; // esi
  __int64 *v64; // rax
  int v65; // esi
  int v66; // esi
  int v67; // esi
  int v68; // esi
  int v69; // eax
  NTSTATUS SettingValue; // eax
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // ecx
  unsigned int v74; // eax
  int v75; // esi
  int v76; // esi
  int v77; // esi
  int v78; // esi
  __int64 v79; // rax
  _DWORD *v80; // rsi
  void *v81; // rax
  NTSTATUS WakeSource; // eax
  PVOID v83; // rcx
  int v85; // ecx
  __int64 v86; // rax
  unsigned int v87; // r13d
  int v88; // ebx
  char v89; // al
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  NTSTATUS inserted; // eax
  int v98; // esi
  int v99; // esi
  int v100; // esi
  int v101; // esi
  unsigned int *v102; // rdx
  int v103; // eax
  USHORT v104; // bx
  int WakeTimerList; // eax
  int v106; // esi
  int v107; // esi
  int v108; // esi
  int v109; // esi
  int v110; // esi
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rcx
  int v118; // esi
  int v119; // esi
  int v120; // esi
  int v121; // esi
  unsigned int v122; // eax
  __int64 v123; // rcx
  __int64 v124; // rbx
  int v125; // esi
  int v126; // esi
  int v127; // esi
  int v128; // esi
  int v129; // ecx
  char **v130; // rax
  unsigned int v131; // eax
  int UserModeRequest; // eax
  int v133; // esi
  int v134; // esi
  int v135; // esi
  char v136; // r13
  __int64 v137; // rcx
  unsigned int SessionId; // eax
  bool v139; // si
  int v140; // esi
  int v141; // esi
  int v142; // esi
  int v143; // esi
  unsigned int v144; // edx
  _DWORD *v145; // rcx
  int v146; // ebx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rcx
  int v154; // esi
  int v155; // esi
  int v156; // esi
  int v157; // esi
  void *ExplicitScope; // [rsp+20h] [rbp-748h]
  ULONG Length; // [rsp+50h] [rbp-718h]
  unsigned int Length_4; // [rsp+54h] [rbp-714h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+58h] [rbp-710h]
  _BYTE v162[3]; // [rsp+59h] [rbp-70Fh] BYREF
  int v163; // [rsp+5Ch] [rbp-70Ch]
  PVOID Src; // [rsp+60h] [rbp-708h] BYREF
  char v165; // [rsp+68h] [rbp-700h]
  char v166[7]; // [rsp+69h] [rbp-6FFh] BYREF
  PVOID v167; // [rsp+70h] [rbp-6F8h]
  int *v168; // [rsp+78h] [rbp-6F0h] BYREF
  POWER_INFORMATION_LEVEL v170; // [rsp+84h] [rbp-6E4h]
  __int64 v171; // [rsp+88h] [rbp-6E0h] BYREF
  unsigned int *v172; // [rsp+90h] [rbp-6D8h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-6D0h] BYREF
  __int64 v174; // [rsp+A8h] [rbp-6C0h] BYREF
  __int64 v175; // [rsp+B0h] [rbp-6B8h]
  __int64 v176; // [rsp+B8h] [rbp-6B0h]
  int v177; // [rsp+C0h] [rbp-6A8h]
  __int64 v178; // [rsp+C4h] [rbp-6A4h]
  int v179; // [rsp+CCh] [rbp-69Ch]
  LUID v180; // [rsp+D0h] [rbp-698h]
  char *v181; // [rsp+E0h] [rbp-688h] BYREF
  char *v182; // [rsp+E8h] [rbp-680h]
  __int64 v183; // [rsp+F0h] [rbp-678h] BYREF
  BOOL v184; // [rsp+F8h] [rbp-670h]
  int v185; // [rsp+FCh] [rbp-66Ch]
  __int64 v186; // [rsp+100h] [rbp-668h]
  int v187; // [rsp+108h] [rbp-660h]
  int v188; // [rsp+10Ch] [rbp-65Ch]
  char v189; // [rsp+110h] [rbp-658h]
  char v190; // [rsp+111h] [rbp-657h]
  int v191; // [rsp+114h] [rbp-654h]
  char IsEnabled; // [rsp+118h] [rbp-650h]
  bool v193; // [rsp+119h] [rbp-64Fh]
  wchar_t psz[32]; // [rsp+6E0h] [rbp-88h] BYREF

  v170 = InformationLevel;
  v166[0] = 0;
  memset_0(&v181, 0, 0x600uLL);
  LODWORD(v172) = 0;
  v171 = 0LL;
  Src = 0LL;
  Length_4 = 0;
  Pool2 = 0LL;
  v167 = 0LL;
  P[0] = 0LL;
  LOBYTE(v13) = 0;
  v165 = 0;
  v162[0] = 0;
  LODWORD(v168) = 0;
  v163 = 0;
  if ( (unsigned int)InformationLevel > PowerInformationLevelMaximum )
    goto LABEL_284;
  LOBYTE(v9) = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v9;
  v14 = InputBuffer != 0LL ? InputBufferLength : 0;
  v15 = (void *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
  P[1] = v15;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v16 = (_WNF_STATE_NAME *)((unsigned __int64)OutputBuffer & -(__int64)(Length != 0));
  if ( (_BYTE)v9 )
  {
    v17 = v170;
    if ( (unsigned int)v170 <= ProcessorCap && (v13 = 0x7C30200C0LL, _bittest64(&v13, v170))
      || (v18 = (unsigned int)(v170 - 39), (unsigned int)v18 <= 0x3A)
      && (v13 = 0x4104F0071C2E50FLL, _bittest64(&v13, v18)) )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      InputBuffer = v15;
      Pool2 = (unsigned int *)v167;
      goto LABEL_285;
    }
    v20 = (unsigned int)(v170 - 37);
    if ( (unsigned int)v20 <= 0x3A && (v13 = 0x608801808940903LL, _bittest64(&v13, v20))
      || (unsigned int)(v170 - 2) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, v166);
      v163 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v15;
        Pool2 = (unsigned int *)v167;
        goto LABEL_285;
      }
      if ( v166[0] )
      {
        if ( v17 != 73 && v17 != 88 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v163 = -1073741790;
          InputBuffer = v15;
          Pool2 = (unsigned int *)v167;
          goto LABEL_285;
        }
        if ( !PopCapabilityCheck(L"ID_CAP_SCREENOFF") )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v163 = -1073741790;
          InputBuffer = v15;
          Pool2 = (unsigned int *)v167;
          goto LABEL_285;
        }
      }
      LOBYTE(v9) = PreviousMode;
    }
    else
    {
      IsAppContainerOrIdentifyLevelContext = v163;
    }
    if ( (unsigned int)(v17 - 92) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = ExCheckFullProcessInformationAccess(v9);
      v163 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v15;
        Pool2 = (unsigned int *)v167;
        goto LABEL_285;
      }
    }
    v21 = (unsigned int)(v17 - 28);
    if ( (unsigned int)v21 <= 0x32 )
    {
      v9 = 0x4000000420001LL;
      if ( _bittest64(&v9, v21) )
      {
        if ( !PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v163 = -1073741790;
          InputBuffer = v15;
          Pool2 = (unsigned int *)v167;
          goto LABEL_285;
        }
      }
    }
    if ( v17 == 71 && !(unsigned __int8)PopIsRunningAsLocalSystem(v9) )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      v163 = -1073741790;
      InputBuffer = v15;
      Pool2 = (unsigned int *)v167;
      goto LABEL_285;
    }
    if ( v15 )
    {
      v22 = (unsigned int)(v17 - 11);
      if ( (unsigned int)v22 > 0x3D || (v23 = 0x2001800900000001LL, !_bittest64(&v23, v22)) )
      {
        if ( PsIsCurrentThreadInServerSilo() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741637;
          v163 = -1073741637;
          InputBuffer = v15;
          Pool2 = (unsigned int *)v167;
          goto LABEL_285;
        }
      }
      if ( v17 == 9
        || (v24 = (unsigned int)(v17 - 38), (unsigned int)v24 <= 0x39)
        && (v25 = 0x218000004422401LL, _bittest64(&v25, v24)) )
      {
        if ( !PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v163 = -1073741790;
          InputBuffer = v15;
          Pool2 = (unsigned int *)v167;
          goto LABEL_285;
        }
      }
      if ( (unsigned int)(v17 - 2) > 1 )
      {
        v26 = (unsigned int)(v17 - 37);
        if ( (unsigned int)v26 > 0x3D || (v27 = 0x2FAE005C28F40BC3LL, !_bittest64(&v27, v26)) )
        {
          if ( v17 != 11 )
          {
            v28 = SeShutdownPrivilege;
            if ( v17 == 10 )
              v28 = SeCreatePagefilePrivilege;
            v180 = v28;
            if ( !SeSinglePrivilegeCheck(v28, PreviousMode) )
            {
              IsAppContainerOrIdentifyLevelContext = -1073741727;
              v163 = -1073741727;
              InputBuffer = v15;
              Pool2 = (unsigned int *)v167;
              goto LABEL_285;
            }
          }
        }
      }
      if ( v14 )
      {
        v29 = (unsigned __int64)v15 + v14;
        if ( v29 > 0x7FFFFFFF0000LL || v29 < (unsigned __int64)v15 )
          IsAppContainerOrIdentifyLevelContext = v163;
      }
      if ( v14 > 0x40 )
      {
        Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
        v167 = Pool2;
        if ( !Pool2 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741670;
          v163 = -1073741670;
          InputBuffer = v15;
          goto LABEL_285;
        }
      }
      else
      {
        Pool2 = (unsigned int *)psz;
        v167 = psz;
      }
      memmove(Pool2, v15, v14);
    }
    else
    {
      Pool2 = (unsigned int *)v167;
    }
    if ( v16 )
      ProbeForWrite(v16, Length, 1u);
    v30 = 1LL;
    LOBYTE(v13) = v165;
  }
  else
  {
    Pool2 = (unsigned int *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
    v167 = Pool2;
    v30 = 1LL;
    IsAppContainerOrIdentifyLevelContext = v163;
    v17 = v170;
  }
  if ( (unsigned int)v17 > 0x1F || (v31 = -234812256, !_bittest(&v31, v17)) )
  {
    v32 = (unsigned int)(v17 - 38);
    if ( (unsigned int)v32 > 0x3C || (v10 = (char *)0x1FFFE3BEF5BE36EDLL, !_bittest64((const __int64 *)&v10, v32)) )
    {
      PopAcquirePolicyLock(1LL, v13);
      v30 = 1LL;
      LOBYTE(v13) = 1;
      v165 = 1;
    }
  }
  if ( v17 > 50 )
  {
    if ( v17 > 75 )
    {
      if ( v17 <= 87 )
      {
        if ( v17 == 87 )
        {
          if ( !Pool2 )
            goto LABEL_283;
          if ( v14 < 8 )
            goto LABEL_283;
          v146 = *Pool2;
          v13 = Pool2[1];
          if ( *Pool2 - 97 <= 0xF9E || v146 >= 4107 )
            goto LABEL_283;
          if ( (unsigned int)(v146 - 4096) > 0xA )
          {
            WakeSource = PopPowerInformationInternal(
                           v146,
                           v13,
                           (_DWORD)Pool2,
                           v14,
                           (__int64)v16,
                           Length,
                           (__int64)&Src,
                           (__int64)&Length_4,
                           (__int64)v162);
          }
          else
          {
            if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
              && !PopCapabilityCheck(L"terminalPowerManagement") )
            {
              IsAppContainerOrIdentifyLevelContext = -1073741727;
              goto LABEL_106;
            }
            WakeSource = TtmDispatchApi(
                           v146,
                           (_DWORD)Pool2,
                           v14,
                           (_DWORD)v16,
                           Length,
                           (__int64)&Src,
                           (__int64)&Length_4,
                           (__int64)v162);
          }
          goto LABEL_268;
        }
        if ( v17 > 81 )
        {
          v140 = v17 - 82;
          if ( !v140 )
            goto LABEL_501;
          v141 = v140 - 1;
          if ( !v141 )
          {
            if ( !Pool2 && v16 )
            {
              PopCurrentPowerStatePrecise(&v181, 0LL);
              goto LABEL_85;
            }
            goto LABEL_283;
          }
          v142 = v141 - 1;
          if ( !v142 )
          {
            if ( !Pool2 || v16 )
              goto LABEL_283;
            if ( v14 < 0x10 || v14 < 2 * (unsigned int)*((unsigned __int16 *)Pool2 + 6) + 14 )
              goto LABEL_105;
            v69 = PopThermalProcessUsermodeEvent(Pool2, v13);
            goto LABEL_623;
          }
          v143 = v142 - 1;
          if ( v143 )
          {
            if ( v143 == 1 && Pool2 && v16 )
            {
              IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW((STRSAFE_PCNZWCH)Pool2, v14, 0LL);
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_285;
              IsAppContainerOrIdentifyLevelContext = PopBatteryDeviceState(Pool2, &v181);
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_285;
              Src = &v181;
              Length_4 = 52;
              goto LABEL_625;
            }
            goto LABEL_283;
          }
          v144 = Pool2[2];
          v145 = *(_DWORD **)Pool2;
          if ( *((_BYTE *)Pool2 + 12) )
            inserted = PopPowerRequestReferenceAcquire(v145, v144);
          else
            inserted = PopPowerRequestReferenceRelease(v145, v144);
          goto LABEL_331;
        }
        if ( v17 == 81 )
          goto LABEL_501;
        v133 = v17 - 76;
        if ( !v133 )
        {
          if ( Pool2 || !v16 )
            goto LABEL_283;
          LODWORD(v181) = qword_140F0B130;
          v182 = (char *)qword_140F0B2C8;
          v183 = qword_140F0B2D0;
          if ( !PopSleepStats )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741823;
            goto LABEL_106;
          }
          v59 = (__int128 *)&v181;
          goto LABEL_157;
        }
        v134 = v133 - 1;
        if ( !v134 )
        {
          if ( !Pool2 && !v16 )
          {
            v136 = PopErrataReportingIncorrectLidState;
            if ( !TtmIsEnabled() )
            {
              v139 = 0;
              if ( !PopLidOpened )
              {
                v137 = 1LL;
                v139 = PopConsoleExternalDisplayConnected == 0;
              }
              if ( !v139 )
                PopEventCalloutDispatch(10, 6LL);
              if ( !v136 )
              {
                LOBYTE(v10) = v139;
                PopDiagTraceDisplayBurstWin32kCallout(v137, v13, v10);
              }
              goto LABEL_625;
            }
            SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            if ( SessionId == -1 )
              IsAppContainerOrIdentifyLevelContext = -1073740715;
            else
              IsAppContainerOrIdentifyLevelContext = TtmNotifySessionDisplayBurst(SessionId, 6LL);
            goto LABEL_94;
          }
          goto LABEL_283;
        }
        v135 = v134 - 1;
        if ( !v135 )
        {
          if ( PreviousMode != 1 )
            goto LABEL_248;
          if ( v16 || Length )
            goto LABEL_283;
          if ( !Pool2 )
          {
            PpmClearExitLatencySamplingPercentage(1LL, v13, (unsigned int)v10);
            goto LABEL_625;
          }
          if ( v14 != 4 )
            goto LABEL_283;
          inserted = PpmSetExitLatencySamplingPercentage(Pool2, v13, (unsigned int)v10);
          goto LABEL_331;
        }
        v101 = v135 - 1;
        if ( !v101 )
          goto LABEL_501;
LABEL_500:
        if ( v101 != 1 )
          goto LABEL_283;
        goto LABEL_501;
      }
      if ( v17 > 93 )
      {
        v154 = v17 - 94;
        if ( !v154 )
        {
          if ( !Pool2 || v16 || Length )
            goto LABEL_283;
          if ( v14 != 32 )
            goto LABEL_105;
          LOBYTE(v13) = PreviousMode;
          v69 = PopBlackBoxUpdate(Pool2, v13);
          goto LABEL_623;
        }
        v155 = v154 - 1;
        if ( !v155 )
        {
          if ( Pool2 && v14 == 1 && !v16 )
          {
            ExNotifyCallback(PipCslCallbackObject, Pool2, 0LL);
            goto LABEL_625;
          }
          goto LABEL_283;
        }
        v156 = v155 - 1;
        if ( !v156 )
        {
          if ( !Pool2 || v16 )
            goto LABEL_283;
          if ( !v14 )
            goto LABEL_105;
          LOBYTE(v30) = *(_BYTE *)Pool2;
          v69 = PopSendSuspendResumeNotifications(v30, v13);
          goto LABEL_623;
        }
        v157 = v156 - 1;
        if ( !v157 )
        {
          if ( !Pool2 || !v14 || !v16 || !Length )
            goto LABEL_283;
          if ( v14 >= 0x20 )
          {
            v87 = Length;
            if ( Length >= 0x10 )
            {
              IsAppContainerOrIdentifyLevelContext = PopBlackBoxDirectAccess(Pool2, &v181);
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_285;
              Src = &v181;
              Length_4 = 16;
              goto LABEL_626;
            }
          }
          goto LABEL_105;
        }
        if ( v157 != 1 )
          goto LABEL_283;
        if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( !Pool2 && v16 )
          {
            PopCurrentSystemPowerSourceState((__int64)&v181);
            Src = &v181;
            Length_4 = 68;
            goto LABEL_625;
          }
          goto LABEL_283;
        }
        goto LABEL_458;
      }
      if ( v17 == 93 )
      {
        if ( !Pool2 || !v16 )
          goto LABEL_283;
        if ( v14 == 8 )
        {
          v87 = Length;
          if ( Length >= 0xC )
          {
            IsAppContainerOrIdentifyLevelContext = PopEtEnergyTrackerQuery(*(_QWORD *)Pool2, (__int64)v16, Length);
            InputBuffer = v15;
            if ( IsAppContainerOrIdentifyLevelContext < 0 )
              goto LABEL_285;
            goto LABEL_626;
          }
        }
        goto LABEL_105;
      }
      if ( v17 != 88 )
      {
        if ( v17 == 89 )
        {
          if ( !Pool2 || !v16 )
            goto LABEL_283;
          if ( v14 < 4 )
            goto LABEL_105;
          PopAcquireTransitionLock(6LL);
          PopAcquirePolicyLock(v148, v147);
          IsAppContainerOrIdentifyLevelContext = PopSetHiberFileType(*Pool2, &v171, (unsigned int *)&v168);
          PopReleasePolicyLock(v150, v149, v151, v152, ExplicitScope);
          v117 = 6LL;
          goto LABEL_397;
        }
        if ( v17 == 90 )
        {
          if ( Pool2 && v14 >= 4 && !v16 )
          {
            PopUpdatePowerButtonHoldState(*Pool2 != 0);
            goto LABEL_625;
          }
          goto LABEL_283;
        }
        if ( v17 != 91 )
        {
          if ( !Pool2 || !v16 )
            goto LABEL_283;
          if ( v14 != 12 )
            goto LABEL_105;
          v87 = Length;
          if ( Length != 8 )
            goto LABEL_105;
          UserModeRequest = PopEtEnergyTrackerCreate((int *)Pool2, (HANDLE *)&v181);
          goto LABEL_486;
        }
        if ( SSHSupportIsPlatformAoAc() )
        {
          if ( Pool2 && v14 == 336 && v16 )
          {
            LOBYTE(v181) = PopFxIsDevicePotentialDripsConstraint(Pool2);
            Src = &v181;
            Length_4 = 1;
            IsAppContainerOrIdentifyLevelContext = 0;
            goto LABEL_625;
          }
          goto LABEL_283;
        }
        goto LABEL_458;
      }
    }
    else
    {
      if ( v17 == 75 )
      {
        if ( Pool2 || !v16 )
          goto LABEL_283;
        LODWORD(v181) = PopCapturePlatformRole(1LL, v13);
        goto LABEL_186;
      }
      if ( v17 <= 63 )
      {
        if ( v17 == 63 )
        {
          if ( !Pool2 && !v16 )
          {
            v124 = (unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            PopPrintEx(3, (int)"PopAdaptive: Session %u is closed\n", v124);
            PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED, v124, 0);
            PopFreeSessionState((unsigned int)v124);
            if ( TtmIsEnabled() )
            {
              PopPowerRequestNotifyTtmSessionUninitialized();
              TtmCleanupCurrentSession();
            }
            goto LABEL_93;
          }
          goto LABEL_283;
        }
        if ( v17 > 57 )
        {
          v118 = v17 - 58;
          if ( v118 )
          {
            v119 = v118 - 1;
            if ( v119 )
            {
              v120 = v119 - 1;
              if ( v120 )
              {
                v121 = v120 - 1;
                if ( v121 )
                {
                  if ( v121 == 1 )
                  {
                    if ( Pool2 )
                    {
                      if ( v14 == 40 )
                      {
                        if ( v16 )
                        {
                          v87 = Length;
                          if ( Length == 16 )
                          {
                            v122 = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                            PopSessionConnectionChange(v122, v167, v16);
                            v123 = (unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                            Pool2 = (unsigned int *)v167;
                            LOBYTE(v10) = *(_BYTE *)v167;
                            LOBYTE(v13) = *((_BYTE *)v167 + 1);
                            if ( qword_140E67228 )
                              guard_dispatch_icall_no_overrides(v123);
                            IsAppContainerOrIdentifyLevelContext = v163;
                            goto LABEL_626;
                          }
                        }
                      }
                    }
                  }
                }
                else if ( Pool2 )
                {
                  if ( v14 == 16 )
                  {
                    if ( v16 )
                    {
                      v87 = Length;
                      if ( Length == 8 )
                      {
                        IsAppContainerOrIdentifyLevelContext = -1073741637;
                        goto LABEL_626;
                      }
                    }
                  }
                }
                goto LABEL_283;
              }
              if ( !Pool2 || v16 )
              {
LABEL_283:
                InputBuffer = v15;
LABEL_284:
                IsAppContainerOrIdentifyLevelContext = -1073741811;
                goto LABEL_285;
              }
              if ( v14 >= 8 )
              {
                PopEnforceResiliencyScenarios(Pool2, v13);
                goto LABEL_625;
              }
LABEL_105:
              IsAppContainerOrIdentifyLevelContext = -1073741789;
LABEL_106:
              InputBuffer = v15;
              goto LABEL_285;
            }
            if ( !Pool2 || !v16 )
              goto LABEL_283;
            if ( v14 != 16 || Length < 4 )
              goto LABEL_105;
            SettingValue = PopGetSettingValue(Pool2, v16, Length);
          }
          else
          {
            if ( !v16 )
              goto LABEL_283;
            if ( v15 && v14 != 20 || Length != 8 )
              goto LABEL_105;
            SettingValue = PopGetSettingNotificationName((__int64)Pool2, v16);
          }
          goto LABEL_426;
        }
        if ( v17 == 57 )
          goto LABEL_501;
        v106 = v17 - 51;
        if ( v106 )
        {
          v107 = v106 - 1;
          if ( !v107 )
            goto LABEL_501;
          v108 = v107 - 1;
          if ( !v108 )
            goto LABEL_501;
          v109 = v108 - 1;
          if ( !v109 )
            goto LABEL_501;
          v110 = v109 - 1;
          if ( v110 )
          {
            if ( v110 != 1 || !Pool2 || !v16 )
              goto LABEL_283;
            if ( v14 == 8 )
            {
              v87 = Length;
              if ( Length == 4 )
              {
                IsAppContainerOrIdentifyLevelContext = PpmParkSetLpiCap(*Pool2, Pool2[1], (unsigned int *)&v181);
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_106;
                Src = &v181;
                Length_4 = 4;
                goto LABEL_626;
              }
            }
            goto LABEL_105;
          }
          if ( !(_BYTE)KdDebuggerEnabled )
            goto LABEL_248;
          if ( !Pool2 || v16 )
            goto LABEL_283;
          if ( v14 == 8 )
          {
            WakeSource = PpmSetSimulatedIdle((__int64)Pool2);
            goto LABEL_268;
          }
          if ( v14 == 4 )
          {
            WakeSource = PpmClearSimulatedIdle((_PROCESSOR_NUMBER *)Pool2);
            goto LABEL_268;
          }
          goto LABEL_275;
        }
        if ( !Pool2 || !v16 )
          goto LABEL_283;
        if ( v14 < 4 )
          goto LABEL_105;
        PopAcquireTransitionLock(5LL);
        PopAcquirePolicyLock(v112, v111);
        IsAppContainerOrIdentifyLevelContext = PopSetHiberFileSize(*Pool2, &v171, (unsigned int *)&v168);
        PopReleasePolicyLock(v114, v113, v115, v116, ExplicitScope);
        v117 = 5LL;
LABEL_397:
        PopReleaseTransitionLock(v117);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          v171 = (unsigned int)v168;
        v64 = &v171;
        goto LABEL_190;
      }
      if ( v17 <= 69 )
      {
        if ( v17 == 69 )
        {
          if ( !Pool2 && !v16 )
          {
            IsAppContainerOrIdentifyLevelContext = PopInitPlatformSettings(1LL, v13);
            byte_140F0B8D4 = SSHSupportIsPlatformAoAc();
            goto LABEL_106;
          }
          goto LABEL_283;
        }
        v125 = v17 - 64;
        if ( !v125 )
        {
          if ( Pool2 && v14 == 8 && !v16 )
          {
            v131 = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            Pool2 = (unsigned int *)v167;
            PopSessionWinlogonNotification(v131, v167);
            IsAppContainerOrIdentifyLevelContext = v163;
            goto LABEL_625;
          }
          goto LABEL_283;
        }
        v126 = v125 - 1;
        if ( v126 )
        {
          v127 = v126 - 1;
          if ( v127 )
          {
            v128 = v127 - 1;
            if ( v128 )
            {
              if ( v128 != 1 || !Pool2 || v14 != 8 || v16 || Length )
                goto LABEL_283;
              SettingValue = PopMonitorInvocation(Pool2, v13);
            }
            else
            {
              if ( !Pool2 || v14 != 224 || v16 && Length != 152 )
                goto LABEL_283;
              SettingValue = PopPdcInvocation(Pool2, v16);
            }
            goto LABEL_426;
          }
          if ( Pool2 || !v16 )
            goto LABEL_283;
          LOBYTE(v181) = SSHSupportIsPlatformAoAc();
          v130 = &v181;
LABEL_456:
          Src = v130;
          Length_4 = v129;
          goto LABEL_625;
        }
        if ( !PsIsCurrentThreadInServerSilo() )
        {
          if ( Pool2 || !v16 )
            goto LABEL_283;
          PopFilterCapabilities(&PopCapabilities, &v181);
          if ( BYTE2(v183) )
            PopReadHiberbootPolicy((char *)&v183 + 2);
          v130 = (char **)((char *)&v183 + 2);
          v129 = 1;
          goto LABEL_456;
        }
LABEL_458:
        IsAppContainerOrIdentifyLevelContext = -1073741637;
        goto LABEL_106;
      }
      switch ( v17 )
      {
        case 'F':
          PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
          goto LABEL_625;
        case 'G':
          goto LABEL_458;
        case 'H':
LABEL_481:
          if ( !Pool2 || !v16 )
            goto LABEL_283;
          if ( v14 != 40 )
            goto LABEL_105;
          v87 = Length;
          if ( Length != 8 )
            goto LABEL_105;
          LOBYTE(v13) = v17 == 72;
          UserModeRequest = PopPowerRequestCreateUserModeRequest((int)Pool2, v13, (HANDLE *)&v181);
LABEL_486:
          IsAppContainerOrIdentifyLevelContext = UserModeRequest;
          InputBuffer = v15;
          if ( UserModeRequest < 0 )
            goto LABEL_285;
          Src = &v181;
          Length_4 = 8;
          goto LABEL_626;
      }
      if ( v17 != 73 )
      {
        if ( !PreviousMode )
        {
          if ( !Pool2 || v14 != 16 || v16 || Length )
            goto LABEL_283;
          SettingValue = PopPdcCsDeviceNotification(Pool2, v13);
          goto LABEL_426;
        }
LABEL_248:
        IsAppContainerOrIdentifyLevelContext = -1073741790;
        goto LABEL_106;
      }
    }
    if ( !Pool2 && !v16 )
    {
      v153 = 23LL;
      if ( v17 != 88 )
        v153 = 11LL;
      PopScreenOff(v153, v13);
      goto LABEL_586;
    }
    goto LABEL_283;
  }
  if ( v17 == 50 )
  {
    if ( Pool2 || !v16 )
      goto LABEL_283;
    WakeTimerList = ExGetWakeTimerList(&Src, &Length_4);
    goto LABEL_363;
  }
  if ( v17 <= 24 )
  {
    if ( v17 != 24 )
    {
      if ( v17 <= 12 )
      {
        if ( v17 == 12 )
        {
          if ( !Pool2 && v16 )
          {
            HIDWORD(v181) = dword_140F0A9A4;
            LODWORD(v182) = dword_140F0A9AC - dword_140F0A9A8;
            BYTE4(v182) = PopCoolingMode;
            Src = &v181;
            Length_4 = 16;
            goto LABEL_625;
          }
          goto LABEL_283;
        }
        if ( v17 <= 6 )
        {
          if ( v17 != 6 )
          {
            if ( v17 && (v33 = v17 - 1) != 0 )
            {
              v34 = v33 - 1;
              if ( v34 )
              {
                v35 = v34 - 1;
                if ( v35 )
                {
                  v36 = v35 - 1;
                  if ( v36 )
                  {
                    if ( v36 == 1 && !Pool2 && v16 )
                    {
                      PopCurrentPowerState(&v181);
LABEL_85:
                      Src = &v181;
                      Length_4 = 32;
LABEL_625:
                      v87 = Length;
LABEL_626:
                      if ( !Src || !v16 )
                      {
LABEL_630:
                        InputBuffer = v15;
                        if ( v170 != SystemHiberFileSize && v170 != SystemHiberFileType )
                        {
LABEL_586:
                          IsAppContainerOrIdentifyLevelContext = 0;
                          goto LABEL_106;
                        }
                        goto LABEL_285;
                      }
                      if ( v87 >= Length_4 )
                      {
                        memmove(v16, Src, Length_4);
                        goto LABEL_630;
                      }
                      goto LABEL_105;
                    }
                    goto LABEL_283;
                  }
                  if ( !Pool2 )
                  {
                    if ( v16 )
                    {
LABEL_92:
                      byte_140F0B8C9 = PopFullWake & 1;
                      byte_140F0B8D5 = PopDisksRegisteredForIdle();
                      PopFilterCapabilities(&PopCapabilities, &v181);
                      Src = &v181;
                      Length_4 = 76;
LABEL_93:
                      IsAppContainerOrIdentifyLevelContext = v163;
LABEL_94:
                      Pool2 = (unsigned int *)v167;
                      goto LABEL_625;
                    }
                    goto LABEL_283;
                  }
                  if ( (PopSimulate & 1) == 0 )
                    goto LABEL_283;
                  if ( v14 >= 0x4C )
                  {
                    PopCapabilities = *(_OWORD *)Pool2;
                    unk_140F0B8D0 = *((_OWORD *)Pool2 + 1);
                    xmmword_140F0B8E0 = *((_OWORD *)Pool2 + 2);
                    unk_140F0B8F0 = *((_OWORD *)Pool2 + 3);
                    qword_140F0B900 = *((_QWORD *)Pool2 + 8);
                    dword_140F0B908 = Pool2[18];
                    IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies(1LL, v13);
                    v163 = IsAppContainerOrIdentifyLevelContext;
                    InputBuffer = v15;
                    if ( IsAppContainerOrIdentifyLevelContext < 0 )
                      goto LABEL_285;
                    goto LABEL_92;
                  }
                  goto LABEL_105;
                }
              }
              if ( !Pool2 || !v16 )
                goto LABEL_283;
              if ( v14 < 0xE8 )
                goto LABEL_105;
              IsAppContainerOrIdentifyLevelContext = PopVerifySystemPowerPolicy(Pool2, &v181);
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_285;
              v37 = &v181;
            }
            else
            {
              if ( Pool2 )
              {
                if ( v14 < 0xE8 )
                  goto LABEL_105;
                IsAppContainerOrIdentifyLevelContext = PopApplyPolicy(0LL, 0LL, Pool2, v14);
                InputBuffer = v15;
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_285;
              }
              else if ( !v16 )
              {
                goto LABEL_283;
              }
              v37 = (char **)&unk_140F0B624;
            }
LABEL_100:
            Src = v37;
            Length_4 = 232;
            goto LABEL_625;
          }
          if ( !Pool2 || v16 )
            goto LABEL_283;
          if ( v14 < 0x18 )
            goto LABEL_105;
          v13 = *Pool2;
          if ( (unsigned int)v13 >= 7 )
            goto LABEL_283;
          v38 = 3 * v13;
          if ( *((_QWORD *)&PopPowerStateHandlers + 3 * v13 + 1) )
          {
            if ( (_DWORD)v13 != 5 )
            {
              if ( (_DWORD)v13 != 4 )
                goto LABEL_283;
              v10 = (char *)PopShutdownHandler;
              if ( (void (__fastcall __noreturn *)())qword_140F0B5A8 != PopShutdownHandler )
                goto LABEL_283;
            }
          }
          *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v13) = *(_OWORD *)Pool2;
          *((_QWORD *)&PopPowerStateHandlers + 3 * v13 + 2) = *((_QWORD *)Pool2 + 2);
          *(_WORD *)((char *)&PopPowerStateHandlers + 24 * v13 + 5) = 0;
          *((_BYTE *)&PopPowerStateHandlers + 24 * v13 + 7) = 0;
          v10 = 0LL;
          v11 = 0LL;
          if ( (_DWORD)v13 )
          {
            v39 = v13 - 1;
            if ( v39 )
            {
              v40 = v39 - 1;
              if ( v40 )
              {
                v41 = v40 - 1;
                if ( v41 )
                {
                  v42 = v41 - 1;
                  if ( v42 )
                  {
                    if ( v42 == 2 )
                    {
                      v11 = 4LL;
                      v43 = (PopSimulate & 0x2000) == 0;
                      v10 = (char *)&unk_140F0B8D1;
                      goto LABEL_129;
                    }
                  }
                  else
                  {
                    v10 = &byte_140F0B8C7;
                  }
LABEL_131:
                  v13 = *((_BYTE *)&PopPowerStateHandlers + 8 * v38 + 4) != 0 ? (unsigned int)v11 : 0;
                  if ( (int)v13 > (int)qword_140F0B900 )
                    LODWORD(qword_140F0B900) = *((_BYTE *)&PopPowerStateHandlers + 8 * v38 + 4) != 0 ? v11 : 0;
                  if ( v10 )
                  {
                    LOBYTE(v13) = 1;
                    PopChangeCapability(v10, v13);
                  }
                  goto LABEL_625;
                }
                v11 = 5LL;
                v43 = (PopSimulate & 0x2000) == 0;
                v10 = &byte_140F0B8C6;
              }
              else
              {
                v11 = 4LL;
                v43 = (PopSimulate & 0x20) == 0;
                v10 = (char *)&word_140F0B8C4 + 1;
              }
            }
            else
            {
              v11 = 3LL;
              v43 = (PopSimulate & 0x40) == 0;
              v10 = (char *)&word_140F0B8C4;
            }
          }
          else
          {
            v11 = 2LL;
            v43 = (PopSimulate & 8) == 0;
            v10 = &byte_140F0B8C3;
          }
LABEL_129:
          if ( !v43 )
            v10 = 0LL;
          goto LABEL_131;
        }
        v44 = v17 - 7;
        if ( !v44 )
        {
          if ( !Pool2 && v16 )
          {
            Src = &PpmProcessorDriverDispatchTable;
            Length_4 = 280;
            goto LABEL_625;
          }
          goto LABEL_283;
        }
        v45 = v44 - 1;
        if ( !v45 )
        {
          if ( Pool2 || !v16 )
            goto LABEL_283;
          v37 = (char **)PopPolicy;
          goto LABEL_100;
        }
        v46 = v45 - 1;
        if ( v46 )
        {
          v47 = v46 - 1;
          if ( v47 )
          {
            if ( v47 != 1 || Pool2 || !v16 )
              goto LABEL_283;
            PrimaryGroupThread = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
            v50 = PopProcessorInformation(&v181, v49, PrimaryGroupThread, &Length_4);
            Pool2 = (unsigned int *)v167;
LABEL_143:
            InputBuffer = v15;
            IsAppContainerOrIdentifyLevelContext = v50;
            if ( v50 < 0 )
              goto LABEL_285;
            Src = &v181;
            goto LABEL_625;
          }
          if ( !Pool2 || v16 )
            goto LABEL_283;
          if ( !v14 )
            goto LABEL_105;
          PopAcquireTransitionLock(3LL);
          PopAcquirePolicyLock(v52, v51);
          PopHiberEnabledReg = *(_BYTE *)Pool2 != 0;
          PopSetHiberPersistedRegValue(0, PopHiberEnabledReg, 0LL);
          IsAppContainerOrIdentifyLevelContext = PopHibernateEvaluation(0LL, 0LL, 0LL);
          PopReleasePolicyLock(v54, v53, v55, v56, ExplicitScope);
          PopReleaseTransitionLock(3LL);
          goto LABEL_149;
        }
        if ( Pool2 )
        {
          if ( v14 < 0x18 )
            goto LABEL_105;
          IsAppContainerOrIdentifyLevelContext = PopApplyAdminPolicy(1LL, Pool2);
          InputBuffer = v15;
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_285;
          IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies(v58, v13);
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_285;
        }
        else if ( !v16 )
        {
          goto LABEL_283;
        }
        v59 = &PopAdminPolicy;
LABEL_157:
        Src = v59;
        Length_4 = 24;
        goto LABEL_625;
      }
      if ( v17 > 18 )
      {
        v65 = v17 - 19;
        if ( v65 )
        {
          v66 = v65 - 1;
          if ( v66 )
          {
            v67 = v66 - 1;
            if ( v67 )
            {
              v68 = v67 - 1;
              if ( v68 )
              {
                if ( v68 == 1 && !Pool2 && v16 )
                {
                  IsAppContainerOrIdentifyLevelContext = PopLoggingInformation(P, &v172);
                  InputBuffer = v15;
                  if ( IsAppContainerOrIdentifyLevelContext < 0 )
                    goto LABEL_285;
                  Src = P[0];
                  Length_4 = (unsigned int)v172;
                  goto LABEL_625;
                }
                goto LABEL_283;
              }
            }
          }
        }
      }
      else if ( v17 != 18 )
      {
        v60 = v17 - 13;
        if ( v60 )
        {
          v61 = v60 - 1;
          if ( v61 )
          {
            v62 = v61 - 1;
            if ( v62 )
            {
              v63 = v62 - 1;
              if ( v63 )
              {
                if ( v63 != 1 || !Pool2 || v16 )
                  goto LABEL_283;
                if ( v14 >= 0x10 )
                {
                  if ( !(_QWORD)PopPowerStateNotifyHandler || !*(_QWORD *)Pool2 )
                  {
                    PopPowerStateNotifyHandler = *(_OWORD *)Pool2;
                    goto LABEL_625;
                  }
                  goto LABEL_283;
                }
                goto LABEL_105;
              }
              if ( Pool2 || !v16 )
                goto LABEL_283;
              if ( dword_140E019D8 )
                LODWORD(v181) = (unsigned int)v181 | 1;
              if ( dword_140E019A8 )
                LODWORD(v181) = (unsigned int)v181 | 2;
LABEL_186:
              Src = &v181;
              Length_4 = 4;
              goto LABEL_625;
            }
            if ( Pool2 || !v16 )
              goto LABEL_283;
            v64 = &qword_140F0AEC0;
          }
          else
          {
            if ( Pool2 || !v16 )
              goto LABEL_283;
            v64 = &qword_140F0AEB8;
          }
LABEL_190:
          Src = v64;
          Length_4 = 8;
          goto LABEL_625;
        }
      }
LABEL_501:
      IsAppContainerOrIdentifyLevelContext = -1073741822;
      goto LABEL_106;
    }
    if ( !Pool2 || v16 )
      goto LABEL_283;
    if ( v14 < 8 )
      goto LABEL_105;
    v69 = PopLogSleepDisabled(*Pool2, Pool2[1], 0LL, 0LL);
LABEL_623:
    v57 = v69 < 0;
    IsAppContainerOrIdentifyLevelContext = v69;
LABEL_624:
    InputBuffer = v15;
    if ( v57 )
      goto LABEL_285;
    goto LABEL_625;
  }
  if ( v17 > 38 )
  {
    if ( v17 <= 44 )
    {
      if ( v17 == 44 )
      {
        if ( !Pool2 || v16 )
          goto LABEL_283;
        if ( v14 != 24 )
          goto LABEL_105;
        v69 = PopPowerRequestActionInfo((__int64)Pool2);
        goto LABEL_623;
      }
      v13 = (unsigned int)(v17 - 39);
      if ( v17 != 39 )
      {
        v13 = (unsigned int)(v17 - 40);
        if ( v17 == 40 )
        {
          if ( Pool2 && v14 == 4 && !v16 )
          {
            LODWORD(v168) = *Pool2 != 0;
            PopSetPowerSettingValueAcDc((__int64)&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4u, (__int64)&v168);
            goto LABEL_625;
          }
          goto LABEL_283;
        }
        v13 = (unsigned int)(v17 - 41);
        if ( v17 == 41 )
        {
          if ( !Pool2 )
          {
            if ( v16 )
            {
              v87 = Length;
              if ( Length == 64 )
              {
                PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
                v88 = PopEsState;
                PopReleaseRwLock(&PopEsLock);
                v89 = v189;
                if ( v88 == 1 )
                  v89 = 1;
                v189 = v89;
                IsEnabled = TtmIsEnabled();
                if ( TtmIsEnabled() )
                {
                  IsAppContainerOrIdentifyLevelContext = TtmInitCurrentSession();
                  v163 = IsAppContainerOrIdentifyLevelContext;
                  InputBuffer = v15;
                  if ( IsAppContainerOrIdentifyLevelContext < 0 )
                    goto LABEL_285;
                  PopPowerRequestNotifyTtmSessionInitialized();
                }
                PopAcquirePolicyLock(v91, v90);
                LODWORD(v183) = 0;
                v181 = &PopNoMoreInput;
                v182 = &PopHiberBootForceMonitorOff;
                v184 = byte_140F0B711 != 0;
                v185 = dword_140F0B70C;
                HIDWORD(v183) = dword_140F0B72C;
                v186 = qword_140F0B730;
                v191 = HIDWORD(qword_140F0B738);
                v187 = qword_140F0B738;
                v188 = dword_140F0B740;
                v190 = PopLidOpened;
                _m_prefetchw(&PopLidStateIsReliable);
                v193 = _InterlockedOr(&PopLidStateIsReliable, 0) != 0;
                Src = &v181;
                Length_4 = 64;
                v92 = (unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                PopPrintEx(3, (int)"PopAdaptive: Session %u is started\n", v92);
                PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED, v92, 0);
                PopReleasePolicyLock(v94, v93, v95, v96, ExplicitScope);
                IsAppContainerOrIdentifyLevelContext = v163;
                Pool2 = (unsigned int *)v167;
                goto LABEL_626;
              }
            }
          }
          goto LABEL_283;
        }
        v13 = (unsigned int)(v17 - 42);
        if ( v17 != 42 )
          goto LABEL_481;
        if ( !Pool2 || v14 != 16 || v16 )
          goto LABEL_283;
        if ( !*((_BYTE *)Pool2 + 13) || !*((_BYTE *)Pool2 + 12) )
        {
LABEL_309:
          if ( *((_BYTE *)Pool2 + 14) )
          {
            if ( *((_BYTE *)Pool2 + 12) )
              ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, Pool2 + 1, 4u, 0LL, 0LL, 0, 0);
            if ( *((_BYTE *)Pool2 + 14) )
              PopDiagTraceSessionDisplayStateChange(Pool2[1] == 0, *Pool2, *((unsigned __int8 *)Pool2 + 12), Pool2[2]);
          }
          goto LABEL_625;
        }
        if ( SSHSupportIsPlatformAoAc() && !PopConsoleDisplayState )
        {
          if ( Pool2[1] != 2 )
          {
LABEL_306:
            PopProcessSessionDisplayStateChange(*((_BYTE *)Pool2 + 15), Pool2[2]);
LABEL_307:
            PopSetDisplayStatus(Pool2[1]);
            PopUpdateConsoleDisplayState(Pool2[1]);
            if ( Pool2[1] == 1 )
              PopPowerAggregatorNotifyDisplayPoweredOn();
            goto LABEL_309;
          }
          v86 = *Pool2;
          v178 = 0LL;
          v179 = 0;
          LODWORD(v174) = v85;
          HIDWORD(v174) = 40;
          v175 = 0LL;
          v176 = 0LL;
          v177 = 0;
          IsAppContainerOrIdentifyLevelContext = DbgkWerCaptureLiveKernelDump2(
                                                   L"InvalidDisplayStateTransition",
                                                   v86,
                                                   0LL,
                                                   (__int64)&v174);
        }
        if ( Pool2[1] == 2 )
          goto LABEL_307;
        goto LABEL_306;
      }
      if ( !Pool2 || v16 || v14 != 24 )
        goto LABEL_283;
      inserted = PopShutdownListenerInsertCallback(Pool2);
LABEL_331:
      IsAppContainerOrIdentifyLevelContext = inserted;
      goto LABEL_625;
    }
    v98 = v17 - 45;
    if ( v98 )
    {
      v99 = v98 - 1;
      if ( !v99 )
      {
        if ( !Pool2 )
          goto LABEL_283;
        if ( v14 < 2 )
          goto LABEL_283;
        if ( !v16 )
          goto LABEL_283;
        v104 = *(_WORD *)Pool2;
        if ( v104 >= KeQueryActiveGroupCount() )
          goto LABEL_283;
        v50 = PopProcessorInformation(&v181, v13, v104, &Length_4);
        goto LABEL_143;
      }
      v100 = v99 - 1;
      if ( !v100 )
      {
        if ( Pool2 && v14 == 16 )
        {
          v103 = PopUmpoSendLegacyEvent(Pool2);
          IsAppContainerOrIdentifyLevelContext = v103;
          if ( v103 < 0 )
          {
            InputBuffer = v15;
            if ( v103 != -1073741536 )
              goto LABEL_285;
          }
          goto LABEL_625;
        }
        goto LABEL_283;
      }
      v101 = v100 - 1;
      if ( !v101 )
      {
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_248;
        if ( !Pool2 || v16 )
          goto LABEL_283;
        switch ( v14 )
        {
          case 0x10u:
            v102 = 0LL;
            break;
          case 0x18u:
            v102 = Pool2 + 4;
            break;
          case 2u:
            WakeSource = PpmParkClearForcedMask(Pool2, v13);
            goto LABEL_268;
          default:
            goto LABEL_275;
        }
        WakeSource = PpmParkApplyForcedMask(Pool2, v102);
        goto LABEL_268;
      }
      goto LABEL_500;
    }
    if ( Pool2 || !v16 )
      goto LABEL_283;
    WakeTimerList = PopGetPowerRequestListInfo(&Src, &Length_4);
LABEL_363:
    IsAppContainerOrIdentifyLevelContext = WakeTimerList;
    InputBuffer = v15;
    if ( WakeTimerList < 0 )
      goto LABEL_285;
    v162[0] = 1;
    goto LABEL_625;
  }
  if ( v17 == 38 )
  {
    if ( !Pool2 || v16 )
      goto LABEL_283;
    if ( v14 == 8 )
    {
      WakeSource = PpmSetSimulatedLoad((PPROCESSOR_NUMBER)Pool2);
      goto LABEL_268;
    }
    if ( v14 == 4 )
    {
      WakeSource = PpmClearSimulatedLoad((PPROCESSOR_NUMBER)Pool2);
      goto LABEL_268;
    }
LABEL_275:
    IsAppContainerOrIdentifyLevelContext = -1073741811;
    goto LABEL_149;
  }
  if ( v17 > 32 )
  {
    v75 = v17 - 33;
    if ( !v75 )
      goto LABEL_501;
    v76 = v75 - 1;
    if ( !v76 )
      goto LABEL_501;
    v77 = v76 - 1;
    if ( v77 )
    {
      v78 = v77 - 1;
      if ( !v78 )
      {
        if ( !v16 )
          goto LABEL_283;
        if ( !(_DWORD)dword_140F0AD80 || !qword_140F0AD78 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741275;
          goto LABEL_106;
        }
        Length_4 = dword_140F0AD80 + 8;
        v79 = ExAllocatePool2(0x100uLL);
        v80 = (_DWORD *)v79;
        if ( v79 )
        {
          Src = (PVOID)v79;
          v162[0] = 1;
          memmove((void *)(v79 + 8), qword_140F0AD78, (unsigned int)dword_140F0AD80);
          *v80 = (unsigned int)dword_140F0AD80 >> 4;
          goto LABEL_625;
        }
        goto LABEL_224;
      }
      if ( v78 != 1 || !Pool2 || v16 )
        goto LABEL_283;
      if ( PreviousMode == 1 )
      {
        if ( v14 >= 4 )
        {
          IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW((STRSAFE_PCNZWCH)Pool2 + 2, v14 - 4, 0LL);
          if ( IsAppContainerOrIdentifyLevelContext >= 0 )
            IsAppContainerOrIdentifyLevelContext = 0;
        }
        else
        {
          IsAppContainerOrIdentifyLevelContext = -1073741811;
        }
        InputBuffer = v15;
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_285;
        PopDiagTraceServiceNotification(Pool2, v13);
        goto LABEL_625;
      }
      goto LABEL_248;
    }
    if ( Pool2 || !v16 )
      goto LABEL_283;
    if ( (_BYTE)v13 )
    {
      PopReleasePolicyLock(1LL, v13, v10, v11, ExplicitScope);
      v165 = 0;
    }
    IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(0LL, &Length_4);
    if ( IsAppContainerOrIdentifyLevelContext != -1073741789 )
    {
LABEL_149:
      v57 = IsAppContainerOrIdentifyLevelContext < 0;
      goto LABEL_624;
    }
    v81 = (void *)ExAllocatePool2(0x40uLL);
    Src = v81;
    if ( !v81 )
      goto LABEL_224;
    v162[0] = 1;
    WakeSource = PopGetWakeSource(v81, &Length_4);
LABEL_268:
    IsAppContainerOrIdentifyLevelContext = WakeSource;
    goto LABEL_149;
  }
  if ( v17 == 32 )
    goto LABEL_501;
  v13 = (unsigned int)(v17 - 25);
  if ( v17 != 25 )
  {
    if ( v17 != 28 )
    {
      v13 = (unsigned int)(v17 - 29);
      if ( v17 != 29 )
      {
        v13 = (unsigned int)(v17 - 30);
        if ( (unsigned int)v13 > 1 || !Pool2 || v16 )
          goto LABEL_283;
        if ( v14 >= 8 )
        {
          if ( v17 == 30 )
            PopDiagTraceAppPowerMessage((HANDLE *)Pool2);
          else
            PopDiagTraceAppPowerMessageEnd(Pool2);
          goto LABEL_625;
        }
        goto LABEL_105;
      }
      if ( Pool2 || !v16 )
        goto LABEL_283;
      Length_4 = 4;
      Src = (PVOID)ExAllocatePool2(0x100uLL);
      if ( Src )
      {
        v162[0] = 1;
        *(_DWORD *)Src = PopConsoleDisplayState;
        goto LABEL_625;
      }
LABEL_224:
      IsAppContainerOrIdentifyLevelContext = -1073741670;
      goto LABEL_106;
    }
    PopSuspendResumePdc(1LL);
    PopHiberBootForceMonitorOff = 1;
    SettingValue = PoPowerOffMonitor();
LABEL_426:
    IsAppContainerOrIdentifyLevelContext = SettingValue;
    goto LABEL_106;
  }
  if ( !Pool2 )
    goto LABEL_283;
  if ( v16 )
    goto LABEL_283;
  if ( Length )
    goto LABEL_283;
  if ( v14 < 0x1C )
    goto LABEL_283;
  v172 = Pool2 + 6;
  v71 = Pool2[6];
  if ( !v71 )
    goto LABEL_283;
  v13 = (__int64)(Pool2 + 5);
  v168 = (int *)(Pool2 + 5);
  if ( Pool2[5] > 2 )
    goto LABEL_283;
  InputBuffer = v15;
  if ( *Pool2 != 1 )
  {
    IsAppContainerOrIdentifyLevelContext = -1073741736;
    goto LABEL_285;
  }
  v72 = v71 + 28;
  v73 = -1;
  if ( v72 >= 0x1C )
    v73 = v72;
  Length_4 = v73;
  IsAppContainerOrIdentifyLevelContext = v72 < 0x1C ? 0xC0000095 : 0;
  if ( v72 >= 0x1C )
  {
    if ( v14 < v73 )
      goto LABEL_283;
    v74 = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    Pool2 = (unsigned int *)v167;
    v69 = PopSetPowerSettingValue((GUID *)((char *)v167 + 4), v74, *v168, *v172, (char *)v167 + 28);
    goto LABEL_623;
  }
LABEL_285:
  v83 = P[0];
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v162[0] )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v165 )
    PopReleasePolicyLock(v83, v13, v10, v11, ExplicitScope);
  if ( Pool2 && Pool2 != InputBuffer && Pool2 != (unsigned int *)psz )
    ExFreePoolWithTag(Pool2, 0x206D654Du);
  return IsAppContainerOrIdentifyLevelContext;
}
