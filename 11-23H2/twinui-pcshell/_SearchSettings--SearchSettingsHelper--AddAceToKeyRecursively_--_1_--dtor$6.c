/*
 * XREFs of _SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor$6 @ 0x1801EA21B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>(a2 + 88);
}
