/*
 * XREFs of ?EnsureWorkAreaChangeTransitionRemoved@?$consume_Udwm_Transitions_Private_IAnimationsTransitionManager@UIAnimationsTransitionManager@Private@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1800E7160
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_Private_IAnimationsTransitionManager<winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>::EnsureWorkAreaChangeTransitionRemoved(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
