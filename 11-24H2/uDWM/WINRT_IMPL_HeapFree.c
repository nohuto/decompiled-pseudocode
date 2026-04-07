/*
 * XREFs of WINRT_IMPL_HeapFree @ 0x18009C5C8
 * Callers:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009A53C (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uheap_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800A08D0 (-close@-$handle_type@Uheap_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
{
  return HeapFree(hHeap, dwFlags, lpMem);
}
