/*
 * XREFs of _lambda_27d41e6f978e0f5a6483d2ed3ecdf382_::__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_ @ 0x1802CD778
 * Callers:
 *     ?UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800D51D0 (-UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagem.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___::_CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___ @ 0x1804187F4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___--_CTask.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041B3B0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041BCD0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041C120 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__IAsyncCallback_Microsoft::WRL::FtmBase___lambda_ec5d955e16bd0abce266b4b0ac713b48___1_long_::_DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__IAsyncCallback_Microsoft::WRL::FtmBase___lambda_ec5d955e16bd0abce266b4b0ac713b48___1_long_ @ 0x1804277A4 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1804277A4.c)
 *     ?UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18042A430 (-UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowMan.c)
 *     _UwpWindowEventDispatcher::UwpWindowShowRequested_::_1_::dtor$9 @ 0x1806D112B (_UwpWindowEventDispatcher--UwpWindowShowRequested_--_1_--dtor$9.c)
 *     _UwpWindowEventDispatcher::UwpWindowSwitchRequested_::_1_::dtor$3 @ 0x1806E9585 (_UwpWindowEventDispatcher--UwpWindowSwitchRequested_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall lambda_27d41e6f978e0f5a6483d2ed3ecdf382_::__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_(__int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
