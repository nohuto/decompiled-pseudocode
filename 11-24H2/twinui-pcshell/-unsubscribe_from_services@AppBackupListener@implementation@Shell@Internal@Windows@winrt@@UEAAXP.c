/*
 * XREFs of ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18004E650
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18004F72C (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?get@?$weak_ref@UITile@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x18004F8C8 (-get@-$weak_ref@UITile@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800BAC24 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?revoke_impl@?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@AEAAXUITileCollection@StartScreen@UI@WindowsUdk@3@@Z @ 0x180114B7C (-revoke_impl@-$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UI.c)
 *     ?revoke_impl@?$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@AEAAXUISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@3@@Z @ 0x1801C8024 (-revoke_impl@-$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1801D74B4 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ?Release@registry_watcher_state@details@wil@@QEAAXXZ @ 0x1801D751C (-Release@registry_watcher_state@details@wil@@QEAAXXZ.c)
 *     ?get@?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18029A854 (-get@-$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@AEAAXUIPackageCatalog@ApplicationModel@Windows@3@@Z @ 0x18029A8A0 (-revoke_impl@-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIP.c)
 *     ?get@?$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x1802A2320 (-get@-$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 *     ??_9type@?$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@winrt@@$BOA@AA @ 0x18034AF54 (--_9type@-$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@winrt@@$BOA@A.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x180584D10 (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wil@@QEAA_NXZ @ 0x180616A8C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@de.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this,
        struct IServiceProvider *a2)
{
  char *v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  wil::details::registry_watcher_state **v14; // r14
  wil::details::registry_watcher_state **i; // rdi
  wil::details::registry_watcher_state *v16; // r15
  DWORD LastError; // ebx
  __int64 *v18; // r15
  __int64 *v19; // rdi
  _QWORD *v20; // r14
  __int64 v21; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v22; // r12
  __int64 v23; // [rsp+60h] [rbp+40h] BYREF
  __int64 v24; // [rsp+70h] [rbp+50h] BYREF
  char v25; // [rsp+78h] [rbp+58h] BYREF

  v2 = (char *)this + 104;
  v24 = *((_QWORD *)this + 13);
  v4 = v24;
  v23 = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((char *)this + 104, &v23);
  v5 = winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>::get(&v24, &v25);
  _revoke_impl___event_revoker_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt___MP8type___abi_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__AEAAXUISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_3__Z(
    v2,
    v5);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v24);
  if ( v23 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  v23 = 0LL;
  v24 = *((_QWORD *)this + 15);
  v6 = v24;
  *((_QWORD *)this + 15) = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((char *)this + 120, &v23);
  v7 = winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>::get(&v24, &v25);
  _revoke_impl___event_revoker_UITileCollection_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITileCollection_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__AEAAXUITileCollection_StartScreen_UI_WindowsUdk_3__Z(
    (char *)this + 120,
    v7);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v24);
  if ( v23 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  v23 = 0LL;
  v24 = *((_QWORD *)this + 17);
  v8 = v24;
  *((_QWORD *)this + 17) = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((char *)this + 136, &v23);
  v9 = winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>::get(&v24, &v25);
  _revoke_impl___event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__AEAAXUIPackageCatalog_ApplicationModel_Windows_3__Z(
    (char *)this + 136,
    v9);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v24);
  if ( v23 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  v23 = 0LL;
  v24 = *((_QWORD *)this + 20);
  v10 = v24;
  *((_QWORD *)this + 20) = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((char *)this + 160, &v23);
  v11 = winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::ITileCollection>::get(&v24, &v25);
  _revoke_impl___event_revoker_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt___MP8type___abi_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__AEAAXUISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_3__Z(
    (char *)this + 160,
    v11);
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v24);
  if ( v23 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  v23 = 0LL;
  v24 = *((_QWORD *)this + 22);
  v12 = v24;
  *((_QWORD *)this + 22) = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((char *)this + 176, &v23);
  v13 = winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::ITileCollection>::get(&v24, &v25);
  _revoke_impl___event_revoker_UITileCollection_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITileCollection_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__AEAAXUITileCollection_StartScreen_UI_WindowsUdk_3__Z(
    (char *)this + 176,
    v13);
  if ( v12 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v24);
  if ( v23 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  v23 = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((char *)this + 96, &v23);
  if ( v23 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  v14 = (wil::details::registry_watcher_state **)*((_QWORD *)this + 28);
  for ( i = (wil::details::registry_watcher_state **)*((_QWORD *)this + 27); i != v14; ++i )
  {
    v16 = *i;
    if ( *i )
    {
      LastError = GetLastError();
      wil::details::registry_watcher_state::Release(v16);
      SetLastError(LastError);
      *i = 0LL;
    }
  }
  std::_Mutex_base::lock((winrt::Windows::Internal::Shell::implementation::AppBackupListener *)((char *)this + 328));
  v18 = (__int64 *)*((_QWORD *)this + 25);
  v19 = (__int64 *)*((_QWORD *)this + 24);
  if ( v19 != v18 )
  {
    v20 = v19 + 1;
    do
    {
      v21 = *v19;
      if ( *v19 )
      {
        v23 = 0LL;
        *v19 = 0LL;
        v24 = v21;
        winrt::com_ptr<winrt::impl::IWeakReference>::operator=(v19, &v23);
        v22 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::ITile>::get(
                                                                                                    &v24,
                                                                                                    &v25);
        if ( *(_QWORD *)v22 )
           winrt::impl::abi<winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl,void>::type::`vcall'{224,{flat}}(
            *(_QWORD *)v22,
            *v20);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v22);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v24);
        if ( v23 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
      }
      v19 += 2;
      v20 += 2;
    }
    while ( v19 != v18 );
  }
  _Mtx_unlock((winrt::Windows::Internal::Shell::implementation::AppBackupListener *)((char *)this + 328));
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::GetImpl'::`2'::impl) )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
      (char *)this + 256,
      0LL);
  else
    wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
      (char *)this + 360,
      0LL);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
    (char *)this + 240,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
    (char *)this + 248,
    0LL);
  CAppBackupListenerTelemetry::Info<unsigned short const (&)[28]>();
}
