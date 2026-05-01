/*
 * XREFs of CrmStateMonitorCleanup @ 0x18006EC04
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18002DE70 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorListenerRemove @ 0x180033220 (CrmStateMonitorListenerRemove.c)
 * Callees:
 *     CrmStateMonitorFanNoiseHysteresisCleanup @ 0x18006E15C (CrmStateMonitorFanNoiseHysteresisCleanup.c)
 *     CrmStateMonitorAcDcBatteryCleanup @ 0x18007963C (CrmStateMonitorAcDcBatteryCleanup.c)
 *     CrmStateMonitorAcDcDisplayCleanup @ 0x1800796F8 (CrmStateMonitorAcDcDisplayCleanup.c)
 *     CrmStateMonitorCPUUsageCleanup @ 0x1800797E4 (CrmStateMonitorCPUUsageCleanup.c)
 *     CrmStateMonitorCompositeTestCleanup @ 0x1800799B0 (CrmStateMonitorCompositeTestCleanup.c)
 *     CrmStateMonitorCsAcDcCleanup @ 0x180079A54 (CrmStateMonitorCsAcDcCleanup.c)
 *     CrmStateMonitorDelayedAcCleanup @ 0x180079B08 (CrmStateMonitorDelayedAcCleanup.c)
 *     CrmStateMonitorDelayedCsCleanup @ 0x180079BF0 (CrmStateMonitorDelayedCsCleanup.c)
 *     CrmStateMonitorDelayedInternetLossCleanup @ 0x180079D9C (CrmStateMonitorDelayedInternetLossCleanup.c)
 *     CrmStateMonitorDisconnectedStandbyCleanup @ 0x180079EBC (CrmStateMonitorDisconnectedStandbyCleanup.c)
 *     CrmStateMonitorPostResumeCleanup @ 0x18007A150 (CrmStateMonitorPostResumeCleanup.c)
 *     CrmStateMonitorPostShellReadyCleanup @ 0x18007A274 (CrmStateMonitorPostShellReadyCleanup.c)
 *     CrmStateMonitorPowerConstrainedCleanup @ 0x18007A3B4 (CrmStateMonitorPowerConstrainedCleanup.c)
 *     CrmStateMonitorResourceUsageCleanup @ 0x18007A520 (CrmStateMonitorResourceUsageCleanup.c)
 *     CrmStateMonitorSystemDiskUsageCleanup @ 0x18007AA7C (CrmStateMonitorSystemDiskUsageCleanup.c)
 *     CrmStateMonitorTestCleanup @ 0x18007AD68 (CrmStateMonitorTestCleanup.c)
 *     CrmStateMonitorTimeSinceBootCleanup @ 0x18007AE9C (CrmStateMonitorTimeSinceBootCleanup.c)
 */

char __fastcall CrmStateMonitorCleanup(__int64 a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  void *v8; // rcx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  void *v16; // rcx
  void *v17; // rcx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx

  v1 = *(_DWORD *)a1;
  if ( *(int *)a1 > 22 )
  {
    if ( v1 > 33 )
    {
      if ( v1 <= 39 )
      {
        if ( v1 == 39 )
        {
          CrmStateMonitorFanNoiseHysteresisCleanup(a1);
          return CrmLogStateMonitorStop((int *)a1);
        }
        v24 = v1 - 34;
        if ( !v24 )
          goto LABEL_26;
        v25 = v24 - 1;
        if ( !v25 )
        {
          CrmStateMonitorAcDcDisplayCleanup();
          return CrmLogStateMonitorStop((int *)a1);
        }
        v26 = v25 - 1;
        if ( !v26 )
        {
          CrmStateMonitorAcDcBatteryCleanup();
          return CrmLogStateMonitorStop((int *)a1);
        }
        v7 = v26 - 1;
        if ( !v7 )
        {
          CrmStateMonitorDelayedInternetLossCleanup();
          return CrmLogStateMonitorStop((int *)a1);
        }
        goto LABEL_65;
      }
      v27 = v1 - 40;
      if ( !v27 )
        goto LABEL_26;
      v28 = v27 - 1;
      if ( !v28 )
        goto LABEL_26;
      v29 = v28 - 1;
      if ( !v29 )
        goto LABEL_26;
      if ( v29 != 1 )
        return CrmLogStateMonitorStop((int *)a1);
    }
    else
    {
      if ( v1 == 33 )
      {
        CrmStateMonitorDelayedCsCleanup();
        return CrmLogStateMonitorStop((int *)a1);
      }
      if ( v1 <= 28 )
      {
        if ( v1 == 28 )
          return CrmLogStateMonitorStop((int *)a1);
        v18 = v1 - 23;
        if ( !v18 )
          goto LABEL_26;
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 == 1 )
                CrmStateMonitorDelayedAcCleanup();
            }
            else
            {
              CrmStateMonitorCsAcDcCleanup();
            }
          }
          else
          {
            CrmStateMonitorSystemDiskUsageCleanup();
          }
        }
        else
        {
          CrmStateMonitorCPUUsageCleanup();
        }
        return CrmLogStateMonitorStop((int *)a1);
      }
      v22 = v1 - 29;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( !v23 )
          goto LABEL_26;
        v7 = v23 - 1;
        if ( !v7 )
        {
          CrmStateMonitorDisconnectedStandbyCleanup();
          return CrmLogStateMonitorStop((int *)a1);
        }
        goto LABEL_65;
      }
    }
    CrmStateMonitorResourceUsageCleanup();
    return CrmLogStateMonitorStop((int *)a1);
  }
  if ( v1 == 22 )
    goto LABEL_26;
  if ( v1 <= 11 )
  {
    if ( v1 != 11 )
    {
      if ( v1 <= 5 )
      {
        if ( v1 != 5 )
        {
          if ( !v1 || (v3 = v1 - 1) == 0 )
          {
            CrmStateMonitorTestCleanup();
            return CrmLogStateMonitorStop((int *)a1);
          }
          v4 = v3 - 1;
          if ( !v4 )
          {
            CrmStateMonitorCompositeTestCleanup();
            return CrmLogStateMonitorStop((int *)a1);
          }
          if ( (unsigned int)(v4 - 1) >= 2 )
            return CrmLogStateMonitorStop((int *)a1);
        }
        goto LABEL_17;
      }
      v5 = v1 - 6;
      if ( !v5 || (v6 = v5 - 1) == 0 || (v7 = v6 - 1) == 0 )
      {
LABEL_17:
        v8 = *(void **)(a1 + 64);
        if ( v8 )
          PowerSettingUnregisterNotification(v8);
        return CrmLogStateMonitorStop((int *)a1);
      }
      goto LABEL_65;
    }
LABEL_19:
    CrmStateMonitorTimeSinceBootCleanup();
    return CrmLogStateMonitorStop((int *)a1);
  }
  if ( v1 <= 17 )
  {
    if ( v1 == 17 )
      goto LABEL_26;
    v9 = v1 - 12;
    if ( !v9 )
      goto LABEL_19;
    v10 = v9 - 1;
    if ( !v10 || (v11 = v10 - 1) == 0 || (v7 = v11 - 1) == 0 )
    {
LABEL_26:
      if ( *(_QWORD *)(a1 + 88) )
        RtlUnsubscribeWnfNotificationWaitForCompletion();
      return CrmLogStateMonitorStop((int *)a1);
    }
LABEL_65:
    if ( v7 != 1 )
      return CrmLogStateMonitorStop((int *)a1);
    goto LABEL_26;
  }
  v13 = v1 - 18;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
          CrmStateMonitorPowerConstrainedCleanup();
      }
      else
      {
        CrmStateMonitorPostResumeCleanup();
      }
    }
    else
    {
      CrmStateMonitorPostShellReadyCleanup();
    }
  }
  else
  {
    v16 = *(void **)(a1 + 64);
    if ( v16 )
      CancelMibChangeNotify2(v16);
    v17 = *(void **)(a1 + 72);
    if ( v17 )
      CancelMibChangeNotify2(v17);
  }
  return CrmLogStateMonitorStop((int *)a1);
}
