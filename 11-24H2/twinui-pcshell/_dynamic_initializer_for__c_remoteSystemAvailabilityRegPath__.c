/*
 * XREFs of _dynamic_initializer_for__c_remoteSystemAvailabilityRegPath__ @ 0x180221140
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800546F0 (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 */

int dynamic_initializer_for__c_remoteSystemAvailabilityRegPath__()
{
  winrt::hstring::hstring(
    (winrt::hstring *)&c_remoteSystemAvailabilityRegPath,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RemoteSystemProviders\\",
    0x49u);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_remoteSystemAvailabilityRegPath__);
}
