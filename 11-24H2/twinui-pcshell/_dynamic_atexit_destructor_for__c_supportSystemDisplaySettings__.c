/*
 * XREFs of _dynamic_atexit_destructor_for__c_supportSystemDisplaySettings__ @ 0x180707480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_supportSystemDisplaySettings__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(&c_supportSystemDisplaySettings);
}
