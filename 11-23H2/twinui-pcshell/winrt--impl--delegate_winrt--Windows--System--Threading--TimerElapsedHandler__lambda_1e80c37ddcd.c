/*
 * XREFs of winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___::Invoke @ 0x18067B680
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator() @ 0x18067A258 (_lambda_1e80c37ddcde987ca8d07444e2bbbfce_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 8;
  try
  {
    lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator()(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
