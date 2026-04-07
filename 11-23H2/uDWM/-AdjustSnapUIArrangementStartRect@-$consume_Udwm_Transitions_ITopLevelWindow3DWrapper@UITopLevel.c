/*
 * XREFs of ?AdjustSnapUIArrangementStartRect@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1800F736C
 * Callers:
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7C18 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_OWORD *__fastcall winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::AdjustSnapUIArrangementStartRect(
        __int64 **a1,
        _OWORD *a2,
        __int128 *a3)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  signed int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = *a1;
  v5 = *v4;
  v8 = *a3;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _OWORD *))(v5 + 144))(v4, &v8, a2);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  return a2;
}
