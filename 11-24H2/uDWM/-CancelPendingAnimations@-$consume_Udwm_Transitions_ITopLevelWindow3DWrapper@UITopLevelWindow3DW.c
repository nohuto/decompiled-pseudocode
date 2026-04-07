/*
 * XREFs of ?CancelPendingAnimations@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800E3F6C
 * Callers:
 *     ?Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004B084 (-Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ?Cleanup@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E50D8 (-Cleanup@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800E525C (-PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E22B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::CancelPendingAnimations(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 120LL))(v1);
  return winrt::check_hresult(&v6, v2, (__int64)&v4);
}
