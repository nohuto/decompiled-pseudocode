/*
 * XREFs of ?StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800EBA0C
 * Callers:
 *     ?StartShowAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHXZ @ 0x1800EB9E0 (-StartShowAnimation@-$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800136A4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1800EB6C4 (-AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::StartShowAnimation(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this)
{
  CAcrylicSheet *v2; // rbx
  float v3; // xmm0_4

  CVisual::SetOpacity(*(CVisual **)(*(_QWORD *)(*((_QWORD *)this + 9) + 288LL) + 440LL), 0.0);
  CTopLevelWindow3D::StartAnimation(*((_QWORD *)this + 9), 0xEu);
  v2 = (CAcrylicSheet *)*((_QWORD *)this + 5);
  v3 = winrt::Udwm::Transitions::implementation::UserResizeVisual::AnimationDuration((CTopLevelWindow3D **)this);
  CAcrylicSheet::StartAlphaAnimation(v2, 0.0, 1.0, v3);
}
