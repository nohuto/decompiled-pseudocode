/*
 * XREFs of PopPowerInformationInternal @ 0x140A1B29C
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     PoLatencySensitivityHint @ 0x140201F50 (PoLatencySensitivityHint.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     PopFxClearDeviceConstraints @ 0x140354884 (PopFxClearDeviceConstraints.c)
 *     PopDeepSleepSetDisengageReason @ 0x140354D44 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140354F38 (PopDeepSleepClearDisengageReason.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     RtlStringCbCopyW @ 0x140436640 (RtlStringCbCopyW.c)
 *     PopSetWatchdog @ 0x140457F50 (PopSetWatchdog.c)
 *     RtlCheckTokenMembership @ 0x140472D90 (RtlCheckTokenMembership.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x140486A74 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 *     SSHSupportIsPlatformAoAc @ 0x140491754 (SSHSupportIsPlatformAoAc.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404ABF8C (PopDiagTraceSessionDisplayStateChange.c)
 *     PoDirectedDripsSetDeviceFlags @ 0x1404B3010 (PoDirectedDripsSetDeviceFlags.c)
 *     SSHSupportQueryIsLibraryEnabled @ 0x1404C86DC (SSHSupportQueryIsLibraryEnabled.c)
 *     PopPlRegisterPowerPlane @ 0x1404D1E28 (PopPlRegisterPowerPlane.c)
 *     PpmPerfGetVmPerfConfig @ 0x1404D4AEC (PpmPerfGetVmPerfConfig.c)
 *     PpmInternalProcessorIdleVeto @ 0x1404DA95C (PpmInternalProcessorIdleVeto.c)
 *     PoDirectedDripsClearDeviceFlags @ 0x1404F7720 (PoDirectedDripsClearDeviceFlags.c)
 *     PpmInternalPlatformIdleVeto @ 0x1404F7834 (PpmInternalPlatformIdleVeto.c)
 *     PopGetEnergyEstimationInfo @ 0x1405C9280 (PopGetEnergyEstimationInfo.c)
 *     PpmPerfGetVmCppcConfig @ 0x1405CE210 (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x1405CE4BC (PpmPerfGetVmPerfPriorityConfig.c)
 *     PopShutdownListenerRemoveCallback @ 0x1405D2FB0 (PopShutdownListenerRemoveCallback.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopBootStatUnlock @ 0x1406E9C8C (PopBootStatUnlock.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1406EBB20 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1406EC878 (PopDirectedDripsUmPowerInformationInternal.c)
 *     PopDiagTraceSleepReliabilityDiagConfigUpdate @ 0x1406ED708 (PopDiagTraceSleepReliabilityDiagConfigUpdate.c)
 *     PopFxPlatformRegisterInterface @ 0x1406EDD84 (PopFxPlatformRegisterInterface.c)
 *     PoUserShutdownCancelled @ 0x1406EFBC0 (PoUserShutdownCancelled.c)
 *     PopCheckTestsigningEnabled @ 0x14073D2E4 (PopCheckTestsigningEnabled.c)
 *     PopHandleProvIdentifierRequest @ 0x140740EB8 (PopHandleProvIdentifierRequest.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x140743A28 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14074FCF8 (PopUpdateSmartUserPresencePredictions.c)
 *     PopScreenOn @ 0x140750B94 (PopScreenOn.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x140752B60 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140771940 (RtlCapabilityCheckForSingleSessionSku.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     PspIsContextAdmin @ 0x1408D9DA4 (PspIsContextAdmin.c)
 *     PopManageTransitionRecordRequest @ 0x1409225C8 (PopManageTransitionRecordRequest.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409649CC (PopSetPowerSettingValueAcDc.c)
 *     RtlIsMultiSessionSku @ 0x140A09E70 (RtlIsMultiSessionSku.c)
 *     PopNotifyWin32kRequestStatus @ 0x140A1BFAC (PopNotifyWin32kRequestStatus.c)
 *     PopAdaptiveGetSessionState @ 0x140A1C024 (PopAdaptiveGetSessionState.c)
 *     PopBootStatGet @ 0x140A1C0B0 (PopBootStatGet.c)
 *     PopIsRunningAsLocalSystem @ 0x140A1C494 (PopIsRunningAsLocalSystem.c)
 *     PopS0LowPowerIdleInfo @ 0x140A1C4C0 (PopS0LowPowerIdleInfo.c)
 *     PopTransitionCheckpoint @ 0x140A1C604 (PopTransitionCheckpoint.c)
 *     PopBootStatSet @ 0x140A1C6F8 (PopBootStatSet.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A1CF1C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopUpdateConsoleDisplayState @ 0x140A1DEFC (PopUpdateConsoleDisplayState.c)
 *     PopSetDisplayStatus @ 0x140A22500 (PopSetDisplayStatus.c)
 *     PopSessionWinlogonNotification @ 0x140A22590 (PopSessionWinlogonNotification.c)
 *     PopScreenOff @ 0x140A2C5B8 (PopScreenOff.c)
 *     PopBroadcastSessionInfo @ 0x140A2C8CC (PopBroadcastSessionInfo.c)
 *     TtmNotifySessionPowerStateChange @ 0x140A2D020 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140A2D208 (TtmNotifySessionTerminalInput.c)
 *     PopEsQueueStateEvaluation @ 0x140A36D7C (PopEsQueueStateEvaluation.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140A4137C (PpmPerfGetFrequencyBandStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A60704 (PpmIdleGetConcurrencyStats.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A69270 (PpmPerfUpdateDomainPolicy.c)
 *     PopFanReadFanNoiseInfo @ 0x140A77108 (PopFanReadFanNoiseInfo.c)
 *     PpmPerfQueryProcMeasurementValues @ 0x140A7B970 (PpmPerfQueryProcMeasurementValues.c)
 *     PopUserPresenceHostStateChange @ 0x140A86AB0 (PopUserPresenceHostStateChange.c)
 *     PopAcquireTransitionLock @ 0x140A8DB1C (PopAcquireTransitionLock.c)
 *     PopSuspendResumeInvocation @ 0x140A9221C (PopSuspendResumeInvocation.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A9878C (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PoUserShutdownInitiated @ 0x140A9B420 (PoUserShutdownInitiated.c)
 *     PopReleaseTransitionLock @ 0x140AA0354 (PopReleaseTransitionLock.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6644 (PopBootStatRestoreDefaults.c)
 *     PopReadResumeContext @ 0x140AABB28 (PopReadResumeContext.c)
 *     PopReadPagesFromHiberFile @ 0x140AABC80 (PopReadPagesFromHiberFile.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140AAD190 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBootStatCheckIntegrity @ 0x140AB0F30 (PopBootStatCheckIntegrity.c)
 *     PopUpdateExternalDisplayState @ 0x140AB5944 (PopUpdateExternalDisplayState.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140AB71C8 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PpmPerfGetBrandedFrequency @ 0x140AB78D8 (PpmPerfGetBrandedFrequency.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140AB8564 (PopUpdateBackgroundCoolingStatus.c)
 *     PpmPerfGetVmPerfControlSupport @ 0x140ABD9D0 (PpmPerfGetVmPerfControlSupport.c)
 *     PopNetUpdateStandbyRequest @ 0x140ABE740 (PopNetUpdateStandbyRequest.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int16 **a7,
        _DWORD *a8,
        _BYTE *a9)
{
  __m256i *v9; // rdi
  int v10; // ebx
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  int v13; // ebx
  int v14; // ebx
  unsigned __int16 *v15; // rbx
  char *v16; // rax
  int EnergyEstimationInfo; // ebx
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  unsigned int SessionId; // eax
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  __int16 *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int16 *v41; // rsi
  int v42; // r14d
  int v43; // eax
  ULONG v44; // edx
  int v45; // ebx
  int v46; // ebx
  int v47; // ebx
  __int64 v48; // rax
  unsigned __int16 *v49; // rdi
  int v50; // ebx
  int v51; // ebx
  int v52; // r14d
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int16 *v55; // rcx
  __int64 v56; // r8
  const wchar_t *v57; // rdx
  __int64 v58; // rax
  unsigned __int16 *v59; // rcx
  int v60; // eax
  int v61; // ebx
  unsigned __int16 *v62; // rax
  int v63; // ebx
  int v64; // ebx
  int v65; // ebx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  unsigned __int16 *v69; // rbx
  __int64 *i; // rax
  unsigned __int16 *v71; // rax
  unsigned int v72; // r8d
  __int64 v73; // rax
  __int64 v74; // rdx
  unsigned int v75; // r8d
  unsigned __int16 *v76; // rbx
  int v77; // ebx
  int v78; // ebx
  unsigned __int16 *v79; // rbx
  char PowerButtonBugcheckEnabled; // al
  BOOLEAN *p_IsMember; // rdx
  const WNF_STATE_NAME *v82; // rcx
  __int64 (__fastcall **v83)(unsigned int *); // rax
  int v84; // ebx
  int v85; // ebx
  int v86; // ebx
  __int64 v87; // rax
  __int128 v88; // xmm1
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rcx
  int v92; // ebx
  int v93; // ebx
  __int32 v94; // ecx
  unsigned __int16 *v95; // rax
  int v96; // ebx
  unsigned __int16 *v97; // rax
  int v98; // ecx
  bool v99; // zf
  unsigned __int16 *v100; // rax
  char v101; // bl
  unsigned __int32 v102; // eax
  __int64 v103; // rax
  unsigned __int16 *v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  char v108; // al
  _PROCESSOR_NUMBER *v109; // rcx
  int VmPerfPriorityConfig; // eax
  bool v111; // sf
  int VmCppcConfig; // eax
  __int64 v113; // rax
  unsigned __int64 v114; // rbx
  unsigned __int16 *v115; // rax
  __int64 v116; // rax
  ULONG_PTR v117; // rcx
  int v118; // ebx
  int v119; // ebx
  int v120; // ebx
  int v121; // ebx
  unsigned __int16 *v122; // rax
  unsigned int v123; // r8d
  __int64 v124; // rax
  unsigned __int16 *v125; // rbx
  __int64 v126; // rax
  char v127; // bl
  int FanNoiseInfo; // eax
  unsigned __int32 v129; // r14d
  unsigned int v130; // edi
  unsigned __int16 *v131; // rcx
  unsigned __int16 *v132; // rax
  __int64 v133; // rcx
  int v134; // eax
  __int8 v135; // al
  _KPROCESS *Process; // rcx
  unsigned int v137; // eax
  int v138; // ebx
  unsigned __int16 *v139; // rax
  __int64 v140; // rax
  unsigned __int16 *v141; // rax
  __int64 Pool2; // rax
  void *ExplicitScope; // [rsp+20h] [rbp-89h]
  BOOLEAN IsMember; // [rsp+40h] [rbp-69h] BYREF
  BOOLEAN HasCapability; // [rsp+41h] [rbp-68h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+42h] [rbp-67h]
  int v147; // [rsp+44h] [rbp-65h] BYREF
  __int64 v148; // [rsp+48h] [rbp-61h] BYREF
  int v149; // [rsp+50h] [rbp-59h] BYREF
  int v150; // [rsp+54h] [rbp-55h] BYREF
  unsigned __int16 *v151; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int16 *v152; // [rsp+60h] [rbp-49h] BYREF
  PVOID P; // [rsp+68h] [rbp-41h]
  UNICODE_STRING CapabilityName; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v155[8]; // [rsp+80h] [rbp-29h] BYREF

  v9 = (__m256i *)a3;
  v10 = a1;
  *a7 = 0LL;
  *a8 = 0;
  *a9 = 0;
  CapabilityName = 0LL;
  v11 = (unsigned int)a4;
  LODWORD(v148) = a2;
  HasCapability = 0;
  LOBYTE(a4) = KeGetCurrentThread()->PreviousMode;
  IsMember = 0;
  v149 = 0;
  v151 = 0LL;
  v152 = 0LL;
  v150 = 0;
  P = 0LL;
  PreviousMode = a4;
  if ( (_BYTE)a4 )
  {
    if ( (unsigned int)a1 <= 0x1C )
    {
      v21 = 347603205;
      if ( _bittest(&v21, a1) )
        return (unsigned int)-1073741790;
    }
    v37 = (unsigned int)(a1 - 40);
    if ( (unsigned int)v37 <= 0x38 )
    {
      a1 = 0x18082000A8E0003LL;
      if ( _bittest64(&a1, v37) )
        return (unsigned int)-1073741790;
    }
    v38 = (unsigned int)(v10 - 29);
    if ( (unsigned int)v38 <= 0x23 )
    {
      a1 = 0x88B4C0001LL;
      if ( _bittest64(&a1, v38) )
      {
        if ( !PspIsContextAdmin() )
          return (unsigned int)-1073741790;
      }
    }
    if ( (unsigned int)(v10 - 82) <= 1 && !PopCheckTestsigningEnabled() )
      return (unsigned int)-1073741790;
    if ( (v39 = (unsigned int)(v10 - 35), (unsigned int)v39 <= 0x37) && (a1 = 0xA0001000000003LL, _bittest64(&a1, v39))
      || v10 == 24 )
    {
      if ( !(unsigned __int8)PopIsRunningAsLocalSystem(a1) )
        return (unsigned int)-1073741790;
    }
    switch ( v10 )
    {
      case 80:
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
          return (unsigned int)-1073741727;
LABEL_235:
        if ( (_DWORD)v11 != 8 || !v9 || a6 || a5 )
          return (unsigned int)-1073741811;
        qword_140FD7258 = PopAdaptiveGetSystemInitiatedRebootTargetState(v22, a2, a3, a4);
        byte_140FD7250 = 1;
        return 0;
      case 61:
        if ( !PopCheckTestsigningEnabled() || !PspIsContextAdmin() )
          return (unsigned int)-1073741790;
        goto LABEL_457;
      case 45:
        EnergyEstimationInfo = 0;
        if ( !(unsigned __int8)PopIsRunningAsLocalSystem(a1) && (!PopCheckTestsigningEnabled() || !PspIsContextAdmin()) )
          return (unsigned int)-1073741790;
        goto LABEL_399;
      case 25:
        v56 = 0x7FFFLL;
        v57 = L"systemManagement";
        while ( *v57 )
        {
          ++v57;
          if ( !--v56 )
            goto LABEL_274;
        }
        CapabilityName.Buffer = L"systemManagement";
        CapabilityName.Length = 2 * (0x7FFF - v56);
        CapabilityName.MaximumLength = CapabilityName.Length + 2;
LABEL_274:
        EnergyEstimationInfo = RtlCapabilityCheckForSingleSessionSku(0LL, &CapabilityName, &HasCapability);
        if ( EnergyEstimationInfo < 0 )
          return (unsigned int)EnergyEstimationInfo;
        if ( HasCapability )
          goto LABEL_180;
        return (unsigned int)-1073741790;
    }
    a2 = (unsigned int)v148;
    LOBYTE(a4) = PreviousMode;
  }
  else
  {
    v12 = (unsigned int)(a1 - 24);
    if ( (unsigned int)v12 <= 0x3B )
    {
      a1 = 0xD00811169F09201LL;
      if ( _bittest64(&a1, v12) )
        return (unsigned int)-1073741637;
    }
    if ( v10 == 5 || v10 == 7 )
      return (unsigned int)-1073741637;
  }
  if ( v10 > 53 )
  {
    if ( v10 > 76 )
    {
      if ( v10 > 87 )
      {
        switch ( v10 )
        {
          case 'X':
            return (unsigned int)PopManageTransitionRecordRequest(a4, (__int64)v9, (unsigned int)v11);
          case 'Y':
            if ( !a5 || a6 != 20 )
              return (unsigned int)-1073741789;
            PopAcquirePolicyLock((unsigned int)(v10 - 89), a2);
            EnergyEstimationInfo = 0;
            if ( byte_140F0B8D3 )
            {
              Pool2 = ExAllocatePool2(0x100uLL);
              if ( Pool2 )
              {
                *(_OWORD *)Pool2 = PopAcpiTimeAndAlarmCapabilities;
                v34 = (unsigned int)dword_140F07C50;
                *(_DWORD *)(Pool2 + 16) = dword_140F07C50;
                *a7 = (unsigned __int16 *)Pool2;
                *a8 = 20;
                *a9 = 1;
              }
              else
              {
                EnergyEstimationInfo = -1073741670;
              }
            }
            else
            {
              EnergyEstimationInfo = -1073741637;
            }
            goto LABEL_86;
          case 'Z':
            if ( !v9 || (unsigned int)v11 < 0x14 || a5 && a6 )
              return (unsigned int)-1073741811;
            return (unsigned int)PopSuspendResumeInvocation(v9);
        }
        if ( v10 != 91 )
        {
          if ( v10 == 92 )
            return (unsigned int)PopHandleProvIdentifierRequest((__int64)v9, v11, a5, a6, a7, a8);
          if ( v10 != 93 )
          {
            if ( v10 != 94 )
            {
              if ( (unsigned int)(v10 - 95) > 1 )
                return (unsigned int)-1073741811;
              if ( (_DWORD)v11 != 12 )
                return (unsigned int)-1073741811;
              if ( a5 )
                return (unsigned int)-1073741811;
              if ( v9->m256i_i32[1] )
                return (unsigned int)-1073741811;
              v19 = v9->m256i_u32[2];
              if ( (unsigned int)v19 >= 0x20 )
                return (unsigned int)-1073741811;
              LOBYTE(a2) = v10 == 95;
              return (unsigned int)PopNotifyWin32kRequestStatus(v19, a2);
            }
            if ( (unsigned int)v11 < 0xC )
              return (unsigned int)-1073741789;
            if ( !a5 )
              return (unsigned int)-1073741811;
            v71 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
            v41 = v71;
            if ( !v71 )
              return (unsigned int)-1073741670;
            VmPerfPriorityConfig = PpmPerfGetVmPerfPriorityConfig(v9->m256i_u32[2], v71, v72);
LABEL_409:
            EnergyEstimationInfo = VmPerfPriorityConfig;
            v111 = VmPerfPriorityConfig < 0;
            goto LABEL_412;
          }
          if ( (_DWORD)a2 )
            return (unsigned int)-1073741637;
          if ( !a5 )
            return (unsigned int)-1073741811;
          v73 = ExAllocatePool2(0x100uLL);
          v76 = (unsigned __int16 *)v73;
          if ( !v73 )
            return (unsigned int)-1073741670;
          PpmPerfGetVmPerfPrioritySupport(v73, v74, v75);
          *a7 = v76;
          *a8 = 8;
          goto LABEL_287;
        }
        if ( !a5 || a6 < 0x24 )
          return (unsigned int)-1073741789;
        v141 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
        v49 = v141;
        if ( !v141 )
          return (unsigned int)-1073741670;
        EnergyEstimationInfo = PopGetEnergyEstimationInfo(v141);
        if ( EnergyEstimationInfo >= 0 )
        {
          *a7 = v49;
          EnergyEstimationInfo = 0;
          *a8 = 36;
          *a9 = 1;
          return (unsigned int)EnergyEstimationInfo;
        }
LABEL_169:
        v44 = 544040269;
        v55 = v49;
        goto LABEL_152;
      }
      if ( v10 == 87 )
      {
        if ( !v9 || (_DWORD)v11 != 24 || a5 )
          return (unsigned int)-1073741811;
        return (unsigned int)PopShutdownListenerRemoveCallback(v9);
      }
      if ( v10 <= 82 )
      {
        if ( v10 != 82 )
        {
          if ( v10 != 77 )
          {
            if ( v10 == 78 )
            {
              if ( !a5 )
                return (unsigned int)-1073741811;
              v69 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
              if ( !v69 )
                return (unsigned int)-1073741670;
              for ( i = (__int64 *)PpmPerfDomainHead; i != &PpmPerfDomainHead; i = (__int64 *)*i )
              {
                v133 = i[53];
                if ( v133 )
                {
                  v134 = guard_dispatch_icall_no_overrides(v133);
                  goto LABEL_506;
                }
              }
              v134 = 0;
LABEL_506:
              *(_DWORD *)v69 = v134;
              *a7 = v69;
              *a8 = 4;
              goto LABEL_287;
            }
            if ( v10 == 79 )
            {
              if ( !v9 || (_DWORD)v11 != 12 )
                return (unsigned int)-1073741811;
              v129 = v9->m256i_u32[2];
              v147 = 0;
              EnergyEstimationInfo = PpmPerfQueryProcMeasurementValues(v129, &v147, 0LL, 0LL);
              if ( EnergyEstimationInfo < 0 )
                return (unsigned int)EnergyEstimationInfo;
              v130 = 24 * v147 + 8;
              if ( a6 != 4 )
              {
                if ( a6 < v130 )
                  return (unsigned int)-1073741789;
                v132 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
                if ( !v132 )
                  return (unsigned int)-1073741670;
                *a8 = v130;
                *a9 = 1;
                *a7 = v132;
                *(_DWORD *)v132 = v147;
                return (unsigned int)PpmPerfQueryProcMeasurementValues(v129, &v147, v132 + 4, (unsigned int)(24 * v147));
              }
              v131 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
              if ( !v131 )
                return (unsigned int)-1073741670;
              *(_DWORD *)v131 = v147;
              *a7 = v131;
              *a8 = 4;
LABEL_134:
              *a9 = 1;
              return (unsigned int)EnergyEstimationInfo;
            }
            v22 = (unsigned int)(v10 - 80);
            if ( v10 != 80 )
            {
              if ( (_DWORD)v11 != 40 || !v9 || a6 != 16 || !a5 )
                return (unsigned int)-1073741811;
              SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
              PopAdaptiveGetSessionState(SessionId, &v9->m256i_u64[1], a5);
              return 0;
            }
            goto LABEL_235;
          }
LABEL_243:
          if ( (_DWORD)v11 != 12 )
            return (unsigned int)-1073741789;
          if ( !a5 )
            return (unsigned int)-1073741811;
          EnergyEstimationInfo = PpmIdleGetConcurrencyStats((unsigned int)v10, v9->m256i_u16[4], &v152, &v150);
          if ( EnergyEstimationInfo < 0 )
            return (unsigned int)EnergyEstimationInfo;
          *a7 = v152;
          *a8 = v150;
          goto LABEL_134;
        }
        if ( (_DWORD)v11 != 12 || !v9 || a6 || a5 )
          return (unsigned int)-1073741811;
        v148 = 0LL;
        LODWORD(v148) = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v135 = v9->m256i_i8[8];
        BYTE4(v148) = 1;
        Process = KeGetCurrentThread()->ApcState.Process;
        BYTE5(v148) = v135;
        v137 = PsGetSessionIdEx((__int64)Process);
        PopSessionWinlogonNotification(v137, &v148);
        return 0;
      }
      v50 = v10 - 83;
      if ( !v50 )
      {
        if ( (_DWORD)v11 != 16 || !v9 || a6 || a5 )
          return (unsigned int)-1073741811;
        return (unsigned int)PopAdaptiveSetSystemInitiatedRebootTargetStateOverride((__int64)v9);
      }
      v51 = v50 - 1;
      if ( v51 )
      {
        v138 = v51 - 1;
        if ( v138 )
        {
          if ( v138 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 8 || !a5 )
            return (unsigned int)-1073741789;
          v139 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
          LODWORD(v29) = 0;
          if ( !v139 )
            return (unsigned int)-1073741670;
          *(_DWORD *)v139 = ExBootAppErrorDiagCode;
          *((_DWORD *)v139 + 1) = ExBootAppFailureStatus;
          *a7 = v139;
          *a8 = 8;
          goto LABEL_368;
        }
        if ( !a5 )
          return (unsigned int)-1073741811;
        v140 = ExAllocatePool2(0x100uLL);
        v49 = (unsigned __int16 *)v140;
        if ( !v140 )
          return (unsigned int)-1073741670;
        EnergyEstimationInfo = PopFanReadFanNoiseInfo(85LL, v140);
        if ( EnergyEstimationInfo >= 0 )
        {
          *a7 = v49;
          *a8 = 88;
          goto LABEL_134;
        }
        goto LABEL_169;
      }
      if ( !a5 )
        return (unsigned int)-1073741811;
      v52 = 160;
      v53 = ExAllocatePool2(0x100uLL);
      v49 = (unsigned __int16 *)v53;
      if ( !v53 )
        return (unsigned int)-1073741670;
      FanNoiseInfo = PopFanReadFanNoiseInfo(84LL, v53);
      goto LABEL_490;
    }
    if ( v10 == 76 )
      goto LABEL_243;
    if ( v10 > 65 )
    {
      if ( v10 <= 71 )
      {
        if ( v10 == 71 )
        {
          if ( (_DWORD)v11 == 12 )
          {
            v127 = v9->m256i_i8[8];
            PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepReliabilityDiagLock);
            if ( PopSleepReliabilityDetailedDiagEnabled != v127 )
            {
              PopSleepReliabilityDetailedDiagEnabled = v127;
              PopDiagTraceSleepReliabilityDiagConfigUpdate();
            }
            PopReleaseRwLock(&PopSleepReliabilityDiagLock);
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        v118 = v10 - 66;
        if ( !v118 )
          return (unsigned int)-1073741637;
        v119 = v118 - 1;
        if ( !v119 )
        {
          *a8 = 0;
          *a7 = 0LL;
          v126 = ExAllocatePool2(0x100uLL);
          LODWORD(v29) = 0;
          v59 = (unsigned __int16 *)v126;
          if ( !v126 )
            return (unsigned int)-1073741670;
          v60 = PopDisableInboxPepGeneratedConstraintsOverride;
          goto LABEL_388;
        }
        v120 = v119 - 1;
        if ( !v120 )
          return PopIdleScanInterval == 0 ? 0xC00000BB : 0;
        v121 = v120 - 1;
        if ( v121 )
        {
          if ( v121 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( v9->m256i_i32[1] > 2u )
            return (unsigned int)-1073741637;
          if ( v9->m256i_i32[1] == 2 && (unsigned int)v11 < 0x20 )
            return (unsigned int)-1073741789;
          if ( !a5 )
            return (unsigned int)-1073741811;
          v122 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
          v41 = v122;
          if ( !v122 )
            return (unsigned int)-1073741670;
          if ( v9->m256i_i32[1] == 2 )
            VmCppcConfig = PpmPerfGetVmCppcConfig(
                             v9->m256i_u32[3],
                             v9->m256i_u32[2],
                             v9->m256i_u32[4],
                             v9->m256i_i32[5],
                             v9->m256i_i32[6],
                             v9->m256i_i8[28],
                             v122);
          else
            VmCppcConfig = PpmPerfGetVmPerfConfig(v9->m256i_i32[2], v122, v123);
          EnergyEstimationInfo = VmCppcConfig;
          v111 = VmCppcConfig < 0;
LABEL_412:
          if ( !v111 )
          {
            *a7 = v41;
            goto LABEL_133;
          }
          goto LABEL_150;
        }
        if ( !a5 )
          return (unsigned int)-1073741811;
        v124 = ExAllocatePool2(0x100uLL);
        v125 = (unsigned __int16 *)v124;
        if ( !v124 )
          return (unsigned int)-1073741670;
        PpmPerfGetVmPerfControlSupport(v124);
        *a7 = v125;
        *a8 = a6 < 0x14 ? 1 : 20;
LABEL_287:
        *a9 = 1;
        return 0;
      }
      if ( v10 != 72 )
      {
        if ( v10 != 73 )
        {
          if ( (unsigned int)(v10 - 74) > 1 )
            return (unsigned int)-1073741811;
          if ( (_DWORD)v11 != 12 )
            return (unsigned int)-1073741789;
          if ( !a5 )
            return (unsigned int)-1073741811;
          if ( v10 == 74 )
            v52 = 296;
          else
            v52 = 592;
          v54 = ExAllocatePool2(0x100uLL);
          v41 = (unsigned __int16 *)v54;
          if ( !v54 )
            return (unsigned int)-1073741670;
          EnergyEstimationInfo = PpmIdleGetPackageIdleIntervalStats((unsigned int)v10, v9->m256i_u16[4], v54);
          if ( EnergyEstimationInfo >= 0 )
          {
            *a7 = v41;
LABEL_174:
            *a8 = v52;
            goto LABEL_134;
          }
LABEL_150:
          v44 = 544040269;
LABEL_151:
          v55 = v41;
LABEL_152:
          ExFreePoolWithTag(v55, v44);
          return (unsigned int)EnergyEstimationInfo;
        }
        if ( (unsigned int)v11 < 0xC )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        PopUserPresenceHostStateChange(v9->m256i_u32[2], a2, a3, a4);
        return 0;
      }
      if ( !a5 )
        return (unsigned int)-1073741811;
      v52 = 2304;
      v68 = ExAllocatePool2(0x100uLL);
      v49 = (unsigned __int16 *)v68;
      if ( !v68 )
        return (unsigned int)-1073741670;
      FanNoiseInfo = PpmPerfGetFrequencyBandStats(v68);
LABEL_490:
      EnergyEstimationInfo = FanNoiseInfo;
      if ( FanNoiseInfo >= 0 )
      {
LABEL_307:
        *a7 = v49;
        goto LABEL_174;
      }
      goto LABEL_169;
    }
    if ( v10 == 65 )
    {
      if ( (_DWORD)v11 != 16 )
        return (unsigned int)-1073741811;
      v117 = v9->m256i_u64[1];
      if ( !v117 )
        return (unsigned int)-1073741811;
      EnergyEstimationInfo = PopFxClearDeviceConstraints(v117);
      v20 = 0;
      if ( EnergyEstimationInfo < 0 )
        return (unsigned int)EnergyEstimationInfo;
      return v20;
    }
    if ( v10 <= 60 )
    {
      if ( v10 == 60 )
      {
        if ( a5 )
        {
          PopAcquireTransitionLock(8LL);
          EnergyEstimationInfo = PopReadResumeContext(&v149, &v151);
          PopReleaseTransitionLock(8LL);
          if ( EnergyEstimationInfo < 0 )
            return (unsigned int)EnergyEstimationInfo;
          *a7 = v151;
          *a8 = v149;
          goto LABEL_45;
        }
        return (unsigned int)-1073741789;
      }
      if ( v10 != 54 && v10 != 56 )
      {
        if ( v10 == 57 )
        {
          if ( a5 )
            return (unsigned int)-1073741811;
          return (unsigned int)PopPlRegisterPowerPlane((__int64)v9, v11, a3);
        }
        else if ( v10 == 58 )
        {
          if ( (unsigned int)v11 < 0x18 )
            return (unsigned int)-1073741811;
          return (unsigned int)PoDirectedDripsSetDeviceFlags(v9->m256i_i64[1], v9->m256i_i32[4]);
        }
        else
        {
          if ( v10 != 59 || (unsigned int)v11 < 0x18 )
            return (unsigned int)-1073741811;
          return (unsigned int)PoDirectedDripsClearDeviceFlags(v9->m256i_i64[1], v9->m256i_i32[4]);
        }
      }
      goto LABEL_226;
    }
    if ( v10 != 61 )
    {
      if ( v10 == 62 )
      {
        if ( !a5 )
          return (unsigned int)-1073741789;
        v116 = ExAllocatePool2(0x100uLL);
        LODWORD(v29) = 0;
        v104 = (unsigned __int16 *)v116;
        if ( !v116 )
          return (unsigned int)-1073741670;
        v108 = PopDirtyTransitionDiagInfo;
        goto LABEL_397;
      }
      if ( v10 == 63 )
      {
        if ( !a5 )
          return (unsigned int)-1073741811;
        v114 = (unsigned __int64)&SshpRoutineBlock & -(__int64)SSHSupportQueryIsLibraryEnabled();
        if ( !v114 )
          return (unsigned int)-1073741637;
        v115 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
        if ( v115 )
        {
          *(_QWORD *)v115 = v114;
          *a7 = v115;
LABEL_44:
          *a8 = 8;
LABEL_45:
          *a9 = 1;
          return 0;
        }
        return (unsigned int)-1073741670;
      }
      goto LABEL_226;
    }
LABEL_457:
    if ( (unsigned int)v11 < 0xC )
      return (unsigned int)-1073741811;
    if ( !a5 )
      return (unsigned int)-1073741789;
    PopAcquireTransitionLock(8LL);
    EnergyEstimationInfo = PopReadPagesFromHiberFile(v9->m256i_u32[2], 1LL, a7);
    PopReleaseTransitionLock(8LL);
    v20 = 0;
    if ( EnergyEstimationInfo < 0 )
    {
      *a7 = 0LL;
      return (unsigned int)EnergyEstimationInfo;
    }
    *a8 = 4096;
    *a9 = 1;
    return v20;
  }
  if ( v10 == 53 )
  {
LABEL_226:
    EnergyEstimationInfo = PopDirectedDripsUmPowerInformationInternal(v10, v11, (__int64)v9, a8, a7);
    if ( EnergyEstimationInfo < 0 || !*a7 )
      return (unsigned int)EnergyEstimationInfo;
    goto LABEL_134;
  }
  if ( v10 > 30 )
  {
    if ( v10 > 41 )
    {
      if ( v10 <= 47 )
      {
        if ( v10 != 47 )
        {
          v24 = v10 - 42;
          if ( !v24 )
          {
            if ( (unsigned int)v11 < 8 || !a5 )
              return (unsigned int)-1073741789;
            v62 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
            if ( !v62 )
              return (unsigned int)-1073741670;
            *(_OWORD *)v62 = PopBsdPowerTransitionExtensionAtBoot;
            v88 = xmmword_140E67080;
            goto LABEL_315;
          }
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( !v26 )
            {
              if ( (unsigned int)v11 < 0x90 )
                return (unsigned int)-1073741789;
              if ( a5 )
                return (unsigned int)-1073741811;
              EnergyEstimationInfo = RtlCheckTokenMembership(0LL, PopTimeBrokerServiceSid, &IsMember);
              if ( EnergyEstimationInfo < 0 )
                return (unsigned int)EnergyEstimationInfo;
              if ( IsMember )
              {
                if ( !SSHSupportIsPlatformAoAc() )
                  return (unsigned int)-1073741637;
                v27 = &v9->m256i_i16[4];
                if ( v9 == (__m256i *)-8LL )
                {
                  LODWORD(v29) = -1073741811;
                }
                else
                {
                  v28 = 64LL;
                  do
                  {
                    if ( !*v27 )
                      break;
                    ++v27;
                    --v28;
                  }
                  while ( v28 );
                  EnergyEstimationInfo = -1073741811;
                  v29 = v28 == 0 ? 0xC000000D : 0;
                  if ( v28 )
                  {
                    v30 = 2 * (64 - v28);
                    v31 = -v28;
                    v32 = v9[4].m256i_i64[1];
                    if ( (-(__int64)(v31 != 0) & v30) != 0 )
                    {
                      if ( !v32 )
                        return (unsigned int)EnergyEstimationInfo;
                    }
                    else if ( v32 )
                    {
                      return (unsigned int)EnergyEstimationInfo;
                    }
                    PopAcquirePolicyLock(v31, v29);
                    PopTimeBrokerExpirationReason = 0;
                    EnergyEstimationInfo = RtlStringCbCopyW(&PopTimeBrokerExpirationReason, 0x80uLL, &v9->m256i_u16[4]);
                    PopTimeBrokerExpirationDueTime = v9[4].m256i_i64[1];
                    goto LABEL_86;
                  }
                }
                return (unsigned int)v29;
              }
              return (unsigned int)-1073741790;
            }
            v61 = v26 - 1;
            if ( v61 )
            {
              if ( v61 == 1 && (_DWORD)v11 == 32 && !a5 )
              {
                PopPowerRequestNotifyUserSessionAttributed(v9->m256i_u32[6], v9->m256i_i64[1], v9->m256i_i64[2], a4);
                return 0;
              }
              return (unsigned int)-1073741811;
            }
            EnergyEstimationInfo = 0;
LABEL_399:
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741811;
            if ( v9->m256i_i8[8] )
              PoUserShutdownInitiated();
            else
              PoUserShutdownCancelled();
            return (unsigned int)EnergyEstimationInfo;
          }
          if ( (((_DWORD)v11 - 8) & 0xFFFFFFFB) != 0 )
            return (unsigned int)-1073741811;
          if ( !a5 )
            return (unsigned int)-1073741789;
          v41 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
          if ( !v41 )
            return (unsigned int)-1073741670;
          v109 = (_PROCESSOR_NUMBER *)&v9->m256i_u64[1];
          if ( (_DWORD)v11 != 12 )
            v109 = 0LL;
          VmPerfPriorityConfig = PpmPerfGetBrandedFrequency(v109);
          goto LABEL_409;
        }
        if ( (unsigned int)v11 < 0x14 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        if ( !v9->m256i_i32[1] )
          return (unsigned int)PpmInternalProcessorIdleVeto(v9->m256i_u32[2], v9->m256i_u32[3], v9->m256i_i8[16]);
        return (unsigned int)-1073741735;
      }
      v63 = v10 - 48;
      if ( !v63 )
      {
        if ( (unsigned int)v11 < 0x10 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        if ( !v9->m256i_i32[1] )
          return (unsigned int)PpmInternalPlatformIdleVeto(v9->m256i_u32[2], v9->m256i_i8[12]);
        return (unsigned int)-1073741735;
      }
      v64 = v63 - 1;
      if ( !v64 )
      {
        if ( !a5 )
          return (unsigned int)-1073741789;
        v79 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
        if ( !v79 )
          return (unsigned int)-1073741670;
        PowerButtonBugcheckEnabled = PopQueryPowerButtonBugcheckEnabled();
LABEL_286:
        *(_BYTE *)v79 = PowerButtonBugcheckEnabled;
        *a7 = v79;
        *a8 = 1;
        goto LABEL_287;
      }
      v65 = v64 - 1;
      if ( v65 )
      {
        if ( v65 != 1 )
          return (unsigned int)-1073741811;
        if ( (_DWORD)a2 )
        {
          if ( (_DWORD)a2 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0x18 )
            return (unsigned int)-1073741789;
          v66 = v9->m256i_i64[2];
          v67 = v9->m256i_i64[1];
        }
        else
        {
          if ( (unsigned int)v11 < 0x10 )
            return (unsigned int)-1073741789;
          v66 = v9->m256i_i64[1];
          v67 = v66;
        }
        PopWakeAlarmTimeOverrideAc = v67;
        PopWakeAlarmTimeOverrideDc = v66;
        return 0;
      }
      if ( !a5 )
        return (unsigned int)-1073741789;
      v113 = ExAllocatePool2(0x100uLL);
      LODWORD(v29) = 0;
      v104 = (unsigned __int16 *)v113;
      if ( !v113 )
        return (unsigned int)-1073741670;
      v108 = PopAutoChkCausedReboot;
      goto LABEL_397;
    }
    if ( v10 != 41 )
    {
      if ( v10 <= 36 )
      {
        if ( v10 == 36 )
        {
          if ( (unsigned int)v11 >= 0xC )
          {
            if ( !a5 )
            {
              v101 = v9->m256i_i8[8];
              PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
              PopEsEnabledOnHost = v101;
              PopReleaseRwLock(&PopEsLock);
              PopEsQueueStateEvaluation(0LL);
              return 0;
            }
            return (unsigned int)-1073741811;
          }
          return (unsigned int)-1073741789;
        }
        v40 = (unsigned int)(v10 - 31);
        if ( v10 != 31 )
        {
          v40 = (unsigned int)(v10 - 32);
          if ( v10 != 32 )
          {
            if ( v10 == 33 )
              return (unsigned int)-1073741637;
            v40 = (unsigned int)(v10 - 34);
            if ( (unsigned int)v40 >= 2 )
              return (unsigned int)-1073741811;
          }
        }
        goto LABEL_108;
      }
      if ( v10 != 37 )
      {
        v40 = (unsigned int)(v10 - 38);
        if ( v10 != 38 )
        {
          if ( v10 != 39 )
          {
            if ( (_DWORD)v11 == 16 && !v9->m256i_i32[2] )
            {
              if ( v9->m256i_i8[12] )
                PopDeepSleepSetDisengageReason(7u);
              else
                PopDeepSleepClearDisengageReason(7u);
              return 0;
            }
            return (unsigned int)-1073741811;
          }
          if ( (_DWORD)v11 != 12 )
            return (unsigned int)-1073741811;
          p_IsMember = &IsMember;
          IsMember = v9->m256i_u8[8];
          v82 = &WNF_PO_WAKE_ON_VOICE_STATE;
          return (unsigned int)ZwUpdateWnfStateData(v82, p_IsMember, 1u, 0LL, 0LL, 0, 0);
        }
LABEL_108:
        if ( (_DWORD)v11 != 24 )
          return (unsigned int)-1073741811;
        if ( a5 )
        {
          v102 = v9->m256i_u32[2];
          if ( !v102 )
            return (unsigned int)-1073741811;
          if ( 4 * (unsigned __int64)v102 > 0xFFFFFFFF )
            return (unsigned int)-1073741675;
          v42 = 4 * v102;
          v41 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
          if ( !v41 )
            return (unsigned int)-1073741670;
        }
        else
        {
          v41 = (unsigned __int16 *)P;
          v42 = 0;
        }
        if ( v10 == 31 )
        {
          if ( v9->m256i_i32[2] )
          {
            v43 = PopBootStatGet(v9, v41, a3, a4);
            goto LABEL_114;
          }
LABEL_195:
          EnergyEstimationInfo = -1073741811;
          goto LABEL_115;
        }
        if ( v10 == 32 )
        {
          if ( !v9->m256i_i32[2] )
            goto LABEL_195;
          v43 = PopBootStatSet(v9, v41, a3, a4);
        }
        else
        {
          if ( v10 != 34 )
          {
            if ( v10 == 35 )
            {
              v43 = PopBootStatRestoreDefaults(v40, a2, a3, a4);
            }
            else
            {
              if ( v10 != 38 )
              {
                EnergyEstimationInfo = -1073741637;
                goto LABEL_115;
              }
              v43 = PopBootStatUnlock();
            }
            goto LABEL_114;
          }
          if ( !v9->m256i_i32[2] )
            goto LABEL_195;
          v43 = PopBootStatCheckIntegrity(v9, a2, a3, a4);
        }
LABEL_114:
        EnergyEstimationInfo = v43;
        if ( v43 >= 0 )
        {
          if ( v41 )
          {
            *a7 = v41;
            *a8 = v42;
            *a9 = 1;
          }
          return 0;
        }
LABEL_115:
        if ( !v41 )
          return (unsigned int)EnergyEstimationInfo;
        v44 = 0;
        goto LABEL_151;
      }
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v58 = ExAllocatePool2(0x100uLL);
      LODWORD(v29) = 0;
      v59 = (unsigned __int16 *)v58;
      if ( !v58 )
        return (unsigned int)-1073741670;
      v60 = dword_140F0AE64;
LABEL_388:
      *(_DWORD *)v59 = v60;
      *a7 = v59;
      *a8 = 4;
LABEL_368:
      *a9 = 1;
      return (unsigned int)v29;
    }
    if ( (_DWORD)v11 != 16 )
      return (unsigned int)-1073741811;
    if ( !a5 )
      return (unsigned int)-1073741789;
    v103 = ExAllocatePool2(0x100uLL);
    LODWORD(v29) = 0;
    v104 = (unsigned __int16 *)v103;
    if ( !v103 )
      return (unsigned int)-1073741670;
    v105 = v9->m256i_i64[1];
    if ( !v105
      || (v106 = *(_QWORD *)(*(_QWORD *)(v105 + 312) + 40LL)) == 0
      || (v107 = *(_QWORD *)(v106 + 80)) == 0
      || (v99 = *(_QWORD *)(v107 + 64) == 0LL, v108 = 1, v99) )
    {
      v108 = 0;
    }
LABEL_397:
    *(_BYTE *)v104 = v108;
    *a7 = v104;
    *a8 = 1;
    goto LABEL_368;
  }
  if ( v10 == 30 )
  {
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v100 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
    LODWORD(v29) = 0;
    if ( !v100 )
      return (unsigned int)-1073741670;
    *(_BYTE *)v100 = PpmPerfQosSupportedAndConfigured;
    *((_BYTE *)v100 + 1) = PpmPerfSchedulerDirectedPerfStatesSupported;
    *((_BYTE *)v100 + 2) = PpmPerfQosGroupPolicyDisable != 0;
    *a7 = v100;
    *a8 = 3;
    goto LABEL_368;
  }
  if ( v10 <= 19 )
  {
    if ( v10 != 19 )
    {
      if ( v10 <= 5 )
      {
        if ( v10 == 5 )
        {
          if ( (unsigned int)v11 >= 0xC )
          {
            if ( !a5 )
            {
              PoLatencySensitivityHint(v9->m256i_u32[2]);
              return 0;
            }
            return (unsigned int)-1073741811;
          }
          return (unsigned int)-1073741789;
        }
        if ( v10 )
        {
          v47 = v10 - 1;
          if ( !v47 )
          {
            if ( !a5 )
              return (unsigned int)-1073741789;
            v48 = ExAllocatePool2(0x100uLL);
            v49 = (unsigned __int16 *)v48;
            if ( !v48 )
              return (unsigned int)-1073741670;
            EnergyEstimationInfo = PopS0LowPowerIdleInfo(v48);
            if ( EnergyEstimationInfo >= 0 )
            {
              *a7 = v49;
LABEL_133:
              *a8 = 8;
              goto LABEL_134;
            }
            goto LABEL_169;
          }
          v77 = v47 - 1;
          if ( v77 )
          {
            v78 = v77 - 1;
            if ( !v78 )
            {
              if ( (unsigned int)v11 >= 0x10 )
              {
                if ( !a5 && (PopSimulate & 1) != 0 )
                {
                  PopUpdateSmartUserPresencePredictions(v9->m256i_u64[1], 0);
                  return 0;
                }
                return (unsigned int)-1073741811;
              }
              return (unsigned int)-1073741789;
            }
            if ( v78 != 1 )
              return (unsigned int)-1073741811;
            if ( (unsigned int)v11 < 8 || !a5 )
              return (unsigned int)-1073741789;
            v79 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
            if ( !v79 )
              return (unsigned int)-1073741670;
            if ( !SSHSupportIsPlatformAoAc() || (v99 = RtlIsMultiSessionSku() == 0, PowerButtonBugcheckEnabled = 1, v99) )
              PowerButtonBugcheckEnabled = 0;
            goto LABEL_286;
          }
          PopVideoInitialized = 1;
          p_IsMember = (BOOLEAN *)&PopVideoInitialized;
          v82 = &WNF_PO_VIDEO_INITIALIALIZED;
          return (unsigned int)ZwUpdateWnfStateData(v82, p_IsMember, 1u, 0LL, 0LL, 0, 0);
        }
        if ( (unsigned int)v11 < 0x20 || !a5 )
          return (unsigned int)-1073741789;
        v83 = (__int64 (__fastcall **)(unsigned int *))ExAllocatePool2(0x100uLL);
        v41 = (unsigned __int16 *)v83;
        if ( !v83 )
          return (unsigned int)-1073741670;
        EnergyEstimationInfo = PopFxPlatformRegisterInterface((__int64)v9, v83);
        if ( EnergyEstimationInfo >= 0 )
        {
          *a7 = v41;
          *a8 = 16;
          goto LABEL_134;
        }
        goto LABEL_150;
      }
      v84 = v10 - 6;
      if ( !v84 )
      {
        if ( (unsigned int)v11 < 0xC )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        LOBYTE(a1) = v9->m256i_i8[8];
        return (unsigned int)PopNetUpdateStandbyRequest(a1, a2, a3, a4);
      }
      v85 = v84 - 1;
      if ( v85 )
      {
        v86 = v85 - 1;
        if ( v86 )
        {
          if ( v86 != 10 )
            return (unsigned int)-1073741811;
          if ( !SSHSupportIsPlatformAoAc() )
            return (unsigned int)-1073741637;
          if ( !a5 )
            return (unsigned int)-1073741789;
          v52 = 1016;
          v87 = ExAllocatePool2(0x100uLL);
          v49 = (unsigned __int16 *)v87;
          if ( !v87 )
            return (unsigned int)-1073741670;
          EnergyEstimationInfo = PopQueryBootSessionStandbyActivationInfo(v87);
          if ( EnergyEstimationInfo < 0 )
            return (unsigned int)EnergyEstimationInfo;
          goto LABEL_307;
        }
        if ( (unsigned int)v11 < 8 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        LOBYTE(a1) = v9->m256i_i8[8];
        return (unsigned int)PopUpdateBackgroundCoolingStatus(a1, a2, a3, a4);
      }
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v62 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
      if ( !v62 )
        return (unsigned int)-1073741670;
      *(_OWORD *)v62 = PopBsdPowerTransitionAtBoot;
      v88 = xmmword_140E67120;
LABEL_315:
      *((_OWORD *)v62 + 1) = v88;
      *a7 = v62;
      *a8 = 32;
      goto LABEL_45;
    }
    if ( (_DWORD)v11 != 20 || a5 )
      return (unsigned int)-1073741811;
    LOBYTE(a2) = v9->m256i_i8[12];
    TtmNotifySessionPowerStateChange(v9->m256i_u32[2], a2, a3, a4);
    v89 = v9->m256i_u8[12];
    PopAcquirePolicyLock(v91, v90);
    if ( v9->m256i_i8[13] )
    {
      PopSetDisplayStatus((_BYTE)v89 != 0);
      PopUpdateConsoleDisplayState((_BYTE)v89 != 0);
      if ( (_BYTE)v89 )
        PopPowerAggregatorNotifyDisplayPoweredOn();
    }
    PopDiagTraceSessionDisplayStateChange(v9->m256i_i8[12] == 0, v9->m256i_i32[2], v9->m256i_u8[13], v9->m256i_i32[4]);
    EnergyEstimationInfo = 0;
LABEL_86:
    PopReleasePolicyLock(v34, v33, v35, v36, ExplicitScope);
    return (unsigned int)EnergyEstimationInfo;
  }
  if ( v10 <= 25 )
  {
    if ( v10 != 25 )
    {
      v13 = v10 - 20;
      if ( !v13 )
      {
        if ( (_DWORD)v11 == 20 && !a5 )
        {
          LOBYTE(a3) = v9->m256i_i8[16];
          TtmNotifySessionTerminalInput(v9->m256i_u32[2], v9->m256i_u32[3], a3, a4);
          return 0;
        }
        return (unsigned int)-1073741811;
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
        if ( (unsigned int)v11 < 0x60 || !v9->m256i_i64[1] && !a5 )
          return (unsigned int)-1073741789;
        if ( v9->m256i_i32[6] == 412 )
        {
          if ( v9[2].m256i_i8[24] || !v9->m256i_i32[4] )
          {
            PopBsdPowerWatchdogArmed = 0;
          }
          else
          {
            PopBsdLastPowerWatchdogStage = v9[1].m256i_i32[0];
            PopBsdPowerWatchdogArmed = 1;
          }
        }
        v15 = 0LL;
        if ( a5 )
        {
          v15 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
          if ( !v15 )
            return (unsigned int)-1073741670;
        }
        v16 = PopSetWatchdog((char *)v9->m256i_i64[1], &v9->m256i_u32[4], v9[2].m256i_i8[24]);
        if ( !a5 )
          return 0;
        *(_QWORD *)v15 = v16;
        *a7 = v15;
        goto LABEL_44;
      }
      v92 = v14 - 1;
      if ( v92 )
      {
        v93 = v92 - 1;
        if ( !v93 )
        {
          if ( (_DWORD)v11 == 12 )
          {
            LOBYTE(a1) = v9->m256i_i8[8];
            PopUpdateExternalDisplayState(a1, a2, a3, a4);
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        if ( v93 != 1 )
          return (unsigned int)-1073741811;
        if ( (unsigned int)v11 >= 0x28 )
        {
          if ( !a5 )
          {
            v94 = v9->m256i_i32[3];
            if ( !PopVideoHighPrecisionBrightnessEnabled )
            {
              if ( v94 != -1 )
              {
                PopVideoHighPrecisionBrightnessEnabled = 1;
                ZwUpdateWnfStateData(
                  &WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
                  &PopVideoHighPrecisionBrightnessEnabled,
                  1u,
                  0LL,
                  0LL,
                  0,
                  0);
                PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF);
              }
              goto LABEL_334;
            }
            if ( v94 != -1 )
            {
LABEL_334:
              v155[0] = v9->m256i_i32[2];
              v155[1] = v9->m256i_i32[3];
              v155[2] = v9->m256i_i32[4];
              v155[3] = v9->m256i_i32[5];
              v155[4] = v9->m256i_i32[6];
              v155[5] = v9->m256i_i32[7];
              v155[6] = v9[1].m256i_i32[0];
              v155[7] = v9[1].m256i_i32[1];
              PopBroadcastSessionInfo(4LL, 32LL, v155);
              return 0;
            }
            return (unsigned int)-1073741637;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)-1073741789;
      }
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v95 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
      if ( v95 )
      {
        *(_OWORD *)v95 = PopBsdPhysicalPowerButtonInfoAtBoot;
        *((_OWORD *)v95 + 1) = xmmword_140E670A0;
        *((_OWORD *)v95 + 2) = xmmword_140E670B0;
        *((_OWORD *)v95 + 3) = xmmword_140E670C0;
        *a7 = v95;
        *a8 = 64;
        goto LABEL_45;
      }
      return (unsigned int)-1073741670;
    }
LABEL_180:
    if ( (unsigned int)v11 >= 0xC )
    {
      if ( !a5 )
      {
        if ( v9->m256i_i8[8] )
          PopScreenOn(a1);
        else
          PopScreenOff(30LL, a2);
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741789;
  }
  v45 = v10 - 26;
  if ( v45 )
  {
    v46 = v45 - 1;
    if ( !v46 )
    {
      if ( (unsigned int)v11 >= 0x10 )
      {
        if ( !a5 )
        {
          PopTransitionCheckpoint(v9->m256i_u32[2], v9->m256i_u32[3], a3, a4);
          return 0;
        }
        return (unsigned int)-1073741811;
      }
      return (unsigned int)-1073741789;
    }
    v96 = v46 - 1;
    if ( !v96 )
    {
      if ( (_DWORD)v11 == 12 )
      {
        LODWORD(v148) = v9->m256i_i32[2];
        PopSetPowerSettingValueAcDc((__int64)&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4u, (__int64)&v148);
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    if ( v96 != 1 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v97 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
    if ( v97 )
    {
      *(_OWORD *)v97 = PopFirmwareResetReason;
      *((_OWORD *)v97 + 1) = xmmword_140E66F80;
      *((_OWORD *)v97 + 2) = xmmword_140E66F90;
      *a7 = v97;
      *a8 = 48;
      goto LABEL_45;
    }
    return (unsigned int)-1073741670;
  }
  if ( (unsigned int)v11 < 0xC )
    return (unsigned int)-1073741789;
  if ( a5 )
    return (unsigned int)-1073741811;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  v98 = PpmPerfQosDisableRefcount;
  if ( v9->m256i_i8[8] )
  {
    if ( PpmPerfQosDisableRefcount == -1 )
    {
      EnergyEstimationInfo = -1073741675;
    }
    else
    {
      v98 = PpmPerfQosDisableRefcount + 1;
      EnergyEstimationInfo = 0;
      ++PpmPerfQosDisableRefcount;
    }
    v99 = v98 == 1;
  }
  else
  {
    if ( PpmPerfQosDisableRefcount )
    {
      EnergyEstimationInfo = 0;
      v98 = --PpmPerfQosDisableRefcount;
    }
    else
    {
      EnergyEstimationInfo = -1073741637;
    }
    v99 = v98 == 0;
  }
  if ( v99 )
    PpmPerfUpdateDomainPolicy(0LL);
  else
    PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)EnergyEstimationInfo;
}
