/*
 * XREFs of _dynamic_atexit_destructor_for__c_supportSystemSoundSettings__ @ 0x180707400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_supportSystemSoundSettings__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(&c_supportSystemSoundSettings);
}
