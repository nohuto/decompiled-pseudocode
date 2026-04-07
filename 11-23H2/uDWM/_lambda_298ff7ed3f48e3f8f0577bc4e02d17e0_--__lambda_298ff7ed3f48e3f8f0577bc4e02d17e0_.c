/*
 * XREFs of _lambda_298ff7ed3f48e3f8f0577bc4e02d17e0_::__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0_ @ 0x1800F70D0
 * Callers:
 *     _winrt::Udwm::Transitions::AnimationCompletedHandler::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0____::_1_::dtor$0 @ 0x1800F6F84 (_winrt--Udwm--Transitions--AnimationCompletedHandler--AnimationCompletedHandler__lambda_298ff7ed.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E160 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

__int64 __fastcall lambda_298ff7ed3f48e3f8f0577bc4e02d17e0_::__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0_(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1);
  return result;
}
