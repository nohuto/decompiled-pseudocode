/*
 * XREFs of _CProjectionBorderManager::BuildCaptureWindowVisualExclusionList_::_1_::dtor$1 @ 0x1800F71C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CProjectionBorderManager::BuildCaptureWindowVisualExclusionList_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 32));
}
