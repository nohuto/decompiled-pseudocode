/*
 * XREFs of ?GetParentWallpaperHwnd@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEA_K@Z @ 0x180609C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::GetParentWallpaperHwnd(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 248;
  if ( !a1 )
    v2 = 264LL;
  *a2 = *(_QWORD *)v2;
  return 0LL;
}
