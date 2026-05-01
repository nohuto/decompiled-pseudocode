/*
 * XREFs of ??1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ @ 0x18029995C
 * Callers:
 *     ??1?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1802C092C (--1-$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@de.c)
 *     ??_GThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180604ECC (--_GThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator____::_1_::dtor$1 @ 0x1806DE18A (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--Internal--UI--T.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EEFFC (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180299A18 (--1-$_Tree@V-$_Tmap_traits@_KU-$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U-$less@_K@s.c)
 *     ??1?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180299ABC (--1-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$less@PEAUHWND__@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180299AEC (--1-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180299B0C (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIPackageCata.c)
 */

void __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::~ThemeCoordinator(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this)
{
  struct wil::details::wnf_subscription_state_base *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx

  wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>((char *)this + 304);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 37);
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BEI_AA_impl_winrt__QEAA_XZ((char *)this + 272);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *)((char *)this + 264));
  std::_Tree<std::_Tmap_traits<unsigned __int64,winrt::com_ptr<SharedDesktopBackgroundVisualHost>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,winrt::com_ptr<SharedDesktopBackgroundVisualHost>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>>,0>>((char *)this + 240);
  std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::~_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>((char *)this + 224);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 21);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 19);
  v3 = (wil::details *)*((_QWORD *)this + 18);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, v2);
  v4 = (wil::details *)*((_QWORD *)this + 17);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, v2);
  v5 = (wil::details *)*((_QWORD *)this + 16);
  if ( v5 )
    wil::details::delete_wnf_subscription_state(v5, v2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 15);
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *)((char *)this + 32));
}
