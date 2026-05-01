/*
 * XREFs of _CopilotHotkeyManager::subscribe_to_services_::_1_::dtor$6 @ 0x1806FE472
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CopilotHotkeyManager::subscribe_to_services_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
