/*
 * XREFs of _dynamic_initializer_for__c_remoteSystemProviderUriScheme__ @ 0x180221100
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800546F0 (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 */

int dynamic_initializer_for__c_remoteSystemProviderUriScheme__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_remoteSystemProviderUriScheme, L"ms-remotedesktop", 0x10u);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_remoteSystemProviderUriScheme__);
}
