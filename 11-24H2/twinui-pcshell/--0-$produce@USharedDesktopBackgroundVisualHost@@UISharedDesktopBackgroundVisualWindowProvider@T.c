/*
 * XREFs of ??0?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x180608770
 * Callers:
 *     ??0?$producer@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180608800 (--0-$producer@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisualWindowProvider@.c)
 * Callees:
 *     ??0?$produce_base@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1806087B8 (--0-$produce_base@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisualWindowProvi.c)
 */

_QWORD *winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,void>::produce_base<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,void>();
  result = v0;
  *v0 = &winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::`vftable';
  return result;
}
