/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800E6FD0
 * Callers:
 *     ?GetRuntimeClassName@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800E6F90 (-GetRuntimeClassName@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@.c)
 *     ?GetRuntimeClassName@?$produce_base@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800E9560 (-GetRuntimeClassName@-$produce_base@UTransitionState@implementation@Transitions@Udwm@winrt@@UITr.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009A53C (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    a1 = 24LL;
  v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 40LL))(a1, &v6);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
  return 0LL;
}
