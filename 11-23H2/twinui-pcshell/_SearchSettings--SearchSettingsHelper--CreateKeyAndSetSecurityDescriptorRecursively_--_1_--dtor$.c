/*
 * XREFs of _SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptorRecursively_::_1_::dtor$0 @ 0x1801EABD5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptorRecursively_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>(a2 + 128);
}
