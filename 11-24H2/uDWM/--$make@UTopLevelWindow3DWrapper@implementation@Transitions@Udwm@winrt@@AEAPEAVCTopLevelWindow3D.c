/*
 * XREFs of ??$make@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@@winrt@@YA?A_PAEAPEAVCTopLevelWindow3D@@@Z @ 0x18004C7EC
 * Callers:
 *     ?PutTransitionVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCTopLevelWindow3D@@@Z @ 0x18004AAB0 (-PutTransitionVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCTopLevelWi.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$create_and_initialize@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@@impl@winrt@@YAPEAUTopLevelWindow3DWrapper@implementation@Transitions@Udwm@1@AEAPEAVCTopLevelWindow3D@@@Z @ 0x18004C824 (--$create_and_initialize@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@AEAPEAV.c)
 */

__int64 *__fastcall winrt::make<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,CTopLevelWindow3D * &>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rax

  v3 = winrt::impl::create_and_initialize<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,CTopLevelWindow3D * &>(a2);
  *a1 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((v3 + 8) & -(__int64)(v3 != 0));
  return a1;
}
