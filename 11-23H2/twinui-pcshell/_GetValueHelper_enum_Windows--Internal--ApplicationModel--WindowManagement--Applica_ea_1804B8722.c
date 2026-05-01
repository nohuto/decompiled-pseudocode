/*
 * XREFs of _GetValueHelper_enum_Windows::Internal::ApplicationModel::WindowManagement::ApplicationWindowTitleBarVisibilityInternal__::_1_::dtor$1 @ 0x1804B8722
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetValueHelper_enum_Windows::Internal::ApplicationModel::WindowManagement::ApplicationWindowTitleBarVisibilityInternal__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
