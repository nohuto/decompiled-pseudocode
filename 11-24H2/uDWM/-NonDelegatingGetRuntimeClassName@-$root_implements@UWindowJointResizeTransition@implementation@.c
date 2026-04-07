/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800DEC4C
 * Callers:
 *     ?GetRuntimeClassName@?$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800DEB10 (-GetRuntimeClassName@-$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Ud.c)
 *     ?GetRuntimeClassName@?$produce_base@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800DEB20 (-GetRuntimeClassName@-$produce_base@UWindowJointResizeTransition@implementation@Private@Transiti.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009A53C (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    a1 = 16LL;
  try
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    v4 = *v3;
    *v3 = 0LL;
    *a2 = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v6);
  }
  return result;
}
