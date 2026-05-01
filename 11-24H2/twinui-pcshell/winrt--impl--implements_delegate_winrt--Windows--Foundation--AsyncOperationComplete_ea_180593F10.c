/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_e144cef1f387178a308841941c02025f___::Release @ 0x180593F10
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EFB8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_e144cef1f387178a308841941c02025f___::_implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_e144cef1f387178a308841941c02025f___ @ 0x180593CC8 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_e144cef1f387178a308841941c02025f___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_e144cef1f387178a308841941c02025f___::_implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_e144cef1f387178a308841941c02025f___((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x40);
  }
  return v2;
}
