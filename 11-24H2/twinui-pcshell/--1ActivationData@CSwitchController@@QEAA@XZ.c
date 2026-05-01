/*
 * XREFs of ??1ActivationData@CSwitchController@@QEAA@XZ @ 0x180217C38
 * Callers:
 *     _CSwitchController::SwitchToApp_::_1_::dtor$1 @ 0x1806CDD39 (_CSwitchController--SwitchToApp_--_1_--dtor$1.c)
 *     _CSwitchController::SwitchToAppByIdWithArguments_::_1_::dtor$1 @ 0x1806D78B6 (_CSwitchController--SwitchToAppByIdWithArguments_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSwitchController::ActivationData::~ActivationData(CSwitchController::ActivationData *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
}
