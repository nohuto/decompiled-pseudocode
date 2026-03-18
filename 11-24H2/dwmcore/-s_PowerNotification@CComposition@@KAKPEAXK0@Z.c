/*
 * XREFs of ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x180230080
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z @ 0x180225C8C (-UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z.c)
 *     ?UpdateMonitorPowerState@CComposition@@IEAAXW4_MONITOR_DISPLAY_STATE@@@Z @ 0x18025044C (-UpdateMonitorPowerState@CComposition@@IEAAXW4_MONITOR_DISPLAY_STATE@@@Z.c)
 *     ?IsPowerSaverEnabled@CComposition@@QEBA_NXZ @ 0x18025BEB8 (-IsPowerSaverEnabled@CComposition@@QEBA_NXZ.c)
 *     ?UpdateBatterySaverState@CComposition@@IEAAX_N@Z @ 0x18025C59C (-UpdateBatterySaverState@CComposition@@IEAAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@Q.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@wil@@QEAA_NXZ @ 0x18025C7BC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@.c)
 */

__int64 __fastcall CComposition::s_PowerNotification(CComposition *a1, __int64 a2, enum _MONITOR_DISPLAY_STATE *a3)
{
  unsigned int v4; // edi
  bool v5; // dl
  bool v6; // bl
  __int64 v7; // rcx
  char IsPowerSaverEnabled; // al
  __int64 v9; // rcx
  char v10; // dl

  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1
    && *((_QWORD *)a3 + 1) == *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4
    || *(_QWORD *)a3 == *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1
    && *((_QWORD *)a3 + 1) == *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 )
  {
    if ( g_pComposition )
      CComposition::UpdateMonitorPowerState(a1, a3[5]);
    return 0LL;
  }
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1
    && *((_QWORD *)a3 + 1) == *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 )
  {
    v4 = 0;
    if ( g_pComposition )
    {
      LOBYTE(v4) = *((_DWORD *)a3 + 5) == 1;
      CComposition::UpdateConnectedStandbyState((__int64)a1, v4);
    }
    return 0LL;
  }
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1
    && *((_QWORD *)a3 + 1) == *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 )
  {
    if ( !g_pComposition )
      return 0LL;
    v5 = *((_DWORD *)a3 + 5) == 1;
LABEL_24:
    CComposition::UpdateBatterySaverState(a1, v5);
    return 0LL;
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::GetImpl'::`2'::impl) )
    return 0LL;
  if ( *(_QWORD *)a3 != *(_QWORD *)&GUID_ENERGY_SAVER_STATUS.Data1 )
    return 0LL;
  if ( *((_QWORD *)a3 + 1) != *(_QWORD *)GUID_ENERGY_SAVER_STATUS.Data4 )
    return 0LL;
  v6 = (unsigned int)(*((_DWORD *)a3 + 5) - 1) <= 1;
  if ( !g_pComposition )
    return 0LL;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetImpl'::`2'::impl) )
  {
    v5 = v6;
    goto LABEL_24;
  }
  CComposition::IsPowerSaverEnabled(g_pComposition);
  *(_BYTE *)(v7 + 6472) = v6;
  if ( *(_DWORD *)(v7 + 6492) )
  {
    IsPowerSaverEnabled = CComposition::IsPowerSaverEnabled((CComposition *)v7);
    if ( v10 != IsPowerSaverEnabled )
    {
      *(_BYTE *)(*(_QWORD *)(v9 + 616) + 749LL) = 1;
      CComposition::ScheduleCompositionPass(v9, 0, 0x40000u);
    }
  }
  return 0LL;
}
