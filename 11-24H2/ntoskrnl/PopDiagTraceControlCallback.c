/*
 * XREFs of PopDiagTraceControlCallback @ 0x140A2CF10
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PopDiagTraceFxRundown @ 0x1402B69F4 (PopDiagTraceFxRundown.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x140469380 (PopDiagTraceSystemLatencyUpdate.c)
 *     PopThermalTraceRundownEvents @ 0x14049FF80 (PopThermalTraceRundownEvents.c)
 *     ExTraceTimerResolution @ 0x1404A3CD8 (ExTraceTimerResolution.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1404AD474 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopPlTraceLogPowerPlane @ 0x1405D9DE4 (PopPlTraceLogPowerPlane.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopDiagTracePowerRequestCreate @ 0x140A2D14C (PopDiagTracePowerRequestCreate.c)
 *     PopDiagTracePlatformRoleRundown @ 0x140A2D510 (PopDiagTracePlatformRoleRundown.c)
 *     PopRundownPowerSettings @ 0x140A2D5C0 (PopRundownPowerSettings.c)
 *     PopDiagTracePowerStateEventRundown @ 0x140A2D734 (PopDiagTracePowerStateEventRundown.c)
 *     PopLoggingInformation @ 0x140A2D810 (PopLoggingInformation.c)
 *     PopRundownThermalRequests @ 0x140A2D910 (PopRundownThermalRequests.c)
 *     PopDiagTraceDeviceComplianceRundown @ 0x140A2D9CC (PopDiagTraceDeviceComplianceRundown.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140A2DA90 (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopRundownPowerLimitRequests @ 0x140A2DB24 (PopRundownPowerLimitRequests.c)
 *     PopDiagTraceSystemIdleRundown @ 0x140A2DBDC (PopDiagTraceSystemIdleRundown.c)
 *     PopTraceStandbyConnectivityRundown @ 0x140A2DC68 (PopTraceStandbyConnectivityRundown.c)
 *     PopTransitionTelemetryOsState @ 0x140A80E74 (PopTransitionTelemetryOsState.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceControlCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        int *CallbackContext)
{
  __int64 v7; // rcx
  PVOID *i; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r15d
  char *v24; // r14
  unsigned int v25; // r12d
  char *v26; // r13
  ULONG v27; // ebx
  PEVENT_DATA_DESCRIPTOR UserDataa; // [rsp+20h] [rbp-40h]
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-40h]
  unsigned int v30; // [rsp+30h] [rbp-30h] BYREF
  BOOL v31; // [rsp+34h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+40h] [rbp-20h] BYREF

  if ( (_DWORD)ControlCode == 2 )
  {
    v30 = 0;
    if ( CallbackContext == &dword_140E07680 )
    {
      if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
        PopTransitionTelemetryOsState(5LL);
      if ( PopPowerPlane )
        PopPlTraceLogPowerPlane((unsigned __int16 *)PopPowerPlane, ControlCode, Level);
    }
    else
    {
      ExTraceTimerResolution();
      PopDiagTraceSystemLatencyUpdate(1, PopFxSystemLatencyLimit);
      PopAcquireRwLockShared(&PopPowerRequestLock);
      for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
      {
        LOBYTE(v7) = 1;
        PopDiagTracePowerRequestCreate(v7, i);
      }
      PopReleaseRwLock(&PopPowerRequestLock);
      v33.Size = 4;
      v33.Reserved = 0;
      v31 = dword_140F0B38C == 0;
      v33.Ptr = (ULONGLONG)&v31;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_RUNDOWN, 0LL, 1u, &v33);
      PopRundownPowerSettings();
      PopThermalTraceRundownEvents();
      P = 0LL;
      PopAcquirePolicyLock(v10, v9);
      v11 = PopLoggingInformation(&P, &v30);
      PopReleasePolicyLock(v13, v12, v14, v15, UserDataa);
      v16 = P;
      if ( v11 >= 0 )
      {
        v23 = *(_DWORD *)P;
        v24 = (char *)P + 4;
        v25 = 0;
        if ( *(_DWORD *)P )
        {
          v26 = (char *)P + v30;
          do
          {
            if ( v24 >= v26 )
              break;
            v27 = *((_DWORD *)v24 + 3);
            v33.Reserved = 0;
            v27 += 16;
            v33.Size = v27;
            v33.Ptr = (ULONGLONG)v24;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SLEEP_DISABLE_REASON_RUNDOWN, 0LL, 1u, &v33);
            ++v25;
            v24 += v27;
          }
          while ( v25 < v23 );
        }
      }
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      if ( !_InterlockedCompareExchange(&PopDiagDeviceRundownRequests, 1, 0) )
        ExQueueWorkItem(&PopDiagDeviceRundownWorkItem, DelayedWorkQueue);
      if ( CallbackContext == (int *)&PopDiagHandle )
        PopDiagTraceFxRundown(0LL);
      PopDiagTracePlatformRoleRundown();
      PopRundownThermalRequests();
      PopRundownPowerLimitRequests();
      PopAcquirePolicyLock(v18, v17);
      PopTraceStandbyConnectivityRundown();
      PopDiagTraceDeviceComplianceRundown();
      PopReleasePolicyLock(v20, v19, v21, v22, UserData);
      PopDiagTraceDynamicTickStatusRundown();
      PopDiagTraceDeepSleepConstraintRundown();
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerEventLock);
      PopDiagTracePowerStateEventRundown();
      PopReleaseRwLock(&PopPowerEventLock);
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock);
      PopDiagTraceSystemIdleRundown();
      PopReleaseRwLock(&PopSystemIdleLock);
    }
  }
}
