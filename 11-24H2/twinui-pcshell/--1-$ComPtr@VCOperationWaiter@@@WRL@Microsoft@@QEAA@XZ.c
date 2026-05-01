/*
 * XREFs of ??1?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@QEAA@XZ @ 0x18023A9A0
 * Callers:
 *     _CApplicationManager::_HandleCreation_EnsureApplicationView_::_1_::dtor$2 @ 0x1806CA4E8 (_CApplicationManager--_HandleCreation_EnsureApplicationView_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleCreation_EnsureApplicationView_::_1_::dtor$3 @ 0x1806CA4FA (_CApplicationManager--_HandleCreation_EnsureApplicationView_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<COperationWaiter>::~ComPtr<COperationWaiter>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(a1);
}
