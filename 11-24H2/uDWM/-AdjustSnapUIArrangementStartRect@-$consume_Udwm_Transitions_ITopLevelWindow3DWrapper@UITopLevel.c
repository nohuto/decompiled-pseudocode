/*
 * XREFs of ?AdjustSnapUIArrangementStartRect@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1800E3ED0
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004AB68 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E22B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::AdjustSnapUIArrangementStartRect(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int128 *, __int64); // r9
  __int64 v6; // r10
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0;
  *a2 = 0LL;
  v11 = 0LL;
  v9 = *a3;
  v4 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a2);
  v7 = v5(v6, &v9, v4);
  winrt::check_hresult(&v12, v7, (__int64)&v10);
  return a2;
}
