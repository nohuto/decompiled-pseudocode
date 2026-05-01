/*
 * XREFs of _SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor$6 @ 0x1806E647F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HLOCAL __fastcall SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>((HLOCAL *)(a2 + 88));
}
