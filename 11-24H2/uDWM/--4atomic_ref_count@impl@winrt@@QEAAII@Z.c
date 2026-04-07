/*
 * XREFs of ??4atomic_ref_count@impl@winrt@@QEAAII@Z @ 0x18009E128
 * Callers:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800A0AD0 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 winrt::impl::atomic_ref_count::operator=()
{
  return std::atomic<int>::operator=();
}
