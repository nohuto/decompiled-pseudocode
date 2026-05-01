/*
 * XREFs of _WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor$2 @ 0x1806F93C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 192) + 32LL));
}
