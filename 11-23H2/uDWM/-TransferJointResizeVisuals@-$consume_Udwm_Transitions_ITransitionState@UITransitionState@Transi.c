/*
 * XREFs of ?TransferJointResizeVisuals@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F9CDC
 * Callers:
 *     ?PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F9704 (-PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::TransferJointResizeVisuals(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 80LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}
