/*
 * XREFs of PopIssueActionRequest @ 0x140A84124
 * Callers:
 *     PopPolicyWorkerAction @ 0x140A83F10 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140AA2460 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PopSetSystemState @ 0x1403E6898 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x1404648C4 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x140464930 (PpmBeginHighPerfRequest.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     PopPrepareSleep @ 0x1404B7A3C (PopPrepareSleep.c)
 *     PopSetPowerActionWatchdogState @ 0x1404B7FCC (PopSetPowerActionWatchdogState.c)
 *     RtlBootStatusDisableFlushing @ 0x1404F8358 (RtlBootStatusDisableFlushing.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopResumeApps @ 0x140751DDC (PopResumeApps.c)
 *     PopSetSystemAwayMode @ 0x1407520E0 (PopSetSystemAwayMode.c)
 *     PopSuspendApps @ 0x1407521E8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14075223C (PopSuspendServices.c)
 *     EtwShutdown @ 0x1407A6910 (EtwShutdown.c)
 *     TtmNotifyLowPowerStateExited @ 0x14099D528 (TtmNotifyLowPowerStateExited.c)
 *     PopScreenOff @ 0x14099E658 (PopScreenOff.c)
 *     PopResumeServices @ 0x1409A0338 (PopResumeServices.c)
 *     PopDispatchStateCallout @ 0x1409A03B4 (PopDispatchStateCallout.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 *     PopDiagTraceHiberStats @ 0x140A533BC (PopDiagTraceHiberStats.c)
 *     PopDiagTracePerfTrackData @ 0x140A537D4 (PopDiagTracePerfTrackData.c)
 *     PopDiagTracePowerTransitionTime @ 0x140A7E06C (PopDiagTracePowerTransitionTime.c)
 *     PopReadSystemAwayModePolicy @ 0x140A84638 (PopReadSystemAwayModePolicy.c)
 *     PopSetSleepMarker @ 0x140A8D7A8 (PopSetSleepMarker.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A9287C (PopPotsLogPowerTransitionReliability.c)
 *     PopDiagTracePowerTransitionStart @ 0x140A9B94C (PopDiagTracePowerTransitionStart.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140A9D7B8 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopDispatchSuperfetchNotification @ 0x140AA72C8 (PopDispatchSuperfetchNotification.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140AA80A0 (PopEnableSystemSleepCheckpoint.c)
 *     PoBlockConsoleSwitch @ 0x140AAF468 (PoBlockConsoleSwitch.c)
 *     PopPotsGetActionEntryReason @ 0x140AAF5F0 (PopPotsGetActionEntryReason.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140AB4674 (PopDiagTracePowerTransitionEnd.c)
 *     PopTransitionSystemPowerState @ 0x140B4D094 (PopTransitionSystemPowerState.c)
 *     PopCheckpointSystemSleep @ 0x140B6889C (PopCheckpointSystemSleep.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B6BAC4 (PoDelistPowerStateTransitionBlocker.c)
 *     PfPowerActionNotify @ 0x140B6CE28 (PfPowerActionNotify.c)
 *     PopReleaseAwaymodeLock @ 0x140B6DAC8 (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x140B6DDF8 (PopAcquireAwaymodeLock.c)
 *     PopPushPowerStateTransitionRecord @ 0x140B6EA88 (PopPushPowerStateTransitionRecord.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, POWER_ACTION a2, SYSTEM_POWER_STATE a3, int a4)
{
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // si
  bool v24; // zf
  char v25; // si
  int v26; // r14d
  char v27; // r12
  __int64 v28; // rcx
  char v29; // r15
  POWER_ACTION v30; // ebx
  char v31; // r12
  int v32; // esi
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // bl
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  char IsEnabled; // al
  __int64 v43; // rdx
  __int64 v44; // rcx
  char v45; // bl
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  signed __int32 v64[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v65; // [rsp+20h] [rbp-50h]
  int v66; // [rsp+2Ch] [rbp-44h]
  __int128 v67; // [rsp+30h] [rbp-40h] BYREF
  __int128 v68; // [rsp+40h] [rbp-30h]
  int v69; // [rsp+50h] [rbp-20h]
  int v70; // [rsp+54h] [rbp-1Ch]
  int v71; // [rsp+58h] [rbp-18h] BYREF
  unsigned int ActionEntryReason; // [rsp+60h] [rbp-10h]

  v66 = -1073741823;
  v5 = 0;
  v69 = 0;
  v67 = 0LL;
  HIDWORD(v65) = 0;
  v68 = 0LL;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  if ( (byte_140F0B390 || byte_140F0B391)
    && a2 == PowerActionSleep
    && a3 < PowerSystemHibernate
    && (dword_140F0B994 & 0xFFFFFFFA) == 0
    && dword_140F0B994 != 1 )
  {
    if ( !dword_140F0B398 )
    {
      if ( byte_140F0B391 )
      {
        if ( (PopSimulate & 0x4000000) != 0 )
          PopSetSystemState(4LL, 7LL);
      }
      else
      {
        PopReleasePolicyLock(v10, v9, v11, v12, v65);
        v5 = PopSetSystemAwayMode(1);
        PopAcquirePolicyLock(v14, v13);
      }
    }
    PopReleaseAwaymodeLock();
    return v5;
  }
  PopReleaseAwaymodeLock();
  if ( dword_140F0B994 )
  {
    if ( dword_140F0B994 == 6 || dword_140F0B994 == 7 || dword_140F0B994 == 11 )
      v16 = 21;
    else
      v16 = 20;
  }
  else
  {
    v16 = 1;
  }
  ActionEntryReason = PopPotsGetActionEntryReason((unsigned int)dword_140F0B994, (unsigned int)dword_140F0B998);
  if ( a2 == PowerActionDisplayOff )
  {
    if ( !PopConsoleDisplayState )
      return 3221266435LL;
    PopReleasePolicyLock(v18, v17, v19, v20, v65);
    PopScreenOff(v16);
    PopAcquirePolicyLock(v22, v21);
    return 0LL;
  }
  if ( (unsigned int)(a2 - 4) <= 2 )
  {
    v23 = 1;
    LOBYTE(v65) = 1;
  }
  else
  {
    LOBYTE(v65) = 0;
    v23 = 0;
    PopSetPowerActionWatchdogState(1);
    v66 = PopPushPowerStateTransitionRecord(KeGetCurrentThread()->ApcState.Process, KeGetCurrentThread());
  }
  if ( !PsWin32CalloutsEstablished || (v24 = v23 == 0, v25 = 0, !v24) )
    v25 = 1;
  v26 = a4 & 0xFFFFFFFE;
  if ( a4 >= 0 )
    v26 = a4 | 1;
  if ( v25 )
    LOBYTE(PopAction) = PopAction & 0xFD;
  v27 = byte_140F0BA40;
  PopReleasePolicyLock(v18, v17, v19, v20, v65);
  PpmBeginHighPerfRequest();
  if ( a1 || v25 )
  {
    v29 = 0;
    PopSleepStats = 0;
    if ( a1 )
    {
      if ( !(_BYTE)v65 )
        goto LABEL_43;
      goto LABEL_44;
    }
  }
  else
  {
    if ( !v27 )
    {
      LOBYTE(v28) = 1;
      PopPowerAggregatorNotifySuspendResume(v28);
    }
    v29 = 1;
    PopSleepStats = 0;
  }
  if ( !(_BYTE)v65 )
  {
    memset_0(&PopSleepStats, 0, 0x368uLL);
    PopDiagTracePowerTransitionStart((unsigned int)dword_140F0B994, (unsigned int)dword_140F0B998);
    qword_140F0BF48 = KeQueryPerformanceCounter(0LL).QuadPart;
    PopEnableSystemSleepCheckpoint();
    PopCheckpointSystemSleep(1LL);
LABEL_43:
    PopSetSleepMarker(1LL);
  }
LABEL_44:
  if ( v25 )
  {
    v30 = a2;
    v31 = a1;
    v32 = PopTransitionSystemPowerState((unsigned int)a2, (unsigned int)a3, (unsigned int)v26);
  }
  else
  {
    LOBYTE(v68) = a1;
    *(_QWORD *)((char *)&v68 + 4) = __PAIR64__(a3, a2);
    HIDWORD(v68) = v26;
    v70 = v16;
    v69 = 1;
    v32 = PopDispatchStateCallout(&v67, 0LL);
    v33 = a1;
    if ( !a1 )
    {
      if ( v32 >= 0 && !v27 )
        PopPrepareSleep((__int64)&v67);
      HIDWORD(v65) = PoBlockConsoleSwitch(&v67);
      v33 = 0;
    }
    if ( v32 >= 0 && !v33 )
    {
      v34 = (v26 >> 31) & 2 | 4u;
      if ( (v26 & 8) == 0 )
        v34 = (v26 >> 31) & 2;
      PfPowerActionNotify(0LL, v34);
      PopNoMoreInput = 1;
      _InterlockedOr(v64, 0);
      if ( !v27 )
      {
        PopSuspendApps((__int64)&v67);
        PopSuspendServices((__int64)&v67);
      }
      if ( (v26 & 8) != 0 )
        EtwShutdown(1);
      PopDispatchSuperfetchNotification((unsigned int)v26, (unsigned int)a3);
      v32 = PopTransitionSystemPowerState((unsigned int)a2, (unsigned int)a3, (unsigned int)v26);
      PopAcquirePolicyLock(v36, v35);
      v37 = byte_140F0BA40;
      PopReleasePolicyLock(v39, v38, v40, v41, v65);
      PopNoMoreInput = 0;
      _InterlockedOr(v64, 0);
      if ( v37 )
      {
        v29 = 0;
      }
      else
      {
        PopResumeServices((__int64)&v67);
        PopPowerAggregatorNotifySuspendResume(0LL);
        v29 = 0;
        PopResumeApps((__int64)&v67);
      }
      PfPowerActionNotify(7LL, 0LL);
    }
    v69 = 8;
    PopDispatchStateCallout(&v67, 0LL);
    IsEnabled = TtmIsEnabled();
    v31 = a1;
    if ( !a1 )
    {
      if ( IsEnabled )
      {
        PopAcquirePolicyLock(v44, v43);
        v45 = PopTtmIsSxCompleteNotificationPending;
        PopTtmIsSxTransitionInProgress = 0;
        PopReleasePolicyLock(v47, v46, v48, v49, v65);
        v24 = v45 == 0;
        v50 = HIDWORD(v65);
        if ( !v24 )
        {
          TtmNotifyLowPowerStateExited(HIDWORD(v65));
          PopAcquirePolicyLock(v52, v51);
          PopTtmIsSxCompleteNotificationPending = 0;
          PopReleasePolicyLock(v54, v53, v55, v56, v65);
        }
      }
      else
      {
        v50 = HIDWORD(v65);
      }
      v71 = v50;
      v69 = 7;
      PopDispatchStateCallout(&v67, (__int64)&v71);
    }
    v30 = a2;
  }
  if ( v29 )
    PopPowerAggregatorNotifySuspendResume(0LL);
  if ( !v31 && !(_BYTE)v65 )
  {
    if ( v32 >= 0 )
    {
      qword_140F0BF70 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopDiagTraceHiberStats(v26);
      PopDiagTracePowerTransitionTime();
      PopDiagTracePerfTrackData(v26);
      PopShutdownButtonPressTime = 0LL;
      SystemAction = v30;
      LightestSystemState = a3;
      PopSleepStats = 1;
    }
    PopCheckpointSystemSleep(41LL);
    PopBootStatCheckpointAvailable = 1;
    RtlBootStatusDisableFlushing(0);
    PopQueueWorkItem((__int64)&PopBsdFlushWorkItem, (WORK_QUEUE_TYPE)(v57 + 1));
    PopDiagTracePowerTransitionEnd((unsigned int)v32);
    PopPotsLogPowerTransitionReliability((unsigned int)v32, (unsigned int)a3, ActionEntryReason);
  }
  PpmEndHighPerfRequest(2);
  PopAcquirePolicyLock(v59, v58);
  if ( v66 >= 0 )
    PoDelistPowerStateTransitionBlocker(v61, v60, v62, v63);
  PopSetPowerActionWatchdogState(0);
  return (unsigned int)v32;
}
