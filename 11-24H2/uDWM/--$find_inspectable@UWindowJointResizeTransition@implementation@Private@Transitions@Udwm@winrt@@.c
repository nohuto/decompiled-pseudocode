/*
 * XREFs of ??$find_inspectable@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YAPEAUtype@?$abi@UIInspectable@Foundation@Windows@winrt@@X@01@PEBUWindowJointResizeTransition@implementation@Private@Transitions@Udwm@1@@Z @ 0x1800DE3FC
 * Callers:
 *     ?find_inspectable@?$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@winrt@@UEBAPEAUtype@?$abi@UIInspectable@Foundation@Windows@winrt@@X@impl@2@XZ @ 0x1800DEF70 (-find_inspectable@-$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::find_inspectable<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>(
        __int64 a1)
{
  return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((a1 + 8) & -(__int64)(a1 != 0));
}
