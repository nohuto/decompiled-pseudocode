/*
 * XREFs of ?ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800303A8
 * Callers:
 *     ?Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002FC0C (-Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18002E0BC (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180030370 (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x1800304D0 (--0-$shared_ptr@V-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Tran.c)
 *     ?ensure_data@?$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x180030500 (-ensure_data@-$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180030704 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAAXXZ @ 0x180030764 (-reset@-$shared_ptr@V-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180033668 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180047100 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Complete@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F1544 (-Complete@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::ReleaseTransitionState(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this)
{
  winrt::Windows::Foundation::IUnknown *v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-10h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v1 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *)((char *)this + 48);
  if ( !(unsigned __int8)winrt::Windows::Foundation::operator==((char *)this + 48, &v13) )
  {
    winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(v1);
    if ( v1 != (winrt::Windows::Foundation::IUnknown *)&v13 )
    {
      if ( *(_QWORD *)v1 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v1);
      *(_QWORD *)v1 = 0LL;
    }
  }
  v3 = *((_QWORD *)this + 7);
  v4 = tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::ensure_data((char *)this + 104);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>(
    &v11,
    v4);
  v5 = v11;
  tip::details::test_common_data<0>::begin_update(v11 + 8);
  v6 = v5 + 188;
  if ( !v5 )
    v6 = 12LL;
  *(_BYTE *)v6 = v3 == 0;
  if ( v5 )
  {
    tip::details::test_common_data<0>::end_update(v5 + 8);
    std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::reset(&v11);
  }
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v7 = tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::ensure_data((char *)this + 104);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>(
    &v11,
    v7);
  v8 = v11;
  tip::details::test_common_data<0>::begin_update(v11 + 8);
  v9 = v8 + 189;
  if ( !v8 )
    v9 = 13LL;
  *(_BYTE *)v9 = 1;
  if ( v8 )
  {
    tip::details::test_common_data<0>::end_update(v8 + 8);
    std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::reset(&v11);
  }
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v10 = *((_QWORD *)this + 13);
  if ( v10 )
    tip::details::test_common_data<0>::complete(v10 + 8);
}
