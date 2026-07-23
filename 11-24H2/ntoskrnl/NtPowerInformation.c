/*
 * XREFs of NtPowerInformation @ 0x1409EDB00
 * Callers:
 *     PopRecordPoIrpBlackboxInformation @ 0x1404BD7D4 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1404C2E3C (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1405DE620 (PopRecordPepWorkorderBlackboxInformation.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1407335E8 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x14076919C (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x140769240 (TtmpCalloutWatchdogCallback.c)
 *     TtmpStartCallout @ 0x140769A64 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x140769BE4 (TtmpStopCallout.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1409BBCEC (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1409ED7A0 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x1409EDA58 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     VslRegisterIumPowerCallbacks @ 0x140C1BBFC (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     ExNotifyCallback @ 0x14027DB30 (ExNotifyCallback.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x1402B9970 (PopPowerRequestCreateUserModeRequest.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 *     PopPowerRequestReferenceRelease @ 0x1404649E0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x140464AF0 (PopPowerRequestReferenceAcquire.c)
 *     KeQueryActiveGroupCount @ 0x14047C720 (KeQueryActiveGroupCount.c)
 *     PopPrintEx @ 0x14047F604 (PopPrintEx.c)
 *     KeQueryPrimaryGroupThread @ 0x140480638 (KeQueryPrimaryGroupThread.c)
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     PopDisksRegisteredForIdle @ 0x140494D18 (PopDisksRegisteredForIdle.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1404961FC (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopEventCalloutDispatch @ 0x1404A50B8 (PopEventCalloutDispatch.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404A7B1C (PopDiagTraceSessionDisplayStateChange.c)
 *     ExGetWakeTimerList @ 0x1404BB1AC (ExGetWakeTimerList.c)
 *     PopUpdatePowerButtonHoldState @ 0x1404C3B98 (PopUpdatePowerButtonHoldState.c)
 *     PoPowerOffMonitor @ 0x1404C5400 (PoPowerOffMonitor.c)
 *     PpmSetSimulatedIdle @ 0x1404C69F0 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x1404C82E8 (PpmClearSimulatedIdle.c)
 *     PpmParkSetLpiCap @ 0x1404C8A78 (PpmParkSetLpiCap.c)
 *     PopShutdownListenerInsertCallback @ 0x1404C8BE4 (PopShutdownListenerInsertCallback.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1404CA420 (PpmSetExitLatencySamplingPercentage.c)
 *     PopCapabilityCheck @ 0x1404CF480 (PopCapabilityCheck.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1404D00F8 (PpmClearExitLatencySamplingPercentage.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F6FAC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x1405CD1FC (Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopSetHiberPersistedRegValue @ 0x1406F396C (PopSetHiberPersistedRegValue.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1406F5384 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopSetHiberFileType @ 0x1406F780C (PopSetHiberFileType.c)
 *     PopSetHiberFileSize @ 0x1406F8024 (PopSetHiberFileSize.c)
 *     PopCurrentSystemPowerSourceState @ 0x140759D4C (PopCurrentSystemPowerSourceState.c)
 *     PopEtEnergyTrackerCreate @ 0x14075CC00 (PopEtEnergyTrackerCreate.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PspIsContextAdmin @ 0x14085A9A4 (PspIsContextAdmin.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409470EC (ExCheckFullProcessInformationAccess.c)
 *     TtmInitCurrentSession @ 0x14099D6C8 (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x14099D9B8 (TtmDispatchApi.c)
 *     TtmNotifySessionDisplayBurst @ 0x14099DFB0 (TtmNotifySessionDisplayBurst.c)
 *     PopScreenOff @ 0x14099E658 (PopScreenOff.c)
 *     PopLogSleepDisabled @ 0x14099E748 (PopLogSleepDisabled.c)
 *     PopApplyPolicy @ 0x14099EC20 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x14099EEFC (PopVerifySystemPowerPolicy.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 *     PopSetDisplayStatus @ 0x1409A0A38 (PopSetDisplayStatus.c)
 *     PopDiagTraceSessionStates @ 0x1409A0CBC (PopDiagTraceSessionStates.c)
 *     PopFreeSessionState @ 0x1409A0D60 (PopFreeSessionState.c)
 *     PopGetSettingValue @ 0x1409A1370 (PopGetSettingValue.c)
 *     PopGetSettingNotificationName @ 0x1409A14CC (PopGetSettingNotificationName.c)
 *     PopProcessSessionDisplayStateChange @ 0x1409A23E0 (PopProcessSessionDisplayStateChange.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409A2DCC (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
 *     PopProcessorInformation @ 0x1409F8FB0 (PopProcessorInformation.c)
 *     PopPowerRequestActionInfo @ 0x140A0DBB8 (PopPowerRequestActionInfo.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A0DCC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopBlackBoxUpdate @ 0x140A13418 (PopBlackBoxUpdate.c)
 *     PopUpdateConsoleDisplayState @ 0x140A1B91C (PopUpdateConsoleDisplayState.c)
 *     PopCurrentPowerStatePrecise @ 0x140A2006C (PopCurrentPowerStatePrecise.c)
 *     PopCurrentPowerState @ 0x140A20120 (PopCurrentPowerState.c)
 *     PopLoggingInformation @ 0x140A2D810 (PopLoggingInformation.c)
 *     PopDiagTraceAppPowerMessage @ 0x140A50EC8 (PopDiagTraceAppPowerMessage.c)
 *     PopBatteryDeviceState @ 0x140A5A0BC (PopBatteryDeviceState.c)
 *     PopDiagTraceServiceNotification @ 0x140A5D290 (PopDiagTraceServiceNotification.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x140A5F978 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopChangeCapability @ 0x140A61C60 (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x140A61C7C (PopResetCurrentPolicies.c)
 *     PopCapturePlatformRole @ 0x140A68904 (PopCapturePlatformRole.c)
 *     PopIsRunningAsLocalSystem @ 0x140A6A934 (PopIsRunningAsLocalSystem.c)
 *     PopSuspendResumePdc @ 0x140A7300C (PopSuspendResumePdc.c)
 *     PopGetPowerRequestListInfo @ 0x140A76148 (PopGetPowerRequestListInfo.c)
 *     PopReadHiberbootPolicy @ 0x140A77D90 (PopReadHiberbootPolicy.c)
 *     PopPdcCsDeviceNotification @ 0x140A85D68 (PopPdcCsDeviceNotification.c)
 *     PopUmpoSendLegacyEvent @ 0x140A89144 (PopUmpoSendLegacyEvent.c)
 *     PopAcquireTransitionLock @ 0x140A8F05C (PopAcquireTransitionLock.c)
 *     PopThermalProcessUsermodeEvent @ 0x140A9C104 (PopThermalProcessUsermodeEvent.c)
 *     PopReleaseTransitionLock @ 0x140AA0760 (PopReleaseTransitionLock.c)
 *     PopGetWakeSource @ 0x140AA0808 (PopGetWakeSource.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x140AA4900 (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140AA4C50 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopEnforceResiliencyScenarios @ 0x140AA7080 (PopEnforceResiliencyScenarios.c)
 *     TtmCleanupCurrentSession @ 0x140AA850C (TtmCleanupCurrentSession.c)
 *     PopHibernateEvaluation @ 0x140AAE820 (PopHibernateEvaluation.c)
 *     PpmSetSimulatedLoad @ 0x140AAFAA0 (PpmSetSimulatedLoad.c)
 *     PopBlackBoxDirectAccess @ 0x140AAFBB4 (PopBlackBoxDirectAccess.c)
 *     PpmClearSimulatedLoad @ 0x140AB0B2C (PpmClearSimulatedLoad.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140AB2704 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopApplyAdminPolicy @ 0x140AB3074 (PopApplyAdminPolicy.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140AB4C64 (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopSendSuspendResumeNotifications @ 0x140AB644C (PopSendSuspendResumeNotifications.c)
 *     PopPdcInvocation @ 0x140ABA018 (PopPdcInvocation.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     PopMonitorInvocation @ 0x140AC7244 (PopMonitorInvocation.c)
 *     PopEtEnergyTrackerQuery @ 0x140AC7690 (PopEtEnergyTrackerQuery.c)
 *     PpmParkApplyForcedMask @ 0x140AC893C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140AC8B58 (PpmParkClearForcedMask.c)
 *     PopSessionConnectionChange @ 0x140AC8CFC (PopSessionConnectionChange.c)
 *     PopSessionWinlogonNotification @ 0x140AC8DB8 (PopSessionWinlogonNotification.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     PopInitPlatformSettings @ 0x140C69F98 (PopInitPlatformSettings.c)
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
  _QWORD *Pool2; // r15
  __int64 v13; // rdx
  unsigned int v14; // r13d
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
  __int128 *v58; // rax
  int v59; // esi
  int v60; // esi
  int v61; // esi
  int v62; // esi
  __int64 *v63; // rax
  int v64; // esi
  int v65; // esi
  int v66; // esi
  int v67; // esi
  int v68; // eax
  NTSTATUS SettingValue; // eax
  int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // ecx
  unsigned int v73; // eax
  int v74; // esi
  int v75; // esi
  int v76; // esi
  int v77; // esi
  __int64 v78; // rax
  _DWORD *v79; // rsi
  void *v80; // rax
  NTSTATUS WakeSource; // eax
  PVOID v82; // rcx
  int v84; // ecx
  __int64 v85; // rax
  ULONG v86; // r13d
  int v87; // ebx
  char v88; // al
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  NTSTATUS inserted; // eax
  int v97; // esi
  int v98; // esi
  int v99; // esi
  int v100; // esi
  _QWORD *v101; // rdx
  int v102; // eax
  USHORT v103; // bx
  int WakeTimerList; // eax
  int v105; // esi
  int v106; // esi
  int v107; // esi
  int v108; // esi
  int v109; // esi
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rcx
  int v117; // esi
  int v118; // esi
  int v119; // esi
  int v120; // esi
  unsigned int v121; // eax
  unsigned int v122; // ebx
  __int64 v123; // rbx
  int v124; // esi
  int v125; // esi
  int v126; // esi
  int v127; // esi
  unsigned int v128; // ecx
  char **v129; // rax
  unsigned int v130; // eax
  int UserModeRequest; // eax
  int v132; // esi
  int v133; // esi
  int v134; // esi
  char v135; // r13
  __int64 v136; // rcx
  unsigned int SessionId; // eax
  bool v138; // si
  int v139; // esi
  int v140; // esi
  int v141; // esi
  int v142; // esi
  unsigned int v143; // edx
  _DWORD *v144; // rcx
  int v145; // ebx
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  int v152; // ecx
  int v153; // esi
  int v154; // esi
  int v155; // esi
  int v156; // esi
  void *ExplicitScope; // [rsp+20h] [rbp-748h]
  ULONG Length; // [rsp+50h] [rbp-718h]
  ULONG Length_4; // [rsp+54h] [rbp-714h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+58h] [rbp-710h]
  _BYTE v161[3]; // [rsp+59h] [rbp-70Fh] BYREF
  int v162; // [rsp+5Ch] [rbp-70Ch]
  PVOID Src; // [rsp+60h] [rbp-708h] BYREF
  char v164; // [rsp+68h] [rbp-700h]
  char v165; // [rsp+69h] [rbp-6FFh]
  PVOID v166; // [rsp+70h] [rbp-6F8h]
  int *v167; // [rsp+78h] [rbp-6F0h] BYREF
  POWER_INFORMATION_LEVEL v168; // [rsp+84h] [rbp-6E4h]
  __int64 v169; // [rsp+88h] [rbp-6E0h] BYREF
  unsigned int *v170; // [rsp+90h] [rbp-6D8h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-6D0h] BYREF
  __int64 v172; // [rsp+A8h] [rbp-6C0h] BYREF
  __int64 v173; // [rsp+B0h] [rbp-6B8h]
  __int64 v174; // [rsp+B8h] [rbp-6B0h]
  int v175; // [rsp+C0h] [rbp-6A8h]
  __int64 v176; // [rsp+C4h] [rbp-6A4h]
  int v177; // [rsp+CCh] [rbp-69Ch]
  LUID v178; // [rsp+D0h] [rbp-698h]
  char *v179; // [rsp+E0h] [rbp-688h] BYREF
  char *v180; // [rsp+E8h] [rbp-680h]
  __int64 v181; // [rsp+F0h] [rbp-678h] BYREF
  BOOL v182; // [rsp+F8h] [rbp-670h]
  int v183; // [rsp+FCh] [rbp-66Ch]
  __int64 v184; // [rsp+100h] [rbp-668h]
  int v185; // [rsp+108h] [rbp-660h]
  int v186; // [rsp+10Ch] [rbp-65Ch]
  char v187; // [rsp+110h] [rbp-658h]
  char v188; // [rsp+111h] [rbp-657h]
  int v189; // [rsp+114h] [rbp-654h]
  char IsEnabled; // [rsp+118h] [rbp-650h]
  bool v191; // [rsp+119h] [rbp-64Fh]
  wchar_t psz[32]; // [rsp+6E0h] [rbp-88h] BYREF

  v168 = InformationLevel;
  v165 = 0;
  memset_0(&v179, 0, 0x600uLL);
  LODWORD(v170) = 0;
  v169 = 0LL;
  Src = 0LL;
  Length_4 = 0;
  Pool2 = 0LL;
  v166 = 0LL;
  P[0] = 0LL;
  LOBYTE(v13) = 0;
  v164 = 0;
  v161[0] = 0;
  LODWORD(v167) = 0;
  v162 = 0;
  if ( (unsigned int)InformationLevel > PowerInformationLevelMaximum )
    goto LABEL_278;
  LOBYTE(v9) = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v9;
  v14 = InputBuffer != 0LL ? InputBufferLength : 0;
  v15 = (void *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
  P[1] = v15;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v16 = (_WNF_STATE_NAME *)((unsigned __int64)OutputBuffer & -(__int64)(Length != 0));
  if ( (_BYTE)v9 )
  {
    v17 = v168;
    if ( (unsigned int)v168 <= ProcessorCap && (v13 = 0x7C30200C0LL, _bittest64(&v13, v168))
      || (v18 = (unsigned int)(v168 - 39), (unsigned int)v18 <= 0x3A)
      && (v13 = 0x4104F0071C2E50FLL, _bittest64(&v13, v18)) )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      InputBuffer = v15;
      Pool2 = v166;
      goto LABEL_279;
    }
    v20 = (unsigned int)(v168 - 37);
    if ( (unsigned int)v20 <= 0x3A && (v13 = 0x608801808940903LL, _bittest64(&v13, v20))
      || (unsigned int)(v168 - 2) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
      v162 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v15;
        Pool2 = v166;
        goto LABEL_279;
      }
      LOBYTE(v9) = PreviousMode;
    }
    else
    {
      IsAppContainerOrIdentifyLevelContext = v162;
    }
    if ( (unsigned int)(v168 - 92) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = ExCheckFullProcessInformationAccess(v9);
      v162 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v15;
        Pool2 = v166;
        goto LABEL_279;
      }
    }
    v21 = (unsigned int)(v168 - 28);
    if ( (unsigned int)v21 <= 0x32 )
    {
      v9 = 0x4000000420001LL;
      if ( _bittest64(&v9, v21) )
      {
        if ( !PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v162 = -1073741790;
          InputBuffer = v15;
          Pool2 = v166;
          goto LABEL_279;
        }
      }
    }
    if ( v168 == SuspendResumeInvocation && !(unsigned __int8)PopIsRunningAsLocalSystem(v9) )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      v162 = -1073741790;
      InputBuffer = v15;
      Pool2 = v166;
      goto LABEL_279;
    }
    if ( v15 )
    {
      v22 = (unsigned int)(v168 - 11);
      if ( (unsigned int)v22 > 0x3D || (v23 = 0x2001800900000001LL, !_bittest64(&v23, v22)) )
      {
        if ( PsIsCurrentThreadInServerSilo() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741637;
          v162 = -1073741637;
          InputBuffer = v15;
          Pool2 = v166;
          goto LABEL_279;
        }
      }
      if ( v168 == AdministratorPowerPolicy
        || (v24 = (unsigned int)(v168 - 38), (unsigned int)v24 <= 0x39)
        && (v25 = 0x218000004422401LL, _bittest64(&v25, v24)) )
      {
        if ( !PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v162 = -1073741790;
          InputBuffer = v15;
          Pool2 = v166;
          goto LABEL_279;
        }
      }
      if ( (unsigned int)(v168 - 2) > 1 )
      {
        v26 = (unsigned int)(v168 - 37);
        if ( (unsigned int)v26 > 0x3D || (v27 = 0x2FAE005C28F40BC3LL, !_bittest64(&v27, v26)) )
        {
          if ( v168 != ProcessorInformation )
          {
            v28 = SeShutdownPrivilege;
            if ( v168 == SystemReserveHiberFile )
              v28 = SeCreatePagefilePrivilege;
            v178 = v28;
            if ( !SeSinglePrivilegeCheck(v28, PreviousMode) )
            {
              IsAppContainerOrIdentifyLevelContext = -1073741727;
              v162 = -1073741727;
              InputBuffer = v15;
              Pool2 = v166;
              goto LABEL_279;
            }
          }
        }
      }
      if ( v14 )
      {
        v29 = (unsigned __int64)v15 + v14;
        if ( v29 > 0x7FFFFFFF0000LL || v29 < (unsigned __int64)v15 )
          IsAppContainerOrIdentifyLevelContext = v162;
      }
      if ( v14 > 0x40 )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, v14, 0x206D654Du);
        v166 = Pool2;
        if ( !Pool2 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741670;
          v162 = -1073741670;
          InputBuffer = v15;
          goto LABEL_279;
        }
      }
      else
      {
        Pool2 = psz;
        v166 = psz;
      }
      memmove(Pool2, v15, v14);
    }
    else
    {
      Pool2 = v166;
    }
    if ( v16 )
      ProbeForWrite(v16, Length, 1u);
    v30 = 1LL;
    LOBYTE(v13) = v164;
  }
  else
  {
    Pool2 = (_QWORD *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
    v166 = Pool2;
    v30 = 1LL;
    IsAppContainerOrIdentifyLevelContext = v162;
    v17 = v168;
  }
  if ( (unsigned int)v17 > 0x1F || (v31 = -234812256, !_bittest(&v31, v17)) )
  {
    v32 = (unsigned int)(v17 - 38);
    if ( (unsigned int)v32 > 0x3C || (v10 = (char *)0x1FFFE3BEF5BE36EDLL, !_bittest64((const __int64 *)&v10, v32)) )
    {
      PopAcquirePolicyLock(1LL, v13);
      v30 = 1LL;
      LOBYTE(v13) = 1;
      v164 = 1;
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
            goto LABEL_277;
          if ( v14 < 8 )
            goto LABEL_277;
          v145 = *(_DWORD *)Pool2;
          v13 = *((unsigned int *)Pool2 + 1);
          if ( (unsigned int)(*(_DWORD *)Pool2 - 100) <= 0xF9B || v145 >= 4107 )
            goto LABEL_277;
          if ( (unsigned int)(v145 - 4096) > 0xA )
          {
            WakeSource = PopPowerInformationInternal(
                           v145,
                           v13,
                           (_DWORD)Pool2,
                           v14,
                           (__int64)v16,
                           Length,
                           (__int64)&Src,
                           (__int64)&Length_4,
                           (__int64)v161);
          }
          else
          {
            if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
              && !PopCapabilityCheck(L"terminalPowerManagement") )
            {
              IsAppContainerOrIdentifyLevelContext = -1073741727;
              goto LABEL_100;
            }
            WakeSource = TtmDispatchApi(
                           v145,
                           (__int64)Pool2,
                           v14,
                           (__int64)v16,
                           Length,
                           (__int64 **)&Src,
                           &Length_4,
                           v161);
          }
          goto LABEL_262;
        }
        if ( v17 > 81 )
        {
          v139 = v17 - 82;
          if ( !v139 )
            goto LABEL_496;
          v140 = v139 - 1;
          if ( !v140 )
          {
            if ( !Pool2 && v16 )
            {
              PopCurrentPowerStatePrecise(&v179, 0LL);
              goto LABEL_79;
            }
            goto LABEL_277;
          }
          v141 = v140 - 1;
          if ( !v141 )
          {
            if ( !Pool2 || v16 )
              goto LABEL_277;
            if ( v14 < 0x10 || v14 < 2 * (unsigned int)*((unsigned __int16 *)Pool2 + 6) + 14 )
              goto LABEL_99;
            v68 = PopThermalProcessUsermodeEvent(Pool2, v13);
            goto LABEL_618;
          }
          v142 = v141 - 1;
          if ( v142 )
          {
            if ( v142 == 1 && Pool2 && v16 )
            {
              IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW((STRSAFE_PCNZWCH)Pool2, v14, 0LL);
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_279;
              IsAppContainerOrIdentifyLevelContext = PopBatteryDeviceState(Pool2, &v179);
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_279;
              Src = &v179;
              Length_4 = 52;
              goto LABEL_620;
            }
            goto LABEL_277;
          }
          v143 = *((_DWORD *)Pool2 + 2);
          v144 = (_DWORD *)*Pool2;
          if ( *((_BYTE *)Pool2 + 12) )
            inserted = PopPowerRequestReferenceAcquire(v144, v143);
          else
            inserted = PopPowerRequestReferenceRelease(v144, v143);
          goto LABEL_325;
        }
        if ( v17 == 81 )
          goto LABEL_496;
        v132 = v17 - 76;
        if ( !v132 )
        {
          if ( Pool2 || !v16 )
            goto LABEL_277;
          LODWORD(v179) = qword_140F0C010;
          v180 = (char *)qword_140F0C1A8;
          v181 = qword_140F0C1B0;
          if ( !PopSleepStats )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741823;
            goto LABEL_100;
          }
          v58 = (__int128 *)&v179;
          goto LABEL_151;
        }
        v133 = v132 - 1;
        if ( !v133 )
        {
          if ( !Pool2 && !v16 )
          {
            v135 = PopErrataReportingIncorrectLidState;
            if ( !TtmIsEnabled() )
            {
              v138 = 0;
              if ( !PopLidOpened )
              {
                v136 = 1LL;
                v138 = PopConsoleExternalDisplayConnected == 0;
              }
              if ( !v138 )
                PopEventCalloutDispatch(10, 6LL);
              if ( !v135 )
              {
                LOBYTE(v10) = v138;
                PopDiagTraceDisplayBurstWin32kCallout(v136, v13, v10);
              }
              goto LABEL_620;
            }
            SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            if ( SessionId == -1 )
              IsAppContainerOrIdentifyLevelContext = -1073740715;
            else
              IsAppContainerOrIdentifyLevelContext = TtmNotifySessionDisplayBurst(SessionId, 6);
            goto LABEL_88;
          }
          goto LABEL_277;
        }
        v134 = v133 - 1;
        if ( !v134 )
        {
          if ( PreviousMode != 1 )
            goto LABEL_242;
          if ( v16 || Length )
            goto LABEL_277;
          if ( !Pool2 )
          {
            PpmClearExitLatencySamplingPercentage(1LL, v13, (unsigned int)v10);
            goto LABEL_620;
          }
          if ( v14 != 4 )
            goto LABEL_277;
          inserted = PpmSetExitLatencySamplingPercentage((unsigned int *)Pool2, v13, (unsigned int)v10);
          goto LABEL_325;
        }
        v100 = v134 - 1;
        if ( !v100 )
          goto LABEL_496;
LABEL_495:
        if ( v100 != 1 )
          goto LABEL_277;
        goto LABEL_496;
      }
      if ( v17 > 93 )
      {
        v153 = v17 - 94;
        if ( !v153 )
        {
          if ( !Pool2 || v16 || Length )
            goto LABEL_277;
          if ( v14 != 32 )
            goto LABEL_99;
          LOBYTE(v13) = PreviousMode;
          v68 = PopBlackBoxUpdate(Pool2, v13);
          goto LABEL_618;
        }
        v154 = v153 - 1;
        if ( !v154 )
        {
          if ( Pool2 && v14 == 1 && !v16 )
          {
            ExNotifyCallback(PipCslCallbackObject, Pool2, 0LL);
            goto LABEL_620;
          }
          goto LABEL_277;
        }
        v155 = v154 - 1;
        if ( !v155 )
        {
          if ( !Pool2 || v16 )
            goto LABEL_277;
          if ( !v14 )
            goto LABEL_99;
          LOBYTE(v30) = *(_BYTE *)Pool2;
          v68 = PopSendSuspendResumeNotifications(v30, v13);
          goto LABEL_618;
        }
        v156 = v155 - 1;
        if ( !v156 )
        {
          if ( !Pool2 || !v14 || !v16 || !Length )
            goto LABEL_277;
          if ( v14 >= 0x20 )
          {
            v86 = Length;
            if ( Length >= 0x10 )
            {
              IsAppContainerOrIdentifyLevelContext = PopBlackBoxDirectAccess(Pool2, &v179);
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_279;
              Src = &v179;
              Length_4 = 16;
              goto LABEL_621;
            }
          }
          goto LABEL_99;
        }
        if ( v156 != 1 )
          goto LABEL_277;
        if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( !Pool2 && v16 )
          {
            PopCurrentSystemPowerSourceState((__int64)&v179);
            Src = &v179;
            Length_4 = 68;
            goto LABEL_620;
          }
          goto LABEL_277;
        }
        goto LABEL_453;
      }
      if ( v17 == 93 )
      {
        if ( !Pool2 || !v16 )
          goto LABEL_277;
        if ( v14 == 8 )
        {
          v86 = Length;
          if ( Length >= 0xC )
          {
            IsAppContainerOrIdentifyLevelContext = PopEtEnergyTrackerQuery(*Pool2, v16, Length);
            InputBuffer = v15;
            if ( IsAppContainerOrIdentifyLevelContext < 0 )
              goto LABEL_279;
            goto LABEL_621;
          }
        }
        goto LABEL_99;
      }
      if ( v17 != 88 )
      {
        if ( v17 == 89 )
        {
          if ( !Pool2 || !v16 )
            goto LABEL_277;
          if ( v14 < 4 )
            goto LABEL_99;
          PopAcquireTransitionLock(6LL);
          PopAcquirePolicyLock(v147, v146);
          IsAppContainerOrIdentifyLevelContext = PopSetHiberFileType(*(_DWORD *)Pool2, &v169, (unsigned int *)&v167);
          PopReleasePolicyLock(v149, v148, v150, v151, ExplicitScope);
          v116 = 6LL;
          goto LABEL_391;
        }
        if ( v17 == 90 )
        {
          if ( Pool2 && v14 >= 4 && !v16 )
          {
            PopUpdatePowerButtonHoldState(*(_DWORD *)Pool2 != 0);
            goto LABEL_620;
          }
          goto LABEL_277;
        }
        if ( v17 != 91 )
        {
          if ( !Pool2 || !v16 )
            goto LABEL_277;
          if ( v14 != 12 )
            goto LABEL_99;
          v86 = Length;
          if ( Length != 8 )
            goto LABEL_99;
          UserModeRequest = PopEtEnergyTrackerCreate((int *)Pool2, (HANDLE *)&v179);
          goto LABEL_481;
        }
        if ( SSHSupportIsPlatformAoAc() )
        {
          if ( Pool2 && v14 == 336 && v16 )
          {
            LOBYTE(v179) = PopFxIsDevicePotentialDripsConstraint(Pool2);
            Src = &v179;
            Length_4 = 1;
            IsAppContainerOrIdentifyLevelContext = 0;
            goto LABEL_620;
          }
          goto LABEL_277;
        }
        goto LABEL_453;
      }
    }
    else
    {
      if ( v17 == 75 )
      {
        if ( Pool2 || !v16 )
          goto LABEL_277;
        LODWORD(v179) = PopCapturePlatformRole(1LL, v13);
        goto LABEL_180;
      }
      if ( v17 <= 63 )
      {
        if ( v17 == 63 )
        {
          if ( !Pool2 && !v16 )
          {
            v123 = (unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            PopPrintEx(3, (int)"PopAdaptive: Session %u is closed\n", v123);
            PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED, v123, 0);
            PopFreeSessionState(v123);
            if ( TtmIsEnabled() )
            {
              PopPowerRequestNotifyTtmSessionUninitialized();
              TtmCleanupCurrentSession();
            }
            goto LABEL_87;
          }
          goto LABEL_277;
        }
        if ( v17 > 57 )
        {
          v117 = v17 - 58;
          if ( v117 )
          {
            v118 = v117 - 1;
            if ( v118 )
            {
              v119 = v118 - 1;
              if ( v119 )
              {
                v120 = v119 - 1;
                if ( v120 )
                {
                  if ( v120 == 1
                    && !(unsigned int)Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline() )
                  {
                    if ( Pool2 )
                    {
                      if ( v14 == 40 )
                      {
                        if ( v16 )
                        {
                          v86 = Length;
                          if ( Length == 16 )
                          {
                            v121 = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                            PopSessionConnectionChange(v121, v166, v16);
                            v122 = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                            Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline();
                            Pool2 = v166;
                            LOBYTE(v10) = *(_BYTE *)v166;
                            LOBYTE(v13) = *((_BYTE *)v166 + 1);
                            if ( qword_140E67678 )
                              guard_dispatch_icall_no_overrides(v122, v13);
                            IsAppContainerOrIdentifyLevelContext = v162;
                            goto LABEL_621;
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
                      v86 = Length;
                      if ( Length == 8 )
                      {
                        IsAppContainerOrIdentifyLevelContext = -1073741637;
                        goto LABEL_621;
                      }
                    }
                  }
                }
                goto LABEL_277;
              }
              if ( !Pool2 || v16 )
              {
LABEL_277:
                InputBuffer = v15;
LABEL_278:
                IsAppContainerOrIdentifyLevelContext = -1073741811;
                goto LABEL_279;
              }
              if ( v14 >= 8 )
              {
                PopEnforceResiliencyScenarios(Pool2, v13);
                goto LABEL_620;
              }
LABEL_99:
              IsAppContainerOrIdentifyLevelContext = -1073741789;
LABEL_100:
              InputBuffer = v15;
              goto LABEL_279;
            }
            if ( !Pool2 || !v16 )
              goto LABEL_277;
            if ( v14 != 16 || Length < 4 )
              goto LABEL_99;
            SettingValue = PopGetSettingValue((__int64)Pool2, (__int64)v16, Length);
          }
          else
          {
            if ( !v16 )
              goto LABEL_277;
            if ( v15 && v14 != 20 || Length != 8 )
              goto LABEL_99;
            SettingValue = PopGetSettingNotificationName((__int64)Pool2, v16);
          }
          goto LABEL_421;
        }
        if ( v17 == 57 )
          goto LABEL_496;
        v105 = v17 - 51;
        if ( v105 )
        {
          v106 = v105 - 1;
          if ( !v106 )
            goto LABEL_496;
          v107 = v106 - 1;
          if ( !v107 )
            goto LABEL_496;
          v108 = v107 - 1;
          if ( !v108 )
            goto LABEL_496;
          v109 = v108 - 1;
          if ( v109 )
          {
            if ( v109 != 1 || !Pool2 || !v16 )
              goto LABEL_277;
            if ( v14 == 8 )
            {
              v86 = Length;
              if ( Length == 4 )
              {
                IsAppContainerOrIdentifyLevelContext = PpmParkSetLpiCap(
                                                         *(_DWORD *)Pool2,
                                                         *((unsigned int *)Pool2 + 1),
                                                         (unsigned int *)&v179);
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_100;
                Src = &v179;
                Length_4 = 4;
                goto LABEL_621;
              }
            }
            goto LABEL_99;
          }
          if ( !(_BYTE)KdDebuggerEnabled )
            goto LABEL_242;
          if ( !Pool2 || v16 )
            goto LABEL_277;
          if ( v14 == 8 )
          {
            WakeSource = PpmSetSimulatedIdle((__int64)Pool2);
            goto LABEL_262;
          }
          if ( v14 == 4 )
          {
            WakeSource = PpmClearSimulatedIdle((_PROCESSOR_NUMBER *)Pool2);
            goto LABEL_262;
          }
          goto LABEL_269;
        }
        if ( !Pool2 || !v16 )
          goto LABEL_277;
        if ( v14 < 4 )
          goto LABEL_99;
        PopAcquireTransitionLock(5LL);
        PopAcquirePolicyLock(v111, v110);
        IsAppContainerOrIdentifyLevelContext = PopSetHiberFileSize(*(_DWORD *)Pool2, &v169, (unsigned int *)&v167);
        PopReleasePolicyLock(v113, v112, v114, v115, ExplicitScope);
        v116 = 5LL;
LABEL_391:
        PopReleaseTransitionLock(v116);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          v169 = (unsigned int)v167;
        v63 = &v169;
        goto LABEL_184;
      }
      if ( v17 <= 69 )
      {
        if ( v17 == 69 )
        {
          if ( !Pool2 && !v16 )
          {
            IsAppContainerOrIdentifyLevelContext = PopInitPlatformSettings(1LL, v13);
            byte_140F0B674 = SSHSupportIsPlatformAoAc();
            goto LABEL_100;
          }
          goto LABEL_277;
        }
        v124 = v17 - 64;
        if ( !v124 )
        {
          if ( Pool2 && v14 == 8 && !v16 )
          {
            v130 = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            Pool2 = v166;
            PopSessionWinlogonNotification(v130, v166);
            IsAppContainerOrIdentifyLevelContext = v162;
            goto LABEL_620;
          }
          goto LABEL_277;
        }
        v125 = v124 - 1;
        if ( v125 )
        {
          v126 = v125 - 1;
          if ( v126 )
          {
            v127 = v126 - 1;
            if ( v127 )
            {
              if ( v127 != 1 || !Pool2 || v14 != 8 || v16 || Length )
                goto LABEL_277;
              SettingValue = PopMonitorInvocation(Pool2, v13);
            }
            else
            {
              if ( !Pool2 || v14 != 224 || v16 && Length != 168 )
                goto LABEL_277;
              SettingValue = PopPdcInvocation(Pool2, v16);
            }
            goto LABEL_421;
          }
          if ( Pool2 || !v16 )
            goto LABEL_277;
          LOBYTE(v179) = SSHSupportIsPlatformAoAc();
          v129 = &v179;
LABEL_451:
          Src = v129;
          Length_4 = v128;
          goto LABEL_620;
        }
        if ( !PsIsCurrentThreadInServerSilo() )
        {
          if ( Pool2 || !v16 )
            goto LABEL_277;
          PopFilterCapabilities((__int64)&PopCapabilities, (__int64)&v179);
          if ( BYTE2(v181) )
            PopReadHiberbootPolicy((char *)&v181 + 2);
          v129 = (char **)((char *)&v181 + 2);
          v128 = 1;
          goto LABEL_451;
        }
LABEL_453:
        IsAppContainerOrIdentifyLevelContext = -1073741637;
        goto LABEL_100;
      }
      switch ( v17 )
      {
        case 'F':
          PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
          goto LABEL_620;
        case 'G':
          goto LABEL_453;
        case 'H':
LABEL_476:
          if ( !Pool2 || !v16 )
            goto LABEL_277;
          if ( v14 != 40 )
            goto LABEL_99;
          v86 = Length;
          if ( Length != 8 )
            goto LABEL_99;
          LOBYTE(v13) = v17 == 72;
          UserModeRequest = PopPowerRequestCreateUserModeRequest((int)Pool2, v13, (HANDLE *)&v179);
LABEL_481:
          IsAppContainerOrIdentifyLevelContext = UserModeRequest;
          InputBuffer = v15;
          if ( UserModeRequest < 0 )
            goto LABEL_279;
          Src = &v179;
          Length_4 = 8;
          goto LABEL_621;
      }
      if ( v17 != 73 )
      {
        if ( !PreviousMode )
        {
          if ( !Pool2 || v14 != 16 || v16 || Length )
            goto LABEL_277;
          SettingValue = PopPdcCsDeviceNotification(Pool2, v13);
          goto LABEL_421;
        }
LABEL_242:
        IsAppContainerOrIdentifyLevelContext = -1073741790;
        goto LABEL_100;
      }
    }
    if ( !Pool2 && !v16 )
    {
      v152 = 23;
      if ( v17 != 88 )
        v152 = 11;
      PopScreenOff(v152);
      goto LABEL_581;
    }
    goto LABEL_277;
  }
  if ( v17 == 50 )
  {
    if ( Pool2 || !v16 )
      goto LABEL_277;
    WakeTimerList = ExGetWakeTimerList(&Src, &Length_4);
    goto LABEL_357;
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
            HIDWORD(v179) = dword_140F0B8A4;
            LODWORD(v180) = dword_140F0B8AC - dword_140F0B8A8;
            BYTE4(v180) = PopCoolingMode;
            Src = &v179;
            Length_4 = 16;
            goto LABEL_620;
          }
          goto LABEL_277;
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
                      PopCurrentPowerState(&v179);
LABEL_79:
                      Src = &v179;
                      Length_4 = 32;
LABEL_620:
                      v86 = Length;
LABEL_621:
                      if ( !Src || !v16 )
                      {
LABEL_625:
                        InputBuffer = v15;
                        if ( v168 != SystemHiberFileSize && v168 != SystemHiberFileType )
                        {
LABEL_581:
                          IsAppContainerOrIdentifyLevelContext = 0;
                          goto LABEL_100;
                        }
                        goto LABEL_279;
                      }
                      if ( v86 >= Length_4 )
                      {
                        memmove(v16, Src, Length_4);
                        goto LABEL_625;
                      }
                      goto LABEL_99;
                    }
                    goto LABEL_277;
                  }
                  if ( !Pool2 )
                  {
                    if ( v16 )
                    {
LABEL_86:
                      byte_140F0B669 = PopFullWake & 1;
                      byte_140F0B675 = PopDisksRegisteredForIdle();
                      PopFilterCapabilities((__int64)&PopCapabilities, (__int64)&v179);
                      Src = &v179;
                      Length_4 = 76;
LABEL_87:
                      IsAppContainerOrIdentifyLevelContext = v162;
LABEL_88:
                      Pool2 = v166;
                      goto LABEL_620;
                    }
                    goto LABEL_277;
                  }
                  if ( (PopSimulate & 1) == 0 )
                    goto LABEL_277;
                  if ( v14 >= 0x4C )
                  {
                    PopCapabilities = *(_OWORD *)Pool2;
                    unk_140F0B670 = *((_OWORD *)Pool2 + 1);
                    xmmword_140F0B680 = *((_OWORD *)Pool2 + 2);
                    unk_140F0B690 = *((_OWORD *)Pool2 + 3);
                    qword_140F0B6A0 = Pool2[8];
                    dword_140F0B6A8 = *((_DWORD *)Pool2 + 18);
                    IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies(1LL, v13);
                    v162 = IsAppContainerOrIdentifyLevelContext;
                    InputBuffer = v15;
                    if ( IsAppContainerOrIdentifyLevelContext < 0 )
                      goto LABEL_279;
                    goto LABEL_86;
                  }
                  goto LABEL_99;
                }
              }
              if ( !Pool2 || !v16 )
                goto LABEL_277;
              if ( v14 < 0xE8 )
                goto LABEL_99;
              IsAppContainerOrIdentifyLevelContext = PopVerifySystemPowerPolicy(Pool2, (__int64)&v179);
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_279;
              v37 = &v179;
            }
            else
            {
              if ( Pool2 )
              {
                if ( v14 < 0xE8 )
                  goto LABEL_99;
                IsAppContainerOrIdentifyLevelContext = PopApplyPolicy(0, 0, Pool2, v14);
                InputBuffer = v15;
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_279;
              }
              else if ( !v16 )
              {
                goto LABEL_277;
              }
              v37 = (char **)&unk_140F0B2A4;
            }
LABEL_94:
            Src = v37;
            Length_4 = 232;
            goto LABEL_620;
          }
          if ( !Pool2 || v16 )
            goto LABEL_277;
          if ( v14 < 0x18 )
            goto LABEL_99;
          v13 = *(unsigned int *)Pool2;
          if ( (unsigned int)v13 >= 7 )
            goto LABEL_277;
          v38 = 3 * v13;
          if ( *((_QWORD *)&PopPowerStateHandlers + 3 * v13 + 1) )
          {
            if ( (_DWORD)v13 != 5 )
            {
              if ( (_DWORD)v13 != 4 )
                goto LABEL_277;
              v10 = (char *)PopShutdownHandler;
              if ( (void (__fastcall __noreturn *)())qword_140F0B5E8 != PopShutdownHandler )
                goto LABEL_277;
            }
          }
          *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v13) = *(_OWORD *)Pool2;
          *((_QWORD *)&PopPowerStateHandlers + 3 * v13 + 2) = Pool2[2];
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
                      v10 = (char *)&unk_140F0B671;
                      goto LABEL_123;
                    }
                  }
                  else
                  {
                    v10 = &byte_140F0B667;
                  }
LABEL_125:
                  v13 = *((_BYTE *)&PopPowerStateHandlers + 8 * v38 + 4) != 0 ? (unsigned int)v11 : 0;
                  if ( (int)v13 > (int)qword_140F0B6A0 )
                    LODWORD(qword_140F0B6A0) = *((_BYTE *)&PopPowerStateHandlers + 8 * v38 + 4) != 0 ? v11 : 0;
                  if ( v10 )
                  {
                    LOBYTE(v13) = 1;
                    PopChangeCapability(v10, v13);
                  }
                  goto LABEL_620;
                }
                v11 = 5LL;
                v43 = (PopSimulate & 0x2000) == 0;
                v10 = &byte_140F0B666;
              }
              else
              {
                v11 = 4LL;
                v43 = (PopSimulate & 0x20) == 0;
                v10 = (char *)&word_140F0B664 + 1;
              }
            }
            else
            {
              v11 = 3LL;
              v43 = (PopSimulate & 0x40) == 0;
              v10 = (char *)&word_140F0B664;
            }
          }
          else
          {
            v11 = 2LL;
            v43 = (PopSimulate & 8) == 0;
            v10 = &byte_140F0B663;
          }
LABEL_123:
          if ( !v43 )
            v10 = 0LL;
          goto LABEL_125;
        }
        v44 = v17 - 7;
        if ( !v44 )
        {
          if ( !Pool2 && v16 )
          {
            Src = &PpmProcessorDriverDispatchTable;
            Length_4 = 280;
            goto LABEL_620;
          }
          goto LABEL_277;
        }
        v45 = v44 - 1;
        if ( !v45 )
        {
          if ( Pool2 || !v16 )
            goto LABEL_277;
          v37 = (char **)PopPolicy;
          goto LABEL_94;
        }
        v46 = v45 - 1;
        if ( v46 )
        {
          v47 = v46 - 1;
          if ( v47 )
          {
            if ( v47 != 1 || Pool2 || !v16 )
              goto LABEL_277;
            PrimaryGroupThread = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
            v50 = PopProcessorInformation(&v179, v49, PrimaryGroupThread, &Length_4);
            Pool2 = v166;
LABEL_137:
            InputBuffer = v15;
            IsAppContainerOrIdentifyLevelContext = v50;
            if ( v50 < 0 )
              goto LABEL_279;
            Src = &v179;
            goto LABEL_620;
          }
          if ( !Pool2 || v16 )
            goto LABEL_277;
          if ( !v14 )
            goto LABEL_99;
          PopAcquireTransitionLock(3LL);
          PopAcquirePolicyLock(v52, v51);
          PopHiberEnabledReg = *(_BYTE *)Pool2 != 0;
          PopSetHiberPersistedRegValue(0, PopHiberEnabledReg, 0LL);
          IsAppContainerOrIdentifyLevelContext = PopHibernateEvaluation(0LL, 0LL, 0LL);
          PopReleasePolicyLock(v54, v53, v55, v56, ExplicitScope);
          PopReleaseTransitionLock(3LL);
          goto LABEL_143;
        }
        if ( Pool2 )
        {
          if ( v14 < 0x18 )
            goto LABEL_99;
          IsAppContainerOrIdentifyLevelContext = PopApplyAdminPolicy(1LL, Pool2);
          InputBuffer = v15;
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_279;
          IsAppContainerOrIdentifyLevelContext = ((__int64 (*)(void))PopResetCurrentPolicies)();
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_279;
        }
        else if ( !v16 )
        {
          goto LABEL_277;
        }
        v58 = &PopAdminPolicy;
LABEL_151:
        Src = v58;
        Length_4 = 24;
        goto LABEL_620;
      }
      if ( v17 > 18 )
      {
        v64 = v17 - 19;
        if ( v64 )
        {
          v65 = v64 - 1;
          if ( v65 )
          {
            v66 = v65 - 1;
            if ( v66 )
            {
              v67 = v66 - 1;
              if ( v67 )
              {
                if ( v67 == 1 && !Pool2 && v16 )
                {
                  IsAppContainerOrIdentifyLevelContext = PopLoggingInformation(P, &v170);
                  InputBuffer = v15;
                  if ( IsAppContainerOrIdentifyLevelContext < 0 )
                    goto LABEL_279;
                  Src = P[0];
                  Length_4 = (unsigned int)v170;
                  goto LABEL_620;
                }
                goto LABEL_277;
              }
            }
          }
        }
      }
      else if ( v17 != 18 )
      {
        v59 = v17 - 13;
        if ( v59 )
        {
          v60 = v59 - 1;
          if ( v60 )
          {
            v61 = v60 - 1;
            if ( v61 )
            {
              v62 = v61 - 1;
              if ( v62 )
              {
                if ( v62 != 1 || !Pool2 || v16 )
                  goto LABEL_277;
                if ( v14 >= 0x10 )
                {
                  if ( !(_QWORD)PopPowerStateNotifyHandler || !*Pool2 )
                  {
                    PopPowerStateNotifyHandler = *(_OWORD *)Pool2;
                    goto LABEL_620;
                  }
                  goto LABEL_277;
                }
                goto LABEL_99;
              }
              if ( Pool2 || !v16 )
                goto LABEL_277;
              if ( dword_140E019D8 )
                LODWORD(v179) = (unsigned int)v179 | 1;
              if ( dword_140E019A8 )
                LODWORD(v179) = (unsigned int)v179 | 2;
LABEL_180:
              Src = &v179;
              Length_4 = 4;
              goto LABEL_620;
            }
            if ( Pool2 || !v16 )
              goto LABEL_277;
            v63 = &qword_140F0B9E0;
          }
          else
          {
            if ( Pool2 || !v16 )
              goto LABEL_277;
            v63 = &qword_140F0B9D8;
          }
LABEL_184:
          Src = v63;
          Length_4 = 8;
          goto LABEL_620;
        }
      }
LABEL_496:
      IsAppContainerOrIdentifyLevelContext = -1073741822;
      goto LABEL_100;
    }
    if ( !Pool2 || v16 )
      goto LABEL_277;
    if ( v14 < 8 )
      goto LABEL_99;
    v68 = PopLogSleepDisabled(*(_DWORD *)Pool2, *((_DWORD *)Pool2 + 1), 0LL, 0LL);
LABEL_618:
    v57 = v68 < 0;
    IsAppContainerOrIdentifyLevelContext = v68;
LABEL_619:
    InputBuffer = v15;
    if ( v57 )
      goto LABEL_279;
    goto LABEL_620;
  }
  if ( v17 > 38 )
  {
    if ( v17 <= 44 )
    {
      if ( v17 == 44 )
      {
        if ( !Pool2 || v16 )
          goto LABEL_277;
        if ( v14 != 24 )
          goto LABEL_99;
        v68 = PopPowerRequestActionInfo(Pool2, v13);
        goto LABEL_618;
      }
      v13 = (unsigned int)(v17 - 39);
      if ( v17 != 39 )
      {
        v13 = (unsigned int)(v17 - 40);
        if ( v17 == 40 )
        {
          if ( Pool2 && v14 == 4 && !v16 )
          {
            LODWORD(v167) = *(_DWORD *)Pool2 != 0;
            PopSetPowerSettingValueAcDc((__int64)&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4u, (__int64)&v167);
            goto LABEL_620;
          }
          goto LABEL_277;
        }
        v13 = (unsigned int)(v17 - 41);
        if ( v17 == 41 )
        {
          if ( !Pool2 )
          {
            if ( v16 )
            {
              v86 = Length;
              if ( Length == 64 )
              {
                PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
                v87 = PopEsState;
                PopReleaseRwLock(&PopEsLock);
                v88 = v187;
                if ( v87 == 1 )
                  v88 = 1;
                v187 = v88;
                IsEnabled = TtmIsEnabled();
                if ( TtmIsEnabled() )
                {
                  IsAppContainerOrIdentifyLevelContext = TtmInitCurrentSession();
                  v162 = IsAppContainerOrIdentifyLevelContext;
                  InputBuffer = v15;
                  if ( IsAppContainerOrIdentifyLevelContext < 0 )
                    goto LABEL_279;
                  PopPowerRequestNotifyTtmSessionInitialized();
                }
                PopAcquirePolicyLock(v90, v89);
                LODWORD(v181) = 0;
                v179 = &PopNoMoreInput;
                v180 = &PopHiberBootForceMonitorOff;
                v182 = byte_140F0B391 != 0;
                v183 = dword_140F0B38C;
                HIDWORD(v181) = dword_140F0B3AC;
                v184 = qword_140F0B3B0;
                v189 = HIDWORD(qword_140F0B3B8);
                v185 = qword_140F0B3B8;
                v186 = dword_140F0B3C0;
                v188 = PopLidOpened;
                _m_prefetchw(&PopLidStateIsReliable);
                v191 = _InterlockedOr(&PopLidStateIsReliable, 0) != 0;
                Src = &v179;
                Length_4 = 64;
                v91 = (unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                PopPrintEx(3, (int)"PopAdaptive: Session %u is started\n", v91);
                PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED, v91, 0);
                PopReleasePolicyLock(v93, v92, v94, v95, ExplicitScope);
                IsAppContainerOrIdentifyLevelContext = v162;
                Pool2 = v166;
                goto LABEL_621;
              }
            }
          }
          goto LABEL_277;
        }
        v13 = (unsigned int)(v17 - 42);
        if ( v17 != 42 )
          goto LABEL_476;
        if ( !Pool2 || v14 != 16 || v16 )
          goto LABEL_277;
        if ( !*((_BYTE *)Pool2 + 13) || !*((_BYTE *)Pool2 + 12) )
        {
LABEL_303:
          if ( *((_BYTE *)Pool2 + 14) )
          {
            if ( *((_BYTE *)Pool2 + 12) )
              ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (char *)Pool2 + 4, 4u, 0LL, 0LL, 0, 0);
            if ( *((_BYTE *)Pool2 + 14) )
              PopDiagTraceSessionDisplayStateChange(
                *((_DWORD *)Pool2 + 1) == 0,
                *(_DWORD *)Pool2,
                *((unsigned __int8 *)Pool2 + 12),
                *((_DWORD *)Pool2 + 2));
          }
          goto LABEL_620;
        }
        if ( SSHSupportIsPlatformAoAc() && !PopConsoleDisplayState )
        {
          if ( *((_DWORD *)Pool2 + 1) != 2 )
          {
LABEL_300:
            PopProcessSessionDisplayStateChange(*((_BYTE *)Pool2 + 15), *((_DWORD *)Pool2 + 2));
LABEL_301:
            PopSetDisplayStatus(*((_DWORD *)Pool2 + 1));
            PopUpdateConsoleDisplayState(*((unsigned int *)Pool2 + 1));
            if ( *((_DWORD *)Pool2 + 1) == 1 )
              PopPowerAggregatorNotifyDisplayPoweredOn();
            goto LABEL_303;
          }
          v85 = *(unsigned int *)Pool2;
          v176 = 0LL;
          v177 = 0;
          LODWORD(v172) = v84;
          HIDWORD(v172) = 40;
          v173 = 0LL;
          v174 = 0LL;
          v175 = 0;
          IsAppContainerOrIdentifyLevelContext = DbgkWerCaptureLiveKernelDump2(
                                                   L"InvalidDisplayStateTransition",
                                                   v85,
                                                   0LL,
                                                   (__int64)&v172);
        }
        if ( *((_DWORD *)Pool2 + 1) == 2 )
          goto LABEL_301;
        goto LABEL_300;
      }
      if ( !Pool2 || v16 || v14 != 24 )
        goto LABEL_277;
      inserted = PopShutdownListenerInsertCallback(Pool2);
LABEL_325:
      IsAppContainerOrIdentifyLevelContext = inserted;
      goto LABEL_620;
    }
    v97 = v17 - 45;
    if ( v97 )
    {
      v98 = v97 - 1;
      if ( !v98 )
      {
        if ( !Pool2 )
          goto LABEL_277;
        if ( v14 < 2 )
          goto LABEL_277;
        if ( !v16 )
          goto LABEL_277;
        v103 = *(_WORD *)Pool2;
        if ( v103 >= KeQueryActiveGroupCount() )
          goto LABEL_277;
        v50 = PopProcessorInformation(&v179, v13, v103, &Length_4);
        goto LABEL_137;
      }
      v99 = v98 - 1;
      if ( !v99 )
      {
        if ( Pool2 && v14 == 16 )
        {
          v102 = PopUmpoSendLegacyEvent(Pool2);
          IsAppContainerOrIdentifyLevelContext = v102;
          if ( v102 < 0 )
          {
            InputBuffer = v15;
            if ( v102 != -1073741536 )
              goto LABEL_279;
          }
          goto LABEL_620;
        }
        goto LABEL_277;
      }
      v100 = v99 - 1;
      if ( !v100 )
      {
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_242;
        if ( !Pool2 || v16 )
          goto LABEL_277;
        switch ( v14 )
        {
          case 0x10u:
            v101 = 0LL;
            break;
          case 0x18u:
            v101 = Pool2 + 2;
            break;
          case 2u:
            WakeSource = PpmParkClearForcedMask(Pool2, v13);
            goto LABEL_262;
          default:
            goto LABEL_269;
        }
        WakeSource = PpmParkApplyForcedMask(Pool2, v101);
        goto LABEL_262;
      }
      goto LABEL_495;
    }
    if ( Pool2 || !v16 )
      goto LABEL_277;
    WakeTimerList = PopGetPowerRequestListInfo(&Src, &Length_4);
LABEL_357:
    IsAppContainerOrIdentifyLevelContext = WakeTimerList;
    InputBuffer = v15;
    if ( WakeTimerList < 0 )
      goto LABEL_279;
    v161[0] = 1;
    goto LABEL_620;
  }
  if ( v17 == 38 )
  {
    if ( !Pool2 || v16 )
      goto LABEL_277;
    if ( v14 == 8 )
    {
      WakeSource = PpmSetSimulatedLoad((PPROCESSOR_NUMBER)Pool2);
      goto LABEL_262;
    }
    if ( v14 == 4 )
    {
      WakeSource = PpmClearSimulatedLoad((PPROCESSOR_NUMBER)Pool2);
      goto LABEL_262;
    }
LABEL_269:
    IsAppContainerOrIdentifyLevelContext = -1073741811;
    goto LABEL_143;
  }
  if ( v17 > 32 )
  {
    v74 = v17 - 33;
    if ( !v74 )
      goto LABEL_496;
    v75 = v74 - 1;
    if ( !v75 )
      goto LABEL_496;
    v76 = v75 - 1;
    if ( v76 )
    {
      v77 = v76 - 1;
      if ( !v77 )
      {
        if ( !v16 )
          goto LABEL_277;
        if ( !(_DWORD)dword_140F0BBA0 || !qword_140F0BB98 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741275;
          goto LABEL_100;
        }
        Length_4 = dword_140F0BBA0 + 8;
        v78 = ExAllocatePool2(0x100uLL, (unsigned int)(dword_140F0BBA0 + 8), 0x206D654Du);
        v79 = (_DWORD *)v78;
        if ( v78 )
        {
          Src = (PVOID)v78;
          v161[0] = 1;
          memmove((void *)(v78 + 8), qword_140F0BB98, (unsigned int)dword_140F0BBA0);
          *v79 = (unsigned int)dword_140F0BBA0 >> 4;
          goto LABEL_620;
        }
        goto LABEL_218;
      }
      if ( v77 != 1 || !Pool2 || v16 )
        goto LABEL_277;
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
          goto LABEL_279;
        PopDiagTraceServiceNotification(Pool2, v13);
        goto LABEL_620;
      }
      goto LABEL_242;
    }
    if ( Pool2 || !v16 )
      goto LABEL_277;
    if ( (_BYTE)v13 )
    {
      PopReleasePolicyLock(1LL, v13, v10, v11, ExplicitScope);
      v164 = 0;
    }
    IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(0LL, &Length_4);
    if ( IsAppContainerOrIdentifyLevelContext != -1073741789 )
    {
LABEL_143:
      v57 = IsAppContainerOrIdentifyLevelContext < 0;
      goto LABEL_619;
    }
    v80 = (void *)ExAllocatePool2(0x40uLL, Length_4, 0x206D654Du);
    Src = v80;
    if ( !v80 )
      goto LABEL_218;
    v161[0] = 1;
    WakeSource = PopGetWakeSource(v80, &Length_4);
LABEL_262:
    IsAppContainerOrIdentifyLevelContext = WakeSource;
    goto LABEL_143;
  }
  if ( v17 == 32 )
    goto LABEL_496;
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
          goto LABEL_277;
        if ( v14 >= 8 )
        {
          if ( v17 == 30 )
            PopDiagTraceAppPowerMessage(Pool2);
          else
            PopDiagTraceAppPowerMessageEnd(Pool2);
          goto LABEL_620;
        }
        goto LABEL_99;
      }
      if ( Pool2 || !v16 )
        goto LABEL_277;
      Length_4 = 4;
      Src = (PVOID)ExAllocatePool2(0x100uLL, 4uLL, 0x206D654Du);
      if ( Src )
      {
        v161[0] = 1;
        *(_DWORD *)Src = PopConsoleDisplayState;
        goto LABEL_620;
      }
LABEL_218:
      IsAppContainerOrIdentifyLevelContext = -1073741670;
      goto LABEL_100;
    }
    PopSuspendResumePdc(1LL);
    PopHiberBootForceMonitorOff = 1;
    SettingValue = PoPowerOffMonitor();
LABEL_421:
    IsAppContainerOrIdentifyLevelContext = SettingValue;
    goto LABEL_100;
  }
  if ( !Pool2 )
    goto LABEL_277;
  if ( v16 )
    goto LABEL_277;
  if ( Length )
    goto LABEL_277;
  if ( v14 < 0x1C )
    goto LABEL_277;
  v170 = (unsigned int *)(Pool2 + 3);
  v70 = *((_DWORD *)Pool2 + 6);
  if ( !v70 )
    goto LABEL_277;
  v13 = (__int64)Pool2 + 20;
  v167 = (int *)Pool2 + 5;
  if ( *((_DWORD *)Pool2 + 5) > 2u )
    goto LABEL_277;
  InputBuffer = v15;
  if ( *(_DWORD *)Pool2 != 1 )
  {
    IsAppContainerOrIdentifyLevelContext = -1073741736;
    goto LABEL_279;
  }
  v71 = v70 + 28;
  v72 = -1;
  if ( v71 >= 0x1C )
    v72 = v71;
  Length_4 = v72;
  IsAppContainerOrIdentifyLevelContext = v71 < 0x1C ? 0xC0000095 : 0;
  if ( v71 >= 0x1C )
  {
    if ( v14 < v72 )
      goto LABEL_277;
    v73 = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    Pool2 = v166;
    v68 = PopSetPowerSettingValue((GUID *)((char *)v166 + 4), v73, *v167, *v170, (char *)v166 + 28);
    goto LABEL_618;
  }
LABEL_279:
  v82 = P[0];
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v161[0] )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v164 )
    PopReleasePolicyLock(v82, v13, v10, v11, ExplicitScope);
  if ( Pool2 && Pool2 != InputBuffer && Pool2 != (_QWORD *)psz )
    ExFreePoolWithTag(Pool2, 0x206D654Du);
  return IsAppContainerOrIdentifyLevelContext;
}
