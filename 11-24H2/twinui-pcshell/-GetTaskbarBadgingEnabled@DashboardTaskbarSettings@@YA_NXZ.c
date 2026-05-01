/*
 * XREFs of ?GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1805DE2CC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9CB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1805D9CB0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??$ActivateInstance@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@3@XZ @ 0x1805DDFE8 (--$ActivateInstance@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActiva.c)
 *     ??$call@P6A?AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1805DE0A0 (--$call@P6A-AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivation.c)
 *     ??$unbox_value_type@_NAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1805DE1B8 (--$unbox_value_type@_NAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUIInspectab.c)
 *     ?GetValue@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805DE388 (-GetValue@-$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarBadgingSetting@Taskbar@.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall DashboardTaskbarSettings::GetTaskbarBadgingEnabled(DashboardTaskbarSettings *this)
{
  __int64 (__fastcall ****Value)(_QWORD, void *, __int64 *); // rax
  char v2; // bl
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF
  struct IUnknown v5; // [rsp+68h] [rbp+20h] BYREF
  __int64 v6; // [rsp+70h] [rbp+28h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v7)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+78h] [rbp+30h] BYREF

  _InterlockedIncrement64(&qword_1808CC6B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting>(
      &winrt::impl::factory_cache_entry_v<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting,winrt::Windows::Foundation::IActivationFactory>,
      &v5);
    _InterlockedDecrement64(&qword_1808CC6B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CC6B8);
    v7 = _lambda_ad8d6bf895fdeda767c5ede3379139c0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting,winrt::Windows::Foundation::IActivationFactory>::call<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)&v5,
      (void (__fastcall **)(__int64, __int64 *))&v7);
  }
  winrt::param::hstring::hstring((winrt::param::hstring *)v4, L"Value");
  Value = (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting>::GetValue(
                                                                  &v5,
                                                                  &v6,
                                                                  v4);
  v2 = winrt::impl::unbox_value_type<bool,winrt::Windows::Foundation::IInspectable const &>(Value);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  return v2;
}
