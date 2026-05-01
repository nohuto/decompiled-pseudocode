/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180068824
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x180067CFC (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ @ 0x180068790 (-RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x180196294 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator() @ 0x1805FFBD0 (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator().c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180600D50 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007F3A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18010DE84 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTer.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  __int16 v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  return wil::details::ReportUsageToService(
           a1 + 2,
           37536857LL,
           ((unsigned int)v4 >> 10) & 1,
           ((unsigned int)v4 >> 11) & 1,
           &v9,
           v6,
           3);
}
