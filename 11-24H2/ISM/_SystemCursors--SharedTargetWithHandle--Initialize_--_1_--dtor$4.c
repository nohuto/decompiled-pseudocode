/*
 * XREFs of _SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor$4 @ 0x1801D7F9E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 104));
}
