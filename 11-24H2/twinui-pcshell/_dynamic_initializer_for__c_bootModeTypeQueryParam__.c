/*
 * XREFs of _dynamic_initializer_for__c_bootModeTypeQueryParam__ @ 0x180012B30
 * Callers:
 *     <none>
 * Callees:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x18005487C (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     memcpy_s_3 @ 0x1802DFCA8 (memcpy_s_3.c)
 */

int __fastcall dynamic_initializer_for__c_bootModeTypeQueryParam__(__int64 a1, unsigned int a2)
{
  struct winrt::impl::shared_hstring_header *v2; // rbx

  v2 = winrt::impl::precreate_hstring_on_heap((winrt::impl *)0xC, a2);
  memcpy_s_3((char *)v2 + 28, 0x18uLL, L"bootModeType", 0x18uLL);
  c_bootModeTypeQueryParam = v2;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_bootModeTypeQueryParam__);
}
