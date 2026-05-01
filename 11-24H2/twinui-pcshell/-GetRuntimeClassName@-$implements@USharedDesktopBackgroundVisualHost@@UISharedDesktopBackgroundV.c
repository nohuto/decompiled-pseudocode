/*
 * XREFs of ?GetRuntimeClassName@?$implements@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualWindowProvider@34567@@winrt@@EEBA?AUhstring@2@XZ @ 0x180605750
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$runtime_class_name@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x180606B44 (-get@-$runtime_class_name@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@X@im.c)
 */

__int64 __fastcall winrt::implements<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::GetRuntimeClassName(
        __int64 a1,
        __int64 a2)
{
  winrt::impl::runtime_class_name<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,void>::get(a2);
  return a2;
}
