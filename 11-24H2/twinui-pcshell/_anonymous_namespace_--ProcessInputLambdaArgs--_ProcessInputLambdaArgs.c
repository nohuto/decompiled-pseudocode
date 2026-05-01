/*
 * XREFs of _anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs @ 0x180072614
 * Callers:
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x1801806F4 (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___::_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___ @ 0x18029656C (CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___--_CMultitaskingViewTas.c)
 *     _lambda_5f246d3d225ef97a552fc7098e7c8139_::__lambda_5f246d3d225ef97a552fc7098e7c8139_ @ 0x1802D0CF4 (_lambda_5f246d3d225ef97a552fc7098e7c8139_--__lambda_5f246d3d225ef97a552fc7098e7c8139_.c)
 *     _MultitaskingViewGestureHandler::ActivateGestureAction_::_1_::dtor$0 @ 0x1806D5DB6 (_MultitaskingViewGestureHandler--ActivateGestureAction_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(__int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1);
}
