/*
 * XREFs of ?Show@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAH_N@Z @ 0x18060AA30
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x18060AA5C (-Show@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z.c)
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::Show(
        __int64 a1,
        bool a2)
{
  SharedDesktopBackgroundVisualHost::Show((SharedDesktopBackgroundVisualHost *)((a1 - 16) & -(__int64)(a1 != 0)), a2);
  return 0LL;
}
