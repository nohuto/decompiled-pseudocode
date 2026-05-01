/*
 * XREFs of ??1?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CE568
 * Callers:
 *     _CMultitaskingViewHotKeyHandler_CreateInstance_::_1_::dtor$0 @ 0x1806D9E6D (_CMultitaskingViewHotKeyHandler_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CMultitaskingViewHotKeyHandler_CMultitaskingViewHotKeyHandler_IImmersiveWindowMessageService___&_IImmersiveMonitorManager___&_IMultitaskingViewTaskScheduler___&_IApplicationViewCollection___&__::_1_::dtor$2 @ 0x1806DE43D (_Microsoft--WRL--Details--MakeAndInitialize_CMultitaskingViewHotKeyHandler_CMultitaskingViewHotK.c)
 *     _PositionAdjustmentHistory::AddPositionAdjustment_::_1_::dtor$2 @ 0x1806F2032 (_PositionAdjustmentHistory--AddPositionAdjustment_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::~ComPtr<PositionAdjustmentHistory>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(a1);
}
