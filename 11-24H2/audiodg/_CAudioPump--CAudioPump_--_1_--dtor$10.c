/*
 * XREFs of _CAudioPump::CAudioPump_::_1_::dtor$10 @ 0x1400954B9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CAudioPump::CAudioPump_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(*(_QWORD *)(a2 + 48) + 296LL));
}
