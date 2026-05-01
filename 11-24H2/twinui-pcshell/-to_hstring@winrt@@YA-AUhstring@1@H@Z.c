/*
 * XREFs of ?to_hstring@winrt@@YA?AUhstring@1@H@Z @ 0x180672D80
 * Callers:
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x1806726D4 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 * Callees:
 *     ??$hstring_convert@H@impl@winrt@@YA?AUhstring@1@H@Z @ 0x1806716A0 (--$hstring_convert@H@impl@winrt@@YA-AUhstring@1@H@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::to_hstring(
        struct winrt::impl::shared_hstring_header **a1,
        int a2)
{
  winrt::impl::hstring_convert<int>(a1, a2);
  return a1;
}
