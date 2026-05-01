/*
 * XREFs of FallbackFlyoutView::Show$_InitCoro$2 @ 0x1802553D4
 * Callers:
 *     ?Show@FallbackFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@AEBURect@345@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@5@_JAEBVCorrelationVector@@@Z @ 0x180255710 (-Show@FallbackFlyoutView@@UEAA-AUIAsyncAction@Foundation@Windows@winrt@@AEBURect@345@AEBW4Taskba.c)
 * Callees:
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x18006E100 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     FallbackFlyoutView::Show$_ResumeCoro$1 @ 0x180255520 (FallbackFlyoutView--Show$_ResumeCoro$1.c)
 *     ??0promise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@QEAA@XZ @ 0x1806C3F4C (--0promise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutVie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FallbackFlyoutView::Show__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rbx

  *(_QWORD *)(a2 + 65) = a8;
  *(_QWORD *)(a2 + 73) = a4;
  *(_QWORD *)(a2 + 81) = a5;
  *(_QWORD *)(a2 + 89) = a6;
  *(_QWORD *)(a2 + 97) = a7;
  *(_QWORD *)a2 = FallbackFlyoutView::Show__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v10 = a2 - 96;
  memset_0((void *)(a2 - 96), 0, 0x60uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type::promise_type(v10);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    v10,
    a3);
  *(_BYTE *)(a2 + 64) = 0;
  return FallbackFlyoutView::Show__ResumeCoro_1(a2);
}
