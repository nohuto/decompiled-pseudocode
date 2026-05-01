/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___::Release @ 0x1803BE280
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EFB8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___::_implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___ @ 0x1803B5610 (winrt--impl--implements_delegate_winrt--Windows--Foundation--DeferralCompletedHandler__lambda_d0.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___::_implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}
