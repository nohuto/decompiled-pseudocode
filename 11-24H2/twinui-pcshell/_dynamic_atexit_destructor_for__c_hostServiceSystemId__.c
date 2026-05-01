/*
 * XREFs of _dynamic_atexit_destructor_for__c_hostServiceSystemId__ @ 0x1807072A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_hostServiceSystemId__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(&c_hostServiceSystemId);
}
