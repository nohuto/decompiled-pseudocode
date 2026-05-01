/*
 * XREFs of _dynamic_atexit_destructor_for__c_remoteSystemBootAPPURI__ @ 0x180706CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_remoteSystemBootAPPURI__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(&c_remoteSystemBootAPPURI);
}
