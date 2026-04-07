/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18004BA74
 * Callers:
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@2@XZ @ 0x18004B5E4 (-watch_errors@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@.c)
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004B6AC (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004B784 (-ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x18004B8F0 (-SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@1@XZ @ 0x18004B9FC (--C-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions.c)
 *     ?PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800E1294 (-PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4Sh.c)
 *     ?log@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAAXPEBG@Z @ 0x1800E2B1C (-log@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitio.c)
 * Callees:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18004BAC8 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Privat.c)
 *     ?Release@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@AEAAKXZ @ 0x18004C470 (-Release@-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::ensure_data(
        void **a1)
{
  void **v2; // rax
  void *v3; // rdx
  void *v4; // rcx
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = (void **)tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>,>(&pv);
    v3 = *v2;
    *v2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::Release(v4);
    if ( pv )
      tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::Release(pv);
  }
  return a1;
}
