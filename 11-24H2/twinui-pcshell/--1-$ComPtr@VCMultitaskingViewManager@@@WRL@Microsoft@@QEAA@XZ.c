/*
 * XREFs of ??1?$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D0BF0
 * Callers:
 *     _CMultitaskingViewManager_CreateInstance_::_1_::dtor$0 @ 0x1806D6940 (_CMultitaskingViewManager_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CMultitaskingViewManager>::~ComPtr<CMultitaskingViewManager>(
        volatile int **a1)
{
  return Microsoft::WRL::ComPtr<CMultitaskingViewManager>::InternalRelease(a1);
}
