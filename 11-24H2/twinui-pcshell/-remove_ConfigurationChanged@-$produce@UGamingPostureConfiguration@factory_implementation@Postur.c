/*
 * XREFs of ?remove_ConfigurationChanged@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18033C230
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800BF3C8 (-remove@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winr.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1801D74B4 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::remove_ConfigurationChanged(
        RTL_SRWLOCK *a1,
        void *a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  wil::AcquireSRWLockExclusive(
    &v4,
    &winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_lock);
  winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::remove(
    (__int64)&winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configurationChangedEvent,
    a2);
  if ( !winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configurationChangedEvent )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
      (wil::details::registry_watcher_state **)&winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configRegistryWatcherHklm,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
      (wil::details::registry_watcher_state **)&winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configRegistryWatcherHkcu,
      0LL);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
  return 0LL;
}
