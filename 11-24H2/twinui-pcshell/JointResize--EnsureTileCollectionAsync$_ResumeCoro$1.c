/*
 * XREFs of JointResize::EnsureTileCollectionAsync$_ResumeCoro$1 @ 0x180539B40
 * Callers:
 *     JointResize::EnsureTileCollectionAsync$_InitCoro$2 @ 0x180539A20 (JointResize--EnsureTileCollectionAsync$_InitCoro$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004FA8C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0TileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1801B8E3C (--0TileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?CreateAsync@TileCollection@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUTileCollectionCreateOptions@2345@@Z @ 0x18021B60C (-CreateAsync@TileCollection@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUTileCollectionCreateOptions@.c)
 *     ?TileKindsSelector@?$consume_WindowsUdk_UI_StartScreen_ITileCollectionCreateOptions@UITileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4TileKinds@StartScreen@UI@WindowsUdk@3@@Z @ 0x18026867C (-TileKindsSelector@-$consume_WindowsUdk_UI_StartScreen_ITileCollectionCreateOptions@UITileCollec.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032D080 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180335A4C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180335A4C.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@UEAA@XZ @ 0x180348740 (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foundation@Windows@w.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@@experimental@std@@@Z @ 0x1805384E4 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UTileCollection@StartScreen.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18053C72C (-await_resume@-$await_adapter@U-$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
void __fastcall JointResize::EnsureTileCollectionAsync__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r15
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  const struct winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions *Async; // rax
  const struct winrt::impl::slim_source_location *v9; // rax
  __int64 v10; // r13
  __int64 *v11; // rax
  __int64 v12; // rdx
  _BYTE pExceptionObject[24]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v14; // [rsp+40h] [rbp-78h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_17;
    case 2:
      v3 = *(__int64 **)(a1 + 209);
      v4 = (__int64 *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( v3 )
      {
        *v4 = (__int64)v3;
        (*(void (__fastcall **)(__int64 *))(*v3 + 8))(v3);
      }
      if ( v3[32] )
      {
        v10 = a1 - 112;
      }
      else
      {
        winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions::TileCollectionCreateOptions((winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions *)(a1 + 24));
        *(_DWORD *)(a1 + 32) = 0;
        winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileCollectionCreateOptions<winrt::WindowsUdk::UI::StartScreen::ITileCollectionCreateOptions>::TileKindsSelector(
          (__int64 *)(a1 + 24),
          (unsigned int *)(a1 + 32));
        winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 40), L"JointResizeUTMCache.dat");
        *(_DWORD *)(a1 + 128) = 0;
        *(_QWORD *)(a1 + 136) = 0LL;
        *(_QWORD *)(a1 + 144) = 0LL;
        v5 = *(__int64 **)(a1 + 24);
        v6 = *v5;
        v14 = *(_QWORD *)(a1 + 40);
        v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 56))(v5);
        winrt::check_hresult((int *)(a1 + 152), v7, a1 + 128);
        *(_QWORD *)(a1 + 192) = a1 - 112;
        Async = winrt::WindowsUdk::UI::StartScreen::TileCollection::CreateAsync(
                  (const struct winrt::WindowsUdk::UI::StartScreen::TileCollectionCreateOptions *)(a1 + 72),
                  a1 + 24);
        if ( *(_DWORD *)(a1 - 112 + 96) == 2 )
        {
          v9 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 160);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v9);
          throw (winrt::hresult_canceled *)pExceptionObject;
        }
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_QWORD *)(a1 + 88) = Async;
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_BYTE *)(a1 + 104) = 1;
        *v2 = 4;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,JointResize *>::promise_type>(
                                (__int64 *)(a1 + 80),
                                a1) )
          return;
LABEL_13:
        v11 = (__int64 *)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>::await_resume(
                           a1 + 80,
                           a1 + 112);
        v3 = *(__int64 **)(a1 + 209);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v3 + 32, v11);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 112));
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 80));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
        v10 = *(_QWORD *)(a1 + 192);
        v4 = (__int64 *)(a1 + 16);
      }
      winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(v10 + 104), v3 + 32);
      if ( *v4 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v4);
      *(_QWORD *)(a1 + 120) = v10;
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 120),
              v12) )
      {
LABEL_17:
        std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type::~promise_type((__int64 *)(a1 - 112));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x150);
      }
      return;
    case 4:
      goto LABEL_13;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 80));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 16));
      goto LABEL_17;
    default:
      __debugbreak();
      return;
  }
}
