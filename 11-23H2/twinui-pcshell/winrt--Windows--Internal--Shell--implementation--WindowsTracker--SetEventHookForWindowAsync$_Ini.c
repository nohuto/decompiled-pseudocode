/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_InitCoro$2 @ 0x18027C7C4
 * Callers:
 *     ?SetEventHookForWindowAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@UWindowId@UI@56@@Z @ 0x18027CB58 (-SetEventHookForWindowAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA-AUI.c)
 * Callees:
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x18006E100 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1 @ 0x18027C8F0 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Res.c)
 *     ??0promise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@QEAA@XZ @ 0x18072536C (--0promise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWind_ea_18072536C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v7; // rbx

  *(_QWORD *)(a2 + 145) = a5;
  *(_QWORD *)(a2 + 153) = *a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v7 = a2 - 96;
  memset_0((void *)(a2 - 96), 0, 0x60uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type::promise_type(v7);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    v7,
    a3);
  *(_BYTE *)(a2 + 144) = 0;
  return winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync__ResumeCoro_1(a2);
}
