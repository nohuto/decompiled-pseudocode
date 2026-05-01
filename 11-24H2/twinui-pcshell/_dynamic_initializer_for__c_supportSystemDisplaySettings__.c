/*
 * XREFs of _dynamic_initializer_for__c_supportSystemDisplaySettings__ @ 0x180012B80
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

int dynamic_initializer_for__c_supportSystemDisplaySettings__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_supportSystemDisplaySettings, L"supportSystemDisplaySettings");
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_supportSystemDisplaySettings__);
}
