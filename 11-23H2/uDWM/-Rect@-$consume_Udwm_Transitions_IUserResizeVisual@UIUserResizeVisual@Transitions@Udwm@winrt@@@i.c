/*
 * XREFs of ?Rect@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBU0Foundation@Windows@3@@Z @ 0x1800F99DC
 * Callers:
 *     ?UpdateFloatProperties@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800F9D90 (-UpdateFloatProperties@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udw.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D84DC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::Rect(
        __int64 **a1,
        __int128 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = *v2;
  v5 = *a2;
  result = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v3 + 56))(v2, &v5);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
