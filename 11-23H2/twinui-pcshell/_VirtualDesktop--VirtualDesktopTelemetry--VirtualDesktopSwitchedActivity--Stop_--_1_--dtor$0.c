/*
 * XREFs of _VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::Stop_::_1_::dtor$0 @ 0x1806050D1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::Stop_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 232));
}
