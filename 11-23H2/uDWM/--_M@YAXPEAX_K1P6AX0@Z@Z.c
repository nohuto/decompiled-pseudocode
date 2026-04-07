/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18005CC0C
 * Callers:
 *     ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x180050AB8 (--1WindowFrame@CTopLevelWindow@@UEAA@XZ.c)
 *     ?SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800FEB88 (-SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::SkipAnimationDelays_::_1_::dtor$3 @ 0x1800FECB6 (_winrt--Udwm--Transitions--implementation--TransitionManager--SkipAnimationDelays_--_1_--dtor$3.c)
 *     ?UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800FEE08 (-UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateAngle_::_1_::dtor$4 @ 0x1800FEFA2 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateAngle_--_1_--dtor$4.c)
 *     ?UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@W4ShellTransition@345@@Z @ 0x1800FF098 (-UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Wi.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect_::_1_::dtor$5 @ 0x1800FF2BE (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateRect_--_1_--dtor$5.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18005CC88 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_xfg_dispatch_icall_fptr();
  }
}
