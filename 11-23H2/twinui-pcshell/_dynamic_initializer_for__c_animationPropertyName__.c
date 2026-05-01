/*
 * XREFs of _dynamic_initializer_for__c_animationPropertyName__ @ 0x18000AF20
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEB_W@Z @ 0x18018BE74 (--0hstring@winrt@@QEAA@PEB_W@Z.c)
 */

int __fastcall dynamic_initializer_for__c_animationPropertyName__(winrt::hstring *a1, const wchar_t *a2)
{
  winrt::hstring::hstring(a1, a2);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_animationPropertyName__);
}
