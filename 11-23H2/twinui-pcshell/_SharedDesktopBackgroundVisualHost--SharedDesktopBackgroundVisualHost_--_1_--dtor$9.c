/*
 * XREFs of _SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost_::_1_::dtor$9 @ 0x1806E69FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(*(_QWORD *)(a2 + 72) + 232LL));
}
