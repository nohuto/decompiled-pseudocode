/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_InitCoro$2 @ 0x18027CF78
 * Callers:
 *     ?final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AUfire_and_forget@6@V?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x18027D230 (-final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AUfire_and_forget@.c)
 * Callees:
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release_::_3_::_parameters_::_parameters_ @ 0x18027C7A0 (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release_--_3_--_paramete.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_ResumeCoro$1 @ 0x18027D060 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release__InitCoro_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // r8
  _DWORD *v5; // r10
  _BYTE *v6; // r11

  winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release_::_3_::_parameters_::_parameters_(
    (_QWORD *)(a3 + 82),
    a4);
  *(_QWORD *)v4 = winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release__ResumeCoro_1;
  *(_DWORD *)(v4 + 8) = *v5 != 0 ? 2 : 65538;
  *v6 = 0;
  *(_BYTE *)(v4 + 81) = 0;
  return winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release__ResumeCoro_1(v4);
}
