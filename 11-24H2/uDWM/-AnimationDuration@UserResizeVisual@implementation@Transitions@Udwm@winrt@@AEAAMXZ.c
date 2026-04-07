/*
 * XREFs of ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1800EB6C4
 * Callers:
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800EB8F0 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 *     ?StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800EBA0C (-StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800187EC (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 */

float __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::AnimationDuration(
        CTopLevelWindow3D **this)
{
  if ( CTopLevelWindow3D::ShouldShowTransition(this[9]) )
    return FLOAT_0_30000001;
  else
    return 0.0;
}
