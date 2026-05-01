/*
 * XREFs of ?GetRuntimeClassName@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@EEBA?AUhstring@2@XZ @ 0x1805801E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180054754 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::shared_hstring_header **a2)
{
  _QWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF

  v4[1] = 38LL;
  v4[0] = L"{c9b8fa8b-63d2-54a5-a095-d4e4668ae79b}";
  winrt::hstring::hstring(a2, (__int64)v4);
  return a2;
}
