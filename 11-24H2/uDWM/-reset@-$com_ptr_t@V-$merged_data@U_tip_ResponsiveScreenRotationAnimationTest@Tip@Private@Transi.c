/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004C44C
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA@XZ @ 0x18004B314 (--1-$test_data_control@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Tr.c)
 *     ?ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004B784 (-ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x18004B8F0 (-SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW.c)
 *     ?PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800E1294 (-PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4Sh.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@AEAAKXZ @ 0x18004C470 (-Release@-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@.c)
 */

void *__fastcall wil::com_ptr_t<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>,wil::err_returncode_policy>::reset(
        void **a1)
{
  void *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (void *)tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::Release(result);
  return result;
}
