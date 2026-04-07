/*
 * XREFs of ??4?$atomic@H@std@@QEAAHH@Z @ 0x18009E10C
 * Callers:
 *     ??4atomic_ref_count@impl@winrt@@QEAAII@Z @ 0x18009E128 (--4atomic_ref_count@impl@winrt@@QEAAII@Z.c)
 * Callees:
 *     ?store@?$_Atomic_storage@H$03@std@@QEAAXH@Z @ 0x1800A0BF0 (-store@-$_Atomic_storage@H$03@std@@QEAAXH@Z.c)
 */

__int64 std::atomic<int>::operator=()
{
  std::_Atomic_storage<int,4>::store();
  return 1LL;
}
