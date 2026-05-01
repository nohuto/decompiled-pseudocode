/*
 * XREFs of CrmStateMonitorStart @ 0x18006F408
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18002DE70 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D45C (CrmStateMonitorStateSizeGet.c)
 *     CrmStateMonitorNetworkStart @ 0x18006DBC8 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorFanNoiseHysteresisStart @ 0x18006E7FC (CrmStateMonitorFanNoiseHysteresisStart.c)
 *     CrmStateMonitorWNFStart @ 0x18006E88C (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorAcDcDisplayStart @ 0x18006EA70 (CrmStateMonitorAcDcDisplayStart.c)
 *     CrmLogStateMonitorStart @ 0x180071BF0 (CrmLogStateMonitorStart.c)
 *     CrmStateMonitorAcDcBatteryStart @ 0x18007968C (CrmStateMonitorAcDcBatteryStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180079880 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x180079A00 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x180079AA4 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180079B7C (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x180079C64 (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedInternetLossStart @ 0x180079E10 (CrmStateMonitorDelayedInternetLossStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x180079F0C (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x18007A208 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x18007A32C (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x18007A408 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x18007A46C (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorResourceUsageStart @ 0x18007A948 (CrmStateMonitorResourceUsageStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x18007ACE0 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorTestStart @ 0x18007ADC8 (CrmStateMonitorTestStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x18007AEF4 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x18007AFFC (CrmStateMonitorTimeSinceLogonStart.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorStart(_QWORD *CallerContext, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  GUID *v9; // rdx
  int ready; // eax
  unsigned int v11; // eax
  const void *v12; // rdx
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  _BYTE v36[40]; // [rsp+20h] [rbp-30h] BYREF

  v4 = 0;
  CallerContext[6] = MEMORY[0x7FFE0008];
  v5 = *(_DWORD *)CallerContext;
  if ( v5 > 22 )
  {
    if ( v5 > 33 )
    {
      if ( v5 <= 39 )
      {
        if ( v5 == 39 )
        {
          ready = CrmStateMonitorFanNoiseHysteresisStart((__int64)CallerContext, v36);
          goto LABEL_95;
        }
        v28 = v5 - 34;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( !v29 )
          {
            ready = CrmStateMonitorAcDcDisplayStart((__int64)CallerContext);
            goto LABEL_95;
          }
          v30 = v29 - 1;
          if ( !v30 )
          {
            ready = CrmStateMonitorAcDcBatteryStart(CallerContext, v36);
            goto LABEL_95;
          }
          v31 = v30 - 1;
          if ( !v31 )
          {
            ready = CrmStateMonitorDelayedInternetLossStart(CallerContext, v36);
            goto LABEL_95;
          }
          if ( v31 != 1 )
            goto LABEL_89;
          v13 = WNF_SHEL_SUSPEND_APP_BACKGROUND_ACTIVITY;
        }
        else
        {
          v13 = WNF_SEB_SYSTEM_IDLE;
        }
        goto LABEL_94;
      }
      v32 = v5 - 40;
      if ( !v32 )
      {
        v13 = WNF_PO_FAN_NOISE_CHANGE;
        goto LABEL_94;
      }
      v33 = v32 - 1;
      if ( !v33 )
      {
        v13 = WNF_RM_MEMORY_MONITOR_USAGE_METRICS;
        goto LABEL_94;
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
        v13 = WNF_RM_DEVELOPER_QUIET_MODE_ACTIVE;
        goto LABEL_94;
      }
      if ( v34 != 1 )
        goto LABEL_89;
    }
    else
    {
      if ( v5 == 33 )
      {
        ready = CrmStateMonitorDelayedCsStart(CallerContext, v36);
        goto LABEL_95;
      }
      if ( v5 <= 28 )
      {
        if ( v5 == 28 )
          goto LABEL_22;
        v21 = v5 - 23;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( !v22 )
          {
            ready = CrmStateMonitorCPUUsageStart(CallerContext, v36);
            goto LABEL_95;
          }
          v23 = v22 - 1;
          if ( !v23 )
          {
            ready = CrmStateMonitorSystemDiskUsageStart(CallerContext, v36);
            goto LABEL_95;
          }
          v24 = v23 - 1;
          if ( !v24 )
          {
            ready = CrmStateMonitorCsAcDcStart(CallerContext, v36);
            goto LABEL_95;
          }
          if ( v24 == 1 )
          {
            ready = CrmStateMonitorDelayedAcStart(CallerContext, v36);
            goto LABEL_95;
          }
          goto LABEL_89;
        }
        v13 = WNF_SHEL_LOCKSTATE;
        goto LABEL_94;
      }
      v25 = v5 - 29;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
          {
            ready = CrmStateMonitorDisconnectedStandbyStart(CallerContext, v36);
            goto LABEL_95;
          }
          if ( v27 != 1 )
            goto LABEL_89;
          v13 = WNF_SEB_AUDIO_ACTIVITY;
        }
        else
        {
          v13 = WNF_SEB_NETWORK_CONNECTIVITY_IN_STANDBY;
        }
        goto LABEL_94;
      }
    }
    ready = CrmStateMonitorResourceUsageStart(CallerContext, v36);
    goto LABEL_95;
  }
  if ( v5 == 22 )
  {
    v13 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
    goto LABEL_94;
  }
  if ( v5 <= 11 )
  {
    if ( v5 == 11 )
    {
      ready = CrmStateMonitorTimeSinceBootStart(CallerContext, v36);
      goto LABEL_95;
    }
    if ( v5 <= 5 )
    {
      if ( v5 == 5 )
      {
        v9 = &GUID_BATTERY_PERCENTAGE_REMAINING;
        goto LABEL_14;
      }
      if ( !v5 || (v6 = v5 - 1) == 0 )
      {
        ready = CrmStateMonitorTestStart(CallerContext);
        goto LABEL_95;
      }
      v7 = v6 - 1;
      if ( !v7 )
      {
        ready = CrmStateMonitorCompositeTestStart(CallerContext, v36);
        goto LABEL_95;
      }
      v8 = v7 - 1;
      if ( !v8 )
      {
        v9 = &GUID_GLOBAL_USER_PRESENCE;
        goto LABEL_14;
      }
      if ( v8 == 1 )
      {
        v9 = &GUID_ACDC_POWER_SOURCE;
LABEL_14:
        ready = CrmStateMonitorPowerSettingsStart(CallerContext, v9, a3, v36);
        goto LABEL_95;
      }
      goto LABEL_89;
    }
    switch ( v5 )
    {
      case 6:
        v9 = &GUID_CONSOLE_DISPLAY_STATE;
        goto LABEL_14;
      case 7:
        v9 = &GUID_POWER_SAVING_STATUS;
        goto LABEL_14;
      case 8:
        v9 = &GUID_LOW_POWER_EPOCH;
        goto LABEL_14;
    }
    if ( v5 != 9 )
    {
LABEL_22:
      CallerContext[5] = CallerContext + 7;
      *((_DWORD *)CallerContext + 14) = 0;
      v11 = CrmStateMonitorStateSizeGet(v5);
      memcpy_0(v36, v12, v11);
      ready = 0;
      goto LABEL_95;
    }
    v13 = WNF_RM_GAME_MODE_ACTIVE;
    goto LABEL_94;
  }
  if ( v5 > 17 )
  {
    v18 = v5 - 18;
    if ( !v18 )
    {
      ready = CrmStateMonitorNetworkStart((char *)CallerContext, v36);
      goto LABEL_95;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      ready = CrmStateMonitorPostShellReadyStart(CallerContext, v36);
      goto LABEL_95;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      ready = CrmStateMonitorPostResumeStart(CallerContext, v36);
      goto LABEL_95;
    }
    if ( v20 == 1 )
    {
      ready = CrmStateMonitorPowerConstrainedStart(CallerContext, v36);
      goto LABEL_95;
    }
    goto LABEL_89;
  }
  if ( v5 == 17 )
  {
    v13 = WNF_CNET_NON_CELLULAR_CONNECTED;
    goto LABEL_94;
  }
  v14 = v5 - 12;
  if ( !v14 )
  {
    ready = CrmStateMonitorTimeSinceLogonStart(CallerContext, v36);
    goto LABEL_95;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v13 = WNF_SEB_INTERNET_PRESENT;
    goto LABEL_94;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v13 = WNF_SEB_FREE_NETWORK_PRESENT;
    goto LABEL_94;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v13 = WNF_SEB_IP_ADDRESS_AVAILABLE;
    goto LABEL_94;
  }
  if ( v17 != 1 )
  {
LABEL_89:
    ready = -1073741822;
    goto LABEL_95;
  }
  v13 = WNF_XBOX_SYSTEM_CONSTRAINED_MODE_STATUS_CHANGED;
LABEL_94:
  ready = CrmStateMonitorWNFStart((int *)CallerContext, v13);
LABEL_95:
  if ( ready < 0 )
    v4 = ready;
  CrmLogStateMonitorStart(CallerContext, v36, v4);
  return v4;
}
