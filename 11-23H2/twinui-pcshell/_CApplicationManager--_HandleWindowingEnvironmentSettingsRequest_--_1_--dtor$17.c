/*
 * XREFs of _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$17 @ 0x1803A429D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
