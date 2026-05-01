/*
 * XREFs of _CApplicationViewManager::GetOwnerAppView_::_1_::dtor$0 @ 0x1803CC009
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::GetOwnerAppView_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CWin32ApplicationView>::~ComPtr<CWin32ApplicationView>(
           (__int64 *)(a2 + 56),
           (volatile int *)a2);
}
