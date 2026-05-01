/*
 * XREFs of _dynamic_atexit_destructor_for__c_remoteDesktopIdQueryParam__ @ 0x1807072C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_remoteDesktopIdQueryParam__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&c_remoteDesktopIdQueryParam);
}
