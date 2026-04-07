/*
 * XREFs of winrt::impl::delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___::Invoke @ 0x1800F9430
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c60948a4075e9d25cd4406f3dd63722d_::operator() @ 0x1800F8E58 (_lambda_c60948a4075e9d25cd4406f3dd63722d_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___::Invoke(
        __int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 8);
  try
  {
    lambda_c60948a4075e9d25cd4406f3dd63722d_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
