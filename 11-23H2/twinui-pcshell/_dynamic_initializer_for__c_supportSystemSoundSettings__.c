/*
 * XREFs of _dynamic_initializer_for__c_supportSystemSoundSettings__ @ 0x18000ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

int dynamic_initializer_for__c_supportSystemSoundSettings__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_supportSystemSoundSettings, L"supportSystemSoundSettings");
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_supportSystemSoundSettings__);
}
