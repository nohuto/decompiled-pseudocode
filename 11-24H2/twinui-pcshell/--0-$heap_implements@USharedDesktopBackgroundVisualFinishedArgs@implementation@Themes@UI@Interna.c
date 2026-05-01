/*
 * XREFs of ??0?$heap_implements@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@QEAA@_N0@Z @ 0x1806086A4
 * Callers:
 *     ??$make@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@AEB_NAEB_N@winrt@@YA?A_PAEB_N0@Z @ 0x180607F04 (--$make@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@win.c)
 * Callees:
 *     ??0?$producers_base@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal@Windows@winrt@@V?$tuple@USharedDesktopBackgroundVisualFinishedArgs@Themes@UI@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180608890 (--0-$producers_base@USharedDesktopBackgroundVisualFinishedArgs@implementation@Themes@UI@Internal.c)
 */

__int64 __fastcall winrt::impl::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs>::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r10
  __int64 result; // rax
  char v6; // r9
  char v7; // r8

  LOBYTE(a4) = a2;
  winrt::impl::producers_base<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs,std::tuple<winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualFinishedArgs>>::producers_base<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs,std::tuple<winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualFinishedArgs>>(
    a1 + 16,
    a2,
    a3,
    a4);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v4 + 8) = 1LL;
  *(_QWORD *)v4 = &winrt::impl::heap_implements<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualFinishedArgs>::`vftable';
  result = v4;
  *(_BYTE *)(v4 + 24) = v6;
  *(_BYTE *)(v4 + 25) = v7;
  return result;
}
