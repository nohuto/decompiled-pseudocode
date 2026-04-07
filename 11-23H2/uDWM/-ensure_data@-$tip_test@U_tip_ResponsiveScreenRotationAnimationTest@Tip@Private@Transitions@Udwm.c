/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x180030500
 * Callers:
 *     ?SetRotationState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x18002FB80 (-SetRotationState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@U.c)
 *     ?Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002FC0C (-Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800303A8 (-ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transit.c)
 *     ?PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F5730 (-PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm.c)
 *     ?log@?$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F69C8 (-log@-$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@.c)
 * Callees:
 *     ??$make_shared@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@$$V@std@@YA?AV?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@0@XZ @ 0x180020FD4 (--$make_shared@V-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Trans.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180033668 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::ensure_data(
        _QWORD *a1)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  if ( !*a1 )
  {
    v3 = std::make_shared<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>,>(&v7);
    v4 = *v3;
    v5 = v3[1];
    *v3 = 0LL;
    v3[1] = 0LL;
    *a1 = v4;
    v6 = (std::_Ref_count_base *)a1[1];
    a1[1] = v5;
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  return a1;
}
