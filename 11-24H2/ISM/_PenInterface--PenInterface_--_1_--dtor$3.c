/*
 * XREFs of _PenInterface::PenInterface_::_1_::dtor$3 @ 0x1801D89AE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall PenInterface::PenInterface_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(*(_QWORD *)(a2 + 80) + 56LL));
}
