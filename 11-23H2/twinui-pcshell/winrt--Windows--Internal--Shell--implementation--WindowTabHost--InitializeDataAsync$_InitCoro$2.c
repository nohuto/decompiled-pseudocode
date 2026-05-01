/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_InitCoro$2 @ 0x18021A6F8
 * Callers:
 *     ?InitializeDataAsync@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18021A924 (-InitializeDataAsync@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_ResumeCoro$1 @ 0x18021A7B0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--InitializeDataAsync$_ResumeCoro$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 42) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 41) = 0;
  return winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync__ResumeCoro_1(a2);
}
