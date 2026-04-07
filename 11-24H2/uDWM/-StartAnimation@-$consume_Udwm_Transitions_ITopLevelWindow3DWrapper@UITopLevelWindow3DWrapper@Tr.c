/*
 * XREFs of ?StartAnimation@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransitionType@Transitions@Udwm@3@AEBURect@Foundation@Windows@3@@Z @ 0x18004A630
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004AB68 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E22B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::StartAnimation(
        __int64 *a1,
        unsigned int *a2,
        __int128 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(__int64, __int64, __int128 *); // rax
  unsigned int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = *a2;
  v9 = 0;
  v10 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v3 + 104LL);
  v8 = *a3;
  v6 = v5(v3, v4, &v8);
  return winrt::check_hresult(&v11, v6, &v9);
}
