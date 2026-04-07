/*
 * XREFs of ??$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18004D318
 * Callers:
 *     ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z @ 0x18004D1B4 (-PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindo.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18008C524 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 *     ?PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800E70D8 (-PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$create_and_initialize@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUTransitionState@implementation@Transitions@Udwm@1@XZ @ 0x18004D34C (--$create_and_initialize@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@impl@winrt@.c)
 */

__int64 *__fastcall winrt::make<winrt::Udwm::Transitions::implementation::TransitionState,>(__int64 *a1)
{
  __int64 v2; // rax

  v2 = winrt::impl::create_and_initialize<winrt::Udwm::Transitions::implementation::TransitionState,>();
  *a1 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((v2 + 16) & -(__int64)(v2 != 0));
  return a1;
}
