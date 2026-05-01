/*
 * XREFs of _lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator() @ 0x180222A20
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___::Invoke @ 0x1806BC950 (CAsyncCallbackWithLambda__lambda_a3b1a5efa940eb4938a491b1a4a3cfe8___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007D1B8 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     ??$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18007D3B0 (--$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA-AUISwitchItem@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801D9B60 (-CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEB.c)
 *     ??$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x180222EE4 (--$convert_from_abi@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA-.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x18028C6B4 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BC1C (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?SnapPending@SnapAssistState@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x1802B2384 (-SnapPending@SnapAssistState@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@winrt@@@Z.c)
 *     ??$query@UIXamlSnapAssistViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIXamlSnapAssistViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802B3A30 (--$query@UIXamlSnapAssistViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_p.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C88A8 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___ @ 0x1806BC110 (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_663ef704f9ce.c)
 *     ?SnapWindowFromSnapAssist@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_K0AEBURect@Foundation@Windows@3@AEBW4SnapArrangementOptions@WindowSnapping@Shell@Internal@63@@Z @ 0x1806BCF24 (-SnapWindowFromSnapAssist@-$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@U.c)
 *     ?GetTargetRegion@SnapAssistState@@QEAA?AUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@XZ @ 0x1806BDA14 (-GetTargetRegion@SnapAssistState@@QEAA-AUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator()(__int64 a1)
{
  struct IUnknown *v2; // r12
  __int64 (__fastcall ****ApplicationViewForItem)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  struct IApplicationView *v4; // rdx
  __int64 (__fastcall ***v5)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  HWND WindowForView; // r14
  _QWORD *v7; // rdi
  SnapAssistState **v8; // rsi
  __int64 v9; // rcx
  __int64 *Timer; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  void (__fastcall *v13)(__int64, _BYTE *, winrt *); // r13
  winrt *v14; // r8
  int TargetRegion; // eax
  const char *v16; // r9
  __int64 result; // rax
  int v18; // [rsp+20h] [rbp-B8h]
  __int64 v19; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-98h] BYREF
  __int64 v22; // [rsp+48h] [rbp-90h] BYREF
  __int64 v23; // [rsp+50h] [rbp-88h] BYREF
  __int64 v24; // [rsp+58h] [rbp-80h] BYREF
  __int64 v25; // [rsp+60h] [rbp-78h] BYREF
  std::_Ref_count_base *v26; // [rsp+68h] [rbp-70h]
  _QWORD v27[2]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v28[16]; // [rsp+80h] [rbp-58h] BYREF
  __int64 (__fastcall ***v29)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+90h] [rbp-48h]
  _BYTE v30[24]; // [rsp+98h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v2 = *(struct IUnknown **)(a1 + 8);
  try
  {
    ApplicationViewForItem = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))AppViewDataSourceHelpers::TryGetApplicationViewForItem(&v23, *(_QWORD *)(a1 + 8));
    v5 = *ApplicationViewForItem;
    *ApplicationViewForItem = 0LL;
    v29 = v5;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( !v5 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x44,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\guidedsnapassistviewcontroller.cpp",
        (const char *)0x8000FFFFLL,
        v18);
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(v5, v4);
    if ( !WindowForView )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x47,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\guidedsnapassistviewcontroller.cpp",
        (const char *)0x80070057LL,
        v18);
    v7 = *(_QWORD **)(a1 + 16);
    v8 = (SnapAssistState **)(v7 + 48);
    v9 = v7[48];
    if ( (unsigned __int64)((__int64)(*(_QWORD *)(v9 + 56) - *(_QWORD *)(v9 + 48)) >> 5) <= 1 )
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                              v9 + 200,
                              &v20)
               + 287LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v20);
      wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
        &v20,
        v7 + 10);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v25, v7 + 48);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v27, &v25);
      wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
        v28,
        &v20);
      winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___(
        &v19,
        v27);
      v24 = 5000000LL;
      Timer = (__int64 *)winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(
                           (__int64)&v21,
                           (__int64)&v19,
                           (__int64)&v24);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v7 + 47, Timer);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
      if ( v19 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v19);
      if ( v26 )
        std::_Ref_count_base::_Decref(v26);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
    }
    v11 = wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IXamlSnapAssistViewHostInternal>(
            v7 + 7,
            &v21);
    v12 = *(_QWORD *)v11;
    v13 = *(void (__fastcall **)(__int64, _BYTE *, winrt *))(**(_QWORD **)v11 + 40LL);
    v14 = from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>((winrt *)&v20, v2);
    v13(v12, v30, v14);
    if ( v20 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v20);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    SnapAssistState::SnapPending(*v8, WindowForView, (const struct winrt::Windows::Foundation::Rect *)v30);
    wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>(&v22, v7[21]);
    LODWORD(v19) = 2;
    TargetRegion = SnapAssistState::GetTargetRegion(*v8, v27);
    winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapWindowFromSnapAssist(
      (unsigned int)&v22,
      (_DWORD)WindowForView,
      *((_QWORD *)*v8 + 19),
      TargetRegion + 8,
      (__int64)&v19);
    if ( v22 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v22);
    ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*v5)[2])(v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6E,
                           (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\guidedsnapassistviewcontroller.cpp",
                           v16);
  }
  return result;
}
