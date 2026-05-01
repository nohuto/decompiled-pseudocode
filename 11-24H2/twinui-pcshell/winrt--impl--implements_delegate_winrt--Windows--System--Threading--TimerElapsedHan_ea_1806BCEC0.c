/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___::Release @ 0x1806BCEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EFB8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___ @ 0x1806BC844 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--TimerElapsedHan_ea_1806BC844.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x28);
  }
  return v2;
}
