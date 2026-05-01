/*
 * XREFs of _dynamic_initializer_for__c_remoteSystemSwitchAPPURI__ @ 0x180055D50
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800546F0 (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 */

int dynamic_initializer_for__c_remoteSystemSwitchAPPURI__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_remoteSystemSwitchAPPURI, L"ms-remotedesktop:switch", 0x17u);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_remoteSystemSwitchAPPURI__);
}
