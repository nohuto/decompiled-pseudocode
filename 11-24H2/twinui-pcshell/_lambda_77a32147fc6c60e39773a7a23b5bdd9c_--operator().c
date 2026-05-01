/*
 * XREFs of _lambda_77a32147fc6c60e39773a7a23b5bdd9c_::operator() @ 0x1805CC104
 * Callers:
 *     wistd::__function::__func__lambda_77a32147fc6c60e39773a7a23b5bdd9c__long___cdecl(void)_::operator() @ 0x1805CCF50 (wistd--__function--__func__lambda_77a32147fc6c60e39773a7a23b5bdd9c__long___cdecl(void)_--operato.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180025228 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CB3A8 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_77a32147fc6c60e39773a7a23b5bdd9c_::operator()(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rbx
  const char *v6; // r9
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  void *v13; // [rsp+70h] [rbp+18h] BYREF
  void *v14; // [rsp+78h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*a1 + 152LL);
  v8 = 0;
  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2);
  try
  {
    winrt::check_hresult(&v11, v3, (__int64)&v8);
    v4 = *(_QWORD *)(a1[1] + 56LL);
    v13 = (void *)v4;
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 320));
    tip2::details::shared_data<1,0,0>::begin_update(v4 + 8);
    *(_BYTE *)(v4 + 272) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v13);
    v12 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(*a1 + 152LL), &v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
    v5 = *(_QWORD *)(a1[1] + 56LL);
    v14 = (void *)v5;
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 320));
    tip2::details::shared_data<1,0,0>::begin_update(v5 + 8);
    *(_BYTE *)(v5 + 275) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(&v14);
    if ( *(_DWORD *)(a1[1] + 32LL) )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1[1] + 8LL));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x566,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v6);
  }
  return result;
}
