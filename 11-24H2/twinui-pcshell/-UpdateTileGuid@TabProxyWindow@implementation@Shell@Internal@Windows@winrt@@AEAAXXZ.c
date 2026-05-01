/*
 * XREFs of ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180582BC0
 * Callers:
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x18026D9D0 (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x18026DEA0 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180050094 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051D64 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C2740 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@45@@impl@winrt@@QEBA@I@Z @ 0x18011C5B0 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UIXamlMetadataProvide.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801AAAB0 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?FindTiles@?$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@_JAEBUTileQueryFilter@Tiles@Internal@Windows@3@@Z @ 0x180581060 (-FindTiles@-$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal@Windows@winrt@.c)
 *     ?GetCurrentRevisionNumber@?$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805813B4 (-GetCurrentRevisionNumber@-$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal.c)
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x180582B78 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA-AUhstring@6@XZ.c)
 *     ?WindowTabHostActivePinnedSite@WindowTabHostTelemetry@@SAXXZ @ 0x180582D00 (-WindowTabHostActivePinnedSite@WindowTabHostTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  unsigned int v2; // edi
  int NetworkConnectivityLevel; // r14d
  __int64 *v4; // rax
  char v5; // bl
  __int64 *v6; // [rsp+20h] [rbp-30h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  __int128 v9; // [rsp+38h] [rbp-18h] BYREF

  v7 = 0LL;
  winrt::impl::consume_Windows_Internal_Tiles_ITileStore<winrt::Windows::Internal::Tiles::ITileStore>::FindTiles(
    (__int64 **)this + 15,
    &v8,
    *((_QWORD *)this + 16),
    (__int64 *)&v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
  *((_QWORD *)this + 16) = winrt::impl::consume_Windows_Internal_Tiles_ITileStore<winrt::Windows::Internal::Tiles::ITileStore>::GetCurrentRevisionNumber((__int64 *)this + 15);
  v2 = 0;
  NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(&v8);
  while ( v2 != NetworkConnectivityLevel )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetAt(
      &v8,
      (winrt *)&v6,
      v2);
    if ( (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v6) == 1 )
    {
      winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
        &v6,
        &v7);
      v4 = (__int64 *)winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(
                        (__int64)this,
                        (winrt::hstring *)&v9);
      v5 = winrt::operator==((__int64 *)&v7, v4);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v9);
      if ( v5 )
      {
        *(_OWORD *)((char *)this + 72) = *winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
                                            (__int64 *)&v6,
                                            &v9);
        WindowTabHostTelemetry::WindowTabHostActivePinnedSite();
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
        break;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
    ++v2;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
}
