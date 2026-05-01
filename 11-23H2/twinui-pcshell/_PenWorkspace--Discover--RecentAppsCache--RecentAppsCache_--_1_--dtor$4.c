/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$4 @ 0x1802B5A7B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::event_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>,wil::err_exception_policy>::~event_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>,wil::err_exception_policy>(*(_QWORD *)(a2 + 48) + 144LL);
}
