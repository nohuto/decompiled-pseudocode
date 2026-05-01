/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_ResumeCoro$1 @ 0x1802569C0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_InitCoro$2 @ 0x1802568A8 (winrt--Windows--Internal--Shell--implementation--MeetAndChatFallbackProp--LoadStreamAsync$_InitC.c)
 * Callees:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180059158 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800683C0 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@St.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??$await_transform@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAU?$IAsyncOperation@_N@Foundation@Windows@2@@Z @ 0x1802E74FC (--$await_transform@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@-$promise_base@_ea_1802E74FC.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1802E7674 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1805E15F8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUW.c)
 *     ??B?$require_one@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@UIRandomAccessStream@2345@@impl@winrt@@QEBA?AUIRandomAccessStream@Streams@Storage@Windows@2@XZ @ 0x1806C90B0 (--B-$require_one@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@UIRandomAcce.c)
 *     ?OpenReadAsync@?$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIStorageFile@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806C91D0 (-OpenReadAsync@-$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIStorageFile@Stor.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1806C9284 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1806C9284.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=2
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // r14
  __int64 v3; // rax
  __int64 Async; // rax
  __int64 v5; // rax
  winrt::Windows::Foundation::IUnknown *v6; // rax
  __int64 v7; // rax

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_9;
    case 2:
      v3 = *(_QWORD *)(a1 + 113);
      if ( !*(_QWORD *)(v3 + 56) || *(_QWORD *)(v3 + 48) )
        goto LABEL_8;
      Async = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::IStorageFile>::OpenReadAsync(
                v3 + 56,
                a1 + 16);
      *(_QWORD *)(a1 + 96) = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::await_transform<winrt::Windows::Foundation::IAsyncOperation<bool>>(
                               a1 - 96,
                               a1 + 24,
                               Async);
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
      {
LABEL_7:
        v5 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_resume(
               *(_QWORD *)(a1 + 96),
               a1 + 56);
        v6 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::require_one<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType,winrt::Windows::Storage::Streams::IRandomAccessStream>::operator winrt::Windows::Storage::Streams::IRandomAccessStream(
                                                       v5,
                                                       a1 + 64);
        winrt::Windows::Foundation::IUnknown::operator=(
          (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)(a1 + 113) + 48LL),
          v6);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 64));
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 56));
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 24);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 16));
LABEL_8:
        v7 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::final_suspend(
               a1 - 96,
               a1 + 88);
        *(_QWORD *)(a1 + 80) = v7;
        *v2 = 0;
        if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(v7) )
        {
LABEL_9:
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 96);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 96));
        }
      }
      else
      {
        *v2 = 4;
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>();
      }
      return;
    case 4:
      goto LABEL_7;
    case 5:
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 24);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 16));
      goto LABEL_9;
    default:
      __debugbreak();
      return;
  }
}
