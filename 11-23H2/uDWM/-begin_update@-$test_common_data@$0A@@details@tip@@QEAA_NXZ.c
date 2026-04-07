/*
 * XREFs of ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180030370
 * Callers:
 *     ?SetRotationState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x18002FB80 (-SetRotationState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@U.c)
 *     ?ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800303A8 (-ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transit.c)
 *     ?log_failure@?$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x1800F2EB8 (-log_failure@-$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z.c)
 *     ?log_message@?$test_common_data@$0A@@details@tip@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z @ 0x1800F2F5C (-log_message@-$test_common_data@$0A@@details@tip@@QEAAXV-$basic_string_view@DU-$char_traits@D@st.c)
 *     ?PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F5730 (-PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm.c)
 * Callees:
 *     <none>
 */

bool __fastcall tip::details::test_common_data<0>::begin_update(__int64 a1)
{
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  return *(_QWORD *)(a1 + 152) && (*(_DWORD *)(a1 + 56) & 0x100) == 0;
}
