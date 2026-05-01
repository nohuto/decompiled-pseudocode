/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_ResumeCoro$1 @ 0x18057E180
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_InitCoro$2 @ 0x18057E120 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--InitializeDataAsync$_InitCoro$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180051A30 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18007DBF0 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync__ResumeCoro_1(
        __int64 a1,
        __int64 a2,
        void *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rsi

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_15;
      case 2:
        v3 = *(_QWORD *)(a1 + 49);
        *(_QWORD *)(a1 + 16) = 0LL;
        *(_QWORD *)(a1 + 32) = 0LL;
        if ( v3 )
        {
          *(_QWORD *)(a1 + 16) = v3;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
          *(_QWORD *)(a1 + 32) = v3;
        }
        *(_BYTE *)(a1 + 24) = 0;
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(a1, (void (*)(void *, void *))a1, a3);
        return;
      case 4:
        v4 = *(_QWORD *)(a1 + 49);
        if ( *(_DWORD *)(v4 + 424) )
          winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindExistingWindows(*(RTL_SRWLOCK **)(a1 + 49));
        if ( *(_QWORD *)(v4 + 432) )
          winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications((RTL_SRWLOCK *)v4);
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_15;
      case 5:
        if ( *(_QWORD *)(a1 + 32) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
LABEL_15:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x40);
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
