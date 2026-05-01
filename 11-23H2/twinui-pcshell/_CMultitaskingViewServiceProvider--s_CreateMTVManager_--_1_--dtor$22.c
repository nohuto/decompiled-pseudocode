/*
 * XREFs of _CMultitaskingViewServiceProvider::s_CreateMTVManager_::_1_::dtor$22 @ 0x1802BE9A2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewServiceProvider::s_CreateMTVManager_::_1_::dtor_22(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 464));
}
