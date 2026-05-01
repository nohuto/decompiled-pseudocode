/*
 * XREFs of winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run @ 0x1806851D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ac2a839fec59629fce3443c282716c2d_::operator() @ 0x180682F88 (_lambda_ac2a839fec59629fce3443c282716c2d_--operator().c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 8;
  if ( !a1 )
    v2 = 24LL;
  try
  {
    lambda_ac2a839fec59629fce3443c282716c2d_::operator()(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
