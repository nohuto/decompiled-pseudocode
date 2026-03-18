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
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int16 *v31; // rsi
  int v32; // r14d
  int v33; // eax
  ULONG v34; // edx
  int v35; // ebx
  int v36; // ebx
  int v37; // ebx
  __int64 v38; // rax
  unsigned __int16 *v39; // rdi
  int v40; // ebx
  int v41; // ebx
  int v42; // r14d
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int16 *v45; // rcx
  __int64 v46; // r8
  const wchar_t *v47; // rdx
  int *v48; // rcx
  int v49; // eax
  int v50; // ebx
  unsigned __int16 *v51; // rax
  int v52; // ebx
  int v53; // ebx
  int v54; // ebx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int16 *v58; // rbx
  __int64 *i; // rax
  unsigned __int16 *v60; // rax
  unsigned int v61; // r8d
  __int64 v62; // rax
  __int64 v63; // rdx
  unsigned int v64; // r8d
  unsigned __int16 *v65; // rbx
  int v66; // ebx
  int v67; // ebx
  unsigned __int16 *v68; // rbx
  char PowerButtonBugcheckEnabled; // al
  char *v70; // rdx
  __int64 *v71; // rcx
  __int64 (__fastcall **v72)(unsigned int *); // rax
  int v73; // ebx
  int v74; // ebx
  int v75; // ebx
  __int64 v76; // rax
  __int128 v77; // xmm1
  __int64 v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  int v85; // ebx
  int v86; // ebx
  __int32 v87; // ecx
  unsigned __int16 *v88; // rax
  int v89; // ebx
  unsigned __int16 *v90; // rax
  int v91; // ecx
  bool v92; // zf
  unsigned __int16 *v93; // rax
  char v94; // bl
  unsigned __int32 v95; // eax
  unsigned __int16 *v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  char v100; // al
  struct _PROCESSOR_NUMBER *v101; // rcx
  int VmPerfPriorityConfig; // eax
  bool v103; // sf
  int VmCppcConfig; // eax
  unsigned __int64 v105; // rbx
  unsigned __int16 *v106; // rax
  ULONG_PTR v107; // rcx
  int v108; // ebx
  int v109; // ebx
  int v110; // ebx
  int v111; // ebx
  unsigned __int16 *v112; // rax
  unsigned int v113; // r8d
  __int64 v114; // rax
  unsigned __int16 *v115; // rbx
  char v116; // bl
  int FanNoiseInfo; // eax
  unsigned __int32 v118; // r14d
  unsigned int v119; // edi
  unsigned __int16 *v120; // rcx
  unsigned __int16 *v121; // rax
  __int64 v122; // rcx
  int v123; // eax
  __int8 v124; // al
  _KPROCESS *Process; // rcx
  unsigned int v126; // eax
  int v127; // ebx
  unsigned __int16 *v128; // rax
  __int64 v129; // rax
  unsigned __int16 *v130; // rax
  __int64 Pool2; // rax
  __int64 v132; // [rsp+20h] [rbp-89h]
  __int8 v133; // [rsp+40h] [rbp-69h] BYREF
  char v134; // [rsp+41h] [rbp-68h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+42h] [rbp-67h]
  int v136; // [rsp+44h] [rbp-65h] BYREF
  __int64 v137; // [rsp+48h] [rbp-61h] BYREF
  int v138; // [rsp+50h] [rbp-59h] BYREF
  int v139; // [rsp+54h] [rbp-55h] BYREF
  unsigned __int16 *v140; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int16 *v141; // [rsp+60h] [rbp-49h] BYREF
  PVOID P; // [rsp+68h] [rbp-41h]
  UNICODE_STRING v143; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v144[8]; // [rsp+80h] [rbp-29h] BYREF

  v9 = (__m256i *)a3;
  v10 = a1;
  *a7 = 0LL;
  *a8 = 0;
  *a9 = 0;
  v143 = 0LL;
  v11 = (unsigned int)a4;
  LODWORD(v137) = a2;
  v134 = 0;
  LOBYTE(a4) = KeGetCurrentThread()->PreviousMode;
  v133 = 0;
  v138 = 0;
  v140 = 0LL;
  v141 = 0LL;
  v139 = 0;
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
    v27 = (unsigned int)(a1 - 40);
    if ( (unsigned int)v27 <= 0x38 )
    {
      a1 = 0x18082000A8E0003LL;
      if ( _bittest64(&a1, v27) )
        return (unsigned int)-1073741790;
    }
    v28 = (unsigned int)(v10 - 29);
    if ( (unsigned int)v28 <= 0x23 )
    {
      a1 = 0x88B4C0001LL;
      if ( _bittest64(&a1, v28) )
      {
        if ( !PspIsContextAdmin() )
          return (unsigned int)-1073741790;
      }
    }
    if ( (unsigned int)(v10 - 82) <= 1 && !PopCheckTestsigningEnabled() )
      return (unsigned int)-1073741790;
    if ( (v29 = (unsigned int)(v10 - 35), (unsigned int)v29 <= 0x37) && (a1 = 0xA0001000000003LL, _bittest64(&a1, v29))
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
LABEL_222:
        if ( (_DWORD)v11 != 8 || !v9 || a6 || a5 )
          return (unsigned int)-1073741811;
        qword_140FD7258 = PopAdaptiveGetSystemInitiatedRebootTargetState(v22, a2, a3, a4);
        byte_140FD7250 = 1;
        return 0;
      case 61:
        if ( !PopCheckTestsigningEnabled() || !PspIsContextAdmin() )
          return (unsigned int)-1073741790;
        goto LABEL_444;
      case 45:
        EnergyEstimationInfo = 0;
        if ( !(unsigned __int8)PopIsRunningAsLocalSystem(a1) && (!PopCheckTestsigningEnabled() || !PspIsContextAdmin()) )
          return (unsigned int)-1073741790;
        goto LABEL_386;
      case 25:
        v46 = 0x7FFFLL;
        v47 = L"systemManagement";
        while ( *v47 )
        {
          ++v47;
          if ( !--v46 )
            goto LABEL_261;
        }
        v143.Buffer = L"systemManagement";
        v143.Length = 2 * (0x7FFF - v46);
        v143.MaximumLength = v143.Length + 2;
LABEL_261:
        EnergyEstimationInfo = RtlCapabilityCheckForSingleSessionSku(0LL, &v143, &v134);
        if ( EnergyEstimationInfo < 0 )
          return (unsigned int)EnergyEstimationInfo;
        if ( v134 )
          goto LABEL_169;
        return (unsigned int)-1073741790;
    }
    a2 = (unsigned int)v137;
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
                v82 = (unsigned int)dword_140F07C50;
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
            goto LABEL_77;
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
            v60 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
            v31 = v60;
            if ( !v60 )
              return (unsigned int)-1073741670;
            VmPerfPriorityConfig = PpmPerfGetVmPerfPriorityConfig(v9->m256i_u32[2], v60, v61);
LABEL_396:
            EnergyEstimationInfo = VmPerfPriorityConfig;
            v103 = VmPerfPriorityConfig < 0;
            goto LABEL_399;
          }
          if ( (_DWORD)a2 )
            return (unsigned int)-1073741637;
          if ( !a5 )
            return (unsigned int)-1073741811;
          v62 = ExAllocatePool2(0x100uLL);
          v65 = (unsigned __int16 *)v62;
          if ( !v62 )
            return (unsigned int)-1073741670;
          PpmPerfGetVmPerfPrioritySupport(v62, v63, v64);
          *a7 = v65;
          *a8 = 8;
          goto LABEL_274;
        }
        if ( !a5 || a6 < 0x24 )
          return (unsigned int)-1073741789;
        v130 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
        v39 = v130;
        if ( !v130 )
          return (unsigned int)-1073741670;
        EnergyEstimationInfo = PopGetEnergyEstimationInfo(v130);
        if ( EnergyEstimationInfo >= 0 )
        {
          *a7 = v39;
          EnergyEstimationInfo = 0;
          *a8 = 36;
          *a9 = 1;
          return (unsigned int)EnergyEstimationInfo;
        }
LABEL_158:
        v34 = 544040269;
        v45 = v39;
        goto LABEL_143;
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
              v58 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
              if ( !v58 )
                return (unsigned int)-1073741670;
              for ( i = (__int64 *)PpmPerfDomainHead; i != &PpmPerfDomainHead; i = (__int64 *)*i )
              {
                v122 = i[53];
                if ( v122 )
                {
                  v123 = guard_dispatch_icall_no_overrides(v122);
                  goto LABEL_493;
                }
              }
              v123 = 0;
LABEL_493:
              *(_DWORD *)v58 = v123;
              *a7 = v58;
              *a8 = 4;
              goto LABEL_274;
            }
            if ( v10 == 79 )
            {
              if ( !v9 || (_DWORD)v11 != 12 )
                return (unsigned int)-1073741811;
              v118 = v9->m256i_u32[2];
              v136 = 0;
              EnergyEstimationInfo = PpmPerfQueryProcMeasurementValues(v118, &v136, 0LL, 0LL);
              if ( EnergyEstimationInfo < 0 )
                return (unsigned int)EnergyEstimationInfo;
              v119 = 24 * v136 + 8;
              if ( a6 != 4 )
              {
                if ( a6 < v119 )
                  return (unsigned int)-1073741789;
                v121 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
                if ( !v121 )
                  return (unsigned int)-1073741670;
                *a8 = v119;
                *a9 = 1;
                *a7 = v121;
                *(_DWORD *)v121 = v136;
                return (unsigned int)PpmPerfQueryProcMeasurementValues(v118, &v136, v121 + 4, (unsigned int)(24 * v136));
              }
              v120 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
              if ( !v120 )
                return (unsigned int)-1073741670;
              *(_DWORD *)v120 = v136;
              *a7 = v120;
              *a8 = 4;
LABEL_125:
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
            goto LABEL_222;
          }
LABEL_230:
          if ( (_DWORD)v11 != 12 )
            return (unsigned int)-1073741789;
          if ( !a5 )
            return (unsigned int)-1073741811;
          EnergyEstimationInfo = PpmIdleGetConcurrencyStats((unsigned int)v10, v9->m256i_u16[4], &v141, &v139);
          if ( EnergyEstimationInfo < 0 )
            return (unsigned int)EnergyEstimationInfo;
          *a7 = v141;
          *a8 = v139;
          goto LABEL_125;
        }
        if ( (_DWORD)v11 != 12 || !v9 || a6 || a5 )
          return (unsigned int)-1073741811;
        v137 = 0LL;
        LODWORD(v137) = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        v124 = v9->m256i_i8[8];
        BYTE4(v137) = 1;
        Process = KeGetCurrentThread()->ApcState.Process;
        BYTE5(v137) = v124;
        v126 = PsGetSessionIdEx((__int64)Process);
        PopSessionWinlogonNotification(v126, &v137);
        return 0;
      }
      v40 = v10 - 83;
      if ( !v40 )
      {
        if ( (_DWORD)v11 != 16 || !v9 || a6 || a5 )
          return (unsigned int)-1073741811;
        return (unsigned int)PopAdaptiveSetSystemInitiatedRebootTargetStateOverride((__int64)v9);
      }
      v41 = v40 - 1;
      if ( v41 )
      {
        v127 = v41 - 1;
        if ( v127 )
        {
          if ( v127 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 8 || !a5 )
            return (unsigned int)-1073741789;
          v128 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
          if ( !v128 )
            return (unsigned int)-1073741670;
          *(_DWORD *)v128 = ExBootAppErrorDiagCode;
          *((_DWORD *)v128 + 1) = ExBootAppFailureStatus;
          *a7 = v128;
          *a8 = 8;
LABEL_355:
          *a9 = 1;
          return 0;
        }
        if ( !a5 )
          return (unsigned int)-1073741811;
        v129 = ExAllocatePool2(0x100uLL);
        v39 = (unsigned __int16 *)v129;
        if ( !v129 )
          return (unsigned int)-1073741670;
        EnergyEstimationInfo = PopFanReadFanNoiseInfo(85LL, v129);
        if ( EnergyEstimationInfo >= 0 )
        {
          *a7 = v39;
          *a8 = 88;
          goto LABEL_125;
        }
        goto LABEL_158;
      }
      if ( !a5 )
        return (unsigned int)-1073741811;
      v42 = 160;
      v43 = ExAllocatePool2(0x100uLL);
      v39 = (unsigned __int16 *)v43;
      if ( !v43 )
        return (unsigned int)-1073741670;
      FanNoiseInfo = PopFanReadFanNoiseInfo(84LL, v43);
      goto LABEL_477;
    }
    if ( v10 == 76 )
      goto LABEL_230;
    if ( v10 > 65 )
    {
      if ( v10 <= 71 )
      {
        if ( v10 == 71 )
        {
          if ( (_DWORD)v11 == 12 )
          {
            v116 = v9->m256i_i8[8];
            PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepReliabilityDiagLock);
            if ( PopSleepReliabilityDetailedDiagEnabled != v116 )
            {
              PopSleepReliabilityDetailedDiagEnabled = v116;
              PopDiagTraceSleepReliabilityDiagConfigUpdate();
            }
            PopReleaseRwLock(&PopSleepReliabilityDiagLock);
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        v108 = v10 - 66;
        if ( !v108 )
          return (unsigned int)-1073741637;
        v109 = v108 - 1;
        if ( !v109 )
        {
          *a8 = 0;
          *a7 = 0LL;
          v48 = (int *)ExAllocatePool2(0x100uLL);
          if ( !v48 )
            return (unsigned int)-1073741670;
          v49 = PopDisableInboxPepGeneratedConstraintsOverride;
          goto LABEL_375;
        }
        v110 = v109 - 1;
        if ( !v110 )
          return PopIdleScanInterval == 0 ? 0xC00000BB : 0;
        v111 = v110 - 1;
        if ( v111 )
        {
          if ( v111 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( v9->m256i_i32[1] > 2u )
            return (unsigned int)-1073741637;
          if ( v9->m256i_i32[1] == 2 && (unsigned int)v11 < 0x20 )
            return (unsigned int)-1073741789;
          if ( !a5 )
            return (unsigned int)-1073741811;
          v112 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
          v31 = v112;
          if ( !v112 )
            return (unsigned int)-1073741670;
          if ( v9->m256i_i32[1] == 2 )
            VmCppcConfig = PpmPerfGetVmCppcConfig(
                             v9->m256i_u32[3],
                             v9->m256i_u32[2],
                             v9->m256i_u32[4],
                             v9->m256i_i32[5],
                             v9->m256i_i32[6],
                             v9->m256i_i8[28],
                             v112);
          else
            VmCppcConfig = PpmPerfGetVmPerfConfig(v9->m256i_i32[2], v112, v113);
          EnergyEstimationInfo = VmCppcConfig;
          v103 = VmCppcConfig < 0;
LABEL_399:
          if ( !v103 )
          {
            *a7 = v31;
            goto LABEL_124;
          }
          goto LABEL_141;
        }
        if ( !a5 )
          return (unsigned int)-1073741811;
        v114 = ExAllocatePool2(0x100uLL);
        v115 = (unsigned __int16 *)v114;
        if ( !v114 )
          return (unsigned int)-1073741670;
        PpmPerfGetVmPerfControlSupport(v114);
        *a7 = v115;
        *a8 = a6 < 0x14 ? 1 : 20;
LABEL_274:
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
            v42 = 296;
          else
            v42 = 592;
          v44 = ExAllocatePool2(0x100uLL);
          v31 = (unsigned __int16 *)v44;
          if ( !v44 )
            return (unsigned int)-1073741670;
          EnergyEstimationInfo = PpmIdleGetPackageIdleIntervalStats((unsigned int)v10, v9->m256i_u16[4], v44);
          if ( EnergyEstimationInfo >= 0 )
          {
            *a7 = v31;
LABEL_163:
            *a8 = v42;
            goto LABEL_125;
          }
LABEL_141:
          v34 = 544040269;
LABEL_142:
          v45 = v31;
LABEL_143:
          ExFreePoolWithTag(v45, v34);
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
      v42 = 2304;
      v57 = ExAllocatePool2(0x100uLL);
      v39 = (unsigned __int16 *)v57;
      if ( !v57 )
        return (unsigned int)-1073741670;
      FanNoiseInfo = PpmPerfGetFrequencyBandStats(v57);
LABEL_477:
      EnergyEstimationInfo = FanNoiseInfo;
      if ( FanNoiseInfo >= 0 )
      {
LABEL_294:
        *a7 = v39;
        goto LABEL_163;
      }
      goto LABEL_158;
    }
    if ( v10 == 65 )
    {
      if ( (_DWORD)v11 != 16 )
        return (unsigned int)-1073741811;
      v107 = v9->m256i_u64[1];
      if ( !v107 )
        return (unsigned int)-1073741811;
      EnergyEstimationInfo = PopFxClearDeviceConstraints(v107);
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
          EnergyEstimationInfo = PopReadResumeContext(&v138, &v140);
          PopReleaseTransitionLock(8LL);
          if ( EnergyEstimationInfo < 0 )
            return (unsigned int)EnergyEstimationInfo;
          *a7 = v140;
          *a8 = v138;
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
      goto LABEL_213;
    }
    if ( v10 != 61 )
    {
      if ( v10 == 62 )
      {
        if ( !a5 )
          return (unsigned int)-1073741789;
        v96 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
        if ( !v96 )
          return (unsigned int)-1073741670;
        v100 = PopDirtyTransitionDiagInfo;
        goto LABEL_384;
      }
      if ( v10 == 63 )
      {
        if ( !a5 )
          return (unsigned int)-1073741811;
        v105 = (unsigned __int64)&SshpRoutineBlock & -(__int64)SSHSupportQueryIsLibraryEnabled();
        if ( !v105 )
          return (unsigned int)-1073741637;
        v106 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
        if ( v106 )
        {
          *(_QWORD *)v106 = v105;
          *a7 = v106;
LABEL_44:
          *a8 = 8;
LABEL_45:
          *a9 = 1;
          return 0;
        }
        return (unsigned int)-1073741670;
      }
      goto LABEL_213;
    }
LABEL_444:
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
LABEL_213:
    EnergyEstimationInfo = PopDirectedDripsUmPowerInformationInternal(v10, v11, (__int64)v9, a8, a7);
    if ( EnergyEstimationInfo < 0 || !*a7 )
      return (unsigned int)EnergyEstimationInfo;
    goto LABEL_125;
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
            v51 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
            if ( !v51 )
              return (unsigned int)-1073741670;
            *(_OWORD *)v51 = PopBsdPowerTransitionExtensionAtBoot;
            v77 = xmmword_140E67080;
            goto LABEL_302;
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
              EnergyEstimationInfo = RtlCheckTokenMembership(0LL, (void *)PopTimeBrokerServiceSid);
              if ( EnergyEstimationInfo < 0 )
                return (unsigned int)EnergyEstimationInfo;
              return (unsigned int)-1073741790;
            }
            v50 = v26 - 1;
            if ( v50 )
            {
              if ( v50 == 1 && (_DWORD)v11 == 32 && !a5 )
              {
                PopPowerRequestNotifyUserSessionAttributed(v9->m256i_u32[6], v9->m256i_i64[1], v9->m256i_i64[2], a4);
                return 0;
              }
              return (unsigned int)-1073741811;
            }
            EnergyEstimationInfo = 0;
LABEL_386:
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
          v31 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
          if ( !v31 )
            return (unsigned int)-1073741670;
          v101 = (struct _PROCESSOR_NUMBER *)&v9->m256i_u64[1];
          if ( (_DWORD)v11 != 12 )
            v101 = 0LL;
          VmPerfPriorityConfig = PpmPerfGetBrandedFrequency(v101);
          goto LABEL_396;
        }
        if ( (unsigned int)v11 < 0x14 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        if ( !v9->m256i_i32[1] )
          return (unsigned int)PpmInternalProcessorIdleVeto(v9->m256i_u32[2], v9->m256i_u32[3], v9->m256i_i8[16]);
        return (unsigned int)-1073741735;
      }
      v52 = v10 - 48;
      if ( !v52 )
      {
        if ( (unsigned int)v11 < 0x10 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        if ( !v9->m256i_i32[1] )
          return (unsigned int)PpmInternalPlatformIdleVeto(v9->m256i_u32[2], v9->m256i_i8[12]);
        return (unsigned int)-1073741735;
      }
      v53 = v52 - 1;
      if ( !v53 )
      {
        if ( !a5 )
          return (unsigned int)-1073741789;
        v68 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
        if ( !v68 )
          return (unsigned int)-1073741670;
        PowerButtonBugcheckEnabled = PopQueryPowerButtonBugcheckEnabled();
LABEL_273:
        *(_BYTE *)v68 = PowerButtonBugcheckEnabled;
        *a7 = v68;
        *a8 = 1;
        goto LABEL_274;
      }
      v54 = v53 - 1;
      if ( v54 )
      {
        if ( v54 != 1 )
          return (unsigned int)-1073741811;
        if ( (_DWORD)a2 )
        {
          if ( (_DWORD)a2 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0x18 )
            return (unsigned int)-1073741789;
          v55 = v9->m256i_i64[2];
          v56 = v9->m256i_i64[1];
        }
        else
        {
          if ( (unsigned int)v11 < 0x10 )
            return (unsigned int)-1073741789;
          v55 = v9->m256i_i64[1];
          v56 = v55;
        }
        PopWakeAlarmTimeOverrideAc = v56;
        PopWakeAlarmTimeOverrideDc = v55;
        return 0;
      }
      if ( !a5 )
        return (unsigned int)-1073741789;
      v96 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
      if ( !v96 )
        return (unsigned int)-1073741670;
      v100 = PopAutoChkCausedReboot;
LABEL_384:
      *(_BYTE *)v96 = v100;
      *a7 = v96;
      *a8 = 1;
      goto LABEL_355;
    }
    if ( v10 == 41 )
    {
      if ( (_DWORD)v11 != 16 )
        return (unsigned int)-1073741811;
      if ( !a5 )
        return (unsigned int)-1073741789;
      v96 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
      if ( !v96 )
        return (unsigned int)-1073741670;
      v97 = v9->m256i_i64[1];
      if ( !v97
        || (v98 = *(_QWORD *)(*(_QWORD *)(v97 + 312) + 40LL)) == 0
        || (v99 = *(_QWORD *)(v98 + 80)) == 0
        || (v92 = *(_QWORD *)(v99 + 64) == 0LL, v100 = 1, v92) )
      {
        v100 = 0;
      }
      goto LABEL_384;
    }
    if ( v10 <= 36 )
    {
      if ( v10 == 36 )
      {
        if ( (unsigned int)v11 >= 0xC )
        {
          if ( !a5 )
          {
            v94 = v9->m256i_i8[8];
            PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
            PopEsEnabledOnHost = v94;
            PopReleaseRwLock(&PopEsLock);
            PopEsQueueStateEvaluation(0LL);
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)-1073741789;
      }
      v30 = (unsigned int)(v10 - 31);
      if ( v10 != 31 )
      {
        v30 = (unsigned int)(v10 - 32);
        if ( v10 != 32 )
        {
          if ( v10 == 33 )
            return (unsigned int)-1073741637;
          v30 = (unsigned int)(v10 - 34);
          if ( (unsigned int)v30 >= 2 )
            return (unsigned int)-1073741811;
        }
      }
      goto LABEL_99;
    }
    if ( v10 != 37 )
    {
      v30 = (unsigned int)(v10 - 38);
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
        v70 = &v133;
        v133 = v9->m256i_i8[8];
        v71 = &WNF_PO_WAKE_ON_VOICE_STATE;
        return (unsigned int)ZwUpdateWnfStateData((__int64)v71, (__int64)v70);
      }
LABEL_99:
      if ( (_DWORD)v11 != 24 )
        return (unsigned int)-1073741811;
      if ( a5 )
      {
        v95 = v9->m256i_u32[2];
        if ( !v95 )
          return (unsigned int)-1073741811;
        if ( 4 * (unsigned __int64)v95 > 0xFFFFFFFF )
          return (unsigned int)-1073741675;
        v32 = 4 * v95;
        v31 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
        if ( !v31 )
          return (unsigned int)-1073741670;
      }
      else
      {
        v31 = (unsigned __int16 *)P;
        v32 = 0;
      }
      if ( v10 == 31 )
      {
        if ( v9->m256i_i32[2] )
        {
          v33 = PopBootStatGet(v9, v31, a3, a4);
          goto LABEL_105;
        }
LABEL_184:
        EnergyEstimationInfo = -1073741811;
        goto LABEL_106;
      }
      if ( v10 == 32 )
      {
        if ( !v9->m256i_i32[2] )
          goto LABEL_184;
        v33 = PopBootStatSet(v9, v31, a3, a4);
      }
      else
      {
        if ( v10 != 34 )
        {
          if ( v10 == 35 )
          {
            v33 = PopBootStatRestoreDefaults(v30, a2, a3, a4);
          }
          else
          {
            if ( v10 != 38 )
            {
              EnergyEstimationInfo = -1073741637;
              goto LABEL_106;
            }
            v33 = PopBootStatUnlock();
          }
          goto LABEL_105;
        }
        if ( !v9->m256i_i32[2] )
          goto LABEL_184;
        v33 = PopBootStatCheckIntegrity(v9, a2, a3, a4);
      }
LABEL_105:
      EnergyEstimationInfo = v33;
      if ( v33 >= 0 )
      {
        if ( v31 )
        {
          *a7 = v31;
          *a8 = v32;
          *a9 = 1;
        }
        return 0;
      }
LABEL_106:
      if ( !v31 )
        return (unsigned int)EnergyEstimationInfo;
      v34 = 0;
      goto LABEL_142;
    }
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v48 = (int *)ExAllocatePool2(0x100uLL);
    if ( !v48 )
      return (unsigned int)-1073741670;
    v49 = dword_140F0AE64;
LABEL_375:
    *v48 = v49;
    *a7 = (unsigned __int16 *)v48;
    *a8 = 4;
    goto LABEL_355;
  }
  if ( v10 == 30 )
  {
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v93 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
    if ( !v93 )
      return (unsigned int)-1073741670;
    *(_BYTE *)v93 = PpmPerfQosSupportedAndConfigured;
    *((_BYTE *)v93 + 1) = PpmPerfSchedulerDirectedPerfStatesSupported;
    *((_BYTE *)v93 + 2) = PpmPerfQosGroupPolicyDisable != 0;
    *a7 = v93;
    *a8 = 3;
    goto LABEL_355;
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
          v37 = v10 - 1;
          if ( !v37 )
          {
            if ( !a5 )
              return (unsigned int)-1073741789;
            v38 = ExAllocatePool2(0x100uLL);
            v39 = (unsigned __int16 *)v38;
            if ( !v38 )
              return (unsigned int)-1073741670;
            EnergyEstimationInfo = PopS0LowPowerIdleInfo(v38);
            if ( EnergyEstimationInfo >= 0 )
            {
              *a7 = v39;
LABEL_124:
              *a8 = 8;
              goto LABEL_125;
            }
            goto LABEL_158;
          }
          v66 = v37 - 1;
          if ( v66 )
          {
            v67 = v66 - 1;
            if ( !v67 )
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
            if ( v67 != 1 )
              return (unsigned int)-1073741811;
            if ( (unsigned int)v11 < 8 || !a5 )
              return (unsigned int)-1073741789;
            v68 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
            if ( !v68 )
              return (unsigned int)-1073741670;
            if ( !SSHSupportIsPlatformAoAc() || (v92 = RtlIsMultiSessionSku() == 0, PowerButtonBugcheckEnabled = 1, v92) )
              PowerButtonBugcheckEnabled = 0;
            goto LABEL_273;
          }
          PopVideoInitialized = 1;
          v70 = &PopVideoInitialized;
          v71 = &WNF_PO_VIDEO_INITIALIALIZED;
          return (unsigned int)ZwUpdateWnfStateData((__int64)v71, (__int64)v70);
        }
        if ( (unsigned int)v11 < 0x20 || !a5 )
          return (unsigned int)-1073741789;
        v72 = (__int64 (__fastcall **)(unsigned int *))ExAllocatePool2(0x100uLL);
        v31 = (unsigned __int16 *)v72;
        if ( !v72 )
          return (unsigned int)-1073741670;
        EnergyEstimationInfo = PopFxPlatformRegisterInterface((__int64)v9, v72);
        if ( EnergyEstimationInfo >= 0 )
        {
          *a7 = v31;
          *a8 = 16;
          goto LABEL_125;
        }
        goto LABEL_141;
      }
      v73 = v10 - 6;
      if ( !v73 )
      {
        if ( (unsigned int)v11 < 0xC )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        LOBYTE(a1) = v9->m256i_i8[8];
        return (unsigned int)PopNetUpdateStandbyRequest(a1, a2, a3, a4);
      }
      v74 = v73 - 1;
      if ( v74 )
      {
        v75 = v74 - 1;
        if ( v75 )
        {
          if ( v75 != 10 )
            return (unsigned int)-1073741811;
          if ( !SSHSupportIsPlatformAoAc() )
            return (unsigned int)-1073741637;
          if ( !a5 )
            return (unsigned int)-1073741789;
          v42 = 1016;
          v76 = ExAllocatePool2(0x100uLL);
          v39 = (unsigned __int16 *)v76;
          if ( !v76 )
            return (unsigned int)-1073741670;
          EnergyEstimationInfo = PopQueryBootSessionStandbyActivationInfo(v76);
          if ( EnergyEstimationInfo < 0 )
            return (unsigned int)EnergyEstimationInfo;
          goto LABEL_294;
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
      v51 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
      if ( !v51 )
        return (unsigned int)-1073741670;
      *(_OWORD *)v51 = PopBsdPowerTransitionAtBoot;
      v77 = xmmword_140E67120;
LABEL_302:
      *((_OWORD *)v51 + 1) = v77;
      *a7 = v51;
      *a8 = 32;
      goto LABEL_45;
    }
    if ( (_DWORD)v11 != 20 || a5 )
      return (unsigned int)-1073741811;
    LOBYTE(a2) = v9->m256i_i8[12];
    TtmNotifySessionPowerStateChange(v9->m256i_u32[2], a2, a3, a4);
    v78 = v9->m256i_u8[12];
    PopAcquirePolicyLock(v80, v79);
    if ( v9->m256i_i8[13] )
    {
      PopSetDisplayStatus((_BYTE)v78 != 0);
      PopUpdateConsoleDisplayState((_BYTE)v78 != 0);
      if ( (_BYTE)v78 )
        PopPowerAggregatorNotifyDisplayPoweredOn();
    }
    PopDiagTraceSessionDisplayStateChange(v9->m256i_i8[12] == 0, v9->m256i_i32[2], v9->m256i_u8[13], v9->m256i_i32[4]);
    EnergyEstimationInfo = 0;
LABEL_77:
    PopReleasePolicyLock(v82, v81, v83, v84, v132);
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
      v85 = v14 - 1;
      if ( v85 )
      {
        v86 = v85 - 1;
        if ( !v86 )
        {
          if ( (_DWORD)v11 == 12 )
          {
            LOBYTE(a1) = v9->m256i_i8[8];
            PopUpdateExternalDisplayState(a1, a2, a3, a4);
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        if ( v86 != 1 )
          return (unsigned int)-1073741811;
        if ( (unsigned int)v11 >= 0x28 )
        {
          if ( !a5 )
          {
            v87 = v9->m256i_i32[3];
            if ( !PopVideoHighPrecisionBrightnessEnabled )
            {
              if ( v87 != -1 )
              {
                PopVideoHighPrecisionBrightnessEnabled = 1;
                ZwUpdateWnfStateData(
                  (__int64)&WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
                  (__int64)&PopVideoHighPrecisionBrightnessEnabled);
                PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF);
              }
              goto LABEL_321;
            }
            if ( v87 != -1 )
            {
LABEL_321:
              v144[0] = v9->m256i_i32[2];
              v144[1] = v9->m256i_i32[3];
              v144[2] = v9->m256i_i32[4];
              v144[3] = v9->m256i_i32[5];
              v144[4] = v9->m256i_i32[6];
              v144[5] = v9->m256i_i32[7];
              v144[6] = v9[1].m256i_i32[0];
              v144[7] = v9[1].m256i_i32[1];
              PopBroadcastSessionInfo(4LL, 32LL, v144);
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
      v88 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
      if ( v88 )
      {
        *(_OWORD *)v88 = PopBsdPhysicalPowerButtonInfoAtBoot;
        *((_OWORD *)v88 + 1) = xmmword_140E670A0;
        *((_OWORD *)v88 + 2) = xmmword_140E670B0;
        *((_OWORD *)v88 + 3) = xmmword_140E670C0;
        *a7 = v88;
        *a8 = 64;
        goto LABEL_45;
      }
      return (unsigned int)-1073741670;
    }
LABEL_169:
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
  v35 = v10 - 26;
  if ( v35 )
  {
    v36 = v35 - 1;
    if ( !v36 )
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
    v89 = v36 - 1;
    if ( !v89 )
    {
      if ( (_DWORD)v11 == 12 )
      {
        LODWORD(v137) = v9->m256i_i32[2];
        PopSetPowerSettingValueAcDc((__int64)&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4u, (__int64)&v137);
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    if ( v89 != 1 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v90 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
    if ( v90 )
    {
      *(_OWORD *)v90 = PopFirmwareResetReason;
      *((_OWORD *)v90 + 1) = xmmword_140E66F80;
      *((_OWORD *)v90 + 2) = xmmword_140E66F90;
      *a7 = v90;
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
  v91 = PpmPerfQosDisableRefcount;
  if ( v9->m256i_i8[8] )
  {
    if ( PpmPerfQosDisableRefcount == -1 )
    {
      EnergyEstimationInfo = -1073741675;
    }
    else
    {
      v91 = PpmPerfQosDisableRefcount + 1;
      EnergyEstimationInfo = 0;
      ++PpmPerfQosDisableRefcount;
    }
    v92 = v91 == 1;
  }
  else
  {
    if ( PpmPerfQosDisableRefcount )
    {
      EnergyEstimationInfo = 0;
      v91 = --PpmPerfQosDisableRefcount;
    }
    else
    {
      EnergyEstimationInfo = -1073741637;
    }
    v92 = v91 == 0;
  }
  if ( v92 )
    PpmPerfUpdateDomainPolicy(0LL);
  else
    PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)EnergyEstimationInfo;
}
