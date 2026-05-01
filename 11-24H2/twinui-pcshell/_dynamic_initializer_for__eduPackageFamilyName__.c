/*
 * XREFs of _dynamic_initializer_for__eduPackageFamilyName__ @ 0x180054E20
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800547B8 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

int dynamic_initializer_for__eduPackageFamilyName__()
{
  qword_1808C9810 = (__int64)winrt::impl::create_hstring_on_heap(
                               (winrt::impl *)L"MicrosoftCorporationII.Flowerlight_8wekyb3d8bbwe",
                               (winrt::impl *)0x30);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__eduPackageFamilyName__);
}
