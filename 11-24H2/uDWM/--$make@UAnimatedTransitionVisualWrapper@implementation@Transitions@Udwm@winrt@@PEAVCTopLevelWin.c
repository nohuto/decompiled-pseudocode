/*
 * XREFs of ??$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWindow3D@@@winrt@@YA?A_P$$QEAPEAVCTopLevelWindow3D@@@Z @ 0x18004C1F4
 * Callers:
 *     ?CreateSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimatedTransitionVisualWrapper@345@UTopLevelWindow3DWrapper@345@@Z @ 0x18004BD94 (-CreateSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AUAnimatedTran.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$create_and_initialize@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWindow3D@@@impl@winrt@@YAPEAUAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@1@$$QEAPEAVCTopLevelWindow3D@@@Z @ 0x18004C8D4 (--$create_and_initialize@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@.c)
 */

__int64 *__fastcall winrt::make<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,CTopLevelWindow3D *>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rax

  v3 = winrt::impl::create_and_initialize<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,CTopLevelWindow3D *>(a2);
  *a1 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((v3 + 8) & -(__int64)(v3 != 0));
  return a1;
}
