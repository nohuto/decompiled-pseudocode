/*
 * XREFs of _CMultitaskingViewServiceProvider::s_CreateMTVManager_::_1_::dtor$23 @ 0x1802BE9B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewServiceProvider::s_CreateMTVManager_::_1_::dtor_23(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 392));
}
