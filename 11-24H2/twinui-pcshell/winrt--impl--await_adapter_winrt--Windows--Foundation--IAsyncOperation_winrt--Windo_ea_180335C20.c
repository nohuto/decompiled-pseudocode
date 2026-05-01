/*
 * XREFs of winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously$_ResumeCoro$1 @ 0x180335C20
 * Callers:
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously$_InitCoro$2 @ 0x180335B68 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Foundatio.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18032DF4C (-Cancel@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UValueSet@Collections@Foundat.c)
 */

void __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously__ResumeCoro_1(
        __int64 a1,
        __int64 a2,
        void *a3)
{
  _WORD *v3; // rbx

  try
  {
    v3 = (_WORD *)a1;
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
      case 5:
        goto LABEL_4;
      case 2:
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(a1, (void (*)(void *, void *))a1, a3);
        break;
      case 4:
        try
        {
          winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>>::Cancel((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 17));
        }
        catch ( winrt::hresult_error )
        {
          v3 = (_WORD *)a1;
        }
LABEL_4:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)((char *)v3 + 17));
        if ( v3[5] )
          operator delete(v3, (const struct std::nothrow_t *)0x20);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
