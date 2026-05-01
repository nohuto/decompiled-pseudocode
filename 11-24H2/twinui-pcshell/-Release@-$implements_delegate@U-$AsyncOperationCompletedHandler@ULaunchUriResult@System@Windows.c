/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_6b9403a3ca1a595497445348084892d2_@@@impl@winrt@@UEAAIXZ @ 0x180633FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EFB8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_3dc309b72a8cc7bcc36dbf196f52b656_@@@impl@winrt@@QEAA@XZ @ 0x180621E44 (--1-$implements_delegate@U-$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_6b9403a3ca1a595497445348084892d2_>::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_3dc309b72a8cc7bcc36dbf196f52b656_>::~implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_3dc309b72a8cc7bcc36dbf196f52b656_>((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x40);
  }
  return v2;
}
