/*
 * XREFs of ?StartAnimation@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@HH@Z @ 0x1800F80D4
 * Callers:
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7C18 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::StartAnimation(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 112LL))(*a1, 104LL, 1LL);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
