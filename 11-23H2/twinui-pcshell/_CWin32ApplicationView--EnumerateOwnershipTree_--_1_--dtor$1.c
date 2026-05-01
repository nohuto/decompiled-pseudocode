/*
 * XREFs of _CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor$1 @ 0x1803CDC36
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 56));
}
