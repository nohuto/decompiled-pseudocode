/*
 * XREFs of _VirtualDesktopGestureContext::Commit_::_1_::dtor$3 @ 0x18060BCEF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopGestureContext::Commit_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
