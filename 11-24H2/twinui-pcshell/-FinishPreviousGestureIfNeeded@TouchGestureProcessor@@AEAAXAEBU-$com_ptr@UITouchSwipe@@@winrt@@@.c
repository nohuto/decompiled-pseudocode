/*
 * XREFs of ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x180590220
 * Callers:
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1805923A0 (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800CFA10 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18058F5FC (--$open@V-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18058FCA8 (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18058FCF8 (--1-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@1@XZ @ 0x18058FD4C (--C-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TouchGestureProcessor::FinishPreviousGestureIfNeeded(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64 *, _DWORD *); // rax
  int v6; // edi
  _DWORD v7[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+28h] [rbp-18h]
  int v9; // [rsp+38h] [rbp-8h]
  void *v10; // [rsp+50h] [rbp+10h] BYREF
  void *v11; // [rsp+60h] [rbp+20h] BYREF

  v2 = (__int64 *)(a1 + 8);
  v3 = *(__int64 **)(a1 + 8);
  if ( v3 && v3 != *a2 )
  {
    v4 = *v3;
    v7[0] = 0;
    v7[1] = 0;
    v8 = 0LL;
    v5 = *(__int64 (__fastcall **)(__int64 *, _DWORD *))(v4 + 40);
    v9 = 1;
    v6 = v5(v3, v7);
    tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v10);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v10) )
    {
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                     (__int64)&v10,
                     (__int64 *)&v11)
                + 296) = v6;
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v11);
    }
    wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v10);
    v10 = 0LL;
    winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=(v2, (__int64 *)&v10);
    if ( v10 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v10);
  }
}
