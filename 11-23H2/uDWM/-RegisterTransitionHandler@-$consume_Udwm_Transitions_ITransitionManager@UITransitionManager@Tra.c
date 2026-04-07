/*
 * XREFs of ?RegisterTransitionHandler@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@AEBUITransitionHandler@563@@Z @ 0x18002E950
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x18002E66C (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
        _QWORD *a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 48LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
