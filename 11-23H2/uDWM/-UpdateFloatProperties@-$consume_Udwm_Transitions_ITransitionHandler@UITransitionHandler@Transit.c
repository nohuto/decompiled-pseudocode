/*
 * XREFs of ?UpdateFloatProperties@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBU?$map@Uhstring@winrt@@N@param@3@@Z @ 0x1800FEFF8
 * Callers:
 *     ?SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800FEB88 (-SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800FEE08 (-UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@W4ShellTransition@345@@Z @ 0x1800FF098 (-UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Wi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::UpdateFloatProperties(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 48LL))(*a1, *a2);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
