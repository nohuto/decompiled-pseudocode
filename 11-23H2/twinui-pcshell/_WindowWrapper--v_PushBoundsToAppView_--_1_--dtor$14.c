/*
 * XREFs of _WindowWrapper::v_PushBoundsToAppView_::_1_::dtor$14 @ 0x1804DEB82
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowWrapper::v_PushBoundsToAppView_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 104));
}
