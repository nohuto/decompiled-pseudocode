/*
 * XREFs of ?SetParentWallpaperHwnd@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAH_K@Z @ 0x18060A9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetParentWallpaperHwnd@SharedDesktopBackgroundVisualHost@@QEAAX_K@Z @ 0x18060A9FC (-SetParentWallpaperHwnd@SharedDesktopBackgroundVisualHost@@QEAAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::SetParentWallpaperHwnd(
        __int64 a1,
        unsigned __int64 a2)
{
  SharedDesktopBackgroundVisualHost::SetParentWallpaperHwnd(
    (SharedDesktopBackgroundVisualHost *)((a1 - 16) & -(__int64)(a1 != 0)),
    a2);
  return 0LL;
}
