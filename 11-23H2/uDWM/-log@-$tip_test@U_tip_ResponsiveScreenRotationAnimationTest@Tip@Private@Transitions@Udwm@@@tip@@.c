/*
 * XREFs of ?log@?$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F69C8
 * Callers:
 *     ?DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4ResponsiveRotationTimelineReason@23456@@Z @ 0x1800F4B70 (-DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 *     ?OnAnimationComplete@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x1800F5490 (-OnAnimationComplete@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F5730 (-PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm.c)
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F59E8 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5EF0 (-StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitio.c)
 *     ?UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXHH@Z @ 0x1800F64B8 (-UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@w.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x180030500 (-ensure_data@-$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?log_message@?$test_common_data@$0A@@details@tip@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z @ 0x1800F2F5C (-log_message@-$test_common_data@$0A@@details@tip@@QEAAXV-$basic_string_view@DU-$char_traits@D@st.c)
 *     ?wstring_to_string@util@cereal@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@4@@Z @ 0x1800F4050 (-wstring_to_string@util@cereal@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 */

void __fastcall tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::log(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rdi
  void *Src; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp-20h]

  v3 = *tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::ensure_data(a1);
  cereal::util::wstring_to_string((char *)&Src, a2);
  tip::details::test_common_data<0>::log_message(v3 + 8);
  if ( v5 >= 0x10 )
    std::_Deallocate<16,0>(Src, v5 + 1);
}
