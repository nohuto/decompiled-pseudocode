/*
 * XREFs of _VirtualDesktopDataSource::GetCurrentVirtualDesktop_::_1_::dtor$1 @ 0x18053EF83
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopDataSource::GetCurrentVirtualDesktop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
