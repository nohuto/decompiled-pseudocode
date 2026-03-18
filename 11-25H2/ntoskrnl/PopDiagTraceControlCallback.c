/*
 * XREFs of PopDiagTraceControlCallback @ 0x140A32540
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x140470210 (PopDiagTraceSystemLatencyUpdate.c)
 *     PopDiagTraceFxRundown @ 0x140485F3C (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x1404A4CD0 (PopThermalTraceRundownEvents.c)
 *     ExTraceTimerResolution @ 0x1404A8858 (ExTraceTimerResolution.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1404B1AA4 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopPlTraceLogPowerPlane @ 0x1405D7D34 (PopPlTraceLogPowerPlane.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopDiagTracePowerRequestCreate @ 0x140A3277C (PopDiagTracePowerRequestCreate.c)
 *     PopDiagTracePlatformRoleRundown @ 0x140A32B6C (PopDiagTracePlatformRoleRundown.c)
 *     PopRundownPowerSettings @ 0x140A32C20 (PopRundownPowerSettings.c)
 *     PopDiagTracePowerStateEventRundown @ 0x140A32D94 (PopDiagTracePowerStateEventRundown.c)
 *     PopLoggingInformation @ 0x140A32E70 (PopLoggingInformation.c)
 *     PopRundownThermalRequests @ 0x140A32F70 (PopRundownThermalRequests.c)
 *     PopDiagTraceDeviceComplianceRundown @ 0x140A3302C (PopDiagTraceDeviceComplianceRundown.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140A330F0 (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopRundownPowerLimitRequests @ 0x140A33184 (PopRundownPowerLimitRequests.c)
 *     PopDiagTraceSystemIdleRundown @ 0x140A3323C (PopDiagTraceSystemIdleRundown.c)
 *     PopTraceStandbyConnectivityRundown @ 0x140A332C8 (PopTraceStandbyConnectivityRundown.c)
 *     PopTransitionTelemetryOsState @ 0x140A81BA4 (PopTransitionTelemetryOsState.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
      v31 = dword_140F0B70C == 0;
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
