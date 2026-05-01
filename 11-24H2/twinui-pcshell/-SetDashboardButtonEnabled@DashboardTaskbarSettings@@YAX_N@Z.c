/*
 * XREFs of ?SetDashboardButtonEnabled@DashboardTaskbarSettings@@YAX_N@Z @ 0x1805DE454
 * Callers:
 *     ?SetDashboardButtonStatus@?$produce@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@UIDashboardTaskbarButtonSettingsManager@3456@@impl@winrt@@UEAAH_N@Z @ 0x1805DDEE0 (-SetDashboardButtonStatus@-$produce@UDashboardTaskbarButtonSettingsManager@implementation@Shell@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ @ 0x1801B8C8C (--0DesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@QEAA@XZ.c)
 *     ??$box_value@_N$0A@@winrt@@YA?AUIInspectable@Foundation@Windows@0@AEB_N@Z @ 0x1804AD2DC (--$box_value@_N$0A@@winrt@@YA-AUIInspectable@Foundation@Windows@0@AEB_N@Z.c)
 *     ?SetValue@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIInspectable@Foundation@Windows@3@@Z @ 0x1805DE4C8 (-SetValue@-$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Deskt.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall DashboardTaskbarSettings::SetDashboardButtonEnabled(DashboardTaskbarSettings *this)
{
  __int64 v1; // rbx
  _BYTE v2[40]; // [rsp+20h] [rbp-28h] BYREF
  char v3; // [rsp+50h] [rbp+8h] BYREF
  __int64 v4; // [rsp+58h] [rbp+10h] BYREF
  char v5; // [rsp+60h] [rbp+18h] BYREF

  v3 = (char)this;
  winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting::DesktopTaskbarDaSetting((winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting *)&v5);
  v1 = winrt::box_value<bool,0>((__int64)&v4, &v3);
  winrt::param::hstring::hstring((winrt::param::hstring *)v2, L"Value");
  winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>::SetValue(
    &v5,
    v2,
    v1);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
}
