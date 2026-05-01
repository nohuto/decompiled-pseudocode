/*
 * XREFs of ?get@?$runtime_class_name@UIInspectable@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x180508B78
 * Callers:
 *     ?GetRuntimeClassName@?$implements@VSnapLayoutProvider@@UIInspectable@@@winrt@@EEBA?AUhstring@2@XZ @ 0x180500520 (-GetRuntimeClassName@-$implements@VSnapLayoutProvider@@UIInspectable@@@winrt@@EEBA-AUhstring@2@X.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180054754 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::impl::runtime_class_name<IInspectable,void>::get(
        struct winrt::impl::shared_hstring_header **a1)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF

  v3[1] = 38LL;
  v3[0] = L"{af86e2e0-b12d-4c6a-9c5a-d7aa65101e90}";
  winrt::hstring::hstring(a1, (__int64)v3);
  return a1;
}
