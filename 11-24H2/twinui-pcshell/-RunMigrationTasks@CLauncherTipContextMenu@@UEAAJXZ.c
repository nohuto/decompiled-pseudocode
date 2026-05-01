/*
 * XREFs of ?RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ @ 0x180068790
 * Callers:
 *     <none>
 * Callees:
 *     ?RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1800687C4 (-RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180068824 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShe.c)
 */

__int64 __fastcall CLauncherTipContextMenu::RunMigrationTasks(CLauncherTipContextMenu *this, __int64 a2)
{
  char v4; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinXReplaceTerminalWithPowerShell_37536857>::GetImpl'::`2'::impl,
    a2);
  CLauncherTipContextMenu::RunMigrationTasksAsyncHelper((char *)this - 104, &v4);
  return 0LL;
}
