/*
 * XREFs of _CAppThumbnailWindow::CAppThumbnailWindow_::_1_::dtor$11 @ 0x1806EE2A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppThumbnailWindow::CAppThumbnailWindow_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 96) + 128LL));
}
