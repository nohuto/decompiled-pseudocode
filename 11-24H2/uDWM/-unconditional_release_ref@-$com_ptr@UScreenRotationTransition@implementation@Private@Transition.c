/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18009B1B0
 * Callers:
 *     ??1?$com_ptr@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QEAA@XZ @ 0x18009AFC0 (--1-$com_ptr@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@QE.c)
 *     ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z @ 0x1800E0914 (-DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition>::Release(v2);
}
