/*
 * XREFs of _CAudioHealthMonitor::CAudioHealthMonitor_::_1_::dtor$1 @ 0x18016D382
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CAudioHealthMonitor::CAudioHealthMonitor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(*(_QWORD *)(a2 + 80) + 88LL));
}
