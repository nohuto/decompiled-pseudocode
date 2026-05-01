/*
 * XREFs of ??0?$producers_base@USharedDesktopBackgroundVisualHost@@V?$tuple@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualWindowProvider@23456@@std@@@impl@winrt@@QEAA@XZ @ 0x1806088A8
 * Callers:
 *     ??0SharedDesktopBackgroundVisualHost@@QEAA@PEAUHWND__@@@Z @ 0x1806088E4 (--0SharedDesktopBackgroundVisualHost@@QEAA@PEAUHWND__@@@Z.c)
 * Callees:
 *     ??0?$producer_convert@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180608848 (--0-$producer_convert@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes.c)
 *     ??0?$producer_convert@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180608860 (--0-$producer_convert@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisualWindowP.c)
 */

__int64 __fastcall winrt::impl::producers_base<SharedDesktopBackgroundVisualHost,std::tuple<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>>::producers_base<SharedDesktopBackgroundVisualHost,std::tuple<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>>(
        _QWORD *a1)
{
  __int64 v1; // r8

  winrt::impl::producer_convert<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,void>::producer_convert<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,void>(a1);
  winrt::impl::producer_convert<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,void>::producer_convert<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,void>();
  return v1;
}
