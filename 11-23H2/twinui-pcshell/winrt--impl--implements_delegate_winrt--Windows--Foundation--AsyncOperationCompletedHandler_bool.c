/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___::_implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___ @ 0x1802841B8
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___::Release @ 0x180284620 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationComplete_ea_180284620.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

void __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___::_implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___(
        __int64 a1)
{
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  winrt::hstring::~hstring((void **)(a1 + 16));
}
