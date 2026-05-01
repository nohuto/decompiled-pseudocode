/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::Release @ 0x1805F5B10
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EFB8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::_implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___ @ 0x1805F2D38 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncActionCompletedHandler__lambda.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::_implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x168);
  }
  return v2;
}
