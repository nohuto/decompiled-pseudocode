/*
 * XREFs of ?NotifyFailure@?$test_watcher@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800F5460
 * Callers:
 *     <none>
 * Callees:
 *     ?log_failure@?$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x1800F2EB8 (-log_failure@-$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z.c)
 */

char __fastcall tip::test_watcher<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::NotifyFailure(
        __int64 a1,
        const struct wil::FailureInfo *a2)
{
  tip::details::test_common_data<0>::log_failure(*(_QWORD *)(a1 + 48) + 8LL, a2);
  return 0;
}
