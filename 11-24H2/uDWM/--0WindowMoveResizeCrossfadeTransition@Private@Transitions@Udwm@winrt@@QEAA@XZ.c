/*
 * XREFs of ??0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18009AC5C
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x18004A1D4 (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18008C524 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 * Callees:
 *     ??$make@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18004D564 (--$make@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@.c)
 */

winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition *__fastcall winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition::WindowMoveResizeCrossfadeTransition(
        winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition *this,
        const struct std::nothrow_t *a2)
{
  winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,>(
    (__int64 *)this,
    a2);
  return this;
}
