/*
 * XREFs of ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x1802310B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z @ 0x18023187C (-UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z.c)
 *     ?UpdateMonitorPowerState@CComposition@@IEAAXW4_MONITOR_DISPLAY_STATE@@@Z @ 0x18025BA9C (-UpdateMonitorPowerState@CComposition@@IEAAXW4_MONITOR_DISPLAY_STATE@@@Z.c)
 *     ?UpdateBatterySaverState@CComposition@@IEAAX_N@Z @ 0x1802665B8 (-UpdateBatterySaverState@CComposition@@IEAAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@wil@@QEAA_NXZ @ 0x18026678C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@.c)
 */

__int64 __fastcall CComposition::s_PowerNotification(CComposition *a1, __int64 a2, void *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // dl
  __int64 v10; // rax

  v4 = *(_QWORD *)a3 - *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1 )
    v4 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4;
  v5 = 0;
  if ( !v4 )
    goto LABEL_23;
  v6 = *(_QWORD *)a3 - *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 )
    v6 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4;
  if ( v6 )
  {
    v7 = *(_QWORD *)a3 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v7 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( !v7 )
    {
      if ( g_pComposition )
      {
        LOBYTE(v5) = *((_DWORD *)a3 + 5) == 1;
        CComposition::UpdateConnectedStandbyState(a1, v5);
      }
      return 0LL;
    }
    v8 = *(_QWORD *)a3 - *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1;
    if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 )
      v8 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4;
    if ( !v8 )
    {
      if ( !g_pComposition )
        return 0LL;
      v9 = *((_DWORD *)a3 + 5) == 1;
LABEL_22:
      CComposition::UpdateBatterySaverState(a1, v9);
      return 0LL;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::GetImpl'::`2'::impl) )
    {
      v10 = *(_QWORD *)a3 - *(_QWORD *)&GUID_ENERGY_SAVER_STATUS.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_ENERGY_SAVER_STATUS.Data1 )
        v10 = *((_QWORD *)a3 + 1) - *(_QWORD *)GUID_ENERGY_SAVER_STATUS.Data4;
      if ( !v10 )
      {
        v9 = (unsigned int)(*((_DWORD *)a3 + 5) - 1) <= 1;
        if ( g_pComposition )
          goto LABEL_22;
      }
    }
  }
  else
  {
LABEL_23:
    if ( g_pComposition )
      CComposition::UpdateMonitorPowerState(a1, *((enum _MONITOR_DISPLAY_STATE *)a3 + 5));
  }
  return 0LL;
}
