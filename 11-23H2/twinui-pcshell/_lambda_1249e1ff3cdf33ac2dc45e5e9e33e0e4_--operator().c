/*
 * XREFs of _lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4_::operator() @ 0x180618D48
 * Callers:
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_35348ce9cc04f2ce32bf71f0093e03d7___lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4___::OnStoryboardStatusChanged @ 0x18061A110 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_35348ce9cc04f2ce32bf71f009_ea_18061A110.c)
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA?A_PXZ @ 0x1805FE91C (--$open_and_watch_errors@V-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_1249e1ff3cdf33ac2dc45e5e9e33e0e4_::operator()(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-58h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-50h]
  _BYTE v7[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v8[24]; // [rsp+38h] [rbp-40h] BYREF
  int v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+68h] [rbp-10h]

  tip::open_and_watch_errors<tip::tip_test<_tip_VDSlideAnimationPerfTest>>((struct wil::details::IFailureCallback *)v7);
  if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v7) )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v5,
      &v10);
    v2 = v5;
    tip::details::test_common_data<1>::begin_update(v5 + 8);
    v3 = v2 + 200;
    if ( !v2 )
      v3 = 24LL;
    std::wstring::assign((char *)v3, L"VirtualDesktopGestureCommit", 0x1BuLL);
    if ( v2 )
    {
      tip::details::test_common_data<1>::end_update(v2 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v5);
    }
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( v9 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v8);
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 48LL))(*a1);
}
