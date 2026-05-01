/*
 * XREFs of _CStartExperienceManager::SetDockedStartController_::_1_::dtor$0 @ 0x1801E31D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStartExperienceManager::SetDockedStartController_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 176));
}
