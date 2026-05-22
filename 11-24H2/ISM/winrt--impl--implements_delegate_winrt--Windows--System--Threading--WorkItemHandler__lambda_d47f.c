/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::_implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___ @ 0x1800DE174
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Release @ 0x1800DF220 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--WorkItemHandler_ea_1800DF220.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18006CBFC (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::_implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___(
        __int64 a1)
{
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a1 + 16));
}
