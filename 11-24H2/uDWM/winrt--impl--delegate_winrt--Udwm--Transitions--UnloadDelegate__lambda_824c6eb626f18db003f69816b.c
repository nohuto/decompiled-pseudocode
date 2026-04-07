/*
 * XREFs of winrt::impl::delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___::Invoke @ 0x1800E5200
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_824c6eb626f18db003f69816ba8f789d_::operator() @ 0x1800E4F6C (_lambda_824c6eb626f18db003f69816ba8f789d_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___::Invoke(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 16;
  try
  {
    lambda_824c6eb626f18db003f69816ba8f789d_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
