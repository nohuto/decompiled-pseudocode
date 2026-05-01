/*
 * XREFs of _CAppThumbnailWindow::CAppThumbnailWindow_::_1_::dtor$5 @ 0x18054C0C5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppThumbnailWindow::CAppThumbnailWindow_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 96) + 48LL));
}
