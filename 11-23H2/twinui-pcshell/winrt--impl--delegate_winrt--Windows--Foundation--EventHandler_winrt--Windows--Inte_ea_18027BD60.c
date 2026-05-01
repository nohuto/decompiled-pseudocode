/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs___lambda_af365597022eb112c50f104cc7bcdff6___::Invoke @ 0x18027BD60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_af365597022eb112c50f104cc7bcdff6_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x18027A5F4 (_lambda_af365597022eb112c50f104cc7bcdff6_--operator()_winrt--Windows--Internal--Shell--RemoteSys.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs___lambda_af365597022eb112c50f104cc7bcdff6___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = a1 + 8;
  try
  {
    lambda_af365597022eb112c50f104cc7bcdff6_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_(
      v3,
      a2,
      (__int64)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
