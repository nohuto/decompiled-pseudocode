/*
 * XREFs of ??1factory_count_guard@impl@winrt@@QEAA@XZ @ 0x1800821D4
 * Callers:
 *     _winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc::GetFromWindowId_::_1_::dtor$1 @ 0x1801D0CF8 (_winrt--Windows--Internal--ApplicationModel--WindowManagement--AppViewInProc--GetFromWindowId_--.c)
 *     _winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc::CreateWatcher_::_1_::dtor$1 @ 0x1801D1E9F (_winrt--Windows--Internal--ApplicationModel--WindowManagement--WindowInProc--CreateWatcher_--_1_.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::System::Threading::ThreadPool_winrt::Windows::System::Threading::IThreadPoolStatics_::call__lambda_4e2f6834dae5c2d9676db4968b0ab11c__&__::_1_::dtor$3 @ 0x1801D1EC3 (_winrt--impl--factory_cache_entry_winrt--Windows--System--Threading--ThreadPool_win_ea_1801D1EC3.c)
 *     _CUIHierarchy::OnUniversalPropertyChanged_::_1_::dtor$24 @ 0x1801D4571 (_CUIHierarchy--OnUniversalPropertyChanged_--_1_--dtor$24.c)
 *     _DockableDeviceCollection::PopulateDeviceInfo_::_1_::dtor$9 @ 0x1801D5BBF (_DockableDeviceCollection--PopulateDeviceInfo_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::factory_count_guard::~factory_count_guard(volatile signed __int64 **this)
{
  _InterlockedDecrement64(*this);
}
