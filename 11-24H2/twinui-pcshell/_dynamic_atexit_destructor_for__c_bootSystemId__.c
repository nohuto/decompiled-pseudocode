/*
 * XREFs of _dynamic_atexit_destructor_for__c_bootSystemId__ @ 0x180707280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_bootSystemId__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&c_bootSystemId);
}
