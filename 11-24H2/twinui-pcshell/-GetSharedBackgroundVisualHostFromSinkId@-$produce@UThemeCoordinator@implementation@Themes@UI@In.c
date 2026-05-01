/*
 * XREFs of ?GetSharedBackgroundVisualHostFromSinkId@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x1806057A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801BC9A8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ??$as@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualHost@@$0A@@impl@winrt@@YA?AUISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@1@PEAUSharedDesktopBackgroundVisualHost@@@Z @ 0x1806041C4 (--$as@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackground.c)
 *     ?GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU?$com_ptr@USharedDesktopBackgroundVisualHost@@@7@_K@Z @ 0x180605268 (-GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA-A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::Windows::Internal::UI::Themes::IThemeCoordinator>::GetSharedBackgroundVisualHostFromSinkId(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int64 *v8; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v4 = (a1 - 24) & -(__int64)(a1 != 0);
  try
  {
    winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForId(v4, &v8, a2);
    winrt::impl::as<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,SharedDesktopBackgroundVisualHost,0>(
      &v7,
      v8);
    winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(&v8);
    v5 = v7;
    v7 = 0LL;
    *a3 = v5;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
