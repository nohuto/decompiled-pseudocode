/*
 * XREFs of CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x18020F120
 * Callers:
 *     CMultitaskingViewManager::ShowRequested$_InitCoro$2 @ 0x18020F02C (CMultitaskingViewManager--ShowRequested$_InitCoro$2.c)
 * Callees:
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x180036DD0 (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B420 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ @ 0x18004B7E4 (-EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ.c)
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x18004BBB0 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?GetDeferral@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180065908 (-GetDeferral@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellVie.c)
 *     ??$await_transform@AEAUapartment_context@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCActionCenterExperienceManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEAA?A_PAEAUapartment_context@winrt@@@Z @ 0x180065BEC (--$await_transform@AEAUapartment_context@winrt@@@promise_type@-$coroutine_traits@Ufire_and_forge.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x18006D1B4 (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?Complete@?$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006D4F0 (-Complete@-$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winr.c)
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006D9B8 (-Options@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequested.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x180072C04 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienc.c)
 *     ?InputDeviceKind@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180072E48 (-InputDeviceKind@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?copy_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXPEAVCMultitaskingViewManager@@@Z @ 0x180140060 (-copy_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXPEAVCMultitaskingViewManager@@@Z.c)
 *     ?release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x1801411F0 (-release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?await_resume@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801B3360 (-await_resume@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator() @ 0x18020DF98 (_lambda_2b601edba18b4fdf43345f97c13ddcab_--operator().c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ?InvocationPoint@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D5284 (-InvocationPoint@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?InvokerWindowId@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D52C8 (-InvokerWindowId@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?release_ref@?$com_ptr@VJointResize@@@winrt@@AEAAXXZ @ 0x180392284 (-release_ref@-$com_ptr@VJointResize@@@winrt@@AEAAXXZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync_::_16_::_parameters_::__parameters_ @ 0x180416844 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync_--_16_.c)
 *     ?EnsureExplorerInForeground@CMultitaskingViewManager@@AEAAJXZ @ 0x18055363C (-EnsureExplorerInForeground@CMultitaskingViewManager@@AEAAJXZ.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x1805537F0 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
void __fastcall CMultitaskingViewManager::ShowRequested__ResumeCoro_1(char *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rbx
  _QWORD *v5; // r13
  int IsMultitaskingViewVisible; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  int v10; // eax
  int v11; // eax
  winrt::Windows::Foundation::IUnknown *v12; // rax
  _QWORD *v13; // r12
  __int64 *v14; // rsi
  _QWORD *v15; // rax
  HWND v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, char *, GUID *, GUID *); // rbx
  int v20; // eax
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, _QWORD, GUID *, GUID *); // rbx
  int v23; // eax
  __int64 *v24; // rax
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  unsigned int v29; // ebx
  int v30; // eax
  int MultitaskingView; // eax
  int v32; // eax
  int v33; // [rsp+20h] [rbp-B8h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_41;
      case 2:
        *((_QWORD *)a1 + 22) = a1 + 9;
        winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::GetDeferral(
          (__int64 *)(a1 + 201),
          (_QWORD *)a1 + 2);
        *((_QWORD *)a1 + 3) = 0LL;
        v2 = *(_QWORD *)(a1 + 193);
        winrt::com_ptr<CMultitaskingViewManager>::copy_ref((volatile int **)a1 + 3, (volatile int *)v2);
        v4 = std::experimental::coroutine_traits<winrt::fire_and_forget,CActionCenterExperienceManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type::await_transform<winrt::apartment_context &>(
               v3,
               (__int64)(a1 + 40),
               (__int64 *)(v2 + 464));
        *((_QWORD *)a1 + 4) = v4;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          goto LABEL_6;
        *((_WORD *)a1 + 4) = 4;
        winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CJumpViewExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type>(
          v4,
          (__int64)a1);
        return;
      case 4:
LABEL_6:
        winrt::impl::notify_awaiter<winrt::apartment_context &>::await_resume(*((_QWORD *)a1 + 4));
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 40);
        *((_DWORD *)a1 + 16) = 0;
        v5 = *(_QWORD **)(a1 + 193);
        IsMultitaskingViewVisible = CMultitaskingViewManager::IsMultitaskingViewVisible(v5, 2LL, a1 + 64);
        if ( IsMultitaskingViewVisible < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x3CD,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            (const char *)(unsigned int)IsMultitaskingViewVisible,
            v33);
        if ( !*((_DWORD *)a1 + 16) )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
            1u,
            v7,
            v8);
          *((_QWORD *)a1 + 9) = 0LL;
          winrt::com_ptr<JointResize>::release_ref(a1 + 72);
          if ( (int)CMultitaskingViewManager::GetMultitaskingView(
                      (__int64)v5,
                      4u,
                      (__int64)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
                      (_QWORD *)a1 + 9) >= 0 )
          {
            v9 = ForegroundStaging::SetActive((ForegroundStaging *)(v5 + 41));
            if ( v9 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x3D6,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v9,
                v33);
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 9) + 40LL))(*((_QWORD *)a1 + 9));
          }
          winrt::com_ptr<JointResize>::release_ref(a1 + 72);
          v10 = CMultitaskingViewManager::EnsureExplorerInForeground((CMultitaskingViewManager *)v5);
          if ( v10 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x3DF,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)(unsigned int)v10);
          v11 = CMultitaskingViewManager::EnsureXamlCoreForThreadIfNeeded((CMultitaskingViewManager *)v5);
          if ( v11 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x3E1,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)(unsigned int)v11,
              v33);
          a1[80] = 0;
          v12 = winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
                  (winrt::Windows::Foundation::IUnknown *)(a1 + 88),
                  v5 + 56);
          lambda_2b601edba18b4fdf43345f97c13ddcab_::operator()((__int64)(a1 + 80), (__int64)(a1 + 96), v12);
          v13 = a1 + 104;
          *((_QWORD *)a1 + 13) = 0LL;
          v14 = (__int64 *)(*((_QWORD *)a1 + 22) + 192LL);
          v15 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                  v14,
                  (_QWORD *)a1 + 14);
          v16 = (HWND)winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvokerWindowId(v15);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 112));
          if ( v16 )
          {
            v17 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                    v14,
                    (_QWORD *)a1 + 15);
            winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvocationPoint(
              v17,
              a1 + 128);
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 120));
            *((_DWORD *)a1 + 34) = (int)*((float *)a1 + 32);
            *((_DWORD *)a1 + 35) = (int)*((float *)a1 + 33);
            MapWindowPoints(v16, 0LL, (LPPOINT)a1 + 17, 1u);
            v18 = v5[30];
            v19 = *(__int64 (__fastcall **)(__int64, char *, GUID *, GUID *))(*(_QWORD *)v18 + 96LL);
            winrt::com_ptr<JointResize>::release_ref(a1 + 104);
            v33 = (_DWORD)a1 + 104;
            v20 = v19(
                    v18,
                    a1 + 136,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
            if ( v20 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x3F4,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v20);
          }
          if ( !*v13 )
          {
            v21 = v5[30];
            v22 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *))(*(_QWORD *)v21 + 72LL);
            winrt::com_ptr<JointResize>::release_ref(a1 + 104);
            v33 = (_DWORD)a1 + 104;
            v23 = v22(v21, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
            if ( v23 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x3FA,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v23,
                v33);
          }
          v24 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                  v14,
                  (_QWORD *)a1 + 18);
          v25 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InputDeviceKind(v24);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 144));
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 && (v28 = v27 - 1) != 0 )
            {
              if ( v28 == 1 )
                v29 = 8;
              else
                v29 = 0;
            }
            else
            {
              v29 = 2;
            }
          }
          else
          {
            v29 = 1;
          }
          *((_QWORD *)a1 + 19) = 0LL;
          winrt::com_ptr<JointResize>::release_ref(a1 + 152);
          if ( (int)CMultitaskingViewManager::GetMultitaskingView(
                      (__int64)v5,
                      2u,
                      (__int64)&GUID_389221b7_bf28_4d25_9501_b4491d822be1,
                      (_QWORD *)a1 + 19) < 0 )
          {
            *((_QWORD *)a1 + 20) = 0LL;
            winrt::com_ptr<JointResize>::release_ref(a1 + 160);
            MultitaskingView = CMultitaskingViewManager::CreateMultitaskingView(
                                 (__int64)v5,
                                 2u,
                                 (__int64)&GUID_389221b7_bf28_4d25_9501_b4491d822be1,
                                 (int)a1 + 160);
            if ( MultitaskingView < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x41C,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)MultitaskingView,
                v33);
            v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 20) + 48LL))(
                    *((_QWORD *)a1 + 20),
                    v5[30],
                    *v13,
                    v29);
            if ( v32 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x420,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v32);
            winrt::com_ptr<JointResize>::release_ref(a1 + 160);
          }
          else
          {
            v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 19) + 48LL))(
                    *((_QWORD *)a1 + 19),
                    v5[30],
                    *v13,
                    v29);
            if ( v30 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x417,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v30);
          }
          winrt::com_ptr<JointResize>::release_ref(a1 + 152);
          winrt::com_ptr<JointResize>::release_ref(a1 + 104);
        }
        winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((_QWORD *)(*((_QWORD *)a1 + 22) + 192LL));
        winrt::impl::consume_Windows_Foundation_IDeferral<winrt::Windows::Foundation::IDeferral>::Complete((_QWORD *)a1 + 2);
        winrt::com_ptr<CMultitaskingViewManager>::release_ref((_QWORD *)a1 + 3);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 16));
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
          a1,
          a1 + 168);
        goto LABEL_41;
      case 5:
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 40);
        winrt::com_ptr<CMultitaskingViewManager>::release_ref((_QWORD *)a1 + 3);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 16));
LABEL_41:
        winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync_::_16_::_parameters_::__parameters_(a1 + 193);
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
