/*
 * XREFs of _dynamic_atexit_destructor_for__c_remoteSystemSettingsUri__ @ 0x180707240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_remoteSystemSettingsUri__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&c_remoteSystemSettingsUri);
}
