/*
 * XREFs of ?AddRef@?$produce_base@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@X@impl@winrt@@UEAAIXZ @ 0x180016DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler,void>::AddRef(
        __int64 a1)
{
  __int64 v1; // rcx
  signed __int64 v2; // rax
  unsigned int v3; // edx
  signed __int64 v4; // rtt

  if ( a1 )
    v1 = a1 - 8;
  else
    v1 = 8LL;
  v2 = *(_QWORD *)v1;
  while ( v2 >= 0 )
  {
    v3 = v2 + 1;
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 + 1, v2);
    if ( v4 == v2 )
      return v3;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 24));
}
