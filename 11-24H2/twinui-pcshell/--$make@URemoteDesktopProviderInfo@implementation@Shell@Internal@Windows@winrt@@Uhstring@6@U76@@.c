/*
 * XREFs of ??$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@U76@@winrt@@YA?A_P$$QEAUhstring@0@0@Z @ 0x180656EE0
 * Callers:
 *     ?ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180659E7C (-ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x18065AF2C (-LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@AEBUhstring@2@0@Z @ 0x18063E54C (--0-$heap_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@@im.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::hstring,winrt::hstring>(
        unsigned __int64 *a1,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo *v6; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo *v8; // [rsp+40h] [rbp+8h]

  v8 = (winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo *)operator new(0x28uLL);
  v6 = winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>(
         v8,
         a2,
         a3);
  *a1 = ((unsigned __int64)v6 + 16) & -(__int64)(v6 != 0LL);
  return a1;
}
