/*
 * XREFs of _UwpWindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$7 @ 0x1804CFC5E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpWindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
