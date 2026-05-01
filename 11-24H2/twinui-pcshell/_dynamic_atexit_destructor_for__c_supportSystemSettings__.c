/*
 * XREFs of _dynamic_atexit_destructor_for__c_supportSystemSettings__ @ 0x1807073A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_supportSystemSettings__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(&c_supportSystemSettings);
}
