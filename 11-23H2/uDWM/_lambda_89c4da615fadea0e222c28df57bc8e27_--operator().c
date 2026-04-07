/*
 * XREFs of _lambda_89c4da615fadea0e222c28df57bc8e27_::operator() @ 0x1800F71A8
 * Callers:
 *     wil::details::lambda_call__lambda_89c4da615fadea0e222c28df57bc8e27___::_lambda_call__lambda_89c4da615fadea0e222c28df57bc8e27___ @ 0x1800F7108 (wil--details--lambda_call__lambda_89c4da615fadea0e222c28df57bc8e27___--_lambda_call__lambda_89c4.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall lambda_89c4da615fadea0e222c28df57bc8e27_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  char *v3; // rdi
  winrt::Windows::Foundation::IUnknown *v4; // rbx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = (char *)(*a1 + 32);
  if ( v3 != &v5 )
  {
    if ( *(_QWORD *)v3 )
    {
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(*a1 + 32));
      v1 = *a1;
    }
    *(_QWORD *)v3 = 0LL;
  }
  v4 = (winrt::Windows::Foundation::IUnknown *)(v1 + 40);
  if ( v4 != (winrt::Windows::Foundation::IUnknown *)&v5 )
  {
    if ( *(_QWORD *)v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
    *(_QWORD *)v4 = 0LL;
  }
}
