/*
 * XREFs of ??$invoke@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@34@UActivationChangedEventArgs@78934@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@1@AEBUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@41@AEBUActivationChangedEventArgs@78941@@Z @ 0x1800C6C98
 * Callers:
 *     ??$?RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUActivationChangedEventArgs@45671@@Z @ 0x1800C6B10 (--$-RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActi.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??R?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBURemoteSystemStateChangedEventArgs@Shell@Internal@23@@Z @ 0x18023C994 (--R-$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@W.c)
 */

char __fastcall winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>,winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2 + 8;
  winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::operator()(a1);
  v3 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  return 1;
}
