/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___::Release @ 0x1805057E0
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EFB8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___ @ 0x1804F8D4C (winrt--impl--implements_delegate_winrt--Windows--System--Threading--TimerElapsedHan_ea_1804F8D4C.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x28);
  }
  return v2;
}
