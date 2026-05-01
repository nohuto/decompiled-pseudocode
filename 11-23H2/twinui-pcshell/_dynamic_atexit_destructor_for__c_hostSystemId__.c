/*
 * XREFs of _dynamic_atexit_destructor_for__c_hostSystemId__ @ 0x1802C80A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_hostSystemId__()
{
  winrt::hstring::~hstring((void **)&c_hostSystemId);
}
