/*
 * XREFs of _CAppThumbnailWindow::TryGetTopTwoWindows_::_1_::dtor$0 @ 0x18055CE3D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppThumbnailWindow::TryGetTopTwoWindows_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 128));
}
