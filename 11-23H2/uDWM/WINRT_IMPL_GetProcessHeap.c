/*
 * XREFs of WINRT_IMPL_GetProcessHeap @ 0x18005D6B2
 * Callers:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x18001A268 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005C050 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uheap_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009DD40 (-close@-$handle_type@Uheap_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HANDLE __stdcall WINRT_IMPL_GetProcessHeap()
{
  return GetProcessHeap();
}
