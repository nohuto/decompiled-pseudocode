/*
 * XREFs of Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180279750
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2 @ 0x18027960C (Util--TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800AC758 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@@Z @ 0x1800D63BC (-check_hresult@winrt@@YA-AUhresult@1@U21@@Z.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@@experimental@std@@@Z @ 0x18022F954 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_18022F954.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180248A54 (-await_ready@-$notify_awaiter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manage.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@?$notify_awaiter@AEAU?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF640 (-await_resume@-$notify_awaiter@AEAU-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@Q.c)
 *     ??$await_transform@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAU?$IAsyncOperation@_N@Foundation@Windows@2@@Z @ 0x1802E74FC (--$await_transform@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@-$promise_base@_ea_1802E74FC.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1802E7674 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView.c)
 *     ?release_ref@?$com_ptr@VJointResize@@@winrt@@AEAAXXZ @ 0x180392284 (-release_ref@-$com_ptr@VJointResize@@@winrt@@AEAAXXZ.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@UEAA@XZ @ 0x1805E167C (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@.c)
 *     ??$await_transform@Uawaitable@?1??resume_background@winrt@@YA@XZ@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAUawaitable@?1??resume_background@2@YA@XZ@@Z @ 0x180629E78 (--$await_transform@Uawaitable@-1--resume_background@winrt@@YA@XZ@@-$promise_base@Up_ea_180629E78.c)
 *     ??$as@UIBufferByteAccess@Streams@Storage@Windows@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x18070B358 (--$as@UIBufferByteAccess@Streams@Storage@Windows@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@@experimental@std@@@Z @ 0x18070B3E4 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStream@Stream.c)
 *     ??$await_transform@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAU?$IAsyncOperationWithProgress@II@Foundation@Windows@2@@Z @ 0x18070B3F0 (--$await_transform@U-$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@-$promise_base@U.c)
 *     ??0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z @ 0x18070E384 (--0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z.c)
 *     ??0InMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@QEAA@XZ @ 0x18070E40C (--0InMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$unique_ptr@XP6AHPEBX@Z@std@@QEAA@XZ @ 0x18070E9F8 (--1-$unique_ptr@XP6AHPEBX@Z@std@@QEAA@XZ.c)
 *     ?FlushAsync@?$consume_Windows_Storage_Streams_IOutputStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807115A4 (-FlushAsync@-$consume_Windows_Storage_Streams_IOutputStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?Length@?$consume_Windows_Storage_Streams_IBuffer@UIBuffer@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x180715820 (-Length@-$consume_Windows_Storage_Streams_IBuffer@UIBuffer@Streams@Storage@Windows@winrt@@@impl@.c)
 *     ?Seek@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x180718784 (-Seek@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?TryOpenFileMappingHandleForWindow@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@_JAEBUhstring@winrt@@@Z @ 0x1807197A0 (-TryOpenFileMappingHandleForWindow@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_re.c)
 *     ?WriteAsync@?$consume_Windows_Storage_Streams_IOutputStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIBuffer@Streams@Storage@Windows@3@@Z @ 0x18071A3B8 (-WriteAsync@-$consume_Windows_Storage_Streams_IOutputStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x18071AAE8 (-await_resume@-$notify_awaiter@U-$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18071AC70 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18071AC70.c)
 *     ?reset@?$unique_ptr@XP6AHPEBX@Z@std@@QEAAXPEAX@Z @ 0x18071C7E0 (-reset@-$unique_ptr@XP6AHPEBX@Z@std@@QEAAXPEAX@Z.c)
 *     ?return_value@promise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@QEAAX$$QEAUIRandomAccessStream@Streams@Storage@Windows@winrt@@@Z @ 0x18071C814 (-return_value@promise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStream@Streams@St.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall Util::TryOpenFileMappingAsStreamForWindowAsync__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r14
  __int64 v3; // rcx
  void *v4; // rcx
  LPVOID v5; // rax
  const void *v6; // r12
  signed int Error; // eax
  winrt *v8; // rcx
  _QWORD *v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // [rsp+60h] [rbp-98h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
    case 5:
      goto LABEL_20;
    case 2:
      *(_BYTE *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 304) = a1 - 112;
      *(_QWORD *)(a1 + 256) = ___await_transform_Uawaitable__1__resume_background_winrt__YA_XZ____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperation_UIRandomAccessStream_Streams_Storage_Windows_winrt___Foundation_Windows_winrt___JUhstring_4__experimental_std__U__IAsyncOperation_UIRandomAccessStream_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__X_impl_winrt__QEAA_A_P__QEAUawaitable__1__resume_background_2_YA_XZ__Z(
                                a1 - 112,
                                a1 + 24);
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        goto LABEL_4;
      *v2 = 4;
      ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
        v3,
        a1);
      return;
    case 4:
LABEL_4:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
      Util::TryOpenFileMappingHandleForWindow(a1 + 32, *(_QWORD *)(a1 + 321), a1 + 329);
      v4 = *(void **)(a1 + 32);
      if ( !v4 || v4 == (void *)-1LL )
      {
        *(_QWORD *)(a1 + 40) = 0LL;
        v13 = *(_QWORD *)(a1 + 304);
        std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type::return_value(
          v13,
          a1 + 40);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 40));
        wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a1 + 32));
      }
      else
      {
        *(_QWORD *)(a1 + 48) = UnmapViewOfFile;
        *(_QWORD *)(a1 + 56) = 0LL;
        v5 = MapViewOfFile(v4, 4u, 0, 0, 0LL);
        std::unique_ptr<void,int (*)(void const *)>::reset(a1 + 48, v5);
        v6 = *(const void **)(a1 + 56);
        if ( v6 )
          Error = 0;
        else
          Error = ResultFromKnownLastError();
        winrt::check_hresult((int *)(a1 + 64), Error);
        if ( !VirtualQuery(v6, (PMEMORY_BASIC_INFORMATION)(a1 + 72), 0x30uLL) )
          winrt::throw_last_error(v8);
        v17 = *(_DWORD *)(a1 + 96);
        winrt::Windows::Storage::Streams::Buffer::Buffer((winrt::Windows::Storage::Streams::Buffer *)(a1 + 120), v17);
        winrt::impl::consume_Windows_Storage_Streams_IBuffer<winrt::Windows::Storage::Streams::IBuffer>::Length(
          a1 + 120,
          v17);
        v9 = (_QWORD *)winrt::Windows::Foundation::IUnknown::as<Windows::Storage::Streams::IBufferByteAccess>(
                         a1 + 120,
                         a1 + 128);
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 24LL))(*v9, a1 + 136);
        winrt::check_hresult((int *)(a1 + 144), v10);
        winrt::com_ptr<JointResize>::release_ref(a1 + 128);
        memcpy_0(*(void **)(a1 + 136), v6, v17);
        winrt::Windows::Storage::Streams::InMemoryRandomAccessStream::InMemoryRandomAccessStream((winrt::Windows::Storage::Streams::InMemoryRandomAccessStream *)(a1 + 152));
        v11 = winrt::impl::consume_Windows_Storage_Streams_IOutputStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::WriteAsync(
                a1 + 152,
                a1 + 160,
                a1 + 120);
        v12 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,void>::await_transform<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>(
                *(_QWORD *)(a1 + 304),
                a1 + 168,
                v11);
        *(_QWORD *)(a1 + 272) = v12;
        if ( !winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::await_ready() )
        {
          *v2 = 6;
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type>(
            v12,
            a1);
          return;
        }
LABEL_15:
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::await_resume(*(_QWORD *)(a1 + 272));
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 168);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 160));
        v14 = winrt::impl::consume_Windows_Storage_Streams_IOutputStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::FlushAsync(
                a1 + 152,
                a1 + 200);
        v15 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::await_transform<winrt::Windows::Foundation::IAsyncOperation<bool>>(
                *(_QWORD *)(a1 + 304),
                a1 + 208,
                v14);
        *(_QWORD *)(a1 + 288) = v15;
        if ( !winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::await_ready() )
        {
          *v2 = 8;
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<bool>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,CopilotHotkeyManager *>::promise_type>(
            v15,
            a1);
          return;
        }
LABEL_18:
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<bool> &>::await_resume(*(_QWORD *)(a1 + 288));
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 208);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 200));
        winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Seek(a1 + 152);
        v13 = *(_QWORD *)(a1 + 304);
        std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type::return_value(
          v13,
          a1 + 152);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 152));
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 120));
        std::unique_ptr<void,int (*)(void const *)>::~unique_ptr<void,int (*)(void const *)>(a1 + 48);
        wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a1 + 32));
      }
      v16 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::final_suspend(
              v13,
              a1 + 248);
      *(_QWORD *)(a1 + 240) = v16;
      *v2 = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,void>::final_suspend_awaiter::await_suspend(v16) )
      {
LABEL_20:
        *(_QWORD *)(a1 + 304) = a1 - 112;
        std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,JointResize *>::promise_type::~promise_type(a1 - 112);
        winrt::hstring::~hstring((void **)(a1 + 329));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112));
      }
      return;
    case 6:
      goto LABEL_15;
    case 7:
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 168);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 160));
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 152));
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 120));
      std::unique_ptr<void,int (*)(void const *)>::~unique_ptr<void,int (*)(void const *)>(a1 + 48);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a1 + 32));
      goto LABEL_20;
    case 8:
      goto LABEL_18;
    case 9:
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 208);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 200));
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 152));
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 120));
      std::unique_ptr<void,int (*)(void const *)>::~unique_ptr<void,int (*)(void const *)>(a1 + 48);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a1 + 32));
      goto LABEL_20;
    default:
      __debugbreak();
      return;
  }
}
