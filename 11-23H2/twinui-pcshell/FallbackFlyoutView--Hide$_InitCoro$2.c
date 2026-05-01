/*
 * XREFs of FallbackFlyoutView::Hide$_InitCoro$2 @ 0x1802550A4
 * Callers:
 *     ?Hide@FallbackFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z @ 0x180255360 (-Hide@FallbackFlyoutView@@UEAA-AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x18006E100 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     FallbackFlyoutView::Hide$_ResumeCoro$1 @ 0x1802551D0 (FallbackFlyoutView--Hide$_ResumeCoro$1.c)
 *     ??0promise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@QEAA@XZ @ 0x1806C3FD4 (--0promise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFall_ea_1806C3FD4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FallbackFlyoutView::Hide__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rbx

  *(_QWORD *)(a2 + 41) = a5;
  *(_QWORD *)(a2 + 49) = a4;
  *(_QWORD *)a2 = FallbackFlyoutView::Hide__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v7 = a2 - 96;
  memset_0((void *)(a2 - 96), 0, 0x60uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type::promise_type(v7);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    v7,
    a3);
  *(_BYTE *)(a2 + 40) = 0;
  return FallbackFlyoutView::Hide__ResumeCoro_1(a2);
}
