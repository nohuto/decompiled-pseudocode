/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___ @ 0x1804F8D4C
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___::Release @ 0x1805057E0 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--TimerElapsedHan_ea_1805057E0.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x180102D54 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3915b0af65937f5328b5adc87798a766___(
        __int64 a1)
{
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
}
