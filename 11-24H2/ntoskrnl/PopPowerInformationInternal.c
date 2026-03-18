/*
 * XREFs of PopPowerInformationInternal @ 0x140AC4A30
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x14032D49C (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PoLatencySensitivityHint @ 0x1403B7A90 (PoLatencySensitivityHint.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403CB2E4 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403CB4D8 (PopDeepSleepClearDisengageReason.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     RtlStringCbCopyW @ 0x140433420 (RtlStringCbCopyW.c)
 *     RtlStringCbLengthW @ 0x140457C50 (RtlStringCbLengthW.c)
 *     PopSetWatchdog @ 0x140458BDC (PopSetWatchdog.c)
 *     RtlCheckTokenMembership @ 0x140471820 (RtlCheckTokenMembership.c)
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     PopFxClearDeviceConstraints @ 0x1404A6344 (PopFxClearDeviceConstraints.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404AD43C (PopDiagTraceSessionDisplayStateChange.c)
 *     PoDirectedDripsSetDeviceFlags @ 0x1404B3210 (PoDirectedDripsSetDeviceFlags.c)
 *     SSHSupportQueryIsLibraryEnabled @ 0x1404C926C (SSHSupportQueryIsLibraryEnabled.c)
 *     PopPlRegisterPowerPlane @ 0x1404D1D78 (PopPlRegisterPowerPlane.c)
 *     PpmPerfGetVmPerfConfig @ 0x1404D4690 (PpmPerfGetVmPerfConfig.c)
 *     PpmInternalProcessorIdleVeto @ 0x1404D990C (PpmInternalProcessorIdleVeto.c)
 *     PoDirectedDripsClearDeviceFlags @ 0x1404F9EA0 (PoDirectedDripsClearDeviceFlags.c)
 *     PpmInternalPlatformIdleVeto @ 0x1404F9FA4 (PpmInternalPlatformIdleVeto.c)
 *     PopGetEnergyEstimationInfo @ 0x1405CD790 (PopGetEnergyEstimationInfo.c)
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x1405CFA88 (Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmPerfGetVmCppcConfig @ 0x1405D2AE4 (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x1405D2D90 (PpmPerfGetVmPerfPriorityConfig.c)
 *     PopShutdownListenerRemoveCallback @ 0x1405D7AD0 (PopShutdownListenerRemoveCallback.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopBootStatUnlock @ 0x1406F5680 (PopBootStatUnlock.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1406F7384 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1406F8004 (PopDirectedDripsUmPowerInformationInternal.c)
 *     PopDiagTraceSleepReliabilityDiagConfigUpdate @ 0x1406F9478 (PopDiagTraceSleepReliabilityDiagConfigUpdate.c)
 *     PopFxPlatformRegisterInterface @ 0x1406F9A60 (PopFxPlatformRegisterInterface.c)
 *     PoUserShutdownCancelled @ 0x1406FBA30 (PoUserShutdownCancelled.c)
 *     PopCheckTestsigningEnabled @ 0x1407492F4 (PopCheckTestsigningEnabled.c)
 *     PopHandleProvIdentifierRequest @ 0x14074CF88 (PopHandleProvIdentifierRequest.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x14074FAF8 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14075C5C0 (PopUpdateSmartUserPresencePredictions.c)
 *     PopScreenOn @ 0x14075D4A0 (PopScreenOn.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x14075F5C0 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopSessionConnectionChangeV2 @ 0x14075F904 (PopSessionConnectionChangeV2.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140780B90 (RtlCapabilityCheckForSingleSessionSku.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     PspIsContextAdmin @ 0x1408E917C (PspIsContextAdmin.c)
 *     TtmNotifySessionPowerStateChange @ 0x140902FF4 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140903084 (TtmNotifySessionTerminalInput.c)
 *     RtlIsMultiSessionSku @ 0x1409113D0 (RtlIsMultiSessionSku.c)
 *     PopManageTransitionRecordRequest @ 0x14094E638 (PopManageTransitionRecordRequest.c)
 *     PopScreenOff @ 0x1409B8008 (PopScreenOff.c)
 *     PopSetDisplayStatus @ 0x1409BA3E8 (PopSetDisplayStatus.c)
 *     PopUserPresenceHostStateChange @ 0x1409BA7C8 (PopUserPresenceHostStateChange.c)
 *     PopAdaptiveGetSessionState @ 0x1409BB2A4 (PopAdaptiveGetSessionState.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409BC77C (PopSetPowerSettingValueAcDc.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A14EAC (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopUpdateConsoleDisplayState @ 0x140A26E9C (PopUpdateConsoleDisplayState.c)
 *     PopEsQueueStateEvaluation @ 0x140A3BA78 (PopEsQueueStateEvaluation.c)
 *     PopBootStatGet @ 0x140A3F048 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A3F42C (PopBootStatSet.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140A4486C (PpmPerfGetFrequencyBandStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A61E54 (PpmIdleGetConcurrencyStats.c)
 *     PopS0LowPowerIdleInfo @ 0x140A65070 (PopS0LowPowerIdleInfo.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A6797C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopNotifyWin32kRequestStatus @ 0x140A68DD0 (PopNotifyWin32kRequestStatus.c)
 *     PopIsRunningAsLocalSystem @ 0x140A71554 (PopIsRunningAsLocalSystem.c)
 *     PopTransitionCheckpoint @ 0x140A77528 (PopTransitionCheckpoint.c)
 *     PopFanReadFanNoiseInfo @ 0x140A78D98 (PopFanReadFanNoiseInfo.c)
 *     PpmPerfQueryProcMeasurementValues @ 0x140A7D8C8 (PpmPerfQueryProcMeasurementValues.c)
 *     PopAcquireTransitionLock @ 0x140A928AC (PopAcquireTransitionLock.c)
 *     PopBroadcastSessionInfo @ 0x140A93E70 (PopBroadcastSessionInfo.c)
 *     PopSuspendResumeInvocation @ 0x140A964F0 (PopSuspendResumeInvocation.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A9EA5C (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PoUserShutdownInitiated @ 0x140AA11E0 (PoUserShutdownInitiated.c)
 *     PopReleaseTransitionLock @ 0x140AA56F0 (PopReleaseTransitionLock.c)
 *     PopBootStatRestoreDefaults @ 0x140AABC04 (PopBootStatRestoreDefaults.c)
 *     PopReadResumeContext @ 0x140AB1028 (PopReadResumeContext.c)
 *     PopReadPagesFromHiberFile @ 0x140AB1180 (PopReadPagesFromHiberFile.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140AB2400 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBootStatCheckIntegrity @ 0x140AB5DF8 (PopBootStatCheckIntegrity.c)
 *     PopUpdateExternalDisplayState @ 0x140AB9C84 (PopUpdateExternalDisplayState.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140ABB508 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PpmPerfGetBrandedFrequency @ 0x140ABBC18 (PpmPerfGetBrandedFrequency.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140ABC6E4 (PopUpdateBackgroundCoolingStatus.c)
 *     PpmPerfGetVmPerfControlSupport @ 0x140AC17C0 (PpmPerfGetVmPerfControlSupport.c)
 *     PopNetUpdateStandbyRequest @ 0x140AC2530 (PopNetUpdateStandbyRequest.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC66D0 (PpmPerfUpdateDomainPolicy.c)
 *     PopSessionWinlogonNotification @ 0x140ACB1FC (PopSessionWinlogonNotification.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  char *v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rax
  _DWORD *v31; // rdi
  ULONG v32; // edx
  ULONGLONG *v33; // rcx
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
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // r14d
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  _OWORD *v55; // rax
  __int128 v56; // xmm1
  int v57; // ebx
  int v58; // ebx
  int v59; // ebx
  int v60; // ebx
  __int32 v61; // ecx
  _OWORD *v62; // rax
  char **v63; // rbx
  char *v64; // rax
  int v65; // ecx
  bool v66; // zf
  int v67; // ebx
  int v68; // ebx
  int v69; // ebx
  _BYTE *v70; // rax
  _OWORD *v71; // rax
  char v72; // bl
  int *v73; // rcx
  int v74; // eax
  char *Pool2; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  char v79; // al
  unsigned __int32 v80; // eax
  int v81; // r14d
  int v82; // eax
  int v83; // ebx
  int v84; // ebx
  int v85; // ebx
  int v86; // ebx
  unsigned int v87; // r8d
  struct _PROCESSOR_NUMBER *v88; // rcx
  int VmPerfPriorityConfig; // eax
  bool v90; // sf
  __int64 v91; // rax
  __int64 v92; // rcx
  ULONG_PTR v93; // rcx
  unsigned __int64 v94; // rbx
  unsigned __int64 *v95; // rax
  int v96; // ebx
  int v97; // ebx
  int v98; // ebx
  int v99; // ebx
  char v100; // bl
  ULONGLONG *v101; // rax
  unsigned int v102; // r8d
  int VmCppcConfig; // eax
  __int64 v104; // rax
  __int64 v105; // rdx
  unsigned int v106; // r8d
  void *v107; // rbx
  __int64 v108; // rax
  __int64 v109; // rdx
  unsigned int v110; // r8d
  int FrequencyBandStats; // eax
  ULONGLONG *v112; // rax
  int v113; // ebx
  int v114; // ebx
  int v115; // ebx
  int v116; // ebx
  __int8 v117; // al
  _KPROCESS *Process; // rcx
  unsigned int v119; // eax
  unsigned int v120; // eax
  unsigned int v121; // esi
  unsigned int v122; // edi
  _DWORD *v123; // rcx
  _DWORD *v124; // rax
  _DWORD *v125; // rbx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 *i; // rax
  __int64 v129; // rcx
  int v130; // eax
  int v131; // ebx
  int v132; // ebx
  int v133; // ebx
  _DWORD *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  int v137; // ebx
  int v138; // ebx
  int v139; // ebx
  int v140; // ebx
  __int64 v141; // rax
  __int64 v142; // rdx
  unsigned int v143; // r8d
  void *v144; // rbx
  _DWORD *v145; // rax
  __int64 v146; // rax
  ULONGLONG *v147; // rax
  unsigned int v148; // r8d
  unsigned int SessionId; // eax
  __int64 v150; // rcx
  __int64 v151; // r8
  unsigned int v152; // ecx
  __int64 v153; // [rsp+20h] [rbp-89h]
  __int8 v154; // [rsp+40h] [rbp-69h] BYREF
  char v155; // [rsp+41h] [rbp-68h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+42h] [rbp-67h]
  int v157; // [rsp+44h] [rbp-65h] BYREF
  __int64 v158; // [rsp+48h] [rbp-61h] BYREF
  int v159; // [rsp+50h] [rbp-59h] BYREF
  int v160; // [rsp+54h] [rbp-55h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp-51h]
  void *v162; // [rsp+60h] [rbp-49h] BYREF
  PVOID v163; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING v164; // [rsp+70h] [rbp-39h] BYREF
  ULONGLONG *v165; // [rsp+80h] [rbp-29h]
  _DWORD v166[8]; // [rsp+88h] [rbp-21h] BYREF

  v9 = a1;
  v10 = (__m256i *)a3;
  v164 = 0LL;
  v11 = a4;
  *a7 = 0LL;
  *a8 = 0;
  *a9 = 0;
  LODWORD(v158) = a2;
  v155 = 0;
  v154 = 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  pcbLength = 0LL;
  v159 = 0;
  v162 = 0LL;
  v163 = 0LL;
  v160 = 0;
  v165 = 0LL;
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
LABEL_430:
        if ( (_DWORD)v11 == 8 && v10 && !a6 && !a5 )
        {
          qword_140FD7208 = PopAdaptiveGetSystemInitiatedRebootTargetState();
          byte_140FD7200 = 1;
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
        v164 = 0LL;
        v19 = 0x7FFFLL;
        v20 = L"systemManagement";
        while ( *v20 )
        {
          ++v20;
          if ( !--v19 )
            goto LABEL_39;
        }
        v164.Buffer = L"systemManagement";
        v164.Length = 2 * (0x7FFF - v19);
        v164.MaximumLength = v164.Length + 2;
LABEL_39:
        PagesFromHiberFile = RtlCapabilityCheckForSingleSessionSku(0LL, &v164, &v155);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        if ( !v155 )
          return (unsigned int)-1073741790;
        goto LABEL_139;
    }
    a2 = (unsigned int)v158;
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
    if ( v9 <= 77 )
    {
      if ( v9 == 77 )
      {
LABEL_395:
        if ( (_DWORD)v11 != 12 )
          return (unsigned int)-1073741789;
        if ( !a5 )
          return (unsigned int)-1073741811;
        PagesFromHiberFile = PpmIdleGetConcurrencyStats(v9, v10->m256i_u16[4], &v163, &v160);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        *a7 = v163;
        *a8 = v160;
        goto LABEL_88;
      }
      if ( v9 <= 66 )
      {
        if ( v9 == 66 )
          return (unsigned int)-1073741637;
        if ( v9 > 61 )
        {
          if ( v9 == 62 )
          {
            if ( !a5 )
              return (unsigned int)-1073741789;
            Pool2 = (char *)ExAllocatePool2(0x100uLL);
            if ( !Pool2 )
              return (unsigned int)-1073741670;
            v79 = PopDirtyTransitionDiagInfo;
            goto LABEL_229;
          }
          if ( v9 == 63 )
          {
            if ( !a5 )
              return (unsigned int)-1073741811;
            v94 = (unsigned __int64)&SshpRoutineBlock & -(__int64)SSHSupportQueryIsLibraryEnabled();
            if ( !v94 )
              return (unsigned int)-1073741637;
            v95 = (unsigned __int64 *)ExAllocatePool2(0x100uLL);
            if ( !v95 )
              return (unsigned int)-1073741670;
            *v95 = v94;
            *a7 = v95;
            goto LABEL_169;
          }
          if ( v9 != 64 )
          {
            if ( (_DWORD)v11 == 16 )
            {
              v93 = v10->m256i_u64[1];
              if ( v93 )
              {
                PagesFromHiberFile = PopFxClearDeviceConstraints(v93);
                v18 = 0;
                if ( PagesFromHiberFile < 0 )
                  return (unsigned int)PagesFromHiberFile;
                return v18;
              }
            }
            return (unsigned int)-1073741811;
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
            PagesFromHiberFile = PopReadResumeContext(&v159, &v162);
            PopReleaseTransitionLock(8);
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            *a7 = v162;
            *a8 = v159;
LABEL_125:
            *a9 = 1;
            return 0;
          }
        }
        goto LABEL_308;
      }
      if ( v9 <= 72 )
      {
        if ( v9 != 72 )
        {
          v96 = v9 - 67;
          if ( !v96 )
          {
            *a8 = 0;
            *a7 = 0LL;
            v73 = (int *)ExAllocatePool2(0x100uLL);
            if ( !v73 )
              return (unsigned int)-1073741670;
            v74 = PopDisableInboxPepGeneratedConstraintsOverride;
            goto LABEL_217;
          }
          v97 = v96 - 1;
          if ( !v97 )
            return PopIdleScanInterval == 0 ? 0xC00000BB : 0;
          v98 = v97 - 1;
          if ( v98 )
          {
            v99 = v98 - 1;
            if ( v99 )
            {
              if ( v99 != 1 || (_DWORD)v11 != 12 )
                return (unsigned int)-1073741811;
              v100 = v10->m256i_i8[8];
              PopAcquireRwLockExclusive(&PopSleepReliabilityDiagLock);
              if ( PopSleepReliabilityDetailedDiagEnabled != v100 )
              {
                PopSleepReliabilityDetailedDiagEnabled = v100;
                PopDiagTraceSleepReliabilityDiagConfigUpdate();
              }
              PopReleaseRwLock((signed __int64 *)&PopSleepReliabilityDiagLock);
              return 0;
            }
            if ( (unsigned int)v11 < 0xC )
              return (unsigned int)-1073741789;
            if ( v10->m256i_i32[1] > 2u )
              return (unsigned int)-1073741637;
            if ( v10->m256i_i32[1] == 2 && (unsigned int)v11 < 0x20 )
              return (unsigned int)-1073741789;
            if ( !a5 )
              return (unsigned int)-1073741811;
            v101 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
            v35 = v101;
            if ( !v101 )
              return (unsigned int)-1073741670;
            if ( v10->m256i_i32[1] == 2 )
              VmCppcConfig = PpmPerfGetVmCppcConfig(
                               v10->m256i_u32[3],
                               v10->m256i_u32[2],
                               v10->m256i_u32[4],
                               v10->m256i_i32[5],
                               v10->m256i_i32[6],
                               v10->m256i_i8[28],
                               v101);
            else
              VmCppcConfig = PpmPerfGetVmPerfConfig(v10->m256i_i32[2], v101, v102);
            PagesFromHiberFile = VmCppcConfig;
            v90 = VmCppcConfig < 0;
LABEL_298:
            if ( !v90 )
            {
              *a7 = v35;
LABEL_87:
              *a8 = 8;
              goto LABEL_88;
            }
            goto LABEL_93;
          }
          if ( !a5 )
            return (unsigned int)-1073741811;
          v104 = ExAllocatePool2(0x100uLL);
          v107 = (void *)v104;
          if ( !v104 )
            return (unsigned int)-1073741670;
          PpmPerfGetVmPerfControlSupport(v104, v105, v106);
          *a7 = v107;
          *a8 = a6 < 0x14 ? 1 : 20;
LABEL_71:
          *a9 = 1;
          return 0;
        }
        if ( !a5 )
          return (unsigned int)-1073741811;
        v50 = 2304;
        v108 = ExAllocatePool2(0x100uLL);
        v31 = (_DWORD *)v108;
        if ( !v108 )
          return (unsigned int)-1073741670;
        FrequencyBandStats = PpmPerfGetFrequencyBandStats(v108, v109, v110);
        goto LABEL_390;
      }
      if ( v9 != 73 )
      {
        if ( v9 == 74 || v9 == 75 )
        {
          if ( (_DWORD)v11 != 12 )
            return (unsigned int)-1073741789;
          if ( !a5 )
            return (unsigned int)-1073741811;
          if ( v9 == 74 )
            v50 = 296;
          else
            v50 = 592;
          v112 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
          v35 = v112;
          if ( !v112 )
            return (unsigned int)-1073741670;
          PagesFromHiberFile = PpmIdleGetPackageIdleIntervalStats(v9, v10->m256i_u16[4], v112);
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
          *a8 = v50;
          goto LABEL_88;
        }
        goto LABEL_395;
      }
      if ( (unsigned int)v11 < 0xC )
        return (unsigned int)-1073741789;
      if ( a5 )
        return (unsigned int)-1073741811;
      PopUserPresenceHostStateChange(v10->m256i_i32[2]);
      return 0;
    }
    if ( v9 > 88 )
    {
      if ( v9 > 94 )
      {
        if ( v9 == 95 || v9 == 96 )
        {
          if ( (_DWORD)v11 == 12 && !a5 && !v10->m256i_i32[1] )
          {
            v152 = v10->m256i_u32[2];
            if ( v152 < 0x20 )
              return (unsigned int)PopNotifyWin32kRequestStatus(v152, v9 == 95);
          }
          return (unsigned int)-1073741811;
        }
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
        if ( v9 != 98 || !(unsigned int)Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline() )
          return (unsigned int)-1073741811;
        v154 = 0;
        PagesFromHiberFile = SeIsAppContainerOrIdentifyLevelContext(0LL, &v154);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        if ( v154 )
          return (unsigned int)-1073741790;
        if ( (_DWORD)v158 )
          return (unsigned int)-1073741811;
        if ( (_DWORD)v11 == 48 && a5 && a6 == 16 )
        {
          SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          PopSessionConnectionChangeV2(SessionId, (__int64)&v10->m256i_i64[1], (__int64)&v10->m256i_i64[2], (__int64)a5);
          v150 = (unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          if ( qword_140E67508 )
          {
            LOBYTE(v151) = v10->m256i_i8[8];
            guard_dispatch_icall_no_overrides(v150, 0LL, v151, v10->m256i_u32[3]);
          }
          return 0;
        }
        else
        {
          return (unsigned int)-1073741306;
        }
      }
      if ( v9 == 94 )
      {
        if ( (unsigned int)v11 < 0xC )
          return (unsigned int)-1073741789;
        if ( !a5 )
          return (unsigned int)-1073741811;
        v147 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
        v35 = v147;
        if ( !v147 )
          return (unsigned int)-1073741670;
        VmPerfPriorityConfig = PpmPerfGetVmPerfPriorityConfig(v10->m256i_u32[2], v147, v148);
LABEL_297:
        PagesFromHiberFile = VmPerfPriorityConfig;
        v90 = VmPerfPriorityConfig < 0;
        goto LABEL_298;
      }
      v137 = v9 - 89;
      if ( !v137 )
      {
        if ( !a5 || a6 != 20 )
          return (unsigned int)-1073741789;
        PopAcquirePolicyLock(a1, a2);
        PagesFromHiberFile = 0;
        if ( byte_140F0BB53 )
        {
          v146 = ExAllocatePool2(0x100uLL);
          if ( v146 )
          {
            *(_OWORD *)v146 = PopAcpiTimeAndAlarmCapabilities;
            v47 = (unsigned int)dword_140F08310;
            *(_DWORD *)(v146 + 16) = dword_140F08310;
            *a7 = (PVOID)v146;
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
LABEL_110:
        PopReleasePolicyLock(v47, v46, v48, v49, v153);
        return (unsigned int)PagesFromHiberFile;
      }
      v138 = v137 - 1;
      if ( !v138 )
      {
        if ( v10 && (unsigned int)v11 >= 0x14 && (!a5 || !a6) )
          return (unsigned int)PopSuspendResumeInvocation((__int64)v10, a2, a3, 0LL);
        return (unsigned int)-1073741811;
      }
      v139 = v138 - 1;
      if ( v139 )
      {
        v140 = v139 - 1;
        if ( !v140 )
          return (unsigned int)PopHandleProvIdentifierRequest(
                                 (__int64)v10,
                                 v11,
                                 (__int64)a5,
                                 a6,
                                 (unsigned __int16 **)a7,
                                 a8);
        if ( v140 != 1 )
          return (unsigned int)-1073741811;
        if ( (_DWORD)a2 )
          return (unsigned int)-1073741637;
        if ( !a5 )
          return (unsigned int)-1073741811;
        v141 = ExAllocatePool2(0x100uLL);
        v144 = (void *)v141;
        if ( !v141 )
          return (unsigned int)-1073741670;
        PpmPerfGetVmPerfPrioritySupport(v141, v142, v143);
        *a7 = v144;
        *a8 = 8;
        goto LABEL_71;
      }
      if ( !a5 || a6 < 0x24 )
        return (unsigned int)-1073741789;
      v145 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v31 = v145;
      if ( !v145 )
        return (unsigned int)-1073741670;
      PagesFromHiberFile = PopGetEnergyEstimationInfo(v145);
      if ( PagesFromHiberFile >= 0 )
      {
        *a7 = v31;
        PagesFromHiberFile = 0;
        *a8 = 36;
        *a9 = 1;
        return (unsigned int)PagesFromHiberFile;
      }
    }
    else
    {
      if ( v9 == 88 )
        return (unsigned int)PopManageTransitionRecordRequest(a1, (__int64)v10, (unsigned int)v11);
      if ( v9 <= 83 )
      {
        if ( v9 == 83 )
        {
          if ( (_DWORD)v11 == 16 && v10 && !a6 && !a5 )
            return (unsigned int)PopAdaptiveSetSystemInitiatedRebootTargetStateOverride((__int64)v10);
          return (unsigned int)-1073741811;
        }
        v113 = v9 - 78;
        if ( !v113 )
        {
          if ( !a5 )
            return (unsigned int)-1073741811;
          v125 = (_DWORD *)ExAllocatePool2(0x100uLL);
          if ( !v125 )
            return (unsigned int)-1073741670;
          for ( i = (__int64 *)PpmPerfDomainHead; ; i = (__int64 *)*i )
          {
            if ( i == &PpmPerfDomainHead )
            {
              v130 = 0;
              goto LABEL_451;
            }
            v129 = i[53];
            if ( v129 )
              break;
          }
          v130 = guard_dispatch_icall_no_overrides(v129, &PpmPerfDomainHead, v126, v127);
LABEL_451:
          *v125 = v130;
          *a7 = v125;
          *a8 = 4;
          goto LABEL_71;
        }
        v114 = v113 - 1;
        if ( !v114 )
        {
          if ( !v10 || (_DWORD)v11 != 12 )
            return (unsigned int)-1073741811;
          v121 = v10->m256i_u32[2];
          v157 = 0;
          PagesFromHiberFile = PpmPerfQueryProcMeasurementValues(v121, (__int64)&v157, 0LL, 0LL);
          if ( PagesFromHiberFile < 0 )
            return (unsigned int)PagesFromHiberFile;
          v122 = 24 * v157 + 8;
          if ( a6 != 4 )
          {
            if ( a6 < v122 )
              return (unsigned int)-1073741789;
            v124 = (_DWORD *)ExAllocatePool2(0x40uLL);
            if ( v124 )
            {
              *a8 = v122;
              *a9 = 1;
              *a7 = v124;
              *v124 = v157;
              return (unsigned int)PpmPerfQueryProcMeasurementValues(
                                     v121,
                                     (__int64)&v157,
                                     (__int64)(v124 + 2),
                                     (unsigned int)(24 * v157));
            }
            return (unsigned int)-1073741670;
          }
          v123 = (_DWORD *)ExAllocatePool2(0x100uLL);
          if ( !v123 )
            return (unsigned int)-1073741670;
          *v123 = v157;
          *a7 = v123;
          *a8 = 4;
LABEL_88:
          *a9 = 1;
          return (unsigned int)PagesFromHiberFile;
        }
        v115 = v114 - 1;
        if ( !v115 )
          goto LABEL_430;
        v116 = v115 - 1;
        if ( v116 )
        {
          if ( v116 != 1 || (_DWORD)v11 != 12 || !v10 || a6 || a5 )
            return (unsigned int)-1073741811;
          v158 = 0LL;
          LODWORD(v158) = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          v117 = v10->m256i_i8[8];
          BYTE4(v158) = 1;
          Process = KeGetCurrentThread()->ApcState.Process;
          BYTE5(v158) = v117;
          v119 = PsGetSessionIdEx((__int64)Process);
          PopSessionWinlogonNotification(v119, &v158);
        }
        else
        {
          if ( (_DWORD)v11 != 40 || !v10 || a6 != 16 || !a5 )
            return (unsigned int)-1073741811;
          v120 = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          PopAdaptiveGetSessionState(v120, (__int64)&v10->m256i_i64[1], (__int64)a5);
        }
        return 0;
      }
      v131 = v9 - 84;
      if ( !v131 )
      {
        if ( !a5 )
          return (unsigned int)-1073741811;
        v50 = 160;
        v136 = ExAllocatePool2(0x100uLL);
        v31 = (_DWORD *)v136;
        if ( !v136 )
          return (unsigned int)-1073741670;
        FrequencyBandStats = PopFanReadFanNoiseInfo(84, v136, 160);
LABEL_390:
        PagesFromHiberFile = FrequencyBandStats;
        if ( FrequencyBandStats >= 0 )
        {
LABEL_115:
          *a7 = v31;
          goto LABEL_116;
        }
        goto LABEL_84;
      }
      v132 = v131 - 1;
      if ( v132 )
      {
        v133 = v132 - 1;
        if ( v133 )
        {
          if ( v133 == 1 && v10 && (_DWORD)v11 == 24 && !a5 )
            return (unsigned int)PopShutdownListenerRemoveCallback(v10);
          return (unsigned int)-1073741811;
        }
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v134 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( v134 )
        {
          *v134 = ExBootAppErrorDiagCode;
          v134[1] = ExBootAppFailureStatus;
          *a7 = v134;
          *a8 = 8;
          goto LABEL_192;
        }
        return (unsigned int)-1073741670;
      }
      if ( !a5 )
        return (unsigned int)-1073741811;
      v135 = ExAllocatePool2(0x100uLL);
      v31 = (_DWORD *)v135;
      if ( !v135 )
        return (unsigned int)-1073741670;
      PagesFromHiberFile = PopFanReadFanNoiseInfo(85, v135, 88);
      if ( PagesFromHiberFile >= 0 )
      {
        *a7 = v31;
        *a8 = 88;
        goto LABEL_88;
      }
    }
LABEL_84:
    v32 = 544040269;
    v33 = (ULONGLONG *)v31;
LABEL_85:
    ExFreePoolWithTag(v33, v32);
    return (unsigned int)PagesFromHiberFile;
  }
  if ( v9 == 54 )
  {
LABEL_308:
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
        v55 = (_OWORD *)ExAllocatePool2(0x100uLL);
        if ( !v55 )
          return (unsigned int)-1073741670;
        *v55 = PopBsdPowerTransitionExtensionAtBoot;
        v56 = xmmword_140E673F0;
LABEL_124:
        v55[1] = v56;
        *a7 = v55;
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
                v72 = v10->m256i_i8[8];
                PopAcquireRwLockExclusive(&PopEsLock);
                PopEsEnabledOnHost = v72;
                PopReleaseRwLock((signed __int64 *)&PopEsLock);
                PopEsQueueStateEvaluation(0);
                return 0;
              }
            }
          }
          goto LABEL_237;
        }
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v73 = (int *)ExAllocatePool2(0x100uLL);
        if ( !v73 )
          return (unsigned int)-1073741670;
        v74 = dword_140F0B104;
LABEL_217:
        *v73 = v74;
        *a7 = v73;
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
          v28 = &v154;
          v154 = v10->m256i_i8[8];
          v29 = &WNF_PO_WAKE_ON_VOICE_STATE;
          return (unsigned int)ZwUpdateWnfStateData((__int64)v29, (__int64)v28);
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
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        v76 = v10->m256i_i64[1];
        if ( !v76
          || (v77 = *(_QWORD *)(*(_QWORD *)(v76 + 312) + 40LL)) == 0
          || (v78 = *(_QWORD *)(v77 + 80)) == 0
          || (v66 = *(_QWORD *)(v78 + 64) == 0LL, v79 = 1, v66) )
        {
          v79 = 0;
        }
LABEL_229:
        *Pool2 = v79;
        *a7 = Pool2;
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
      v83 = v9 - 43;
      if ( v83 )
      {
        v84 = v83 - 1;
        if ( !v84 )
        {
          if ( (unsigned int)v11 < 0x90 )
            return (unsigned int)-1073741789;
          if ( a5 )
            return (unsigned int)-1073741811;
          PagesFromHiberFile = RtlCheckTokenMembership(0LL, (void *)PopTimeBrokerServiceSid);
          if ( PagesFromHiberFile < 0 )
            return (unsigned int)PagesFromHiberFile;
          return (unsigned int)-1073741790;
        }
        v85 = v84 - 1;
        if ( !v85 )
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
        v86 = v85 - 1;
        if ( !v86 )
        {
          if ( (_DWORD)v11 != 32 || a5 )
            return (unsigned int)-1073741811;
          PopPowerRequestNotifyUserSessionAttributed(
            v10->m256i_i32[6],
            (PVOID)v10->m256i_i64[1],
            (void *)v10->m256i_i64[2]);
          return 0;
        }
        if ( v86 != 1 )
          return (unsigned int)-1073741811;
        if ( (unsigned int)v11 < 0x14 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        if ( !v10->m256i_i32[1] )
          return (unsigned int)PpmInternalProcessorIdleVeto(v10->m256i_u32[2], v10->m256i_u32[3], v10->m256i_i8[16]);
        return (unsigned int)-1073741735;
      }
      if ( (((_DWORD)v11 - 8) & 0xFFFFFFFB) != 0 )
        return (unsigned int)-1073741811;
      if ( !a5 )
        return (unsigned int)-1073741789;
      v35 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
      if ( !v35 )
        return (unsigned int)-1073741670;
      v88 = (struct _PROCESSOR_NUMBER *)&v10->m256i_u64[1];
      if ( (_DWORD)v11 != 12 )
        v88 = 0LL;
      VmPerfPriorityConfig = PpmPerfGetBrandedFrequency(v88, v35, v87);
      goto LABEL_297;
    }
    switch ( v9 )
    {
      case '1':
        if ( !a5 )
          return (unsigned int)-1073741789;
        v26 = (char *)ExAllocatePool2(0x100uLL);
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
        Pool2 = (char *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        v79 = PopAutoChkCausedReboot;
        goto LABEL_229;
      case '3':
        if ( (_DWORD)a2 )
        {
          if ( (_DWORD)a2 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0x18 )
            return (unsigned int)-1073741789;
          v91 = v10->m256i_i64[2];
          v92 = v10->m256i_i64[1];
        }
        else
        {
          if ( (unsigned int)v11 < 0x10 )
            return (unsigned int)-1073741789;
          v91 = v10->m256i_i64[1];
          v92 = v91;
        }
        PopWakeAlarmTimeOverrideAc = v92;
        PopWakeAlarmTimeOverrideDc = v91;
        return 0;
    }
    if ( v9 != 53 )
      return (unsigned int)-1073741811;
    goto LABEL_308;
  }
  if ( v9 == 31 )
  {
LABEL_237:
    if ( (_DWORD)v11 != 24 )
      return (unsigned int)-1073741811;
    if ( a5 )
    {
      v80 = v10->m256i_u32[2];
      if ( !v80 )
        return (unsigned int)-1073741811;
      if ( 4 * (unsigned __int64)v80 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v81 = 4 * v80;
      v35 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
      if ( !v35 )
        return (unsigned int)-1073741670;
    }
    else
    {
      v35 = v165;
      v81 = 0;
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
        v82 = PopBootStatGet((__int64)v10, (__int64)v35);
        break;
      case 32:
        if ( !v10->m256i_i32[2] )
          goto LABEL_247;
        v82 = PopBootStatSet((__int64)v10, (__int64)v35);
        break;
      case 34:
        if ( !v10->m256i_i32[2] )
          goto LABEL_247;
        v82 = PopBootStatCheckIntegrity((__int64)v10);
        break;
      case 35:
        v82 = PopBootStatRestoreDefaults(a1);
        break;
      default:
        v82 = PopBootStatUnlock();
        break;
    }
    PagesFromHiberFile = v82;
    if ( v82 < 0 )
      goto LABEL_261;
    if ( v35 )
    {
      *a7 = v35;
      *a8 = v81;
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
              v26 = (char *)ExAllocatePool2(0x100uLL);
              if ( !v26 )
                return (unsigned int)-1073741670;
              if ( !SSHSupportIsPlatformAoAc()
                || (v66 = RtlIsMultiSessionSku() == 0, PowerButtonBugcheckEnabled = 1, v66) )
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
          v28 = &PopVideoInitialized;
          v29 = &WNF_PO_VIDEO_INITIALIALIZED;
          return (unsigned int)ZwUpdateWnfStateData((__int64)v29, (__int64)v28);
        }
        if ( !a5 )
          return (unsigned int)-1073741789;
        v30 = ExAllocatePool2(0x100uLL);
        v31 = (_DWORD *)v30;
        if ( !v30 )
          return (unsigned int)-1073741670;
        PagesFromHiberFile = PopS0LowPowerIdleInfo(v30);
        if ( PagesFromHiberFile < 0 )
          goto LABEL_84;
        *a7 = v31;
        goto LABEL_87;
      }
      if ( (unsigned int)v11 < 0x20 || !a5 )
        return (unsigned int)-1073741789;
      v34 = (__int64 (__fastcall **)(unsigned int *))ExAllocatePool2(0x100uLL);
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
      return (unsigned int)PopNetUpdateStandbyRequest();
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
            PopUpdateConsoleDisplayState((_BYTE)v40 != 0, v43, v44, v45);
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
          v50 = 1024;
          v51 = ExAllocatePool2(0x100uLL);
          v31 = (_DWORD *)v51;
          if ( !v51 )
            return (unsigned int)-1073741670;
          PagesFromHiberFile = PopQueryBootSessionStandbyActivationInfo(v51, v52, v53, v54);
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
    v55 = (_OWORD *)ExAllocatePool2(0x100uLL);
    if ( !v55 )
      return (unsigned int)-1073741670;
    *v55 = PopBsdPowerTransitionAtBoot;
    v56 = xmmword_140E67350;
    goto LABEL_124;
  }
  if ( v9 > 26 )
  {
    v67 = v9 - 27;
    if ( !v67 )
    {
      if ( (unsigned int)v11 < 0x10 )
        return (unsigned int)-1073741789;
      if ( a5 )
        return (unsigned int)-1073741811;
      PopTransitionCheckpoint(v10->m256i_i32[2], v10->m256i_i32[3]);
      return 0;
    }
    v68 = v67 - 1;
    if ( !v68 )
    {
      if ( (_DWORD)v11 != 12 )
        return (unsigned int)-1073741811;
      LODWORD(v158) = v10->m256i_i32[2];
      PopSetPowerSettingValueAcDc((__int64)&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4u, (__int64)&v158);
      return 0;
    }
    v69 = v68 - 1;
    if ( !v69 )
    {
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v71 = (_OWORD *)ExAllocatePool2(0x100uLL);
      if ( !v71 )
        return (unsigned int)-1073741670;
      *v71 = PopFirmwareResetReason;
      v71[1] = xmmword_140E67278;
      v71[2] = xmmword_140E67288;
      *a7 = v71;
      *a8 = 48;
      goto LABEL_125;
    }
    if ( v69 != 1 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v70 = (_BYTE *)ExAllocatePool2(0x100uLL);
    if ( !v70 )
      return (unsigned int)-1073741670;
    *v70 = PpmPerfQosSupportedAndConfigured;
    v70[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
    v70[2] = PpmPerfQosGroupPolicyDisable != 0;
    *a7 = v70;
    *a8 = 3;
LABEL_192:
    *a9 = 1;
    return 0;
  }
  if ( v9 != 26 )
  {
    v57 = v9 - 21;
    if ( v57 )
    {
      v58 = v57 - 1;
      if ( v58 )
      {
        v59 = v58 - 1;
        if ( !v59 )
        {
          if ( (_DWORD)v11 != 12 )
            return (unsigned int)-1073741811;
          LOBYTE(a1) = v10->m256i_i8[8];
          PopUpdateExternalDisplayState(a1, a2);
          return 0;
        }
        v60 = v59 - 1;
        if ( v60 )
        {
          if ( v60 != 1 )
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
        v61 = v10->m256i_i32[3];
        if ( PopVideoHighPrecisionBrightnessEnabled )
        {
          if ( v61 == -1 )
            return (unsigned int)-1073741637;
        }
        else if ( v61 != -1 )
        {
          PopVideoHighPrecisionBrightnessEnabled = 1;
          ZwUpdateWnfStateData(
            (__int64)&WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
            (__int64)&PopVideoHighPrecisionBrightnessEnabled);
          PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF);
        }
        v166[0] = v10->m256i_i32[2];
        v166[1] = v10->m256i_i32[3];
        v166[2] = v10->m256i_i32[4];
        v166[3] = v10->m256i_i32[5];
        v166[4] = v10->m256i_i32[6];
        v166[5] = v10->m256i_i32[7];
        v166[6] = v10[1].m256i_i32[0];
        v166[7] = v10[1].m256i_i32[1];
        PopBroadcastSessionInfo(4, 32, (__int64)v166);
        return 0;
      }
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v62 = (_OWORD *)ExAllocatePool2(0x100uLL);
      if ( !v62 )
        return (unsigned int)-1073741670;
      *v62 = PopBsdPhysicalPowerButtonInfoAtBoot;
      v62[1] = xmmword_140E673B0;
      v62[2] = xmmword_140E673C0;
      v62[3] = xmmword_140E673D0;
      *a7 = v62;
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
    v63 = 0LL;
    if ( a5 )
    {
      v63 = (char **)ExAllocatePool2(0x100uLL);
      if ( !v63 )
        return (unsigned int)-1073741670;
    }
    v64 = PopSetWatchdog((char *)v10->m256i_i64[1], &v10->m256i_u32[4], v10[2].m256i_i8[24]);
    if ( !a5 )
      return 0;
    *v63 = v64;
    *a7 = v63;
LABEL_169:
    *a8 = 8;
    goto LABEL_125;
  }
  if ( (unsigned int)v11 < 0xC )
    return (unsigned int)-1073741789;
  if ( a5 )
    return (unsigned int)-1073741811;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  v65 = PpmPerfQosDisableRefcount;
  if ( v10->m256i_i8[8] )
  {
    if ( PpmPerfQosDisableRefcount == -1 )
    {
      PagesFromHiberFile = -1073741675;
    }
    else
    {
      v65 = PpmPerfQosDisableRefcount + 1;
      PagesFromHiberFile = 0;
      ++PpmPerfQosDisableRefcount;
    }
    v66 = v65 == 1;
  }
  else
  {
    if ( PpmPerfQosDisableRefcount )
    {
      PagesFromHiberFile = 0;
      v65 = --PpmPerfQosDisableRefcount;
    }
    else
    {
      PagesFromHiberFile = -1073741637;
    }
    v66 = v65 == 0;
  }
  if ( v66 )
    PpmPerfUpdateDomainPolicy(0LL);
  else
    PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)PagesFromHiberFile;
}
