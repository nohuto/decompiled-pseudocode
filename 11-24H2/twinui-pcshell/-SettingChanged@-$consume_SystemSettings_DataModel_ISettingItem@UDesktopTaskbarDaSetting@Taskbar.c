/*
 * XREFs of ?SettingChanged@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x18020BE74
 * Callers:
 *     ?UnsubscribeFromDaSettingChanged@DashboardTaskbarSettings@@YAXAEBUIInspectable@Foundation@Windows@winrt@@Uevent_token@5@@Z @ 0x18020BE08 (-UnsubscribeFromDaSettingChanged@DashboardTaskbarSettings@@YAXAEBUIInspectable@Foundation@Window.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>::SettingChanged(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  unsigned int v4; // eax
  __int64 v5; // rbx
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v8 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::SystemSettings::DataModel::ISettingItem>, &v8);
    v5 = v8;
    v9 = v8;
  }
  else
  {
    v4 = 0;
    v9 = 0LL;
    v5 = 0LL;
  }
  v6 = 0;
  v7 = 0LL;
  winrt::check_hresult(&v8, v4, &v6);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 152LL))(v5, *a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
}
