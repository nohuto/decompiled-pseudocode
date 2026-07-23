/*
 * XREFs of PopPdcRegister @ 0x140ABA068
 * Callers:
 *     PopPdcInvocation @ 0x140ABA018 (PopPdcInvocation.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PopIsPlatformAoAcCapableInitialized @ 0x14048659C (PopIsPlatformAoAcCapableInitialized.c)
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x14058DAEC (Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPdcRegister(__int64 a1, __int64 (__fastcall **a2)(int a1, __int64 a2, unsigned int a3))
{
  unsigned int v2; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char IsPlatformAoAc; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // [rsp+20h] [rbp-8h]

  v2 = 0;
  if ( a2 )
  {
    PopAcquirePolicyLock(a1, a2);
    PopModernStandbyTransitionInfo = 0LL;
    *(_OWORD *)&PoPdcCallbacks = *(_OWORD *)(a1 + 8);
    *((_OWORD *)&PoPdcCallbacks + 1) = *(_OWORD *)(a1 + 24);
    *((_OWORD *)&PoPdcCallbacks + 2) = *(_OWORD *)(a1 + 40);
    *((_OWORD *)&PoPdcCallbacks + 3) = *(_OWORD *)(a1 + 56);
    *((_OWORD *)&PoPdcCallbacks + 4) = *(_OWORD *)(a1 + 72);
    *((_OWORD *)&PoPdcCallbacks + 5) = *(_OWORD *)(a1 + 88);
    *((_OWORD *)&PoPdcCallbacks + 6) = *(_OWORD *)(a1 + 104);
    *((_OWORD *)&PoPdcCallbacks + 7) = *(_OWORD *)(a1 + 120);
    *((_OWORD *)&PoPdcCallbacks + 8) = *(_OWORD *)(a1 + 136);
    *((_OWORD *)&PoPdcCallbacks + 9) = *(_OWORD *)(a1 + 152);
    *((_OWORD *)&PoPdcCallbacks + 10) = *(_OWORD *)(a1 + 168);
    *((_OWORD *)&PoPdcCallbacks + 11) = *(_OWORD *)(a1 + 184);
    *((_OWORD *)&PoPdcCallbacks + 12) = *(_OWORD *)(a1 + 200);
    *(&PoPdcCallbacks + 26) = *(_QWORD *)(a1 + 216);
    *a2 = PdcPoResiliencyClient;
    a2[1] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoLowPower;
    a2[2] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoSetPowerAction;
    a2[3] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoReportButton;
    a2[4] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoReportLidState;
    a2[5] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoRecordButton;
    a2[6] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoVerifyActionPolicy;
    a2[7] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoVerifyPowerState;
    a2[8] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoBlockSessionSwitchEx;
    a2[9] = (__int64 (__fastcall *)(int, __int64, unsigned int))PopControlMonitor;
    a2[10] = (__int64 (__fastcall *)(int, __int64, unsigned int))PopNotifyCsStateExited;
    a2[11] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoCurrentPdcPhase;
    a2[12] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoPpmRegisterProfiles;
    a2[13] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoPpmApplyProfile;
    a2[14] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoPpmResetProfile;
    a2[15] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoNetworkResiliency;
    a2[16] = (__int64 (__fastcall *)(int, __int64, unsigned int))PpmQueryDripsResidency;
    a2[17] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoSleepStudyHelperSetPhaseActive;
    if ( (unsigned int)Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledDeviceUsageNoInline() )
    {
      a2[19] = (__int64 (__fastcall *)(int, __int64, unsigned int))KeQueryCurrentWaitInformationThread;
      a2[20] = (__int64 (__fastcall *)(int, __int64, unsigned int))PsEnumProcessThreads;
    }
    a2[18] = (__int64 (__fastcall *)(int, __int64, unsigned int))PdcPoLidReliabilityUpdateCallback;
    if ( PopIsPlatformAoAcCapableInitialized() )
    {
      IsPlatformAoAc = SSHSupportIsPlatformAoAc();
      PopReleasePolicyLock(v11, v10, v12, v13, v17);
      LOBYTE(v14) = IsPlatformAoAc;
      guard_dispatch_icall_no_overrides(v14, v15);
    }
    else
    {
      PopReleasePolicyLock(v6, v5, v7, v8, v17);
    }
    ExQueueWorkItem(&PopDelayedPdcRegistrationWorkItem, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
