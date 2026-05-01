/*
 * XREFs of _CControlCenterExperienceManager::HideExperience_::_1_::dtor$0 @ 0x18041F7A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CControlCenterExperienceManager::HideExperience_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
