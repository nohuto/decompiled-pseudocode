/*
 * XREFs of ??1?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180227258
 * Callers:
 *     _CApplicationFrameService::EnsureFramePool_::_1_::dtor$2 @ 0x1806CDEF1 (_CApplicationFrameService--EnsureFramePool_--_1_--dtor$2.c)
 *     _CApplicationFrameService::SynchronizeFrameInformation_::_1_::dtor$0 @ 0x1806CEB28 (_CApplicationFrameService--SynchronizeFrameInformation_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CApplicationFrameService___IApplicationFrameManager___IApplicationFrame___Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short____&_unsigned_long_const_&__::_1_::dtor$2 @ 0x1806D816F (_Microsoft--WRL--Details--MakeAndInitialize_CApplicationFrameWrapper_CApplicationFrameWrapper_CA.c)
 *     _CApplicationFrameService::DestroyFrame_::_1_::dtor$0 @ 0x1806DC2C2 (_CApplicationFrameService--DestroyFrame_--_1_--dtor$0.c)
 *     _CApplicationFrameService::EndFrameRecovery_::_1_::dtor$2 @ 0x1806DD344 (_CApplicationFrameService--EndFrameRecovery_--_1_--dtor$2.c)
 *     _CApplicationFrameService::BeginFrameRecovery_::_1_::dtor$4 @ 0x1806DD6D1 (_CApplicationFrameService--BeginFrameRecovery_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::~ComPtr<CApplicationFrameWrapper>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(a1);
}
