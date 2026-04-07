/*
 * XREFs of ??$make@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18004D564
 * Callers:
 *     ??0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18009AC5C (--0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$create_and_initialize@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x18004D290 (--$create_and_initialize@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions.c)
 */

__int64 *__fastcall winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,>(
        __int64 *a1,
        const struct std::nothrow_t *a2)
{
  char *v3; // rax

  v3 = winrt::impl::create_and_initialize<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,>(
         (__int64)a1,
         a2);
  *a1 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((unsigned __int64)(v3 + 16) & -(__int64)(v3 != 0LL));
  return a1;
}
