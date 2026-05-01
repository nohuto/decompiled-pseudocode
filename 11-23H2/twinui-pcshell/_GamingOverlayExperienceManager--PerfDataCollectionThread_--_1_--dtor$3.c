/*
 * XREFs of _GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor$3 @ 0x180404FB7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 80));
}
