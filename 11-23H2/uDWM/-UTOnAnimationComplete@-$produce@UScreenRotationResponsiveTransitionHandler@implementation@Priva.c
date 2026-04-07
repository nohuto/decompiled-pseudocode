/*
 * XREFs of ?UTOnAnimationComplete@?$produce@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationResponsiveTransitionHandler@3456@@impl@winrt@@UEAAHH@Z @ 0x1800F63F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationResponsiveTransitionHandler>::UTOnAnimationComplete(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 8;
  if ( !a1 )
    v2 = 32LL;
  try
  {
    (**(void (__fastcall ***)(__int64))v2)(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
