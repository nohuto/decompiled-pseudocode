/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu$_ResumeCoro$1 @ 0x18063B240
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu$_InitCoro$2 @ 0x18063B1EC (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--ShowContextMenu$_InitCor.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0ShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1802AE958 (--0ShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032D080 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180335934 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QE.c)
 *     ?TryShowAsync@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUShowShellViewOptions@Shell@UI@WindowsUdk@3@@Z @ 0x1804620EC (-TryShowAsync@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@U.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindow@@UInputGestureOperation@Input@Internal@UI@Windows@2@AEBUInputGestureOperationEventArgs@56782@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@experimental@std@@@experimental@std@@@Z @ 0x18049B8C4 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCAppThumbnailWindo.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu__ResumeCoro_1(
        __int64 a1)
{
  _QWORD *v2; // rax

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_6;
    case 2:
      winrt::WindowsUdk::UI::Shell::ShowShellViewOptions::ShowShellViewOptions((winrt::WindowsUdk::UI::Shell::ShowShellViewOptions *)(a1 + 16));
      v2 = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::TryShowAsync(
             (__int64 **)(*(_QWORD *)(a1 + 65) + 104LL),
             (_QWORD *)(a1 + 24),
             (__int64 *)(a1 + 16));
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_QWORD *)(a1 + 40) = v2;
      *(_QWORD *)(a1 + 48) = 0LL;
      *(_BYTE *)(a1 + 56) = 1;
      *(_WORD *)(a1 + 8) = 4;
      if ( winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CAppThumbnailWindow *,winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs const &,enum MultitaskingViewGestureHandlerHelpers::GestureDirection>::promise_type>(
             a1 + 32,
             a1) )
      {
        return;
      }
      goto LABEL_5;
    case 4:
LABEL_5:
      winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume(a1 + 32);
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 32));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
      goto LABEL_6;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 32));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_6:
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)a1, (const struct std::nothrow_t *)0x50);
      break;
    default:
      __debugbreak();
      break;
  }
}
