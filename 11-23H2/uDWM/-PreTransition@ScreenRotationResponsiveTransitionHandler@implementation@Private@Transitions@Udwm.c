/*
 * XREFs of ?PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F5730
 * Callers:
 *     ?PreTransition@?$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x1800F56D0 (-PreTransition@-$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Trans.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18002044C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E2FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Captured@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x18002EB74 (-Captured@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18002FB44 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180030370 (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x1800304D0 (--0-$shared_ptr@V-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Tran.c)
 *     ?ensure_data@?$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x180030500 (-ensure_data@-$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180030704 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAAXXZ @ 0x180030764 (-reset@-$shared_ptr@V-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180033668 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180047100 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Complete@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F1544 (-Complete@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x1800F36D4 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4974 (-CapturePreRotationVisuals@ScreenRotationResponsiveTransitionHandler@implementation@Private@Tran.c)
 *     ?log@?$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F69C8 (-log@-$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::PreTransition(
        _QWORD *a1,
        int a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  std::_Ref_count_base *v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rbx
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *v12; // rcx
  std::_Ref_count_base *v13[2]; // [rsp+20h] [rbp-50h] BYREF
  void **v14; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v18; // [rsp+68h] [rbp-8h]
  __int64 v19; // [rsp+A0h] [rbp+30h] BYREF

  v19 = 0LL;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 6, &v19) )
  {
    winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 6), a3);
    v6 = a1[13];
    if ( v6 && (*(_QWORD *)(v6 + 160) || (*(_DWORD *)(v6 + 64) & 0x100) != 0) )
      std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::reset(a1 + 13);
    v7 = tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::ensure_data(a1 + 13);
    tip::details::test_common_data<0>::start(*v7 + 8LL, v13);
    v8 = tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::ensure_data(a1 + 13);
    std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>(
      v13,
      v8);
    v9 = v13[0];
    tip::details::test_common_data<0>::begin_update((__int64)v13[0] + 8);
    v10 = (__int64)v9 + 184;
    if ( !v9 )
      v10 = 8LL;
    *(_DWORD *)v10 = a2;
    if ( v9 )
    {
      tip::details::test_common_data<0>::end_update((__int64)v9 + 8);
      std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::reset(v13);
    }
    if ( v13[1] )
      std::_Ref_count_base::_Decref(v13[1]);
    v13[0] = (std::_Ref_count_base *)L"TIP test started";
    v13[1] = (std::_Ref_count_base *)16;
    tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::log(a1 + 13, v13);
    v11 = tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::ensure_data(a1 + 13);
    v14 = &tip::test_watcher<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::`vftable';
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v15,
      (struct wil::details::IFailureCallback *)&v14,
      0LL,
      *v11 != 0LL);
    std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>(
      &v17,
      v11);
    if ( !winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::Captured((winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *)a1) )
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::CapturePreRotationVisuals(v12);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    if ( v16 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
  }
  else
  {
    winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(a3);
  }
}
