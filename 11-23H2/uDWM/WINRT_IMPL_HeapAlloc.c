/*
 * XREFs of WINRT_IMPL_HeapAlloc @ 0x18005D69A
 * Callers:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x18001A268 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __stdcall WINRT_IMPL_HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
{
  return HeapAlloc(hHeap, dwFlags, dwBytes);
}
