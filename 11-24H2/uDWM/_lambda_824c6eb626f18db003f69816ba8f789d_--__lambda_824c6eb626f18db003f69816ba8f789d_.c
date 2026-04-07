/*
 * XREFs of _lambda_824c6eb626f18db003f69816ba8f789d_::__lambda_824c6eb626f18db003f69816ba8f789d_ @ 0x1800E4C64
 * Callers:
 *     winrt::Udwm::Transitions::UnloadDelegate::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___ @ 0x1800E4384 (winrt--Udwm--Transitions--UnloadDelegate--UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___::_implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___ @ 0x1800E4E10 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--UnloadDelegate__lambda_8_ea_1800E4E10.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180095630 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

__int64 __fastcall lambda_824c6eb626f18db003f69816ba8f789d_::__lambda_824c6eb626f18db003f69816ba8f789d_(__int64 *a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  v2 = a1 + 1;
  if ( *v2 )
    result = winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v2);
  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(a1);
  return result;
}
