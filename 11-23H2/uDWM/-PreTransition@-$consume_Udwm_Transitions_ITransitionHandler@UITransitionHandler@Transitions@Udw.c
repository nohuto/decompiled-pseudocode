/*
 * XREFs of ?PreTransition@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@AEBUTransitionState@563@@Z @ 0x1800FE300
 * Callers:
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FDFD8 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt.c)
 *     ?PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@345@@Z @ 0x1800FE398 (-PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@3.c)
 *     ?PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAVCTopLevelWindow3D@@W4ShellTransition@345@@Z @ 0x1800FE440 (-PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::PreTransition(
        _QWORD *a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 56LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
