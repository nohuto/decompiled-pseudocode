/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180226DD4
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x180196294 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x1802843A0 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806004A4 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007F3A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802377CC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinXDeleteFile.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinXDeleteFileHang_40463712>::GetCachedFeatureEnabledState(
                      a1,
                      v7);
    v10 = v4;
  }
  v8 = 0;
  v9 = 3;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 8),
    0x2696D60u,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v8,
    v6,
    3);
}
