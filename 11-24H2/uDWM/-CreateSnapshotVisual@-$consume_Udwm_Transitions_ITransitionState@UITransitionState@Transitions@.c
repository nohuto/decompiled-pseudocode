/*
 * XREFs of ?CreateSnapshotVisual@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBUTopLevelWindow3DWrapper@Transitions@Udwm@3@@Z @ 0x18004D06C
 * Callers:
 *     ?CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransitionType@456@@Z @ 0x18004BB2C (-CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E22B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::CreateSnapshotVisual(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // eax
  int v9; // [rsp+28h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *a1;
  v11 = 0LL;
  v9 = 0;
  v5 = *v3;
  v6 = *a3;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 72))(v3, v6, &v11);
  winrt::check_hresult(&v12, v7, &v9);
  *a2 = v11;
  return a2;
}
