/*
 * XREFs of ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800ED460
 * Callers:
 *     ?BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800ED094 (-BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Fo.c)
 *     ?BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x1800ED134 (-BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@.c)
 *     ?BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800ED1CC (-BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Fo.c)
 *     ?EndClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x1800ED2A0 (-EndClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Fo.c)
 *     ?EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800ED330 (-EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Foun.c)
 *     ?EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x1800ED3D0 (-EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Fo.c)
 *     ?RemoveFromTree@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800EDD10 (-RemoveFromTree@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800EDE58 (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?put_BeginRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x1800EE620 (-put_BeginRect@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE05C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this)
{
  int v1; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 5) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC4,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)0x8007139FLL,
      v1);
}
