/*
 * XREFs of winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::Invoke @ 0x1800F7A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7B10 (-OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transiti.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x1800F83EC (-unconditional_release_ref@-$com_ptr@UWindowMaximizeSnapTransitionHandler@implementation@Private.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::Invoke(
        __int64 a1)
{
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *v1; // rcx
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *v2; // rdx
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *v3; // rax
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *v4; // rbx
  __int64 result; // rax
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *v6; // [rsp+30h] [rbp+8h] BYREF
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler **)(a1 + 8);
  if ( v1 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *, __int64 *, winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler **))(*(_QWORD *)v1 + 24LL))(
      v1,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionHandler>,
      &v6);
    v1 = v6;
    if ( v6 )
      v1 = (winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *)((char *)v6 - 16);
    v3 = v1;
    v6 = 0LL;
    v2 = v1;
    v4 = v1;
  }
  else
  {
    v2 = 0LL;
    v3 = 0LL;
    v4 = 0LL;
  }
  try
  {
    v7 = v1;
    if ( v2 )
    {
      winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::OnPositionAnimationComplete(v1);
      v3 = v4;
    }
    if ( v3 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler>::unconditional_release_ref(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
