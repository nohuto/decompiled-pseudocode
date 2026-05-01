/*
 * XREFs of _lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator() @ 0x180788F0C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___::Invoke @ 0x180789620 (CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E10 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x180223F44 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ??$query@UIXamlSnapAssistViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIXamlSnapAssistViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x18028DCCC (--$query@UIXamlSnapAssistViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_p.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateTimer@?$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUTimerElapsedHandler@Threading@System@Windows@3@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1802D2ED0 (-CreateTimer@-$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@Z @ 0x1803F734C (--$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@-$factory_cache_entry@UThreadPoolTimer@T.c)
 *     ??$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18068782C (--$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA-.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18076EB60 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     ??$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x180778820 (--$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA-AUISwitchItem@.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___ @ 0x180787C94 (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_663ef704f9ce.c)
 *     ?GetTargetRegion@SnapAssistState@@QEAA?AUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@XZ @ 0x18078B42C (-GetTargetRegion@SnapAssistState@@QEAA-AUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@.c)
 *     ?SnapPending@SnapAssistState@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x18078BD44 (-SnapPending@SnapAssistState@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator()(__int64 a1)
{
  __int64 (__fastcall ****ApplicationViewForItem)(ApplicationViewHelpers *, GUID *, __int64); // rax
  __int64 (__fastcall ***v3)(ApplicationViewHelpers *, GUID *, __int64); // rdi
  struct IApplicationView *v4; // rdx
  HWND WindowForView; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64, _BYTE *, _QWORD *); // r14
  _QWORD *v12; // r8
  __int64 TargetRegion; // rdx
  __int64 v14; // r8
  __int64 (__fastcall *v15)(__int64, HWND, _QWORD, std::_Ref_count_base **, int); // rax
  signed int v16; // eax
  const char *v17; // r9
  __int64 result; // rax
  int v19; // [rsp+20h] [rbp-B8h]
  void *v20[2]; // [rsp+30h] [rbp-A8h] BYREF
  std::_Ref_count_base *v21[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v22; // [rsp+50h] [rbp-88h] BYREF
  __int64 v23; // [rsp+58h] [rbp-80h] BYREF
  __int64 (__fastcall ***v24)(ApplicationViewHelpers *, GUID *, __int64); // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v25[2]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD v26[5]; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v27[56]; // [rsp+A0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  __int64 v29; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+E8h] [rbp+10h] BYREF
  __int64 v31; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+F8h] [rbp+20h] BYREF

  try
  {
    ApplicationViewForItem = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64))AppViewDataSourceHelpers::TryGetApplicationViewForItem(
                                                                                                     &v22,
                                                                                                     *(_QWORD *)(a1 + 8));
    v3 = *ApplicationViewForItem;
    *ApplicationViewForItem = 0LL;
    v24 = v3;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
    if ( !v3 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x44,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\guidedsnapassistviewcontroller.cpp",
        (const char *)0x8000FFFFLL,
        v19);
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(v3, v4);
    if ( !WindowForView )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x47,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\guidedsnapassistviewcontroller.cpp",
        (const char *)0x80070057LL,
        v19);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
    if ( (unsigned __int64)((__int64)(*(_QWORD *)(v6 + 56) - *(_QWORD *)(v6 + 48)) >> 5) <= 1 )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                    v6 + 176,
                    (__int64 *)v20)
               + 279) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(v20);
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 80LL);
      v23 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        v21,
        (_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL));
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        v26,
        v21);
      v26[2] = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___(
        &v30,
        v26);
      v32 = 5000000LL;
      v25[0] = &v30;
      v25[1] = &v32;
      v26[4] = &qword_180990CE8;
      _InterlockedIncrement64(&qword_180990CE8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics> )
      {
        winrt::impl::consume_Windows_System_Threading_IThreadPoolTimerStatics<winrt::Windows::System::Threading::IThreadPoolTimerStatics>::CreateTimer(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>,
          &v29,
          &v30,
          &v32);
        _InterlockedDecrement64(&qword_180990CE8);
      }
      else
      {
        _InterlockedDecrement64(&qword_180990CE8);
        winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>::call<_lambda_b19cf72fe9674443383aa89d5c22450b_ &>(
          v8,
          &v29,
          v25);
      }
      winrt::Windows::Foundation::IUnknown::operator=(
        (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)(a1 + 16) + 376LL),
        (winrt::Windows::Foundation::IUnknown *)&v29);
      if ( v29 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v29);
      if ( v30 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v30);
      if ( v21[1] )
        std::_Ref_count_base::_Decref(v21[1]);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    }
    v9 = wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IXamlSnapAssistViewHostInternal>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 16) + 56LL),
           v21);
    v10 = *v9;
    v11 = *(void (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)*v9 + 40LL);
    v12 = from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
            v20,
            *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))(a1 + 8));
    v11(v10, v27, v12);
    if ( v20[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v20);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v21);
    SnapAssistState::SnapPending(
      *(SnapAssistState **)(*(_QWORD *)(a1 + 16) + 384LL),
      WindowForView,
      (const struct winrt::Windows::Foundation::Rect *)v27);
    wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>(
      &v31,
      *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))(*(_QWORD *)(a1 + 16) + 168LL));
    TargetRegion = SnapAssistState::GetTargetRegion(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL), v26);
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
    v15 = *(__int64 (__fastcall **)(__int64, HWND, _QWORD, std::_Ref_count_base **, int))(*(_QWORD *)v31 + 48LL);
    *(_OWORD *)v21 = *(_OWORD *)(TargetRegion + 8);
    v16 = v15(v31, WindowForView, *(_QWORD *)(v14 + 128), v21, 2);
    if ( v16 < 0 )
      winrt::throw_hresult(v16);
    if ( v31 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v31);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v29) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x6E,
                     (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\guidedsnapassistviewcontroller.cpp",
                     v17);
    return (unsigned int)v29;
  }
  return result;
}
