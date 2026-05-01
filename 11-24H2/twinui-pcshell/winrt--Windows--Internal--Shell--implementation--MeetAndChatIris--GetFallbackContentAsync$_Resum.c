/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1805FCE20
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_InitCoro$2 @ 0x1805FCCEC (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_InitC.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x180050E68 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800537E8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801CDA40 (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@@experimental@std@@@Z @ 0x18032A448 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView@UMeetAndChat.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032D080 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180335978 (-await_resume@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180335A4C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180335A4C.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@UEAA@XZ @ 0x180348740 (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foundation@Windows@w.c)
 *     ??$_Emplace_reallocate@UIAsyncAction@Foundation@Windows@winrt@@@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@AEAAPEAUIAsyncAction@Foundation@Windows@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x1805FC5F8 (--$_Emplace_reallocate@UIAsyncAction@Foundation@Windows@winrt@@@-$vector@UIAsyncAction@Foundatio.c)
 *     ??$create_and_initialize@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@impl@winrt@@YAPEAU?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@01@$$QEAV?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x1805FC7CC (--$create_and_initialize@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V.c)
 *     ?LoadStreamAsync@MeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ @ 0x1805FDD34 (-LoadStreamAsync@MeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@QEAA-AUIAs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // r12
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // r8d
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v6; // rbx
  __int64 v7; // r15
  struct winrt::impl::hstring_header **v8; // r14
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  __int64 *v12; // rbx
  _QWORD *v13; // r14
  _QWORD *v14; // rax
  __int64 *StreamAsync; // rax
  __int64 *v16; // r8
  __int64 *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 *v21; // r14
  __int64 v22; // rbx
  __int64 *v23; // rax
  __int64 v24; // rdx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v25; // rbx
  const struct winrt::impl::slim_source_location *v26; // rax
  __int64 *View; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v28; // r14
  _BYTE pExceptionObject[136]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD *v30; // [rsp+F8h] [rbp+10h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_26;
    case 2:
      v3 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      v4 = winrt::impl::create_and_initialize<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>((__int64 *)(a1 + 16));
      *(_QWORD *)(a1 + 40) = (v4 + 16) & -(__int64)(v4 != 0);
      v6 = *v3;
      if ( v6 )
      {
        std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
          v6,
          *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 24));
        std::_Deallocate<16,0>(
          v6,
          (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 32) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      v7 = *(_QWORD *)(a1 + 225);
      if ( *(_BYTE *)(v7 + 72) )
      {
        v8 = *(struct winrt::impl::hstring_header ***)(a1 + 233);
        winrt::hstring::operator=(v8, (__int64 *)(v7 + 80), v5);
        winrt::hstring::operator=(v8 + 1, (__int64 *)(v7 + 88), v9);
        winrt::hstring::operator=(v8 + 2, (__int64 *)(v7 + 96), v10);
        winrt::hstring::operator=(v8 + 3, (__int64 *)(v7 + 104), v11);
        v12 = (__int64 *)(a1 + 48);
        *(_QWORD *)(a1 + 48) = 0LL;
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 64) = 0LL;
        v13 = *(_QWORD **)(v7 + 112);
        v14 = *(_QWORD **)(v7 + 120);
        v30 = v14;
        while ( v13 != v14 )
        {
          StreamAsync = (__int64 *)winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync(
                                     *v13,
                                     a1 + 72);
          v16 = StreamAsync;
          v17 = *(__int64 **)(a1 + 56);
          if ( v17 == *(__int64 **)(a1 + 64) )
          {
            std::vector<winrt::Windows::Foundation::IAsyncAction>::_Emplace_reallocate<winrt::Windows::Foundation::IAsyncAction>(
              (__int64)v12,
              v17,
              StreamAsync);
          }
          else
          {
            v18 = *StreamAsync;
            *v16 = 0LL;
            *v17 = v18;
            *(_QWORD *)(a1 + 56) = v17 + 1;
          }
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
          *(_QWORD *)(a1 + 80) = *v13 + 16LL;
          *(_DWORD *)(a1 + 160) = 0;
          *(_QWORD *)(a1 + 168) = 0LL;
          *(_QWORD *)(a1 + 176) = 0LL;
          v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 104LL))(*(_QWORD *)(a1 + 40));
          winrt::check_hresult((int *)(a1 + 184), v19, a1 + 160);
          *(_QWORD *)(a1 + 80) = 0LL;
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 80));
          ++v13;
          v12 = (__int64 *)(a1 + 48);
          v14 = v30;
        }
        v20 = *v12;
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(a1 + 56);
        v21 = (__int64 *)(a1 + 104);
        while ( 1 )
        {
          *(_QWORD *)(a1 + 88) = v20;
          v22 = a1 - 112;
          if ( v20 == *(_QWORD *)(a1 + 96) )
            break;
          if ( *(_DWORD *)(v22 + 96) == 2 )
          {
            v26 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 192);
            winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v26);
            throw (winrt::hresult_canceled *)pExceptionObject;
          }
          *v21 = 0LL;
          *(_QWORD *)(a1 + 112) = v20;
          *(_QWORD *)(a1 + 120) = 0LL;
          *(_BYTE *)(a1 + 128) = 1;
          *v2 = 4;
          if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type>(
                                  v21,
                                  a1) )
            return;
LABEL_16:
          v21 = (__int64 *)(a1 + 104);
          winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_resume(a1 + 104);
          winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 104));
          v20 = *(_QWORD *)(a1 + 88) + 8LL;
        }
        View = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
                 (__int64 **)(a1 + 40),
                 (_QWORD *)(a1 + 136));
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(v22 + 104), View);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 136));
        v28 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 48);
        if ( v28 )
        {
          std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
            v28,
            *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 56));
          std::_Deallocate<16,0>(
            v28,
            (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 64) - (_QWORD)v28) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
      }
      else
      {
        v22 = a1 - 112;
        v23 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
                (__int64 **)(a1 + 40),
                (_QWORD *)(a1 + 144));
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 - 112 + 104), v23);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 144));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
      }
      *(_QWORD *)(a1 + 152) = v22;
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 152),
              v24) )
      {
LABEL_26:
        std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type::~promise_type((__int64 *)(a1 - 112));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x170);
      }
      return;
    case 4:
      goto LABEL_16;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 104));
      v25 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 48);
      if ( v25 )
      {
        std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
          v25,
          *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 56));
        std::_Deallocate<16,0>(
          v25,
          (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 64) - (_QWORD)v25) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
      goto LABEL_26;
    default:
      __debugbreak();
      return;
  }
}
