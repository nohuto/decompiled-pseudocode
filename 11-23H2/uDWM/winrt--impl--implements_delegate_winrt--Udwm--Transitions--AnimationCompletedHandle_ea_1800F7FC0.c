/*
 * XREFs of winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::QueryInterface @ 0x1800F7FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::AnimationCompletedHandler>;
  if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::AnimationCompletedHandler> )
    v3 = a2[1] - 0x31100B49D7EC7C87LL;
  if ( !v3 )
    goto LABEL_15;
  v4 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>;
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> )
    v4 = a2[1] - 0x46000000000000C0LL;
  if ( !v4 )
    goto LABEL_15;
  v5 = *a2 - winrt::impl::guid_v<winrt::impl::IAgileObject>;
  if ( *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> )
    v5 = a2[1] + 0x6FA470359B110040LL;
  if ( v5 )
  {
    v6 = *a2 - winrt::impl::guid_v<winrt::impl::IMarshal>;
    if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> )
      v6 = a2[1] - 0x46000000000000C0LL;
    if ( v6 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    else
    {
      return winrt::impl::make_marshaler(a1, a3);
    }
  }
  else
  {
LABEL_15:
    *a3 = a1;
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 1u);
    return 0LL;
  }
}
