/*
 * XREFs of _lambda_5f2a6c8ab12a39d6e57c75a98da72756_::operator() @ 0x18023680C
 * Callers:
 *     wistd::__function::__func__lambda_5f2a6c8ab12a39d6e57c75a98da72756__long___cdecl(void)_::operator() @ 0x180237AB0 (wistd--__function--__func__lambda_5f2a6c8ab12a39d6e57c75a98da72756__long___cdecl(void)_--operato.c)
 * Callees:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1800130C8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235824 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_5f2a6c8ab12a39d6e57c75a98da72756_::operator()(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rbx
  const char *v6; // r9
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  void *v10; // [rsp+38h] [rbp+10h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 152LL) + 96LL))(*(_QWORD *)(*a1 + 152LL));
  if ( v2 < 0 )
  {
    try
    {
      winrt::throw_hresult((unsigned int)v2);
    }
    catch ( ... )
    {
      *(_DWORD *)(v7 + 48) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x578,
                               (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                               v6);
      return (unsigned int)v9;
    }
  }
  v3 = *(_QWORD *)(a1[1] + 48LL);
  v10 = (void *)v3;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 312));
  tip2::details::shared_data<1,0,0>::begin_update(v3 + 8);
  *(_BYTE *)(v3 + 264) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v10);
  v9 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(*a1 + 152LL),
    (winrt::Windows::Foundation::IUnknown *)&v9);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v9);
  v4 = *(_QWORD *)(a1[1] + 48LL);
  v11 = (void *)v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 312));
  tip2::details::shared_data<1,0,0>::begin_update(v4 + 8);
  *(_BYTE *)(v4 + 267) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v11);
  if ( *(_DWORD *)(a1[1] + 32LL) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1[1] + 8LL));
  return 0LL;
}
