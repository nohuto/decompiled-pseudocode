/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805A0894
 * Callers:
 *     ?SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180270A10 (-SubscribeToServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18059F860 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AE210 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     ?_ResetState@HotkeyHandler@@AEAAXXZ @ 0x1805B02F0 (-_ResetState@HotkeyHandler@@AEAAXXZ.c)
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805B60C0 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007F3A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18059E7D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnoun.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v4 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            v7);
    v10 = v4;
  }
  v8 = 0;
  v9 = 3;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 8),
    0x21A138Bu,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v8,
    v6,
    3);
}
