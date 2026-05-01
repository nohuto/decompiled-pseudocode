/*
 * XREFs of ??0hstring@winrt@@QEAA@PEB_WI@Z @ 0x180203AAC
 * Callers:
 *     _dynamic_initializer_for__c_animationPropertyName__ @ 0x180012F70 (_dynamic_initializer_for__c_animationPropertyName__.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEB_WI@Z @ 0x180203ADC (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEB_WI@Z.c)
 */

__int64 *__fastcall winrt::hstring::hstring(winrt::hstring *this, wchar_t *a2, unsigned int a3)
{
  qword_1808C9868 = (__int64)winrt::impl::create_hstring_on_heap((winrt::impl *)a2, (const wchar_t *)a3, a3);
  return &qword_1808C9868;
}
