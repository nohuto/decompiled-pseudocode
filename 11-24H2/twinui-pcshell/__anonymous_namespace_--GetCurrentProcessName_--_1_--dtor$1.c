/*
 * XREFs of __anonymous_namespace_::GetCurrentProcessName_::_1_::dtor$1 @ 0x1806E29DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall _anonymous_namespace_::GetCurrentProcessName_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 40));
}
