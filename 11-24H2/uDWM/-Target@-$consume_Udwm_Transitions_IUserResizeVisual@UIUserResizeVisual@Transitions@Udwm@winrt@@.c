/*
 * XREFs of ?Target@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800E57E8
 * Callers:
 *     ?UpdateRect@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@6@@Z @ 0x1800E590C (-UpdateRect@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E22B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::Target(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v6 = 0;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 64LL))(v1, &v6);
  winrt::check_hresult(&v7, v2, (__int64)&v4);
  return v6;
}
