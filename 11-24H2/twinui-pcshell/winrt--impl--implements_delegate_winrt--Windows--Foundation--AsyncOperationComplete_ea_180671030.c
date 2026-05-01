/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___::Release @ 0x180671030
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EFB8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___::_implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___ @ 0x180670BCC (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationComplete_ea_180670BCC.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___::_implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}
