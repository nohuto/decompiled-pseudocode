/*
 * XREFs of CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1804A36D0
 * Callers:
 *     CMultitaskingViewManager::ShowRequested$_InitCoro$2 @ 0x1804A3660 (CMultitaskingViewManager--ShowRequested$_InitCoro$2.c)
 * Callees:
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x1800151E0 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180040F00 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800923EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x180103104 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18011590C (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180185E40 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x1801F2C8C (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 *     ?EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ @ 0x1801F9A7C (-EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18021DD9C (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180223D5C (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18023F9E8 (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180240684 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180240740 (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180360338 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?WorkAreaOffset@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18036E4BC (-WorkAreaOffset@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManag.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator() @ 0x1804A28AC (_lambda_2b601edba18b4fdf43345f97c13ddcab_--operator().c)
 *     ?EnsureExplorerInForeground@CMultitaskingViewManager@@AEAAJXZ @ 0x1804A2FD4 (-EnsureExplorerInForeground@CMultitaskingViewManager@@AEAAJXZ.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x1804A3230 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall CMultitaskingViewManager::ShowRequested__ResumeCoro_1(__int64 a1)
{
  volatile int *v1; // rdx
  __int64 *v2; // rcx
  __int64 v3; // r8
  __int64 *v4; // rcx
  __int64 v5; // r15
  int IsMultitaskingViewVisible; // eax
  char v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  int v15; // eax
  _QWORD *v16; // rdi
  __int64 **v17; // r13
  __int64 *v18; // rax
  HWND v19; // r12
  __int64 *v20; // rax
  __int64 v21; // r12
  __int64 (__fastcall *v22)(__int64, __int64, GUID *, GUID *); // r13
  int v23; // eax
  int v24; // eax
  __int64 *v25; // rax
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  unsigned int v30; // ebx
  _QWORD *v31; // r13
  int v32; // eax
  _QWORD *v33; // r12
  int MultitaskingView; // eax
  int v35; // eax
  volatile int *v36; // rdx
  int v37; // [rsp+20h] [rbp-B8h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  __int64 **v40; // [rsp+F0h] [rbp+18h]

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_57;
      case 2:
        *(_QWORD *)(a1 + 160) = a1 + 9;
        winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
          (__int64 **)(a1 + 185),
          (_QWORD *)(a1 + 16));
        v2 = (__int64 *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = 0LL;
        v3 = *(_QWORD *)(a1 + 177);
        if ( v3 )
        {
          *v2 = v3;
          winrt::com_ptr<CMultitaskingViewManager>::add_ref(v2, v1);
        }
        *(_QWORD *)(a1 + 32) = v3 + 456;
        *(_QWORD *)(a1 + 40) = 0LL;
        *(_WORD *)(a1 + 8) = 4;
        if ( winrt::impl::apartment_awaiter::await_suspend((__int64 **)(a1 + 32), (void (*)(void *, void *))a1) )
          return;
        goto LABEL_10;
      case 4:
LABEL_10:
        winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 32));
        *(_DWORD *)(a1 + 48) = 0;
        v5 = *(_QWORD *)(a1 + 177);
        IsMultitaskingViewVisible = CMultitaskingViewManager::IsMultitaskingViewVisible(v5, 2, (_DWORD *)(a1 + 48));
        if ( IsMultitaskingViewVisible < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x3C9,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            (const char *)(unsigned int)IsMultitaskingViewVisible,
            v37);
        if ( !*(_DWORD *)(a1 + 48) && !*(_BYTE *)(v5 + 472) )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
            1u,
            v7,
            v8);
          v9 = (_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 56) = 0LL;
          if ( (int)CMultitaskingViewManager::GetMultitaskingView(
                      v5,
                      4,
                      (__int64)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
                      (_QWORD *)(a1 + 56)) >= 0 )
          {
            v10 = ForegroundStaging::SetActive((ForegroundStaging *)(v5 + 320));
            if ( v10 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x3D3,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v10,
                v37);
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 40LL))(*v9);
          }
          if ( *v9 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 56));
          v11 = CMultitaskingViewManager::EnsureExplorerInForeground((CMultitaskingViewManager *)v5);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x3DC,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)(unsigned int)v11);
          v15 = CMultitaskingViewManager::EnsureXamlCoreForThreadIfNeeded((CMultitaskingViewManager *)v5, v12, v13, v14);
          if ( v15 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x3DE,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)(unsigned int)v15,
              v37);
          *(_BYTE *)(a1 + 64) = 0;
          *(_QWORD *)(a1 + 72) = *(_QWORD *)(v5 + 440);
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 72));
          lambda_2b601edba18b4fdf43345f97c13ddcab_::operator()(a1 + 64, (_BYTE *)(a1 + 80), (__int64 *)(a1 + 72));
          v16 = (_QWORD *)(a1 + 88);
          *(_QWORD *)(a1 + 88) = 0LL;
          v17 = (__int64 **)(*(_QWORD *)(a1 + 160) + 176LL);
          v40 = v17;
          v18 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                  v17,
                  (_QWORD *)(a1 + 96));
          v19 = (HWND)winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size(v18);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
          if ( v19 )
          {
            v20 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                    v17,
                    (_QWORD *)(a1 + 104));
            winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaOffset(
              v20,
              (_QWORD *)(a1 + 112));
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 104));
            *(_DWORD *)(a1 + 120) = (int)*(float *)(a1 + 112);
            *(_DWORD *)(a1 + 124) = (int)*(float *)(a1 + 116);
            MapWindowPoints(v19, 0LL, (LPPOINT)(a1 + 120), 1u);
            v21 = *(_QWORD *)(v5 + 240);
            v22 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *))(*(_QWORD *)v21 + 96LL);
            if ( *v16 )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 88));
            v37 = a1 + 88;
            v23 = v22(
                    v21,
                    a1 + 120,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
            if ( v23 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x3F1,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v23);
            v17 = v40;
          }
          if ( !*v16 )
          {
            v37 = a1 + 88;
            v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, GUID *))(**(_QWORD **)(v5 + 240) + 72LL))(
                    *(_QWORD *)(v5 + 240),
                    0LL,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
            if ( v24 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x3F7,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v24,
                v37);
          }
          v25 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                  v17,
                  (_QWORD *)(a1 + 128));
          v26 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction(v25);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 128));
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 && (v29 = v28 - 1) != 0 )
            {
              if ( v29 == 1 )
                v30 = 8;
              else
                v30 = 0;
            }
            else
            {
              v30 = 2;
            }
          }
          else
          {
            v30 = 1;
          }
          v31 = (_QWORD *)(a1 + 136);
          *(_QWORD *)(a1 + 136) = 0LL;
          if ( (int)CMultitaskingViewManager::GetMultitaskingView(
                      v5,
                      2,
                      (__int64)&GUID_389221b7_bf28_4d25_9501_b4491d822be1,
                      (_QWORD *)(a1 + 136)) < 0 )
          {
            v33 = (_QWORD *)(a1 + 144);
            *(_QWORD *)(a1 + 144) = 0LL;
            MultitaskingView = CMultitaskingViewManager::CreateMultitaskingView(
                                 v5,
                                 2u,
                                 (__int64)&GUID_389221b7_bf28_4d25_9501_b4491d822be1,
                                 a1 + 144);
            if ( MultitaskingView < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x419,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)MultitaskingView,
                v37);
            v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v33 + 48LL))(
                    *v33,
                    *(_QWORD *)(v5 + 240),
                    *v16,
                    v30);
            if ( v35 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x41D,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v35);
            if ( *v33 )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 144));
          }
          else
          {
            v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v31 + 48LL))(
                    *v31,
                    *(_QWORD *)(v5 + 240),
                    *v16,
                    v30);
            if ( v32 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x414,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v32);
          }
          if ( *v31 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 136));
          if ( *v16 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 88));
        }
        winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)(*(_QWORD *)(a1 + 160) + 176LL));
        winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run((__int64 *)(a1 + 16));
        if ( *(_QWORD *)(a1 + 24) )
          winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref((__int64 *)(a1 + 24), v36);
        goto LABEL_56;
      case 5:
        v4 = (__int64 *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 24) )
          winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(v4, &_ImageBase.unused);
LABEL_56:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_57:
        *(_QWORD *)(a1 + 160) = a1 + 9;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 185));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0xD0);
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
