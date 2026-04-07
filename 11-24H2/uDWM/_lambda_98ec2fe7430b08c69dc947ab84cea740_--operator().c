/*
 * XREFs of _lambda_98ec2fe7430b08c69dc947ab84cea740_::operator() @ 0x18008706C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_98ec2fe7430b08c69dc947ab84cea740__long_::_Do_call @ 0x1800E66F0 (std--_Func_impl_no_alloc__lambda_98ec2fe7430b08c69dc947ab84cea740__long_--_Do_call.c)
 * Callees:
 *     ?get@?$weak_ref@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800870C0 (-get@-$weak_ref@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 *     ??$?9UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@YA_NAEBU?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@0@$$T@Z @ 0x18008714C (--$-9UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@.c)
 *     ??RAnimationCompletedHandler@Transitions@Udwm@winrt@@QEBA@XZ @ 0x180087164 (--RAnimationCompletedHandler@Transitions@Udwm@winrt@@QEBA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180095630 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_98ec2fe7430b08c69dc947ab84cea740_::operator()(__int64 a1)
{
  char v1; // al
  const char *v2; // r9
  __int64 v3; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  winrt::weak_ref<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::get(a1, &v6);
  v1 = winrt::operator!=<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>(&v6);
  try
  {
    v3 = v6;
    if ( v1 )
      winrt::Udwm::Transitions::AnimationCompletedHandler::operator()(v6 + 40);
    if ( v3 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x68,
                           (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.toplevelwindow3dwrapper.cpp",
                           v2);
  }
  return result;
}
