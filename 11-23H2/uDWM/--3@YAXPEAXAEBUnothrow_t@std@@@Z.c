/*
 * XREFs of ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18010D80C
 * Callers:
 *     _wil::event_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::event_watcher_state___void_(__cdecl_)(wil::details::event_watcher_state__)_&wil::details::delete_event_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::event_watcher_state___wil::details::event_watcher_state___0_std::nullptr_t____wil::err_returncode_policy_::create_take_hevent_ownership_::_1_::dtor$1 @ 0x1800675CC (_wil--event_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wi_ea_1800675CC.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1, const struct std::nothrow_t *a2)
{
  (*(void (__fastcall **)(WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
}
