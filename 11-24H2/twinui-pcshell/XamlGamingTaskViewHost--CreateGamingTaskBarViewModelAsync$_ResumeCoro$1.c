/*
 * XREFs of XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1 @ 0x18069F140
 * Callers:
 *     XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_InitCoro$2 @ 0x18069F0E4 (XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_InitCoro$2.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18005346C (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x18014403C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18023F9E8 (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WindowsDeleteString_0 @ 0x1802D2D72 (WindowsDeleteString_0.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180360338 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?GamingAppAumid@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA@XZ @ 0x1803692E0 (-GamingAppAumid@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA@.c)
 *     ??0GamingTaskBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVString@Platform@@@Z @ 0x18069E14C (--0GamingTaskBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE.c)
 *     ?to_cx@@YAPE$AAVString@Platform@@AEBUhstring@winrt@@@Z @ 0x1806A2E9C (-to_cx@@YAPE$AAVString@Platform@@AEBUhstring@winrt@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rbx
  _WORD *v2; // rsi
  __int64 v3; // rcx
  void *v4; // r8
  __int64 *v5; // rax
  __int64 v6; // rdx
  HSTRING v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r8
  void **v10; // r9
  __int64 v11; // r14
  __int64 v12; // rsi
  int v13; // eax

  try
  {
    v1 = a1;
    v2 = (_WORD *)(a1 + 8);
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_12;
      case 2:
        winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)(a1 + 16));
        *(_BYTE *)(a1 + 32) = 0;
        *v2 = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v3, (void (*)(void *, void *))a1, v4);
        return;
      case 4:
        try
        {
          *(_QWORD *)(a1 + 40) = 0LL;
          v5 = winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration::GamingAppAumid((_QWORD *)(a1 + 48));
          if ( (__int64 *)(a1 + 40) != v5 )
          {
            v6 = *v5;
            *v5 = 0LL;
            winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)(a1 + 40), v6);
          }
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 48));
        }
        catch ( ... )
        {
          v1 = a1;
          v2 = (_WORD *)(a1 + 8);
        }
        *(_QWORD *)(v1 + 56) = v1 + 16;
        *(_QWORD *)(v1 + 64) = 0LL;
        *v2 = 6;
        if ( winrt::impl::apartment_awaiter::await_suspend((__int64 **)(v1 + 56), (void (*)(void *, void *))v1) )
          return;
        goto LABEL_11;
      case 5:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
        goto LABEL_12;
      case 6:
LABEL_11:
        winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(v1 + 56));
        *(_QWORD *)(v1 + 80) = 0LL;
        v7 = (HSTRING)to_cx(v1 + 40);
        *(_QWORD *)(v1 + 96) = v7;
        v11 = WindowsInternal::ComposableShell::Experiences::Switcher::GamingTaskBarElementViewModel::GamingTaskBarElementViewModel(
                v8,
                (__int64)v7,
                v9,
                v10);
        *(_QWORD *)(v1 + 88) = v11;
        v12 = __abi_winrt_ptr_ctor(v11);
        *(_QWORD *)(v1 + 72) = v12;
        __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v11);
        WindowsDeleteString_0(v7);
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v1 + 113) + 208LL) + 64LL))(
                *(_QWORD *)(*(_QWORD *)(v1 + 113) + 208LL),
                v12);
        __abi_ThrowIfFailed(v13);
        __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v12);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(v1 + 40));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 16));
        goto LABEL_12;
      case 7:
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 40));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_12:
        if ( *(_WORD *)(v1 + 10) )
          operator delete((void *)v1, (const struct std::nothrow_t *)0x80);
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
