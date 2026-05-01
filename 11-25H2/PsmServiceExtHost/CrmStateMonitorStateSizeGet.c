/*
 * XREFs of CrmStateMonitorStateSizeGet @ 0x18002D45C
 * Callers:
 *     CrmStateMonitorNetworkUpdateState @ 0x18002C7DC (CrmStateMonitorNetworkUpdateState.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x18002CC30 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x18002CEE0 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 *     CrmStateMonitorStateSet @ 0x18002D2A0 (CrmStateMonitorStateSet.c)
 *     CrmLogStateMonitorStateSet @ 0x18002D580 (CrmLogStateMonitorStateSet.c)
 *     CrmLogStateMonitorRundown @ 0x180030504 (CrmLogStateMonitorRundown.c)
 *     CrmStateMonitorWNFCallback @ 0x180060180 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorSebCallback @ 0x180060A10 (CrmStateMonitorSebCallback.c)
 *     CrmLogStateMonitorStop @ 0x180069D10 (CrmLogStateMonitorStop.c)
 *     CrmStateMonitorNetworkStart @ 0x18006DBC8 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorFanNoiseHysteresisStart @ 0x18006E7FC (CrmStateMonitorFanNoiseHysteresisStart.c)
 *     CrmStateMonitorWNFStart @ 0x18006E88C (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorAcDcDisplayStart @ 0x18006EA70 (CrmStateMonitorAcDcDisplayStart.c)
 *     CrmStateMonitorStart @ 0x18006F408 (CrmStateMonitorStart.c)
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
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorStateSizeGet(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx

  if ( a1 > 22 )
  {
    if ( a1 > 33 )
    {
      if ( a1 > 39 )
      {
        v22 = a1 - 40;
        if ( v22 )
        {
          v7 = v22 - 1;
          if ( v7 )
          {
LABEL_15:
            v3 = v7 - 1;
            if ( v3 )
              goto LABEL_16;
            return 32LL;
          }
        }
        return 32LL;
      }
      if ( a1 == 39 )
        return 32LL;
      v20 = a1 - 34;
      if ( !v20 )
        return 32LL;
      v21 = v20 - 1;
      if ( !v21 )
        return 8LL;
      v19 = v21 - 1;
      if ( !v19 )
        return 8LL;
    }
    else
    {
      if ( a1 == 33 )
        return 4LL;
      if ( a1 <= 28 )
      {
        if ( a1 == 28 )
          return 4LL;
        v15 = a1 - 23;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
            return 4LL;
          v17 = v16 - 1;
          if ( !v17 )
            return 4LL;
          v3 = v17 - 1;
          if ( v3 )
            goto LABEL_16;
          return 8LL;
        }
        return 32LL;
      }
      v18 = a1 - 29;
      if ( !v18 )
        return 4LL;
      v19 = v18 - 1;
      if ( !v19 )
        return 32LL;
    }
    v11 = v19 - 1;
    if ( !v11 )
      return 4LL;
LABEL_49:
    if ( v11 != 1 )
      return 0LL;
    return 32LL;
  }
  if ( a1 == 22 )
    return 32LL;
  if ( a1 <= 11 )
  {
    if ( a1 != 11 )
    {
      if ( a1 <= 5 )
      {
        if ( a1 == 5 )
          return 4LL;
        if ( !a1 )
          return 4LL;
        v1 = a1 - 1;
        if ( !v1 )
          return 4LL;
        v2 = v1 - 1;
        if ( !v2 )
          return 4LL;
        v3 = v2 - 1;
        if ( !v3 )
          return 4LL;
LABEL_16:
        if ( v3 != 1 )
          return 0LL;
        return 4LL;
      }
      v5 = a1 - 6;
      if ( !v5 )
        return 4LL;
      v6 = v5 - 1;
      if ( !v6 )
        return 4LL;
      v7 = v6 - 1;
      if ( !v7 )
        return 4LL;
      goto LABEL_15;
    }
    return 8LL;
  }
  if ( a1 <= 17 )
  {
    if ( a1 == 17 )
      return 32LL;
    v8 = a1 - 12;
    if ( !v8 )
      return 8LL;
    v9 = v8 - 1;
    if ( !v9 )
      return 32LL;
    v10 = v9 - 1;
    if ( !v10 )
      return 32LL;
    v11 = v10 - 1;
    if ( !v11 )
      return 32LL;
    goto LABEL_49;
  }
  v12 = a1 - 18;
  if ( !v12 )
    return 4LL;
  v13 = v12 - 1;
  if ( !v13 )
    return 4LL;
  v14 = v13 - 1;
  if ( !v14 )
    return 4LL;
  if ( v14 != 1 )
    return 0LL;
  return 40LL;
}
