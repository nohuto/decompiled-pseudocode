/*
 * XREFs of PopPowerInformationInternal @ 0x140AC2410
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x1402B5A38 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402B9DFC (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 *     PopSetWatchdog @ 0x1402BC81C (PopSetWatchdog.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     RtlCheckTokenMembership @ 0x1403B5750 (RtlCheckTokenMembership.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     PoLatencySensitivityHint @ 0x14044BDE0 (PoLatencySensitivityHint.c)
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404A7B1C (PopDiagTraceSessionDisplayStateChange.c)
 *     PoDirectedDripsSetDeviceFlags @ 0x1404ADA20 (PoDirectedDripsSetDeviceFlags.c)
 *     SSHSupportQueryIsLibraryEnabled @ 0x1404C271C (SSHSupportQueryIsLibraryEnabled.c)
 *     PopPlRegisterPowerPlane @ 0x1404CADB8 (PopPlRegisterPowerPlane.c)
 *     PpmPerfGetVmPerfConfig @ 0x1404CD8A0 (PpmPerfGetVmPerfConfig.c)
 *     PopFxClearDeviceConstraints @ 0x1404CDF98 (PopFxClearDeviceConstraints.c)
 *     PpmInternalProcessorIdleVeto @ 0x1404D3388 (PpmInternalProcessorIdleVeto.c)
 *     PoDirectedDripsClearDeviceFlags @ 0x1404F7780 (PoDirectedDripsClearDeviceFlags.c)
 *     PpmInternalPlatformIdleVeto @ 0x1404F7884 (PpmInternalPlatformIdleVeto.c)
 *     PopGetEnergyEstimationInfo @ 0x1405CAF00 (PopGetEnergyEstimationInfo.c)
 *     Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline @ 0x1405CD1A8 (Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x1405CD1FC (Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmPerfGetVmCppcConfig @ 0x1405D0204 (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x1405D04B0 (PpmPerfGetVmPerfPriorityConfig.c)
 *     PopShutdownListenerRemoveCallback @ 0x1405D4FF0 (PopShutdownListenerRemoveCallback.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopBootStatUnlock @ 0x1406F3680 (PopBootStatUnlock.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1406F5384 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1406F6004 (PopDirectedDripsUmPowerInformationInternal.c)
 *     PopDiagTraceSleepReliabilityDiagConfigUpdate @ 0x1406F70B8 (PopDiagTraceSleepReliabilityDiagConfigUpdate.c)
 *     PopFxPlatformRegisterInterface @ 0x1406F76A0 (PopFxPlatformRegisterInterface.c)
 *     PoUserShutdownCancelled @ 0x1406F9670 (PoUserShutdownCancelled.c)
 *     PopCheckTestsigningEnabled @ 0x140747620 (PopCheckTestsigningEnabled.c)
 *     PopHandleProvIdentifierRequest @ 0x14074B2B8 (PopHandleProvIdentifierRequest.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x14074DE28 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PopBatteryUpdateTestExempt @ 0x140759914 (PopBatteryUpdateTestExempt.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14075B55C (PopUpdateSmartUserPresencePredictions.c)
 *     PopScreenOn @ 0x14075C440 (PopScreenOn.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14075E560 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopSessionConnectionChangeV2 @ 0x14075E8A4 (PopSessionConnectionChangeV2.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140780AC0 (RtlCapabilityCheckForSingleSessionSku.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PspIsContextAdmin @ 0x14085A9A4 (PspIsContextAdmin.c)
 *     RtlIsMultiSessionSku @ 0x1408E8B20 (RtlIsMultiSessionSku.c)
 *     TtmNotifySessionPowerStateChange @ 0x14099D5A4 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x14099D634 (TtmNotifySessionTerminalInput.c)
 *     PopScreenOff @ 0x14099E658 (PopScreenOff.c)
 *     PopSetDisplayStatus @ 0x1409A0A38 (PopSetDisplayStatus.c)
 *     PopUserPresenceHostStateChange @ 0x1409A0E18 (PopUserPresenceHostStateChange.c)
 *     PopAdaptiveGetSessionState @ 0x1409A18F4 (PopAdaptiveGetSessionState.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409A2DCC (PopSetPowerSettingValueAcDc.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A0DCC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopUpdateConsoleDisplayState @ 0x140A1B91C (PopUpdateConsoleDisplayState.c)
 *     PopEsQueueStateEvaluation @ 0x140A31258 (PopEsQueueStateEvaluation.c)
 *     PopBootStatGet @ 0x140A348F8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A34CDC (PopBootStatSet.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140A3A0FC (PpmPerfGetFrequencyBandStats.c)
 *     PopManageTransitionRecordRequest @ 0x140A44A04 (PopManageTransitionRecordRequest.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A5A754 (PpmIdleGetConcurrencyStats.c)
 *     PopS0LowPowerIdleInfo @ 0x140A5D840 (PopS0LowPowerIdleInfo.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A60E74 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopNotifyWin32kRequestStatus @ 0x140A62180 (PopNotifyWin32kRequestStatus.c)
 *     PopIsRunningAsLocalSystem @ 0x140A6A934 (PopIsRunningAsLocalSystem.c)
 *     PopTransitionCheckpoint @ 0x140A71648 (PopTransitionCheckpoint.c)
 *     PopFanReadFanNoiseInfo @ 0x140A73098 (PopFanReadFanNoiseInfo.c)
 *     PpmPerfQueryProcMeasurementValues @ 0x140A77BC8 (PpmPerfQueryProcMeasurementValues.c)
 *     PopAcquireTransitionLock @ 0x140A8F05C (PopAcquireTransitionLock.c)
 *     PopBroadcastSessionInfo @ 0x140A90620 (PopBroadcastSessionInfo.c)
 *     PopSuspendResumeInvocation @ 0x140A92D20 (PopSuspendResumeInvocation.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A99FCC (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PoUserShutdownInitiated @ 0x140A9C570 (PoUserShutdownInitiated.c)
 *     PopReleaseTransitionLock @ 0x140AA0760 (PopReleaseTransitionLock.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6BD8 (PopBootStatRestoreDefaults.c)
 *     PopReadResumeContext @ 0x140AABF98 (PopReadResumeContext.c)
 *     PopReadPagesFromHiberFile @ 0x140AAC0F0 (PopReadPagesFromHiberFile.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140AAD370 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBootStatCheckIntegrity @ 0x140AB00C0 (PopBootStatCheckIntegrity.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140AB6528 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PpmPerfGetBrandedFrequency @ 0x140AB6C38 (PpmPerfGetBrandedFrequency.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140AB7704 (PopUpdateBackgroundCoolingStatus.c)
 *     PpmPerfGetVmPerfControlSupport @ 0x140ABCAA8 (PpmPerfGetVmPerfControlSupport.c)
 *     PopNetUpdateStandbyRequest @ 0x140ABD818 (PopNetUpdateStandbyRequest.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 *     PopSessionWinlogonNotification @ 0x140AC8DB8 (PopSessionWinlogonNotification.c)
 *     PopUpdateExternalDisplayState @ 0x140AC8ECC (PopUpdateExternalDisplayState.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _BYTE *a5,
        unsigned int a6,
        PVOID *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v9; // ebx
  __m256i *v10; // rdi
  __int64 v11; // r14
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  int PagesFromHiberFile; // ebx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r8
  const wchar_t *v20; // rcx
  unsigned __int64 v21; // rax
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  char *v26; // rbx
  char PowerButtonBugcheckEnabled; // al
  BOOLEAN *p_IsMember; // rdx
  const WNF_STATE_NAME *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdi
  ULONG v32; // edx
  void *v33; // rcx
  __int64 (__fastcall **v34)(unsigned int *); // rax
  ULONGLONG *v35; // rsi
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // r14d
  __int64 v49; // rax
  _OWORD *v50; // rax
  __int128 v51; // xmm1
  int v52; // ebx
  int v53; // ebx
  int v54; // ebx
  int v55; // ebx
  __int32 v56; // ecx
  _OWORD *v57; // rax
  char **v58; // rbx
  char *v59; // rax
  int v60; // ecx
  bool v61; // zf
  int v62; // ebx
  int v63; // ebx
  int v64; // ebx
  _BYTE *v65; // rax
  _OWORD *v66; // rax
  char v67; // bl
  int *v68; // rcx
  int v69; // eax
  char *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  char v74; // al
  unsigned __int32 v75; // eax
  unsigned __int64 v76; // rcx
  int v77; // r14d
  int v78; // eax
  int v79; // ebx
  int v80; // ebx
  int v81; // ebx
  int v82; // ebx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  unsigned int v86; // r8d
  _PROCESSOR_NUMBER *v87; // rcx
  int VmPerfPriorityConfig; // eax
  bool v89; // sf
  __int64 v90; // rax
  __int64 v91; // rcx
  ULONG_PTR v92; // rcx
  unsigned __int64 v93; // rbx
  unsigned __int64 *v94; // rax
  int v95; // ebx
  int v96; // ebx
  int v97; // ebx
  int v98; // ebx
  __int64 v99; // rax
  __int64 v100; // rdx
  unsigned int v101; // r8d
  int FrequencyBandStats; // eax
  char v103; // bl
  ULONGLONG *v104; // rax
  unsigned int v105; // r8d
  int VmCppcConfig; // eax
  __int64 v107; // rax
  __int64 v108; // rdx
  unsigned int v109; // r8d
  void *v110; // rbx
  ULONGLONG *v111; // rax
  _DWORD *Pool2; // rbx
  __int64 *i; // rax
  __int64 v114; // rcx
  int v115; // eax
  int v116; // ebx
  int v117; // ebx
  int v118; // ebx
  int v119; // ebx
  __int8 v120; // al
  _KPROCESS *Process; // rcx
  unsigned int v122; // eax
  unsigned int v123; // eax
  unsigned int v124; // esi
  unsigned int v125; // edi
  _DWORD *v126; // rcx
  _DWORD *v127; // rax
  int v128; // ecx
  int v129; // ebx
  int v130; // ebx
  int v131; // ebx
  _DWORD *v132; // rax
  __int64 v133; // rax
  int v134; // ebx
  int v135; // ebx
  int v136; // ebx
  int v137; // ebx
  ULONGLONG *v138; // rax
  unsigned int v139; // r8d
  __int64 v140; // rax
  __int64 v141; // rdx
  unsigned int v142; // r8d
  void *v143; // rbx
  _DWORD *v144; // rax
  unsigned int SessionId; // eax
  __int64 v146; // rcx
  unsigned int v147; // ecx
  void *ExplicitScope; // [rsp+20h] [rbp-89h]
  BOOLEAN IsMember; // [rsp+40h] [rbp-69h] BYREF
  BOOLEAN HasCapability; // [rsp+41h] [rbp-68h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+42h] [rbp-67h]
  int v152; // [rsp+44h] [rbp-65h] BYREF
  __int64 v153; // [rsp+48h] [rbp-61h] BYREF
  int v154; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v155; // [rsp+54h] [rbp-55h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp-51h] BYREF
  void *v157; // [rsp+60h] [rbp-49h] BYREF
  PVOID v158; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+70h] [rbp-39h] BYREF
  ULONGLONG *v160; // [rsp+80h] [rbp-29h]
  _DWORD v161[8]; // [rsp+88h] [rbp-21h] BYREF

  v9 = a1;
  v10 = (__m256i *)a3;
  CapabilityName = 0LL;
  v11 = a4;
  *a7 = 0LL;
  *a8 = 0;
  *a9 = 0;
  LODWORD(v153) = a2;
  HasCapability = 0;
  IsMember = 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  pcbLength = 0LL;
  v154 = 0;
  v157 = 0LL;
  v158 = 0LL;
  v155 = 0;
  v160 = 0LL;
  PreviousMode = a1;
  if ( (_BYTE)a1 )
  {
    if ( (unsigned int)v9 <= 0x1C )
    {
      v12 = 347603205;
      if ( _bittest(&v12, v9) )
        return (unsigned int)-1073741790;
    }
    v13 = (unsigned int)(v9 - 40);
    if ( (unsigned int)v13 <= 0x38 )
    {
      v14 = 0x18082000A8E0003LL;
      if ( _bittest64(&v14, v13) )
        return (unsigned int)-1073741790;
    }
    if ( (unsigned int)Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline() && v9 == 98 )
      return (unsigned int)-1073741790;
    v16 = (unsigned int)(v9 - 29);
    if ( (unsigned int)v16 <= 0x23 )
    {
      a1 = 0x88B4C0001LL;
      if ( _bittest64(&a1, v16) )
      {
        if ( !PspIsContextAdmin() )
          return (unsigned int)-1073741790;
      }
    }
    if ( (unsigned int)(v9 - 82) <= 1 && !PopCheckTestsigningEnabled() )
      return (unsigned int)-1073741790;
    if ( (v17 = (unsigned int)(v9 - 35), (unsigned int)v17 <= 0x37) && (a1 = 0xA0001000000003LL, _bittest64(&a1, v17))
      || v9 == 24 )
    {
      if ( !PopIsRunningAsLocalSystem() )
        return (unsigned int)-1073741790;
    }
    switch ( v9 )
    {
      case 80:
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
          return (unsigned int)-1073741727;
LABEL_452:
        if ( (_DWORD)v11 == 8 && v10 && !a6 && !a5 )
        {
          qword_140FD8208 = PopAdaptiveGetSystemInitiatedRebootTargetState();
          byte_140FD8200 = 1;
          return 0;
        }
        return (unsigned int)-1073741811;
      case 61:
        if ( PopCheckTestsigningEnabled() && PspIsContextAdmin() )
        {
LABEL_24:
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741811;
          if ( a5 )
          {
            PopAcquireTransitionLock(8);
            PagesFromHiberFile = PopReadPagesFromHiberFile(v10->m256i_u32[2], 1u, a7);
            PopReleaseTransitionLock(8);
            v18 = 0;
            if ( PagesFromHiberFile < 0 )
            {
              *a7 = 0LL;
              return (unsigned int)PagesFromHiberFile;
            }
            *a8 = 4096;
            *a9 = 1;
            return v18;
          }
          return (unsigned int)-1073741789;
        }
        return (unsigned int)-1073741790;
      case 45:
        PagesFromHiberFile = 0;
        if ( !PopIsRunningAsLocalSystem() && (!PopCheckTestsigningEnabled() || !PspIsContextAdmin()) )
          return (unsigned int)-1073741790;
        goto LABEL_283;
      case 25:
        CapabilityName = 0LL;
        v19 = 0x7FFFLL;
        v20 = L"systemManagement";
        while ( *v20 )
        {
          ++v20;
          if ( !--v19 )
            goto LABEL_39;
        }
        CapabilityName.Buffer = L"systemManagement";
        CapabilityName.Length = 2 * (0x7FFF - v19);
        CapabilityName.MaximumLength = CapabilityName.Length + 2;
LABEL_39:
        PagesFromHiberFile = RtlCapabilityCheckForSingleSessionSku(0LL, &CapabilityName, &HasCapability);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        if ( !HasCapability )
          return (unsigned int)-1073741790;
        goto LABEL_139;
    }
    a2 = (unsigned int)v153;
    LOBYTE(a1) = PreviousMode;
  }
  else
  {
    v21 = (unsigned int)(v9 - 24);
    if ( (unsigned int)v21 <= 0x3B )
    {
      a3 = 0xD00811169F09201LL;
      if ( _bittest64(&a3, v21) )
        return (unsigned int)-1073741637;
    }
    if ( v9 == 7 || v9 == 5 )
      return (unsigned int)-1073741637;
  }
  if ( v9 > 54 )
  {
    if ( v9 <= 78 )
    {
      if ( v9 == 78 )
      {
        if ( !a5 )
          return (unsigned int)-1073741811;
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 4uLL, 0x206D654Du);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        for ( i = (__int64 *)PpmPerfDomainHead; ; i = (__int64 *)*i )
        {
          if ( i == &PpmPerfDomainHead )
          {
            v115 = 0;
            goto LABEL_425;
          }
          v114 = i[53];
          if ( v114 )
            break;
        }
        v115 = guard_dispatch_icall_no_overrides(v114, &PpmPerfDomainHead);
LABEL_425:
        *Pool2 = v115;
        *a7 = Pool2;
        *a8 = 4;
        goto LABEL_71;
      }
      if ( v9 <= 67 )
      {
        if ( v9 == 67 )
        {
          *a8 = 0;
          *a7 = 0LL;
          v68 = (int *)ExAllocatePool2(0x100uLL, 4uLL, 0x206D654Du);
          if ( !v68 )
            return (unsigned int)-1073741670;
          v69 = PopDisableInboxPepGeneratedConstraintsOverride;
          goto LABEL_217;
        }
        if ( v9 > 61 )
        {
          if ( v9 == 62 )
          {
            if ( !a5 )
              return (unsigned int)-1073741789;
            v70 = (char *)ExAllocatePool2(0x100uLL, 1uLL, 0x206D654Du);
            if ( !v70 )
              return (unsigned int)-1073741670;
            v74 = PopDirtyTransitionDiagInfo;
            goto LABEL_229;
          }
          if ( v9 == 63 )
          {
            if ( !a5 )
              return (unsigned int)-1073741811;
            v93 = (unsigned __int64)&SshpRoutineBlock & -(__int64)SSHSupportQueryIsLibraryEnabled();
            if ( !v93 )
              return (unsigned int)-1073741637;
            v94 = (unsigned __int64 *)ExAllocatePool2(0x100uLL, 8uLL, 0x206D654Du);
            if ( !v94 )
              return (unsigned int)-1073741670;
            *v94 = v93;
            *a7 = v94;
            goto LABEL_169;
          }
          if ( v9 != 64 )
          {
            if ( v9 == 65 )
            {
              if ( (_DWORD)v11 == 16 )
              {
                v92 = v10->m256i_u64[1];
                if ( v92 )
                {
                  PagesFromHiberFile = PopFxClearDeviceConstraints(v92);
                  v18 = 0;
                  if ( PagesFromHiberFile < 0 )
                    return (unsigned int)PagesFromHiberFile;
                  return v18;
                }
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741637;
          }
        }
        else
        {
          if ( v9 == 61 )
            goto LABEL_24;
          if ( v9 != 56 )
          {
            switch ( v9 )
            {
              case '9':
                if ( a5 )
                  return (unsigned int)-1073741811;
                return (unsigned int)PopPlRegisterPowerPlane((__int64)v10, v11, a3);
              case ':':
                if ( (unsigned int)v11 < 0x18 )
                  return (unsigned int)-1073741811;
                return (unsigned int)PoDirectedDripsSetDeviceFlags(v10->m256i_i64[1], v10->m256i_i32[4]);
              case ';':
                if ( (unsigned int)v11 < 0x18 )
                  return (unsigned int)-1073741811;
                return (unsigned int)PoDirectedDripsClearDeviceFlags(v10->m256i_i64[1], v10->m256i_i32[4]);
            }
            if ( v9 != 60 )
              return (unsigned int)-1073741811;
            if ( !a5 )
              return (unsigned int)-1073741789;
            PopAcquireTransitionLock(8);
            PagesFromHiberFile = PopReadResumeContext(&v154, &v157);
            PopReleaseTransitionLock(8);
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            *a7 = v157;
            *a8 = v154;
LABEL_125:
            *a9 = 1;
            return 0;
          }
        }
        goto LABEL_315;
      }
      if ( v9 <= 73 )
      {
        if ( v9 == 73 )
        {
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( a5 )
            return (unsigned int)-1073741811;
          PopUserPresenceHostStateChange(v10->m256i_i32[2]);
          return 0;
        }
        v95 = v9 - 68;
        if ( !v95 )
          return PopIdleScanInterval == 0 ? 0xC00000BB : 0;
        v96 = v95 - 1;
        if ( v96 )
        {
          v97 = v96 - 1;
          if ( !v97 )
          {
            if ( (unsigned int)v11 < 0xC )
              return (unsigned int)-1073741789;
            if ( v10->m256i_i32[1] > 2u )
              return (unsigned int)-1073741637;
            if ( v10->m256i_i32[1] == 2 && (unsigned int)v11 < 0x20 )
              return (unsigned int)-1073741789;
            if ( !a5 )
              return (unsigned int)-1073741811;
            v104 = (ULONGLONG *)ExAllocatePool2(0x100uLL, 8uLL, 0x206D654Du);
            v35 = v104;
            if ( !v104 )
              return (unsigned int)-1073741670;
            if ( v10->m256i_i32[1] == 2 )
              VmCppcConfig = PpmPerfGetVmCppcConfig(
                               v10->m256i_u32[3],
                               v10->m256i_u32[2],
                               v10->m256i_u32[4],
                               v10->m256i_i32[5],
                               v10->m256i_i32[6],
                               v10->m256i_i8[28],
                               v104);
            else
              VmCppcConfig = PpmPerfGetVmPerfConfig(v10->m256i_i32[2], v104, v105);
            PagesFromHiberFile = VmCppcConfig;
            v89 = VmCppcConfig < 0;
LABEL_305:
            if ( !v89 )
            {
              *a7 = v35;
LABEL_87:
              *a8 = 8;
              goto LABEL_88;
            }
            goto LABEL_93;
          }
          v98 = v97 - 1;
          if ( !v98 )
          {
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741811;
            v103 = v10->m256i_i8[8];
            PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepReliabilityDiagLock);
            if ( PopSleepReliabilityDetailedDiagEnabled != v103 )
            {
              PopSleepReliabilityDetailedDiagEnabled = v103;
              PopDiagTraceSleepReliabilityDiagConfigUpdate();
            }
            PopReleaseRwLock(&PopSleepReliabilityDiagLock);
            return 0;
          }
          if ( v98 != 1 || !a5 )
            return (unsigned int)-1073741811;
          v48 = 2304;
          v99 = ExAllocatePool2(0x100uLL, 0x900uLL, 0x206D654Du);
          v31 = v99;
          if ( !v99 )
            return (unsigned int)-1073741670;
          FrequencyBandStats = PpmPerfGetFrequencyBandStats(v99, v100, v101);
          goto LABEL_380;
        }
        if ( !a5 )
          return (unsigned int)-1073741811;
        v107 = ExAllocatePool2(0x100uLL, 0x14uLL, 0x206D654Du);
        v110 = (void *)v107;
        if ( !v107 )
          return (unsigned int)-1073741670;
        PpmPerfGetVmPerfControlSupport(v107, v108, v109);
        *a7 = v110;
        *a8 = a6 < 0x14 ? 1 : 20;
LABEL_71:
        *a9 = 1;
        return 0;
      }
      if ( v9 == 74 || v9 == 75 )
      {
        if ( (_DWORD)v11 != 12 )
          return (unsigned int)-1073741789;
        if ( !a5 )
          return (unsigned int)-1073741811;
        if ( v9 == 74 )
          v48 = 296;
        else
          v48 = 592;
        v111 = (ULONGLONG *)ExAllocatePool2(0x100uLL, v48, 0x206D654Du);
        v35 = v111;
        if ( !v111 )
          return (unsigned int)-1073741670;
        PagesFromHiberFile = PpmIdleGetPackageIdleIntervalStats(v9, v10->m256i_u16[4], v111);
        if ( PagesFromHiberFile < 0 )
        {
LABEL_93:
          v32 = 544040269;
LABEL_94:
          v33 = v35;
          goto LABEL_85;
        }
        *a7 = v35;
LABEL_116:
        *a8 = v48;
        goto LABEL_88;
      }
      if ( (unsigned int)(v9 - 76) > 1 )
        return (unsigned int)-1073741811;
      if ( (_DWORD)v11 != 12 )
        return (unsigned int)-1073741789;
      if ( !a5 )
        return (unsigned int)-1073741811;
      PagesFromHiberFile = PpmIdleGetConcurrencyStats(v9, v10->m256i_u16[4], &v158, &v155);
      if ( PagesFromHiberFile < 0 )
        return (unsigned int)PagesFromHiberFile;
      *a7 = v158;
      *a8 = v155;
LABEL_88:
      *a9 = 1;
      return (unsigned int)PagesFromHiberFile;
    }
    if ( v9 > 89 )
    {
      if ( v9 > 95 )
      {
        if ( v9 != 96 )
        {
          if ( v9 == 97 )
          {
            if ( (_DWORD)v11 != 12 || !a5 || a6 != 1 )
              return (unsigned int)-1073741811;
            *a5 = 0;
            if ( (unsigned int)Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline()
              && v10->m256i_i32[2] == 59996711 )
            {
              *a5 = 1;
            }
            return 0;
          }
          if ( v9 != 98 )
          {
            if ( v9 != 99
              || !(unsigned int)Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline()
              || !v10
              || a5 )
            {
              return (unsigned int)-1073741811;
            }
            if ( (unsigned int)v11 >= 0xC )
              return (unsigned int)PopBatteryUpdateTestExempt(v10->m256i_u8[8]);
            return (unsigned int)-1073741789;
          }
          if ( !(unsigned int)Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline() )
            return (unsigned int)-1073741811;
          IsMember = 0;
          PagesFromHiberFile = SeIsAppContainerOrIdentifyLevelContext(0LL, &IsMember);
          if ( PagesFromHiberFile < 0 )
            return (unsigned int)PagesFromHiberFile;
          if ( IsMember )
            return (unsigned int)-1073741790;
          if ( (_DWORD)v153 )
            return (unsigned int)-1073741811;
          if ( (_DWORD)v11 == 48 && a5 && a6 == 16 )
          {
            SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            PopSessionConnectionChangeV2(
              SessionId,
              (__int64)&v10->m256i_i64[1],
              (__int64)&v10->m256i_i64[2],
              (__int64)a5);
            v146 = (unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            if ( qword_140E67678 )
              guard_dispatch_icall_no_overrides(v146, 0LL);
            return 0;
          }
          else
          {
            return (unsigned int)-1073741306;
          }
        }
      }
      else if ( v9 != 95 )
      {
        v134 = v9 - 90;
        if ( !v134 )
        {
          if ( v10 && (unsigned int)v11 >= 0x14 && (!a5 || !a6) )
            return (unsigned int)PopSuspendResumeInvocation((__int64)v10);
          return (unsigned int)-1073741811;
        }
        v135 = v134 - 1;
        if ( !v135 )
        {
          if ( !a5 || a6 < 0x24 )
            return (unsigned int)-1073741789;
          v144 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x24uLL, 0x206D654Du);
          v31 = (__int64)v144;
          if ( !v144 )
            return (unsigned int)-1073741670;
          PagesFromHiberFile = PopGetEnergyEstimationInfo(v144);
          if ( PagesFromHiberFile >= 0 )
          {
            *a7 = (PVOID)v31;
            PagesFromHiberFile = 0;
            *a8 = 36;
            *a9 = 1;
            return (unsigned int)PagesFromHiberFile;
          }
          goto LABEL_84;
        }
        v136 = v135 - 1;
        if ( !v136 )
          return (unsigned int)PopHandleProvIdentifierRequest(
                                 (__int64)v10,
                                 v11,
                                 (__int64)a5,
                                 a6,
                                 (unsigned __int16 **)a7,
                                 a8);
        v137 = v136 - 1;
        if ( v137 )
        {
          if ( v137 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( !a5 )
            return (unsigned int)-1073741811;
          v138 = (ULONGLONG *)ExAllocatePool2(0x100uLL, 8uLL, 0x206D654Du);
          v35 = v138;
          if ( !v138 )
            return (unsigned int)-1073741670;
          VmPerfPriorityConfig = PpmPerfGetVmPerfPriorityConfig(v10->m256i_u32[2], v138, v139);
LABEL_304:
          PagesFromHiberFile = VmPerfPriorityConfig;
          v89 = VmPerfPriorityConfig < 0;
          goto LABEL_305;
        }
        if ( (_DWORD)a2 )
          return (unsigned int)-1073741637;
        if ( !a5 )
          return (unsigned int)-1073741811;
        v140 = ExAllocatePool2(0x100uLL, 8uLL, 0x206D654Du);
        v143 = (void *)v140;
        if ( !v140 )
          return (unsigned int)-1073741670;
        PpmPerfGetVmPerfPrioritySupport(v140, v141, v142);
        *a7 = v143;
        *a8 = 8;
        goto LABEL_71;
      }
      if ( (_DWORD)v11 == 12 && !a5 && !v10->m256i_i32[1] )
      {
        v147 = v10->m256i_u32[2];
        if ( v147 < 0x20 )
          return (unsigned int)PopNotifyWin32kRequestStatus(v147, v9 == 95);
      }
      return (unsigned int)-1073741811;
    }
    if ( v9 == 89 )
    {
      if ( !a5 || a6 != 20 )
        return (unsigned int)-1073741789;
      PopAcquirePolicyLock(a1, a2);
      PagesFromHiberFile = 0;
      if ( byte_140F0B673 )
      {
        v133 = ExAllocatePool2(0x100uLL, 0x14uLL, 0x206D654Du);
        if ( v133 )
        {
          *(_OWORD *)v133 = PopAcpiTimeAndAlarmCapabilities;
          v45 = (unsigned int)dword_140F085F0;
          *(_DWORD *)(v133 + 16) = dword_140F085F0;
          *a7 = (PVOID)v133;
          *a8 = 20;
          *a9 = 1;
        }
        else
        {
          PagesFromHiberFile = -1073741670;
        }
      }
      else
      {
        PagesFromHiberFile = -1073741637;
      }
      goto LABEL_110;
    }
    if ( v9 > 84 )
    {
      v129 = v9 - 85;
      if ( v129 )
      {
        v130 = v129 - 1;
        if ( v130 )
        {
          v131 = v130 - 1;
          if ( v131 )
          {
            if ( v131 == 1 )
              return (unsigned int)PopManageTransitionRecordRequest(a1, (__int64)v10, (unsigned int)v11);
          }
          else if ( v10 && (_DWORD)v11 == 24 && !a5 )
          {
            return (unsigned int)PopShutdownListenerRemoveCallback(v10);
          }
          return (unsigned int)-1073741811;
        }
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v132 = (_DWORD *)ExAllocatePool2(0x100uLL, 8uLL, 0x206D654Du);
        if ( v132 )
        {
          *v132 = ExBootAppErrorDiagCode;
          v132[1] = ExBootAppFailureStatus;
          *a7 = v132;
          *a8 = 8;
          goto LABEL_192;
        }
        return (unsigned int)-1073741670;
      }
      if ( !a5 )
        return (unsigned int)-1073741811;
      v48 = 88;
      v31 = ExAllocatePool2(0x100uLL, 0x58uLL, 0x206D654Du);
      if ( !v31 )
        return (unsigned int)-1073741670;
      v128 = 85;
    }
    else
    {
      if ( v9 != 84 )
      {
        v116 = v9 - 79;
        if ( v116 )
        {
          v117 = v116 - 1;
          if ( !v117 )
            goto LABEL_452;
          v118 = v117 - 1;
          if ( v118 )
          {
            v119 = v118 - 1;
            if ( v119 )
            {
              if ( v119 != 1 || (_DWORD)v11 != 16 || !v10 || a6 || a5 )
                return (unsigned int)-1073741811;
              return (unsigned int)PopAdaptiveSetSystemInitiatedRebootTargetStateOverride((__int64)v10);
            }
            if ( (_DWORD)v11 != 12 || !v10 || a6 || a5 )
              return (unsigned int)-1073741811;
            v153 = 0LL;
            LODWORD(v153) = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            v120 = v10->m256i_i8[8];
            BYTE4(v153) = 1;
            Process = KeGetCurrentThread()->ApcState.Process;
            BYTE5(v153) = v120;
            v122 = PsGetSessionIdEx((__int64)Process);
            PopSessionWinlogonNotification(v122, &v153);
          }
          else
          {
            if ( (_DWORD)v11 != 40 || !v10 || a6 != 16 || !a5 )
              return (unsigned int)-1073741811;
            v123 = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            PopAdaptiveGetSessionState(v123, (__int64)&v10->m256i_i64[1], (__int64)a5);
          }
          return 0;
        }
        if ( !v10 || (_DWORD)v11 != 12 )
          return (unsigned int)-1073741811;
        v124 = v10->m256i_u32[2];
        v152 = 0;
        PagesFromHiberFile = PpmPerfQueryProcMeasurementValues(v124, (__int64)&v152);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        v125 = 24 * v152 + 8;
        if ( a6 != 4 )
        {
          if ( a6 < v125 )
            return (unsigned int)-1073741789;
          v127 = (_DWORD *)ExAllocatePool2(0x40uLL, v125, 0x206D654Du);
          if ( v127 )
          {
            *a8 = v125;
            *a9 = 1;
            *a7 = v127;
            *v127 = v152;
            return (unsigned int)PpmPerfQueryProcMeasurementValues(v124, (__int64)&v152);
          }
          return (unsigned int)-1073741670;
        }
        v126 = (_DWORD *)ExAllocatePool2(0x100uLL, 4uLL, 0x206D654Du);
        if ( !v126 )
          return (unsigned int)-1073741670;
        *v126 = v152;
        *a7 = v126;
        *a8 = 4;
        goto LABEL_88;
      }
      if ( !a5 )
        return (unsigned int)-1073741811;
      v48 = 160;
      v31 = ExAllocatePool2(0x100uLL, 0xA0uLL, 0x206D654Du);
      if ( !v31 )
        return (unsigned int)-1073741670;
      v128 = 84;
    }
    FrequencyBandStats = PopFanReadFanNoiseInfo(v128, v31, v48);
LABEL_380:
    PagesFromHiberFile = FrequencyBandStats;
    if ( FrequencyBandStats >= 0 )
    {
LABEL_115:
      *a7 = (PVOID)v31;
      goto LABEL_116;
    }
LABEL_84:
    v32 = 544040269;
    v33 = (void *)v31;
LABEL_85:
    ExFreePoolWithTag(v33, v32);
    return (unsigned int)PagesFromHiberFile;
  }
  if ( v9 == 54 )
  {
LABEL_315:
    PagesFromHiberFile = PopDirectedDripsUmPowerInformationInternal(v9, v11, (__int64)v10, a8, a7);
    if ( PagesFromHiberFile < 0 || !*a7 )
      return (unsigned int)PagesFromHiberFile;
    goto LABEL_88;
  }
  if ( v9 > 31 )
  {
    if ( v9 <= 42 )
    {
      if ( v9 == 42 )
      {
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v50 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x20uLL, 0x206D654Du);
        if ( !v50 )
          return (unsigned int)-1073741670;
        *v50 = PopBsdPowerTransitionExtensionAtBoot;
        v51 = xmmword_140E672E0;
LABEL_124:
        v50[1] = v51;
        *a7 = v50;
        *a8 = 32;
        goto LABEL_125;
      }
      if ( v9 <= 37 )
      {
        if ( v9 != 37 )
        {
          a1 = (unsigned int)(v9 - 32);
          if ( v9 != 32 )
          {
            if ( v9 == 33 )
              return (unsigned int)-1073741637;
            a1 = (unsigned int)(v9 - 34);
            if ( v9 != 34 )
            {
              a1 = (unsigned int)(v9 - 35);
              if ( v9 != 35 )
              {
                if ( (unsigned int)v11 < 0xC )
                  return (unsigned int)-1073741789;
                if ( a5 )
                  return (unsigned int)-1073741811;
                v67 = v10->m256i_i8[8];
                PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
                PopEsEnabledOnHost = v67;
                PopReleaseRwLock(&PopEsLock);
                PopEsQueueStateEvaluation(0);
                return 0;
              }
            }
          }
          goto LABEL_237;
        }
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v68 = (int *)ExAllocatePool2(0x100uLL, 4uLL, 0x206D654Du);
        if ( !v68 )
          return (unsigned int)-1073741670;
        v69 = dword_140F0B984;
LABEL_217:
        *v68 = v69;
        *a7 = v68;
        *a8 = 4;
        goto LABEL_192;
      }
      a1 = (unsigned int)(v9 - 38);
      switch ( v9 )
      {
        case '&':
          goto LABEL_237;
        case '\'':
          if ( (_DWORD)v11 != 12 )
            return (unsigned int)-1073741811;
          p_IsMember = &IsMember;
          IsMember = v10->m256i_u8[8];
          v29 = (const WNF_STATE_NAME *)&WNF_PO_WAKE_ON_VOICE_STATE;
          return (unsigned int)ZwUpdateWnfStateData(v29, p_IsMember, 1u, 0LL, 0LL, 0, 0);
        case '(':
          if ( (_DWORD)v11 != 16 || v10->m256i_i32[2] )
            return (unsigned int)-1073741811;
          if ( v10->m256i_i8[12] )
            PopDeepSleepSetDisengageReason(7u);
          else
            PopDeepSleepClearDisengageReason(7u);
          return 0;
      }
      if ( (_DWORD)v11 != 16 )
        return (unsigned int)-1073741811;
      if ( !a5 )
        return (unsigned int)-1073741789;
      v70 = (char *)ExAllocatePool2(0x100uLL, 1uLL, 0x206D654Du);
      if ( v70 )
      {
        v71 = v10->m256i_i64[1];
        if ( !v71
          || (v72 = *(_QWORD *)(*(_QWORD *)(v71 + 312) + 40LL)) == 0
          || (v73 = *(_QWORD *)(v72 + 80)) == 0
          || (v61 = *(_QWORD *)(v73 + 64) == 0LL, v74 = 1, v61) )
        {
          v74 = 0;
        }
LABEL_229:
        *v70 = v74;
        *a7 = v70;
        *a8 = 1;
        goto LABEL_192;
      }
      return (unsigned int)-1073741670;
    }
    if ( v9 <= 48 )
    {
      if ( v9 == 48 )
      {
        if ( (unsigned int)v11 < 0x10 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        if ( !v10->m256i_i32[1] )
          return (unsigned int)PpmInternalPlatformIdleVeto(v10->m256i_u32[2], v10->m256i_i8[12]);
        return (unsigned int)-1073741735;
      }
      v79 = v9 - 43;
      if ( v79 )
      {
        v80 = v79 - 1;
        if ( v80 )
        {
          v81 = v80 - 1;
          if ( !v81 )
          {
            PagesFromHiberFile = 0;
LABEL_283:
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741811;
            if ( v10->m256i_i8[8] )
              PoUserShutdownInitiated();
            else
              PoUserShutdownCancelled();
            return (unsigned int)PagesFromHiberFile;
          }
          v82 = v81 - 1;
          if ( !v82 )
          {
            if ( (_DWORD)v11 != 32 || a5 )
              return (unsigned int)-1073741811;
            PopPowerRequestNotifyUserSessionAttributed(
              v10->m256i_i32[6],
              (PVOID)v10->m256i_i64[1],
              (void *)v10->m256i_i64[2]);
            return 0;
          }
          if ( v82 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0x14 )
            return (unsigned int)-1073741789;
          if ( a5 )
            return (unsigned int)-1073741811;
          if ( !v10->m256i_i32[1] )
            return (unsigned int)PpmInternalProcessorIdleVeto(v10->m256i_u32[2], v10->m256i_u32[3], v10->m256i_i8[16]);
          return (unsigned int)-1073741735;
        }
        if ( (unsigned int)v11 < 0x90 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        PagesFromHiberFile = RtlCheckTokenMembership(0LL, PopTimeBrokerServiceSid, &IsMember);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        if ( !IsMember )
          return (unsigned int)-1073741790;
        if ( !SSHSupportIsPlatformAoAc() )
          return (unsigned int)-1073741637;
        PagesFromHiberFile = RtlStringCbLengthW(&v10->m256i_u16[4], 0x80uLL, &pcbLength);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        v85 = v10[4].m256i_i64[1];
        if ( pcbLength )
        {
          if ( !v85 )
            return (unsigned int)-1073741811;
        }
        else if ( v85 )
        {
          return (unsigned int)-1073741811;
        }
        PopAcquirePolicyLock(v84, v83);
        PopTimeBrokerExpirationReason = 0;
        PagesFromHiberFile = RtlStringCbCopyW(&PopTimeBrokerExpirationReason, 0x80uLL, &v10->m256i_u16[4]);
        PopTimeBrokerExpirationDueTime = v10[4].m256i_i64[1];
LABEL_110:
        PopReleasePolicyLock(v45, v44, v46, v47, ExplicitScope);
        return (unsigned int)PagesFromHiberFile;
      }
      if ( (((_DWORD)v11 - 8) & 0xFFFFFFFB) != 0 )
        return (unsigned int)-1073741811;
      if ( !a5 )
        return (unsigned int)-1073741789;
      v35 = (ULONGLONG *)ExAllocatePool2(0x100uLL, 8uLL, 0x206D654Du);
      if ( !v35 )
        return (unsigned int)-1073741670;
      v87 = (_PROCESSOR_NUMBER *)&v10->m256i_u64[1];
      if ( (_DWORD)v11 != 12 )
        v87 = 0LL;
      VmPerfPriorityConfig = PpmPerfGetBrandedFrequency(v87, v35, v86);
      goto LABEL_304;
    }
    switch ( v9 )
    {
      case '1':
        if ( !a5 )
          return (unsigned int)-1073741789;
        v26 = (char *)ExAllocatePool2(0x100uLL, 1uLL, 0x206D654Du);
        if ( !v26 )
          return (unsigned int)-1073741670;
        PowerButtonBugcheckEnabled = PopQueryPowerButtonBugcheckEnabled();
LABEL_70:
        *v26 = PowerButtonBugcheckEnabled;
        *a7 = v26;
        *a8 = 1;
        goto LABEL_71;
      case '2':
        if ( !a5 )
          return (unsigned int)-1073741789;
        v70 = (char *)ExAllocatePool2(0x100uLL, 1uLL, 0x206D654Du);
        if ( !v70 )
          return (unsigned int)-1073741670;
        v74 = PopAutoChkCausedReboot;
        goto LABEL_229;
      case '3':
        if ( (_DWORD)a2 )
        {
          if ( (_DWORD)a2 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0x18 )
            return (unsigned int)-1073741789;
          v90 = v10->m256i_i64[2];
          v91 = v10->m256i_i64[1];
        }
        else
        {
          if ( (unsigned int)v11 < 0x10 )
            return (unsigned int)-1073741789;
          v90 = v10->m256i_i64[1];
          v91 = v90;
        }
        PopWakeAlarmTimeOverrideAc = v91;
        PopWakeAlarmTimeOverrideDc = v90;
        return 0;
    }
    if ( v9 != 53 )
      return (unsigned int)-1073741811;
    goto LABEL_315;
  }
  if ( v9 == 31 )
  {
LABEL_237:
    if ( (_DWORD)v11 != 24 )
      return (unsigned int)-1073741811;
    if ( a5 )
    {
      v75 = v10->m256i_u32[2];
      if ( !v75 )
        return (unsigned int)-1073741811;
      v76 = 4LL * v75;
      if ( v76 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v77 = 4 * v75;
      v35 = (ULONGLONG *)ExAllocatePool2(0x100uLL, (unsigned int)v76, 0x206D654Du);
      if ( !v35 )
        return (unsigned int)-1073741670;
    }
    else
    {
      v35 = v160;
      v77 = 0;
    }
    switch ( v9 )
    {
      case 31:
        if ( !v10->m256i_i32[2] )
        {
LABEL_247:
          PagesFromHiberFile = -1073741811;
LABEL_261:
          if ( !v35 )
            return (unsigned int)PagesFromHiberFile;
          v32 = 0;
          goto LABEL_94;
        }
        v78 = PopBootStatGet((__int64)v10, (__int64)v35);
        break;
      case 32:
        if ( !v10->m256i_i32[2] )
          goto LABEL_247;
        v78 = PopBootStatSet((__int64)v10, (__int64)v35);
        break;
      case 34:
        if ( !v10->m256i_i32[2] )
          goto LABEL_247;
        v78 = PopBootStatCheckIntegrity((__int64)v10);
        break;
      case 35:
        v78 = PopBootStatRestoreDefaults(a1);
        break;
      default:
        v78 = PopBootStatUnlock();
        break;
    }
    PagesFromHiberFile = v78;
    if ( v78 < 0 )
      goto LABEL_261;
    if ( v35 )
    {
      *a7 = v35;
      *a8 = v77;
      *a9 = 1;
    }
    return 0;
  }
  if ( v9 <= 20 )
  {
    if ( v9 == 20 )
    {
      if ( (_DWORD)v11 != 20 || a5 )
        return (unsigned int)-1073741811;
      TtmNotifySessionTerminalInput(v10->m256i_u32[2], v10->m256i_i32[3], v10->m256i_i8[16]);
      return 0;
    }
    if ( v9 <= 5 )
    {
      if ( v9 == 5 )
      {
        if ( (unsigned int)v11 < 0xC )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        PoLatencySensitivityHint(v10->m256i_u32[2]);
        return 0;
      }
      if ( v9 )
      {
        v23 = v9 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 != 1 )
                return (unsigned int)-1073741811;
              if ( (unsigned int)v11 < 8 || !a5 )
                return (unsigned int)-1073741789;
              v26 = (char *)ExAllocatePool2(0x100uLL, 1uLL, 0x206D654Du);
              if ( !v26 )
                return (unsigned int)-1073741670;
              if ( !SSHSupportIsPlatformAoAc()
                || (v61 = RtlIsMultiSessionSku() == 0, PowerButtonBugcheckEnabled = 1, v61) )
              {
                PowerButtonBugcheckEnabled = 0;
              }
              goto LABEL_70;
            }
            if ( (unsigned int)v11 < 0x10 )
              return (unsigned int)-1073741789;
            if ( a5 || (PopSimulate & 1) == 0 )
              return (unsigned int)-1073741811;
            PopUpdateSmartUserPresencePredictions(v10->m256i_u64[1], 0);
            return 0;
          }
          PopVideoInitialized = 1;
          p_IsMember = (BOOLEAN *)&PopVideoInitialized;
          v29 = &WNF_PO_VIDEO_INITIALIALIZED;
          return (unsigned int)ZwUpdateWnfStateData(v29, p_IsMember, 1u, 0LL, 0LL, 0, 0);
        }
        if ( !a5 )
          return (unsigned int)-1073741789;
        v30 = ExAllocatePool2(0x100uLL, 8uLL, 0x206D654Du);
        v31 = v30;
        if ( !v30 )
          return (unsigned int)-1073741670;
        PagesFromHiberFile = PopS0LowPowerIdleInfo(v30);
        if ( PagesFromHiberFile < 0 )
          goto LABEL_84;
        *a7 = (PVOID)v31;
        goto LABEL_87;
      }
      if ( (unsigned int)v11 < 0x20 || !a5 )
        return (unsigned int)-1073741789;
      v34 = (__int64 (__fastcall **)(unsigned int *))ExAllocatePool2(0x100uLL, 0x10uLL, 0x206D654Du);
      v35 = (ULONGLONG *)v34;
      if ( !v34 )
        return (unsigned int)-1073741670;
      PagesFromHiberFile = PopFxPlatformRegisterInterface((__int64)v10, v34);
      if ( PagesFromHiberFile >= 0 )
      {
        *a7 = v35;
        *a8 = 16;
        goto LABEL_88;
      }
      goto LABEL_93;
    }
    v36 = v9 - 6;
    if ( !v36 )
    {
      if ( (unsigned int)v11 < 0xC )
        return (unsigned int)-1073741789;
      if ( a5 )
        return (unsigned int)-1073741811;
      return (unsigned int)PopNetUpdateStandbyRequest(v10->m256i_i8[8]);
    }
    v37 = v36 - 1;
    if ( v37 )
    {
      v38 = v37 - 1;
      if ( v38 )
      {
        v39 = v38 - 10;
        if ( v39 )
        {
          if ( v39 != 1 || (_DWORD)v11 != 20 || a5 )
            return (unsigned int)-1073741811;
          TtmNotifySessionPowerStateChange(v10->m256i_u32[2], v10->m256i_i8[12]);
          v40 = v10->m256i_u8[12];
          PopAcquirePolicyLock(v42, v41);
          if ( v10->m256i_i8[13] )
          {
            PopSetDisplayStatus((_BYTE)v40 != 0);
            PopUpdateConsoleDisplayState((_BYTE)v40 != 0, v43);
            if ( (_BYTE)v40 )
              PopPowerAggregatorNotifyDisplayPoweredOn();
          }
          PopDiagTraceSessionDisplayStateChange(
            v10->m256i_i8[12] == 0,
            v10->m256i_i32[2],
            v10->m256i_u8[13],
            v10->m256i_i32[4]);
          PagesFromHiberFile = 0;
          goto LABEL_110;
        }
        if ( SSHSupportIsPlatformAoAc() )
        {
          if ( !a5 )
            return (unsigned int)-1073741789;
          v48 = 1024;
          v49 = ExAllocatePool2(0x100uLL, 0x400uLL, 0x206D654Du);
          v31 = v49;
          if ( !v49 )
            return (unsigned int)-1073741670;
          PagesFromHiberFile = PopQueryBootSessionStandbyActivationInfo(v49);
          if ( PagesFromHiberFile < 0 )
            return (unsigned int)PagesFromHiberFile;
          goto LABEL_115;
        }
        return (unsigned int)-1073741637;
      }
      if ( (unsigned int)v11 < 8 )
        return (unsigned int)-1073741789;
      if ( a5 )
        return (unsigned int)-1073741811;
      return (unsigned int)PopUpdateBackgroundCoolingStatus(v10->m256i_i8[8]);
    }
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v50 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x20uLL, 0x206D654Du);
    if ( !v50 )
      return (unsigned int)-1073741670;
    *v50 = PopBsdPowerTransitionAtBoot;
    v51 = xmmword_140E672C0;
    goto LABEL_124;
  }
  if ( v9 > 26 )
  {
    v62 = v9 - 27;
    if ( !v62 )
    {
      if ( (unsigned int)v11 < 0x10 )
        return (unsigned int)-1073741789;
      if ( a5 )
        return (unsigned int)-1073741811;
      PopTransitionCheckpoint(v10->m256i_i32[2], v10->m256i_i32[3]);
      return 0;
    }
    v63 = v62 - 1;
    if ( !v63 )
    {
      if ( (_DWORD)v11 != 12 )
        return (unsigned int)-1073741811;
      LODWORD(v153) = v10->m256i_i32[2];
      PopSetPowerSettingValueAcDc((__int64)&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4u, (__int64)&v153);
      return 0;
    }
    v64 = v63 - 1;
    if ( !v64 )
    {
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v66 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x30uLL, 0x206D654Du);
      if ( !v66 )
        return (unsigned int)-1073741670;
      *v66 = PopFirmwareResetReason;
      v66[1] = xmmword_140E67438;
      v66[2] = xmmword_140E67448;
      *a7 = v66;
      *a8 = 48;
      goto LABEL_125;
    }
    if ( v64 != 1 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v65 = (_BYTE *)ExAllocatePool2(0x100uLL, 3uLL, 0x206D654Du);
    if ( !v65 )
      return (unsigned int)-1073741670;
    *v65 = PpmPerfQosSupportedAndConfigured;
    v65[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
    v65[2] = PpmPerfQosGroupPolicyDisable != 0;
    *a7 = v65;
    *a8 = 3;
LABEL_192:
    *a9 = 1;
    return 0;
  }
  if ( v9 != 26 )
  {
    v52 = v9 - 21;
    if ( v52 )
    {
      v53 = v52 - 1;
      if ( v53 )
      {
        v54 = v53 - 1;
        if ( !v54 )
        {
          if ( (_DWORD)v11 != 12 )
            return (unsigned int)-1073741811;
          LOBYTE(a1) = v10->m256i_i8[8];
          PopUpdateExternalDisplayState(a1);
          return 0;
        }
        v55 = v54 - 1;
        if ( v55 )
        {
          if ( v55 != 1 )
            return (unsigned int)-1073741811;
LABEL_139:
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( a5 )
            return (unsigned int)-1073741811;
          if ( v10->m256i_i8[8] )
            PopScreenOn(a1);
          else
            PopScreenOff(30);
          return 0;
        }
        if ( (unsigned int)v11 < 0x28 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        v56 = v10->m256i_i32[3];
        if ( PopVideoHighPrecisionBrightnessEnabled )
        {
          if ( v56 == -1 )
            return (unsigned int)-1073741637;
        }
        else if ( v56 != -1 )
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
        v161[0] = v10->m256i_i32[2];
        v161[1] = v10->m256i_i32[3];
        v161[2] = v10->m256i_i32[4];
        v161[3] = v10->m256i_i32[5];
        v161[4] = v10->m256i_i32[6];
        v161[5] = v10->m256i_i32[7];
        v161[6] = v10[1].m256i_i32[0];
        v161[7] = v10[1].m256i_i32[1];
        PopBroadcastSessionInfo(4, 32, (__int64)v161);
        return 0;
      }
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v57 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x40uLL, 0x206D654Du);
      if ( !v57 )
        return (unsigned int)-1073741670;
      *v57 = PopBsdPhysicalPowerButtonInfoAtBoot;
      v57[1] = xmmword_140E67300;
      v57[2] = xmmword_140E67310;
      v57[3] = xmmword_140E67320;
      *a7 = v57;
      *a8 = 64;
      goto LABEL_125;
    }
    if ( (unsigned int)v11 < 0x60 || !v10->m256i_i64[1] && !a5 )
      return (unsigned int)-1073741789;
    if ( v10->m256i_i32[6] == 412 )
    {
      if ( v10[2].m256i_i8[24] || !v10->m256i_i32[4] )
      {
        PopBsdPowerWatchdogArmed = 0;
      }
      else
      {
        PopBsdLastPowerWatchdogStage = v10[1].m256i_i32[0];
        PopBsdPowerWatchdogArmed = 1;
      }
    }
    v58 = 0LL;
    if ( a5 )
    {
      v58 = (char **)ExAllocatePool2(0x100uLL, 8uLL, 0x206D654Du);
      if ( !v58 )
        return (unsigned int)-1073741670;
    }
    v59 = PopSetWatchdog((char *)v10->m256i_i64[1], &v10->m256i_u32[4], v10[2].m256i_i8[24]);
    if ( !a5 )
      return 0;
    *v58 = v59;
    *a7 = v58;
LABEL_169:
    *a8 = 8;
    goto LABEL_125;
  }
  if ( (unsigned int)v11 < 0xC )
    return (unsigned int)-1073741789;
  if ( a5 )
    return (unsigned int)-1073741811;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  v60 = PpmPerfQosDisableRefcount;
  if ( v10->m256i_i8[8] )
  {
    if ( PpmPerfQosDisableRefcount == -1 )
    {
      PagesFromHiberFile = -1073741675;
    }
    else
    {
      v60 = PpmPerfQosDisableRefcount + 1;
      PagesFromHiberFile = 0;
      ++PpmPerfQosDisableRefcount;
    }
    v61 = v60 == 1;
  }
  else
  {
    if ( PpmPerfQosDisableRefcount )
    {
      PagesFromHiberFile = 0;
      v60 = --PpmPerfQosDisableRefcount;
    }
    else
    {
      PagesFromHiberFile = -1073741637;
    }
    v61 = v60 == 0;
  }
  if ( v61 )
    PpmPerfUpdateDomainPolicy(0LL);
  else
    PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)PagesFromHiberFile;
}
