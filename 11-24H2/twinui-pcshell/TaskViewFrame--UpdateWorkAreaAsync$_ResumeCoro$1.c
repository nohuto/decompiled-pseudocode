/*
 * XREFs of TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x180285FD0
 * Callers:
 *     TaskViewFrame::UpdateWorkAreaAsync$_InitCoro$2 @ 0x180285EA8 (TaskViewFrame--UpdateWorkAreaAsync$_InitCoro$2.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18005155C (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?GetCurrentAsync@DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801E88B4 (-GetCurrentAsync@DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ??$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z @ 0x1801F8EA8 (--$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x18021D638 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ?DynamicSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180240638 (-DynamicSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shel.c)
 *     ?StaticSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18024171C (-StaticSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell.c)
 *     ?WindowPosition@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180241FCC (-WindowPosition@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult.c)
 *     ??0Point@Foundation@Windows@@QEAA@MM@Z @ 0x1802CF59C (--0Point@Foundation@Windows@@QEAA@MM@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032D080 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18033FBC8 (-await_resume@-$await_adapter@U-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsU.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805DB668 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1805DB668.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@@experimental@std@@@Z @ 0x1806B9AE8 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTa.c)
 *     ?ScreenPointToImmersiveMonitorClient@@YA?AVPoint@Foundation@Windows@@PEAUIImmersiveMonitor@@V123@@Z @ 0x1806BBD60 (-ScreenPointToImmersiveMonitorClient@@YA-AVPoint@Foundation@Windows@@PEAUIImmersiveMonitor@@V123.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
void __fastcall TaskViewFrame::UpdateWorkAreaAsync__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r15
  __int64 *v3; // rsi
  __int64 v4; // r14
  _QWORD *CurrentAsync; // rax
  const struct winrt::impl::slim_source_location *v6; // rax
  __int64 *v7; // rax
  float *v8; // r13
  float *v9; // r12
  double v10; // xmm0_8
  _DWORD *v11; // rax
  float *v12; // r13
  float *v13; // rax
  _BYTE pExceptionObject[104]; // [rsp+40h] [rbp-68h] BYREF
  float *v15; // [rsp+B8h] [rbp+10h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_14;
    case 2:
      v3 = (__int64 *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 265) + 40LL))(*(_QWORD *)(a1 + 265), a1 + 16) < 0 )
        goto LABEL_13;
      v4 = *(_QWORD *)(a1 + 257);
      if ( *(_QWORD *)(v4 + 176) )
        goto LABEL_10;
      CurrentAsync = winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection::GetCurrentAsync((_QWORD *)(a1 + 24));
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v6 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 224);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v6);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_QWORD *)(a1 + 40) = CurrentAsync;
      *(_QWORD *)(a1 + 48) = 0LL;
      *(_BYTE *)(a1 + 56) = 1;
      *v2 = 4;
      if ( !(unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,TaskViewFrame *,IImmersiveMonitor *>::promise_type>(
                               a1 + 32,
                               a1) )
      {
LABEL_9:
        v7 = (__int64 *)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>,1>::await_resume(
                          a1 + 32,
                          a1 + 64);
        v4 = *(_QWORD *)(a1 + 257);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(v4 + 176), v7);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 64));
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 32);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
        v3 = (__int64 *)(a1 + 16);
LABEL_10:
        winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
          (__int64 **)(v4 + 176),
          (_QWORD *)(a1 + 72),
          *v3);
        if ( *(_QWORD *)(a1 + 72) )
        {
          *(__m128i *)(v4 + 48) = _mm_loadu_si128((const __m128i *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                                                                     (__int64 *)(a1 + 72),
                                                                     (_OWORD *)(a1 + 80)));
          v15 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                           (__int64 *)(a1 + 72),
                           (_OWORD *)(a1 + 96));
          v8 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                          (__int64 *)(a1 + 72),
                          (_OWORD *)(a1 + 112));
          v9 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::StaticSafeWorkArea(
                          (__int64 *)(a1 + 72),
                          (_OWORD *)(a1 + 128));
          v10 = (float)((float)(v8[3] + v15[1])
                      - (float)(*((float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::StaticSafeWorkArea(
                                             (__int64 *)(a1 + 72),
                                             (_OWORD *)(a1 + 144))
                                + 3)
                              + v9[1]));
          *(double *)(v4 + 192) = v10;
          v11 = (_DWORD *)Windows::Foundation::Point::Point((Windows::Foundation::Point *)(a1 + 160), 0.0, v10);
          *(_DWORD *)(a1 + 176) = *v11;
          *(_DWORD *)(a1 + 180) = v11[1];
          *(double *)(v4 + 184) = *(float *)(ScreenPointToImmersiveMonitorClient(
                                               a1 + 168,
                                               *(_QWORD *)(v4 + 16),
                                               *(_QWORD *)(a1 + 176))
                                           + 4);
          v12 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
                           (__int64 *)(a1 + 72),
                           (_OWORD *)(a1 + 184))
              + 1;
          v13 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
                           (__int64 *)(a1 + 72),
                           (_OWORD *)(a1 + 200));
          XamlSwitcherTelemetry::WorkAreaUpdate<float &,float &,float,float,double &>(
            (float *)(v4 + 60),
            (float *)(v4 + 52),
            v13 + 3,
            v12,
            (double *)(v4 + 184));
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
LABEL_13:
        *(_QWORD *)(a1 + 216) = a1 - 112;
        *v2 = 0;
        if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend() )
        {
LABEL_14:
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x190);
        }
      }
      return;
    case 4:
      goto LABEL_9;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 32);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 24));
      goto LABEL_14;
    default:
      __debugbreak();
      return;
  }
}
