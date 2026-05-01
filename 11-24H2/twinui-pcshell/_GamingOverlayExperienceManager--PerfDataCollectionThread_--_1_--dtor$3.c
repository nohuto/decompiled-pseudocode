/*
 * XREFs of _GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor$3 @ 0x1806E3721
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 216));
}
