/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_InitCoro$2 @ 0x18065F6AC
 * Callers:
 *     ?final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AUfire_and_forget@6@V?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x180294E90 (-final_release@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AUfire_and_forget@.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_ResumeCoro$1 @ 0x18065F710 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release__InitCoro_2(
        _BYTE *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rax

  v4 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a3 + 65) = v4;
  *(_QWORD *)a3 = winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release__ResumeCoro_1;
  *(_DWORD *)(a3 + 8) = *a2 != 0 ? 2 : 65538;
  *a1 = 0;
  *(_BYTE *)(a3 + 64) = 0;
  return winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release__ResumeCoro_1(a3);
}
