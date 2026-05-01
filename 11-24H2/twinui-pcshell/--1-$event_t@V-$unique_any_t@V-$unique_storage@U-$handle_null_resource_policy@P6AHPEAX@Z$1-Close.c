/*
 * XREFs of ??1?$event_t@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@Uerr_exception_policy@2@@wil@@QEAA@XZ @ 0x1802D0BC0
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$4 @ 0x1806CD813 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall wil::event_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>,wil::err_exception_policy>::~event_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>,wil::err_exception_policy>(
        void **a1)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(a1);
}
