/*
 * XREFs of ?CreateInstance2@?$produce@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDKFactory@34567@@impl@winrt@@UEAAH_K0PEAXPEAPEAX@Z @ 0x180451ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_K0AEBUhstring@6@@Z @ 0x180451A44 (--0XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winr.c)
 *     ?Current@XamlApplication_WASDK@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AU1234567@XZ @ 0x180456A30 (-Current@XamlApplication_WASDK@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA-AU1234567.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDKFactory>::CreateInstance2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *v7; // rbx
  int v9; // [rsp+20h] [rbp-38h] BYREF
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF

  v11 = a4;
  *a5 = 0LL;
  winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK::Current(&v9);
  v7 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *)operator new(0x98uLL);
  v10 = v7;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::XamlExplorerHostChildWindow_WASDK(
    v7,
    a2,
    a3,
    (const struct winrt::hstring *)&v11);
  *(_QWORD *)v7 = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::`vftable';
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  v11 = 0LL;
  *a5 = ((unsigned __int64)v7 + 16) & -(__int64)(v7 != 0LL);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return 0LL;
}
