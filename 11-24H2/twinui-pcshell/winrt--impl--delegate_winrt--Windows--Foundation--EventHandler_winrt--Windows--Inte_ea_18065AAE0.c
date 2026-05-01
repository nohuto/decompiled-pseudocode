/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs___lambda_77e78c927b00fdc94620a558442d73ef___::Invoke @ 0x18065AAE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_77e78c927b00fdc94620a558442d73ef_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x180655EFC (_lambda_77e78c927b00fdc94620a558442d73ef_--operator()_winrt--Windows--Internal--Shell--RemoteSys.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs___lambda_77e78c927b00fdc94620a558442d73ef___::Invoke(
        __int64 a1,
        volatile signed __int32 *a2,
        __int64 *a3)
{
  __int64 *v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  lambda_77e78c927b00fdc94620a558442d73ef_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_(
    a1 + 16,
    a2,
    &v4);
  return 0LL;
}
