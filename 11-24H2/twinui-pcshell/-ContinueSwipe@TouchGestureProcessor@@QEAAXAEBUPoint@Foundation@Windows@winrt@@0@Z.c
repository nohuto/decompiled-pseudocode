/*
 * XREFs of ?ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z @ 0x180590060
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationUpdatedEventArgs___lambda_cd8c6316c996060cbab4a596526042be___::Invoke @ 0x1805912B0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1805912B0.c)
 * Callees:
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x1801B76C4 (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 *     ?GetSwipeType@TouchGestureProcessor@@AEAA?AW4TouchGestureType@@MM@Z @ 0x1802361D8 (-GetSwipeType@TouchGestureProcessor@@AEAA-AW4TouchGestureType@@MM@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?IsQuickSwipe@TouchGestureProcessor@@AEAA_NXZ @ 0x1802C8E60 (-IsQuickSwipe@TouchGestureProcessor@@AEAA_NXZ.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18058F5FC (--$open@V-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18058FCA8 (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18058FCF8 (--1-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@1@XZ @ 0x18058FD4C (--C-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TouchGestureProcessor::ContinueSwipe(
        TouchGestureProcessor *this,
        const struct winrt::Windows::Foundation::Point *a2,
        const struct winrt::Windows::Foundation::Point *a3)
{
  int SwipeType; // eax
  float *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  bool IsQuickSwipe; // al
  __int64 v12; // rcx
  int v13; // ebx
  _DWORD v14[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v15; // [rsp+28h] [rbp-18h]
  int v16; // [rsp+38h] [rbp-8h]
  void *v17; // [rsp+60h] [rbp+20h] BYREF
  void *v18; // [rsp+68h] [rbp+28h] BYREF

  SwipeType = TouchGestureProcessor::GetSwipeType((__int64)this, *(float *)a2, *((float *)a2 + 1));
  if ( *(_QWORD *)this && SwipeType )
  {
    v14[0] = SwipeType;
    v14[1] = *((_DWORD *)this + 27);
    v15 = 0LL;
    v16 = 1;
    *(float *)&v15 = *TouchGestureProcessor::PixelToHimetric(v8, (float *)&v17, v7);
    *((float *)&v15 + 1) = TouchGestureProcessor::PixelToHimetric(v9, (float *)&v17, (float *)a2)[1];
    *((_QWORD *)&v15 + 1) = *(_QWORD *)TouchGestureProcessor::PixelToHimetric(v10, (float *)&v17, (float *)a3);
    IsQuickSwipe = TouchGestureProcessor::IsQuickSwipe(this);
    v12 = *(_QWORD *)this;
    LOBYTE(v16) = IsQuickSwipe;
    v13 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v12 + 32LL))(v12, v14);
    tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v17);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v17) )
    {
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                     (__int64)&v17,
                     (__int64 *)&v18)
                + 292) = v13;
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v18);
    }
    wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v17);
  }
}
