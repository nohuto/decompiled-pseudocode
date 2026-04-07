/*
 * XREFs of ??0ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180095380
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x18004A1D4 (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ??$make@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1800953A0 (--$make@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA-A.c)
 */

winrt::Udwm::Transitions::Private::ScreenRotationTransition *__fastcall winrt::Udwm::Transitions::Private::ScreenRotationTransition::ScreenRotationTransition(
        winrt::Udwm::Transitions::Private::ScreenRotationTransition *this)
{
  winrt::make<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,>();
  return this;
}
