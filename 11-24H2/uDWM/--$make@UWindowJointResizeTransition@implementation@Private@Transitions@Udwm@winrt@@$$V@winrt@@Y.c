/*
 * XREFs of ??$make@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18004CF14
 * Callers:
 *     ??0WindowJointResizeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004CEF4 (--0WindowJointResizeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$create_and_initialize@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUWindowJointResizeTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x18004CF48 (--$create_and_initialize@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@wi.c)
 */

__int64 *__fastcall winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,>(
        __int64 *a1)
{
  __int64 v2; // rax

  v2 = winrt::impl::create_and_initialize<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,>();
  *a1 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((v2 + 8) & -(__int64)(v2 != 0));
  return a1;
}
